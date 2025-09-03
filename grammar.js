module.exports = grammar({
  name: "remi",

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.function_definition,
      $.variable_declaration,
      $.expression_statement
    ),

    function_definition: $ => seq(
      "spellcard",
      field("name", $.identifier),
      $.parameter_list,
      $.type,
      $.block
    ),

    variable_declaration: $ => seq(
      "eternal",
      $.identifier,
      "=",
      $.expression,
      ";"
    ),

    expression_statement: $ => seq($.expression, ";"),

    expression: $ => choice(
      $.string,
      $.number,
      $.identifier,
      seq($.identifier, $.argument_list)
    ),

    identifier: $ => /[a-zA-Z_]\w*/,
    type: $ => /i32|f32|bool|string|void/,

    parameter_list: $ => seq("(", optional(sepBy(",", $.identifier)), ")"),
    argument_list: $ => seq("(", optional(sepBy(",", $.expression)), ")"),

    string: $ => /"([^"\\]|\\.)*"/,
    number: $ => /\d+/,

    block: $ => seq("{", repeat($._statement), "}"),

    comment: $ => token(choice(
      seq("//", /.*/),
      seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
    )),
  },
});

function sepBy(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}
