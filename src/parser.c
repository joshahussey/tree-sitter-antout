#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_build_file_word = 1,
  anon_sym_LF = 2,
  aux_sym_target_token1 = 3,
  aux_sym_command_token1 = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_BUILDSUCCESSFUL = 7,
  anon_sym_BUILDFAILED = 8,
  anon_sym_LF_LF = 9,
  anon_sym_Totaltime_COLON = 10,
  sym__string = 11,
  anon_sym_echo = 12,
  anon_sym_exec = 13,
  anon_sym_mkdir = 14,
  anon_sym_copy = 15,
  anon_sym_unzip = 16,
  anon_sym_zip = 17,
  anon_sym_jar = 18,
  anon_sym_delete = 19,
  anon_sym_move = 20,
  sym_source_file = 21,
  sym_build_file = 22,
  sym_file_path = 23,
  sym__statement = 24,
  sym_target = 25,
  sym_command = 26,
  sym_description_string = 27,
  sym_comment = 28,
  sym_build_result = 29,
  sym__build_result_type = 30,
  sym_build_success = 31,
  sym_build_failed = 32,
  sym_failure_string = 33,
  sym_build_time = 34,
  sym_time_string = 35,
  sym_command_type = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_build_failed_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_build_file_word] = "build_file_word",
  [anon_sym_LF] = "\n",
  [aux_sym_target_token1] = "target_token1",
  [aux_sym_command_token1] = "command_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BUILDSUCCESSFUL] = "BUILD SUCCESSFUL",
  [anon_sym_BUILDFAILED] = "BUILD FAILED",
  [anon_sym_LF_LF] = "\n\n",
  [anon_sym_Totaltime_COLON] = "Total time: ",
  [sym__string] = "_string",
  [anon_sym_echo] = "echo",
  [anon_sym_exec] = "exec",
  [anon_sym_mkdir] = "mkdir",
  [anon_sym_copy] = "copy",
  [anon_sym_unzip] = "unzip",
  [anon_sym_zip] = "zip",
  [anon_sym_jar] = "jar",
  [anon_sym_delete] = "delete",
  [anon_sym_move] = "move",
  [sym_source_file] = "source_file",
  [sym_build_file] = "build_file",
  [sym_file_path] = "file_path",
  [sym__statement] = "_statement",
  [sym_target] = "target",
  [sym_command] = "command",
  [sym_description_string] = "description_string",
  [sym_comment] = "comment",
  [sym_build_result] = "build_result",
  [sym__build_result_type] = "_build_result_type",
  [sym_build_success] = "build_success",
  [sym_build_failed] = "build_failed",
  [sym_failure_string] = "failure_string",
  [sym_build_time] = "build_time",
  [sym_time_string] = "time_string",
  [sym_command_type] = "command_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_build_failed_repeat1] = "build_failed_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_build_file_word] = sym_build_file_word,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BUILDSUCCESSFUL] = anon_sym_BUILDSUCCESSFUL,
  [anon_sym_BUILDFAILED] = anon_sym_BUILDFAILED,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [anon_sym_Totaltime_COLON] = anon_sym_Totaltime_COLON,
  [sym__string] = sym__string,
  [anon_sym_echo] = anon_sym_echo,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_mkdir] = anon_sym_mkdir,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_unzip] = anon_sym_unzip,
  [anon_sym_zip] = anon_sym_zip,
  [anon_sym_jar] = anon_sym_jar,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_move] = anon_sym_move,
  [sym_source_file] = sym_source_file,
  [sym_build_file] = sym_build_file,
  [sym_file_path] = sym_file_path,
  [sym__statement] = sym__statement,
  [sym_target] = sym_target,
  [sym_command] = sym_command,
  [sym_description_string] = sym_description_string,
  [sym_comment] = sym_comment,
  [sym_build_result] = sym_build_result,
  [sym__build_result_type] = sym__build_result_type,
  [sym_build_success] = sym_build_success,
  [sym_build_failed] = sym_build_failed,
  [sym_failure_string] = sym_failure_string,
  [sym_build_time] = sym_build_time,
  [sym_time_string] = sym_time_string,
  [sym_command_type] = sym_command_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_build_failed_repeat1] = aux_sym_build_failed_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_build_file_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_target_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token1] = {
    .visible = false,
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
  [anon_sym_BUILDSUCCESSFUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUILDFAILED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Totaltime_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mkdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unzip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_build_file] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_description_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_build_result] = {
    .visible = true,
    .named = true,
  },
  [sym__build_result_type] = {
    .visible = false,
    .named = true,
  },
  [sym_build_success] = {
    .visible = true,
    .named = true,
  },
  [sym_build_failed] = {
    .visible = true,
    .named = true,
  },
  [sym_failure_string] = {
    .visible = true,
    .named = true,
  },
  [sym_build_time] = {
    .visible = true,
    .named = true,
  },
  [sym_time_string] = {
    .visible = true,
    .named = true,
  },
  [sym_command_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_build_failed_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'j') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'z') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(6);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'U') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'U') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'z') ADVANCE(70);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_build_file_word);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BUILDSUCCESSFUL);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BUILDSUCCESSFUL);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BUILDFAILED);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BUILDFAILED);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '^') ADVANCE(30);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Totaltime_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_mkdir);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_unzip);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_zip);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_jar);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_build_file_word] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BUILDSUCCESSFUL] = ACTIONS(1),
    [anon_sym_BUILDFAILED] = ACTIONS(1),
    [anon_sym_Totaltime_COLON] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_mkdir] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_unzip] = ACTIONS(1),
    [anon_sym_zip] = ACTIONS(1),
    [anon_sym_jar] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_build_file] = STATE(15),
    [sym_build_file_word] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(29), 1,
      sym_command_type,
    ACTIONS(5), 9,
      anon_sym_echo,
      anon_sym_exec,
      anon_sym_mkdir,
      anon_sym_copy,
      anon_sym_unzip,
      anon_sym_zip,
      anon_sym_jar,
      anon_sym_delete,
      anon_sym_move,
  [15] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym_build_result,
    STATE(13), 3,
      sym__build_result_type,
      sym_build_success,
      sym_build_failed,
    STATE(4), 4,
      sym__statement,
      sym_target,
      sym_command,
      aux_sym_source_file_repeat1,
  [33] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_build_result,
    STATE(13), 3,
      sym__build_result_type,
      sym_build_success,
      sym_build_failed,
    STATE(5), 4,
      sym__statement,
      sym_target,
      sym_command,
      aux_sym_source_file_repeat1,
  [51] = 2,
    ACTIONS(9), 1,
      anon_sym_LF,
    STATE(5), 4,
      sym__statement,
      sym_target,
      sym_command,
      aux_sym_source_file_repeat1,
  [61] = 3,
    ACTIONS(12), 1,
      anon_sym_LF_LF,
    ACTIONS(14), 1,
      sym__string,
    STATE(7), 2,
      sym_failure_string,
      aux_sym_build_failed_repeat1,
  [72] = 3,
    ACTIONS(16), 1,
      anon_sym_LF_LF,
    ACTIONS(18), 1,
      sym__string,
    STATE(7), 2,
      sym_failure_string,
      aux_sym_build_failed_repeat1,
  [83] = 4,
    ACTIONS(21), 1,
      aux_sym_target_token1,
    ACTIONS(23), 1,
      aux_sym_command_token1,
    ACTIONS(25), 1,
      anon_sym_BUILDSUCCESSFUL,
    ACTIONS(27), 1,
      anon_sym_BUILDFAILED,
  [96] = 2,
    ACTIONS(29), 1,
      sym__string,
    STATE(6), 2,
      sym_failure_string,
      aux_sym_build_failed_repeat1,
  [104] = 2,
    ACTIONS(31), 1,
      sym__string,
    STATE(26), 1,
      sym_time_string,
  [111] = 2,
    ACTIONS(33), 1,
      sym__string,
    STATE(34), 1,
      sym_description_string,
  [118] = 2,
    ACTIONS(21), 1,
      aux_sym_target_token1,
    ACTIONS(23), 1,
      aux_sym_command_token1,
  [125] = 2,
    ACTIONS(35), 1,
      anon_sym_Totaltime_COLON,
    STATE(18), 1,
      sym_build_time,
  [132] = 1,
    ACTIONS(37), 2,
      anon_sym_LF_LF,
      sym__string,
  [137] = 2,
    ACTIONS(39), 1,
      sym__string,
    STATE(3), 1,
      sym_comment,
  [144] = 2,
    ACTIONS(41), 1,
      sym__string,
    STATE(20), 1,
      sym_file_path,
  [151] = 1,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
  [155] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [159] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [163] = 1,
    ACTIONS(49), 1,
      sym__string,
  [167] = 1,
    ACTIONS(51), 1,
      anon_sym_LF,
  [171] = 1,
    ACTIONS(53), 1,
      anon_sym_Totaltime_COLON,
  [175] = 1,
    ACTIONS(55), 1,
      sym__string,
  [179] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [183] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [187] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [191] = 1,
    ACTIONS(63), 1,
      anon_sym_LF,
  [195] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
  [199] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [203] = 1,
    ACTIONS(69), 1,
      anon_sym_Totaltime_COLON,
  [207] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [211] = 1,
    ACTIONS(73), 1,
      anon_sym_LF,
  [215] = 1,
    ACTIONS(75), 1,
      anon_sym_LF,
  [219] = 1,
    ACTIONS(77), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 155,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 163,
  [SMALL_STATE(21)] = 167,
  [SMALL_STATE(22)] = 171,
  [SMALL_STATE(23)] = 175,
  [SMALL_STATE(24)] = 179,
  [SMALL_STATE(25)] = 183,
  [SMALL_STATE(26)] = 187,
  [SMALL_STATE(27)] = 191,
  [SMALL_STATE(28)] = 195,
  [SMALL_STATE(29)] = 199,
  [SMALL_STATE(30)] = 203,
  [SMALL_STATE(31)] = 207,
  [SMALL_STATE(32)] = 211,
  [SMALL_STATE(33)] = 215,
  [SMALL_STATE(34)] = 219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [12] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_failed_repeat1, 2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_failed_repeat1, 2), SHIFT_REPEAT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_failure_string, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_result, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_file, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_success, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_string, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_time, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_type, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_failed, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_string, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_antout(void) {
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
