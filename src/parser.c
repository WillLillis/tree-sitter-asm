#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_byte = 6,
  anon_sym_word = 7,
  anon_sym_dword = 8,
  anon_sym_qword = 9,
  anon_sym_ptr = 10,
  anon_sym_LBRACK = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_RBRACK = 14,
  anon_sym_STAR = 15,
  anon_sym_rel = 16,
  sym_int = 17,
  sym_float = 18,
  sym_string = 19,
  sym_meta_ident = 20,
  sym__ident = 21,
  sym_word = 22,
  sym__reg = 23,
  sym_line_comment = 24,
  sym_block_comment = 25,
  sym_program = 26,
  sym__item = 27,
  sym_meta = 28,
  sym_label = 29,
  sym_instruction = 30,
  sym__expr = 31,
  sym_ptr = 32,
  sym_reg = 33,
  sym_ident = 34,
  aux_sym_program_repeat1 = 35,
  aux_sym_program_repeat2 = 36,
  aux_sym_meta_repeat1 = 37,
  aux_sym_meta_repeat2 = 38,
  aux_sym_meta_repeat3 = 39,
  aux_sym_instruction_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_rel] = "rel",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_meta_repeat3] = "meta_repeat3",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_rel] = anon_sym_rel,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_meta_repeat3] = aux_sym_meta_repeat3,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(83);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'q') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(83);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(83);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(83);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(83);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(83);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'q') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(83);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(79);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 't') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 't') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
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
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym__reg] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(56),
    [sym__item] = STATE(32),
    [sym_meta] = STATE(32),
    [sym_label] = STATE(32),
    [sym_instruction] = STATE(32),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_meta_ident] = ACTIONS(7),
    [sym__ident] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [sym__reg] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expr] = STATE(21),
    [sym_ptr] = STATE(21),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_meta_ident] = ACTIONS(33),
    [sym__ident] = ACTIONS(9),
    [sym_word] = ACTIONS(13),
    [sym__reg] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expr] = STATE(35),
    [sym_ptr] = STATE(35),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_meta_ident] = ACTIONS(33),
    [sym__ident] = ACTIONS(9),
    [sym_word] = ACTIONS(13),
    [sym__reg] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expr] = STATE(35),
    [sym_ptr] = STATE(35),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_meta_ident] = ACTIONS(33),
    [sym__ident] = ACTIONS(9),
    [sym_word] = ACTIONS(13),
    [sym__reg] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(33), 1,
      sym_meta_ident,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(39), 1,
      sym_string,
    STATE(14), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      sym_word,
      sym__reg,
    STATE(35), 3,
      sym__expr,
      sym_ptr,
      sym_ident,
    ACTIONS(21), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [47] = 11,
    ACTIONS(7), 1,
      sym_meta_ident,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(11), 1,
      sym_word,
    ACTIONS(13), 1,
      sym__reg,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(63), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [85] = 11,
    ACTIONS(7), 1,
      sym_meta_ident,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(11), 1,
      sym_word,
    ACTIONS(13), 1,
      sym__reg,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(63), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [123] = 10,
    ACTIONS(7), 1,
      sym_meta_ident,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(11), 1,
      sym_word,
    ACTIONS(13), 1,
      sym__reg,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(63), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [158] = 11,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(33), 1,
      sym_meta_ident,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      sym_string,
    STATE(14), 1,
      sym_reg,
    STATE(51), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      sym_word,
      sym__reg,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [195] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [210] = 5,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_program_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(64), 4,
      sym_meta_ident,
      sym__ident,
      sym_word,
      sym__reg,
  [230] = 7,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(33), 1,
      sym_meta_ident,
    ACTIONS(66), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(65), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      sym_word,
      sym__reg,
  [254] = 7,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(33), 1,
      sym_meta_ident,
    ACTIONS(68), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(59), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      sym_word,
      sym__reg,
  [278] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [291] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [304] = 6,
    ACTIONS(9), 1,
      sym__ident,
    ACTIONS(33), 1,
      sym_meta_ident,
    STATE(14), 1,
      sym_reg,
    STATE(57), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      sym_word,
      sym__reg,
  [325] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [337] = 4,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_meta_repeat3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [352] = 4,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [367] = 3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [380] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [395] = 4,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_meta_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [410] = 5,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(30), 1,
      aux_sym_program_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [427] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_repeat3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [442] = 4,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_meta_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [457] = 4,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_meta_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [472] = 4,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_meta_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [487] = 4,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_meta_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [502] = 4,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_repeat3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [517] = 5,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(30), 1,
      aux_sym_program_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [534] = 4,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_meta_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [549] = 5,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(23), 1,
      aux_sym_program_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [566] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [581] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [591] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [601] = 4,
    ACTIONS(13), 1,
      sym__reg,
    ACTIONS(123), 1,
      sym_word,
    STATE(53), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [615] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [625] = 3,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [637] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [647] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [657] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [667] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [677] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [687] = 3,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [699] = 3,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [711] = 4,
    ACTIONS(13), 1,
      sym__reg,
    ACTIONS(123), 1,
      sym_word,
    STATE(44), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [725] = 4,
    ACTIONS(13), 1,
      sym__reg,
    ACTIONS(123), 1,
      sym_word,
    STATE(64), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [739] = 4,
    ACTIONS(13), 1,
      sym__reg,
    ACTIONS(123), 1,
      sym_word,
    STATE(38), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [753] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [762] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [771] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [780] = 2,
    ACTIONS(145), 1,
      sym_int,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [788] = 2,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [796] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [804] = 2,
    ACTIONS(151), 1,
      anon_sym_ptr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [812] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [820] = 2,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [828] = 2,
    ACTIONS(157), 1,
      anon_sym_rel,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [836] = 2,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [844] = 2,
    ACTIONS(159), 1,
      sym_int,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [852] = 2,
    ACTIONS(161), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [860] = 2,
    ACTIONS(163), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [868] = 2,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [876] = 2,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [884] = 2,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [892] = 2,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 291,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 325,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 352,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 457,
  [SMALL_STATE(27)] = 472,
  [SMALL_STATE(28)] = 487,
  [SMALL_STATE(29)] = 502,
  [SMALL_STATE(30)] = 517,
  [SMALL_STATE(31)] = 534,
  [SMALL_STATE(32)] = 549,
  [SMALL_STATE(33)] = 566,
  [SMALL_STATE(34)] = 581,
  [SMALL_STATE(35)] = 591,
  [SMALL_STATE(36)] = 601,
  [SMALL_STATE(37)] = 615,
  [SMALL_STATE(38)] = 625,
  [SMALL_STATE(39)] = 637,
  [SMALL_STATE(40)] = 647,
  [SMALL_STATE(41)] = 657,
  [SMALL_STATE(42)] = 667,
  [SMALL_STATE(43)] = 677,
  [SMALL_STATE(44)] = 687,
  [SMALL_STATE(45)] = 699,
  [SMALL_STATE(46)] = 711,
  [SMALL_STATE(47)] = 725,
  [SMALL_STATE(48)] = 739,
  [SMALL_STATE(49)] = 753,
  [SMALL_STATE(50)] = 762,
  [SMALL_STATE(51)] = 771,
  [SMALL_STATE(52)] = 780,
  [SMALL_STATE(53)] = 788,
  [SMALL_STATE(54)] = 796,
  [SMALL_STATE(55)] = 804,
  [SMALL_STATE(56)] = 812,
  [SMALL_STATE(57)] = 820,
  [SMALL_STATE(58)] = 828,
  [SMALL_STATE(59)] = 836,
  [SMALL_STATE(60)] = 844,
  [SMALL_STATE(61)] = 852,
  [SMALL_STATE(62)] = 860,
  [SMALL_STATE(63)] = 868,
  [SMALL_STATE(64)] = 876,
  [SMALL_STATE(65)] = 884,
  [SMALL_STATE(66)] = 892,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2), SHIFT_REPEAT(62),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
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
