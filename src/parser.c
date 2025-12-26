#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_let = 1,
  anon_sym_agent = 2,
  anon_sym_tool = 3,
  anon_sym_struct = 4,
  anon_sym_fn = 5,
  anon_sym_if = 6,
  anon_sym_else = 7,
  anon_sym_return = 8,
  anon_sym_use = 9,
  anon_sym_output = 10,
  anon_sym_for = 11,
  anon_sym_in = 12,
  anon_sym_while = 13,
  anon_sym_try = 14,
  anon_sym_catch = 15,
  anon_sym_break = 16,
  anon_sym_continue = 17,
  anon_sym_import = 18,
  anon_sym_from = 19,
  anon_sym_string = 20,
  anon_sym_number = 21,
  anon_sym_boolean = 22,
  anon_sym_object = 23,
  anon_sym_array = 24,
  anon_sym_any = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  sym_null = 28,
  aux_sym_string_token1 = 29,
  aux_sym_string_token2 = 30,
  sym_number = 31,
  sym_method_call = 32,
  sym_function_call = 33,
  sym_identifier = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_EQ_GT = 36,
  anon_sym_DOT_DOT = 37,
  anon_sym_EQ_EQ = 38,
  anon_sym_BANG_EQ = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_AMP_AMP = 42,
  anon_sym_PIPE_PIPE = 43,
  anon_sym_LBRACK_RBRACK = 44,
  anon_sym_PLUS = 45,
  anon_sym_DASH = 46,
  anon_sym_STAR = 47,
  anon_sym_SLASH = 48,
  anon_sym_PERCENT = 49,
  anon_sym_EQ = 50,
  anon_sym_LT = 51,
  anon_sym_GT = 52,
  anon_sym_BANG = 53,
  anon_sym_DOT = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  anon_sym_LBRACE = 57,
  anon_sym_RBRACE = 58,
  anon_sym_LBRACK = 59,
  anon_sym_RBRACK = 60,
  anon_sym_COMMA = 61,
  anon_sym_COLON = 62,
  anon_sym_SEMI = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym__token = 66,
  sym_keyword = 67,
  sym_type_keyword = 68,
  sym_boolean = 69,
  sym_string = 70,
  sym_operator = 71,
  sym_punctuation = 72,
  aux_sym_source_file_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_agent] = "agent",
  [anon_sym_tool] = "tool",
  [anon_sym_struct] = "struct",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_return] = "return",
  [anon_sym_use] = "use",
  [anon_sym_output] = "output",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_string] = "string",
  [anon_sym_number] = "number",
  [anon_sym_boolean] = "boolean",
  [anon_sym_object] = "object",
  [anon_sym_array] = "array",
  [anon_sym_any] = "any",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [sym_method_call] = "method_call",
  [sym_function_call] = "function_call",
  [sym_identifier] = "identifier",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym_keyword] = "keyword",
  [sym_type_keyword] = "type_keyword",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_agent] = anon_sym_agent,
  [anon_sym_tool] = anon_sym_tool,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [sym_method_call] = sym_method_call,
  [sym_function_call] = sym_function_call,
  [sym_identifier] = sym_identifier,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym_keyword] = sym_keyword,
  [sym_type_keyword] = sym_type_keyword,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_agent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_SEMI] = {
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
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 150,
        '"', 1,
        '%', 146,
        '&', 6,
        '(', 152,
        ')', 153,
        '*', 144,
        '+', 142,
        ',', 158,
        '-', 143,
        '.', 151,
        '/', 145,
        ':', 159,
        ';', 160,
        '<', 148,
        '=', 147,
        '>', 149,
        '[', 156,
        ']', 157,
        'a', 74,
        'b', 96,
        'c', 50,
        'e', 87,
        'f', 53,
        'i', 72,
        'l', 67,
        'n', 124,
        'o', 54,
        'r', 69,
        's', 123,
        't', 101,
        'u', 110,
        'w', 75,
        '{', 154,
        '|', 8,
        '}', 155,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(139);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '|') ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(5);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(2);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_agent);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_try);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_method_call);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_function_call);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'j') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'k') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(141);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_agent] = ACTIONS(1),
    [anon_sym_tool] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_method_call] = ACTIONS(1),
    [sym_function_call] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__token] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_type_keyword] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_string] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_punctuation] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_agent] = ACTIONS(7),
    [anon_sym_tool] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_in] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_try] = ACTIONS(7),
    [anon_sym_catch] = ACTIONS(7),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_continue] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_number] = ACTIONS(9),
    [anon_sym_boolean] = ACTIONS(9),
    [anon_sym_object] = ACTIONS(9),
    [anon_sym_array] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(13),
    [aux_sym_string_token1] = ACTIONS(15),
    [aux_sym_string_token2] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_method_call] = ACTIONS(19),
    [sym_function_call] = ACTIONS(19),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_type_keyword] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_string] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_agent] = ACTIONS(7),
    [anon_sym_tool] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_in] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_try] = ACTIONS(7),
    [anon_sym_catch] = ACTIONS(7),
    [anon_sym_break] = ACTIONS(7),
    [anon_sym_continue] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_from] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_number] = ACTIONS(9),
    [anon_sym_boolean] = ACTIONS(9),
    [anon_sym_object] = ACTIONS(9),
    [anon_sym_array] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(31),
    [aux_sym_string_token1] = ACTIONS(15),
    [aux_sym_string_token2] = ACTIONS(17),
    [sym_number] = ACTIONS(33),
    [sym_method_call] = ACTIONS(33),
    [sym_function_call] = ACTIONS(33),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_comment] = ACTIONS(33),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_type_keyword] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_string] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_agent] = ACTIONS(37),
    [anon_sym_tool] = ACTIONS(37),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_fn] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(37),
    [anon_sym_else] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_use] = ACTIONS(37),
    [anon_sym_output] = ACTIONS(37),
    [anon_sym_for] = ACTIONS(37),
    [anon_sym_in] = ACTIONS(37),
    [anon_sym_while] = ACTIONS(37),
    [anon_sym_try] = ACTIONS(37),
    [anon_sym_catch] = ACTIONS(37),
    [anon_sym_break] = ACTIONS(37),
    [anon_sym_continue] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(37),
    [anon_sym_from] = ACTIONS(37),
    [anon_sym_string] = ACTIONS(40),
    [anon_sym_number] = ACTIONS(40),
    [anon_sym_boolean] = ACTIONS(40),
    [anon_sym_object] = ACTIONS(40),
    [anon_sym_array] = ACTIONS(40),
    [anon_sym_any] = ACTIONS(40),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [sym_null] = ACTIONS(46),
    [aux_sym_string_token1] = ACTIONS(49),
    [aux_sym_string_token2] = ACTIONS(52),
    [sym_number] = ACTIONS(55),
    [sym_method_call] = ACTIONS(55),
    [sym_function_call] = ACTIONS(55),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_DASH_GT] = ACTIONS(58),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_EQ_EQ] = ACTIONS(58),
    [anon_sym_BANG_EQ] = ACTIONS(58),
    [anon_sym_LT_EQ] = ACTIONS(58),
    [anon_sym_GT_EQ] = ACTIONS(58),
    [anon_sym_AMP_AMP] = ACTIONS(58),
    [anon_sym_PIPE_PIPE] = ACTIONS(58),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_SEMI] = ACTIONS(64),
    [sym_comment] = ACTIONS(55),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_let] = ACTIONS(72),
    [anon_sym_agent] = ACTIONS(72),
    [anon_sym_tool] = ACTIONS(72),
    [anon_sym_struct] = ACTIONS(72),
    [anon_sym_fn] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(72),
    [anon_sym_else] = ACTIONS(72),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_use] = ACTIONS(72),
    [anon_sym_output] = ACTIONS(72),
    [anon_sym_for] = ACTIONS(72),
    [anon_sym_in] = ACTIONS(72),
    [anon_sym_while] = ACTIONS(72),
    [anon_sym_try] = ACTIONS(72),
    [anon_sym_catch] = ACTIONS(72),
    [anon_sym_break] = ACTIONS(72),
    [anon_sym_continue] = ACTIONS(72),
    [anon_sym_import] = ACTIONS(72),
    [anon_sym_from] = ACTIONS(72),
    [anon_sym_string] = ACTIONS(72),
    [anon_sym_number] = ACTIONS(72),
    [anon_sym_boolean] = ACTIONS(72),
    [anon_sym_object] = ACTIONS(72),
    [anon_sym_array] = ACTIONS(72),
    [anon_sym_any] = ACTIONS(72),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [sym_null] = ACTIONS(72),
    [aux_sym_string_token1] = ACTIONS(70),
    [aux_sym_string_token2] = ACTIONS(72),
    [sym_number] = ACTIONS(70),
    [sym_method_call] = ACTIONS(70),
    [sym_function_call] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [anon_sym_DASH_GT] = ACTIONS(70),
    [anon_sym_EQ_GT] = ACTIONS(70),
    [anon_sym_DOT_DOT] = ACTIONS(70),
    [anon_sym_EQ_EQ] = ACTIONS(70),
    [anon_sym_BANG_EQ] = ACTIONS(70),
    [anon_sym_LT_EQ] = ACTIONS(70),
    [anon_sym_GT_EQ] = ACTIONS(70),
    [anon_sym_AMP_AMP] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(70),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [anon_sym_DOT] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(70),
    [sym_comment] = ACTIONS(70),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_let] = ACTIONS(76),
    [anon_sym_agent] = ACTIONS(76),
    [anon_sym_tool] = ACTIONS(76),
    [anon_sym_struct] = ACTIONS(76),
    [anon_sym_fn] = ACTIONS(76),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_else] = ACTIONS(76),
    [anon_sym_return] = ACTIONS(76),
    [anon_sym_use] = ACTIONS(76),
    [anon_sym_output] = ACTIONS(76),
    [anon_sym_for] = ACTIONS(76),
    [anon_sym_in] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(76),
    [anon_sym_try] = ACTIONS(76),
    [anon_sym_catch] = ACTIONS(76),
    [anon_sym_break] = ACTIONS(76),
    [anon_sym_continue] = ACTIONS(76),
    [anon_sym_import] = ACTIONS(76),
    [anon_sym_from] = ACTIONS(76),
    [anon_sym_string] = ACTIONS(76),
    [anon_sym_number] = ACTIONS(76),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_object] = ACTIONS(76),
    [anon_sym_array] = ACTIONS(76),
    [anon_sym_any] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(76),
    [sym_null] = ACTIONS(76),
    [aux_sym_string_token1] = ACTIONS(74),
    [aux_sym_string_token2] = ACTIONS(76),
    [sym_number] = ACTIONS(74),
    [sym_method_call] = ACTIONS(74),
    [sym_function_call] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [anon_sym_DASH_GT] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(74),
    [anon_sym_DOT_DOT] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(74),
    [anon_sym_BANG_EQ] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(74),
    [anon_sym_AMP_AMP] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(74),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [sym_comment] = ACTIONS(74),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_agent] = ACTIONS(80),
    [anon_sym_tool] = ACTIONS(80),
    [anon_sym_struct] = ACTIONS(80),
    [anon_sym_fn] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_else] = ACTIONS(80),
    [anon_sym_return] = ACTIONS(80),
    [anon_sym_use] = ACTIONS(80),
    [anon_sym_output] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(80),
    [anon_sym_in] = ACTIONS(80),
    [anon_sym_while] = ACTIONS(80),
    [anon_sym_try] = ACTIONS(80),
    [anon_sym_catch] = ACTIONS(80),
    [anon_sym_break] = ACTIONS(80),
    [anon_sym_continue] = ACTIONS(80),
    [anon_sym_import] = ACTIONS(80),
    [anon_sym_from] = ACTIONS(80),
    [anon_sym_string] = ACTIONS(80),
    [anon_sym_number] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(80),
    [anon_sym_object] = ACTIONS(80),
    [anon_sym_array] = ACTIONS(80),
    [anon_sym_any] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [sym_null] = ACTIONS(80),
    [aux_sym_string_token1] = ACTIONS(78),
    [aux_sym_string_token2] = ACTIONS(80),
    [sym_number] = ACTIONS(78),
    [sym_method_call] = ACTIONS(78),
    [sym_function_call] = ACTIONS(78),
    [sym_identifier] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(78),
    [anon_sym_PIPE_PIPE] = ACTIONS(78),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [sym_comment] = ACTIONS(78),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym_agent] = ACTIONS(84),
    [anon_sym_tool] = ACTIONS(84),
    [anon_sym_struct] = ACTIONS(84),
    [anon_sym_fn] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(84),
    [anon_sym_else] = ACTIONS(84),
    [anon_sym_return] = ACTIONS(84),
    [anon_sym_use] = ACTIONS(84),
    [anon_sym_output] = ACTIONS(84),
    [anon_sym_for] = ACTIONS(84),
    [anon_sym_in] = ACTIONS(84),
    [anon_sym_while] = ACTIONS(84),
    [anon_sym_try] = ACTIONS(84),
    [anon_sym_catch] = ACTIONS(84),
    [anon_sym_break] = ACTIONS(84),
    [anon_sym_continue] = ACTIONS(84),
    [anon_sym_import] = ACTIONS(84),
    [anon_sym_from] = ACTIONS(84),
    [anon_sym_string] = ACTIONS(84),
    [anon_sym_number] = ACTIONS(84),
    [anon_sym_boolean] = ACTIONS(84),
    [anon_sym_object] = ACTIONS(84),
    [anon_sym_array] = ACTIONS(84),
    [anon_sym_any] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [sym_null] = ACTIONS(84),
    [aux_sym_string_token1] = ACTIONS(82),
    [aux_sym_string_token2] = ACTIONS(84),
    [sym_number] = ACTIONS(82),
    [sym_method_call] = ACTIONS(82),
    [sym_function_call] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_DOT_DOT] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [anon_sym_BANG_EQ] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [sym_comment] = ACTIONS(82),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_let] = ACTIONS(88),
    [anon_sym_agent] = ACTIONS(88),
    [anon_sym_tool] = ACTIONS(88),
    [anon_sym_struct] = ACTIONS(88),
    [anon_sym_fn] = ACTIONS(88),
    [anon_sym_if] = ACTIONS(88),
    [anon_sym_else] = ACTIONS(88),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_use] = ACTIONS(88),
    [anon_sym_output] = ACTIONS(88),
    [anon_sym_for] = ACTIONS(88),
    [anon_sym_in] = ACTIONS(88),
    [anon_sym_while] = ACTIONS(88),
    [anon_sym_try] = ACTIONS(88),
    [anon_sym_catch] = ACTIONS(88),
    [anon_sym_break] = ACTIONS(88),
    [anon_sym_continue] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_string] = ACTIONS(88),
    [anon_sym_number] = ACTIONS(88),
    [anon_sym_boolean] = ACTIONS(88),
    [anon_sym_object] = ACTIONS(88),
    [anon_sym_array] = ACTIONS(88),
    [anon_sym_any] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [sym_null] = ACTIONS(88),
    [aux_sym_string_token1] = ACTIONS(86),
    [aux_sym_string_token2] = ACTIONS(88),
    [sym_number] = ACTIONS(86),
    [sym_method_call] = ACTIONS(86),
    [sym_function_call] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_DOT_DOT] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP_AMP] = ACTIONS(86),
    [anon_sym_PIPE_PIPE] = ACTIONS(86),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(86),
    [sym_comment] = ACTIONS(86),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_let] = ACTIONS(92),
    [anon_sym_agent] = ACTIONS(92),
    [anon_sym_tool] = ACTIONS(92),
    [anon_sym_struct] = ACTIONS(92),
    [anon_sym_fn] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(92),
    [anon_sym_else] = ACTIONS(92),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_use] = ACTIONS(92),
    [anon_sym_output] = ACTIONS(92),
    [anon_sym_for] = ACTIONS(92),
    [anon_sym_in] = ACTIONS(92),
    [anon_sym_while] = ACTIONS(92),
    [anon_sym_try] = ACTIONS(92),
    [anon_sym_catch] = ACTIONS(92),
    [anon_sym_break] = ACTIONS(92),
    [anon_sym_continue] = ACTIONS(92),
    [anon_sym_import] = ACTIONS(92),
    [anon_sym_from] = ACTIONS(92),
    [anon_sym_string] = ACTIONS(92),
    [anon_sym_number] = ACTIONS(92),
    [anon_sym_boolean] = ACTIONS(92),
    [anon_sym_object] = ACTIONS(92),
    [anon_sym_array] = ACTIONS(92),
    [anon_sym_any] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [sym_null] = ACTIONS(92),
    [aux_sym_string_token1] = ACTIONS(90),
    [aux_sym_string_token2] = ACTIONS(92),
    [sym_number] = ACTIONS(90),
    [sym_method_call] = ACTIONS(90),
    [sym_function_call] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_DOT_DOT] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(90),
    [anon_sym_PIPE_PIPE] = ACTIONS(90),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(90),
    [sym_comment] = ACTIONS(90),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_keyword, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_keyword, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gent(void) {
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
