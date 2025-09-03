#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_spellcard = 1,
  anon_sym_eternal = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  sym_identifier = 5,
  sym_type = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  sym_string = 10,
  sym_number = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym__statement = 16,
  sym_function_definition = 17,
  sym_variable_declaration = 18,
  sym_expression_statement = 19,
  sym_expression = 20,
  sym_parameter_list = 21,
  sym_argument_list = 22,
  sym_block = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_parameter_list_repeat1 = 25,
  aux_sym_argument_list_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spellcard] = "spellcard",
  [anon_sym_eternal] = "eternal",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_type] = "type",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_variable_declaration] = "variable_declaration",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
  [sym_parameter_list] = "parameter_list",
  [sym_argument_list] = "argument_list",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_spellcard] = anon_sym_spellcard,
  [anon_sym_eternal] = anon_sym_eternal,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_type] = sym_type,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_function_definition] = sym_function_definition,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_expression_statement] = sym_expression_statement,
  [sym_expression] = sym_expression,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument_list] = sym_argument_list,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_spellcard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eternal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 3,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 10,
  [16] = 12,
  [17] = 14,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 44,
  [51] = 48,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 45,
  [58] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(45);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_spellcard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_eternal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_spellcard] = ACTIONS(1),
    [anon_sym_eternal] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__statement] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_variable_declaration] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_expression] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_spellcard] = ACTIONS(7),
    [anon_sym_eternal] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_spellcard,
    ACTIONS(20), 1,
      anon_sym_eternal,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(51), 1,
      sym_expression,
    ACTIONS(26), 2,
      sym_string,
      sym_number,
    STATE(2), 5,
      sym__statement,
      sym_function_definition,
      sym_variable_declaration,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
  [30] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_spellcard,
    ACTIONS(31), 1,
      anon_sym_eternal,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(5), 5,
      sym__statement,
      sym_function_definition,
      sym_variable_declaration,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
  [60] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_spellcard,
    ACTIONS(31), 1,
      anon_sym_eternal,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(3), 5,
      sym__statement,
      sym_function_definition,
      sym_variable_declaration,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
  [90] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_spellcard,
    ACTIONS(40), 1,
      anon_sym_eternal,
    STATE(48), 1,
      sym_expression,
    ACTIONS(26), 2,
      sym_string,
      sym_number,
    STATE(5), 5,
      sym__statement,
      sym_function_definition,
      sym_variable_declaration,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
  [120] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_spellcard,
    ACTIONS(31), 1,
      anon_sym_eternal,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(5), 5,
      sym__statement,
      sym_function_definition,
      sym_variable_declaration,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
  [150] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_spellcard,
    ACTIONS(31), 1,
      anon_sym_eternal,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(6), 5,
      sym__statement,
      sym_function_definition,
      sym_variable_declaration,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
  [180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_spellcard,
    ACTIONS(9), 1,
      anon_sym_eternal,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(2), 5,
      sym__statement,
      sym_function_definition,
      sym_variable_declaration,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_string,
      sym_number,
    ACTIONS(51), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
  [224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_string,
      sym_number,
    ACTIONS(55), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
  [238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      sym_string,
      sym_number,
      anon_sym_RBRACE,
    ACTIONS(51), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
    ACTIONS(59), 3,
      sym_string,
      sym_number,
      anon_sym_RBRACE,
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
    ACTIONS(63), 3,
      sym_string,
      sym_number,
      anon_sym_RBRACE,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
    ACTIONS(67), 3,
      sym_string,
      sym_number,
      anon_sym_RBRACE,
  [294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      sym_string,
      sym_number,
      anon_sym_RBRACE,
    ACTIONS(55), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      sym_string,
      sym_number,
  [322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      sym_string,
      sym_number,
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_spellcard,
      anon_sym_eternal,
      sym_identifier,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      sym_string,
      sym_number,
  [350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
  [367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_argument_list,
    ACTIONS(73), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(36), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
  [396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(50), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
  [410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(44), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
  [446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
  [499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameter_list_repeat1,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_parameter_list,
  [583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_parameter_list,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_type,
  [627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SEMI,
  [634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_type,
  [648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_type,
  [655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SEMI,
  [662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_type,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SEMI,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SEMI,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_identifier,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_type,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_identifier,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_EQ,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_identifier,
  [725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 252,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 280,
  [SMALL_STATE(15)] = 294,
  [SMALL_STATE(16)] = 308,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 336,
  [SMALL_STATE(19)] = 350,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 433,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 477,
  [SMALL_STATE(30)] = 486,
  [SMALL_STATE(31)] = 499,
  [SMALL_STATE(32)] = 512,
  [SMALL_STATE(33)] = 525,
  [SMALL_STATE(34)] = 534,
  [SMALL_STATE(35)] = 547,
  [SMALL_STATE(36)] = 557,
  [SMALL_STATE(37)] = 565,
  [SMALL_STATE(38)] = 573,
  [SMALL_STATE(39)] = 583,
  [SMALL_STATE(40)] = 593,
  [SMALL_STATE(41)] = 603,
  [SMALL_STATE(42)] = 613,
  [SMALL_STATE(43)] = 620,
  [SMALL_STATE(44)] = 627,
  [SMALL_STATE(45)] = 634,
  [SMALL_STATE(46)] = 641,
  [SMALL_STATE(47)] = 648,
  [SMALL_STATE(48)] = 655,
  [SMALL_STATE(49)] = 662,
  [SMALL_STATE(50)] = 669,
  [SMALL_STATE(51)] = 676,
  [SMALL_STATE(52)] = 683,
  [SMALL_STATE(53)] = 690,
  [SMALL_STATE(54)] = 697,
  [SMALL_STATE(55)] = 704,
  [SMALL_STATE(56)] = 711,
  [SMALL_STATE(57)] = 718,
  [SMALL_STATE(58)] = 725,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(54),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_remi(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
