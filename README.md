# Remi Tree Sitter

<div align="center">
  <img src="https://github.com/UnknownRori/remi-lang/blob/main/docs/mascot.gif?raw=true" align="center" />
</div>
<div align="center">
  <span>Art drawn by UnknownRori</span>
</div>

> [!WARNING]
> Don't expect much on this project.

## Introduction

Remi-lang is a esoteric programming language that inspired by the charismatic vampire of the Scarlet devil Remilia Scarlet from [Touhou Project](https://en.wikipedia.org/wiki/Touhou_Project). This programming language can be compiled or intepreted although the available feature might be vary.

## Quickstart

```lua
vim.cmd [[ au BufNewFile,BufRead *.remi setfiletype remi ]]

vim.filetype.add {
  extension = {
    remi = 'remi',
  },
}

local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.remi = {
  install_info = {
    url = 'https://github.com/UnknownRori/remi-tree-sitter',
    files = { 'src/parser.c'},
    -- optional entries:
    branch = 'main',
  },
  filetype = 'remi',
}

```
