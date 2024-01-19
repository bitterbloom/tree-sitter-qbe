#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 3

enum {
  sym_line_comment = 1,
  anon_sym_w = 2,
  anon_sym_l = 3,
  anon_sym_s = 4,
  anon_sym_d = 5,
  anon_sym_b = 6,
  anon_sym_h = 7,
  sym_number = 8,
  sym_ident = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_DASH = 11,
  anon_sym_s_ = 12,
  anon_sym_d_ = 13,
  anon_sym_thread = 14,
  aux_sym_secname_token1 = 15,
  anon_sym_export = 16,
  anon_sym_section = 17,
  anon_sym_COLON = 18,
  anon_sym_type = 19,
  anon_sym_EQ = 20,
  anon_sym_align = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACE = 24,
  anon_sym_PLUS = 25,
  anon_sym_data = 26,
  anon_sym_z = 27,
  anon_sym_sb = 28,
  anon_sym_ub = 29,
  anon_sym_sh = 30,
  anon_sym_uh = 31,
  anon_sym_PERCENT = 32,
  anon_sym_env = 33,
  anon_sym_DOT_DOT_DOT = 34,
  anon_sym_AT = 35,
  anon_sym_phi = 36,
  anon_sym_neg = 37,
  aux_sym_inst_one_name_token1 = 38,
  aux_sym_inst_one_name_token2 = 39,
  anon_sym_truncd = 40,
  aux_sym_inst_one_name_token3 = 41,
  anon_sym_cast = 42,
  anon_sym_copy = 43,
  anon_sym_vaarg = 44,
  anon_sym_add = 45,
  anon_sym_sub = 46,
  anon_sym_div = 47,
  anon_sym_mul = 48,
  anon_sym_udiv = 49,
  anon_sym_rem = 50,
  anon_sym_urem = 51,
  anon_sym_or = 52,
  anon_sym_zor = 53,
  anon_sym_and = 54,
  anon_sym_sar = 55,
  anon_sym_shr = 56,
  anon_sym_shl = 57,
  aux_sym_inst_two_name_token1 = 58,
  aux_sym_inst_two_name_token2 = 59,
  sym_inst_three_name = 60,
  sym_store_name = 61,
  anon_sym_vastart = 62,
  anon_sym_call = 63,
  anon_sym_LPAREN = 64,
  anon_sym_RPAREN = 65,
  anon_sym_jmp = 66,
  anon_sym_jnz = 67,
  anon_sym_ret = 68,
  anon_sym_hlt = 69,
  anon_sym_function = 70,
  sym_source_file = 71,
  sym_basety = 72,
  sym_extty = 73,
  sym_global = 74,
  sym_const = 75,
  sym_dynconst = 76,
  sym_val = 77,
  sym_secname = 78,
  sym_secflags = 79,
  sym_linkage = 80,
  sym_aggregate = 81,
  sym_string = 82,
  sym_dataitem = 83,
  sym_datadef = 84,
  sym_subwty = 85,
  sym_abity = 86,
  sym_temp = 87,
  sym_param = 88,
  sym_label = 89,
  sym_phi = 90,
  sym_inst_arg = 91,
  sym_inst_one_name = 92,
  sym_inst_one = 93,
  sym_inst_two_name = 94,
  sym_inst_two = 95,
  sym_inst_three = 96,
  sym_store = 97,
  sym_vastart = 98,
  sym_call = 99,
  sym_inst = 100,
  sym_jump = 101,
  sym_block = 102,
  sym_funcdef = 103,
  sym_def = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_datadef_repeat1 = 106,
  aux_sym_datadef_repeat2 = 107,
  aux_sym_phi_repeat1 = 108,
  aux_sym_call_repeat1 = 109,
  aux_sym_block_repeat1 = 110,
  aux_sym_block_repeat2 = 111,
  aux_sym_funcdef_repeat1 = 112,
  aux_sym_def_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [anon_sym_w] = "w",
  [anon_sym_l] = "l",
  [anon_sym_s] = "s",
  [anon_sym_d] = "d",
  [anon_sym_b] = "b",
  [anon_sym_h] = "h",
  [sym_number] = "number",
  [sym_ident] = "ident",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DASH] = "-",
  [anon_sym_s_] = "s_",
  [anon_sym_d_] = "d_",
  [anon_sym_thread] = "thread",
  [aux_sym_secname_token1] = "secname_token1",
  [anon_sym_export] = "export",
  [anon_sym_section] = "section",
  [anon_sym_COLON] = ":",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_align] = "align",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_data] = "data",
  [anon_sym_z] = "z",
  [anon_sym_sb] = "sb",
  [anon_sym_ub] = "ub",
  [anon_sym_sh] = "sh",
  [anon_sym_uh] = "uh",
  [anon_sym_PERCENT] = "%",
  [anon_sym_env] = "env",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_AT] = "@",
  [anon_sym_phi] = "phi",
  [anon_sym_neg] = "neg",
  [aux_sym_inst_one_name_token1] = "inst_one_name_token1",
  [aux_sym_inst_one_name_token2] = "inst_one_name_token2",
  [anon_sym_truncd] = "truncd",
  [aux_sym_inst_one_name_token3] = "inst_one_name_token3",
  [anon_sym_cast] = "cast",
  [anon_sym_copy] = "copy",
  [anon_sym_vaarg] = "vaarg",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_div] = "div",
  [anon_sym_mul] = "mul",
  [anon_sym_udiv] = "udiv",
  [anon_sym_rem] = "rem",
  [anon_sym_urem] = "urem",
  [anon_sym_or] = "or",
  [anon_sym_zor] = "zor",
  [anon_sym_and] = "and",
  [anon_sym_sar] = "sar",
  [anon_sym_shr] = "shr",
  [anon_sym_shl] = "shl",
  [aux_sym_inst_two_name_token1] = "inst_two_name_token1",
  [aux_sym_inst_two_name_token2] = "inst_two_name_token2",
  [sym_inst_three_name] = "inst_three_name",
  [sym_store_name] = "store_name",
  [anon_sym_vastart] = "vastart",
  [anon_sym_call] = "call",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jnz] = "jnz",
  [anon_sym_ret] = "ret",
  [anon_sym_hlt] = "hlt",
  [anon_sym_function] = "function",
  [sym_source_file] = "source_file",
  [sym_basety] = "basety",
  [sym_extty] = "extty",
  [sym_global] = "global",
  [sym_const] = "const",
  [sym_dynconst] = "dynconst",
  [sym_val] = "val",
  [sym_secname] = "secname",
  [sym_secflags] = "secflags",
  [sym_linkage] = "linkage",
  [sym_aggregate] = "aggregate",
  [sym_string] = "string",
  [sym_dataitem] = "dataitem",
  [sym_datadef] = "datadef",
  [sym_subwty] = "subwty",
  [sym_abity] = "abity",
  [sym_temp] = "temp",
  [sym_param] = "param",
  [sym_label] = "label",
  [sym_phi] = "phi",
  [sym_inst_arg] = "inst_arg",
  [sym_inst_one_name] = "inst_one_name",
  [sym_inst_one] = "inst_one",
  [sym_inst_two_name] = "inst_two_name",
  [sym_inst_two] = "inst_two",
  [sym_inst_three] = "inst_three",
  [sym_store] = "store",
  [sym_vastart] = "vastart",
  [sym_call] = "call",
  [sym_inst] = "inst",
  [sym_jump] = "jump",
  [sym_block] = "block",
  [sym_funcdef] = "funcdef",
  [sym_def] = "def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_datadef_repeat1] = "datadef_repeat1",
  [aux_sym_datadef_repeat2] = "datadef_repeat2",
  [aux_sym_phi_repeat1] = "phi_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_funcdef_repeat1] = "funcdef_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_h] = anon_sym_h,
  [sym_number] = sym_number,
  [sym_ident] = sym_ident,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_s_] = anon_sym_s_,
  [anon_sym_d_] = anon_sym_d_,
  [anon_sym_thread] = anon_sym_thread,
  [aux_sym_secname_token1] = aux_sym_secname_token1,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_sb] = anon_sym_sb,
  [anon_sym_ub] = anon_sym_ub,
  [anon_sym_sh] = anon_sym_sh,
  [anon_sym_uh] = anon_sym_uh,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_phi] = anon_sym_phi,
  [anon_sym_neg] = anon_sym_neg,
  [aux_sym_inst_one_name_token1] = aux_sym_inst_one_name_token1,
  [aux_sym_inst_one_name_token2] = aux_sym_inst_one_name_token2,
  [anon_sym_truncd] = anon_sym_truncd,
  [aux_sym_inst_one_name_token3] = aux_sym_inst_one_name_token3,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_vaarg] = anon_sym_vaarg,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_udiv] = anon_sym_udiv,
  [anon_sym_rem] = anon_sym_rem,
  [anon_sym_urem] = anon_sym_urem,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_zor] = anon_sym_zor,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_sar] = anon_sym_sar,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_shl] = anon_sym_shl,
  [aux_sym_inst_two_name_token1] = aux_sym_inst_two_name_token1,
  [aux_sym_inst_two_name_token2] = aux_sym_inst_two_name_token2,
  [sym_inst_three_name] = sym_inst_three_name,
  [sym_store_name] = sym_store_name,
  [anon_sym_vastart] = anon_sym_vastart,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_jnz] = anon_sym_jnz,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_hlt] = anon_sym_hlt,
  [anon_sym_function] = anon_sym_function,
  [sym_source_file] = sym_source_file,
  [sym_basety] = sym_basety,
  [sym_extty] = sym_extty,
  [sym_global] = sym_global,
  [sym_const] = sym_const,
  [sym_dynconst] = sym_dynconst,
  [sym_val] = sym_val,
  [sym_secname] = sym_secname,
  [sym_secflags] = sym_secflags,
  [sym_linkage] = sym_linkage,
  [sym_aggregate] = sym_aggregate,
  [sym_string] = sym_string,
  [sym_dataitem] = sym_dataitem,
  [sym_datadef] = sym_datadef,
  [sym_subwty] = sym_subwty,
  [sym_abity] = sym_abity,
  [sym_temp] = sym_temp,
  [sym_param] = sym_param,
  [sym_label] = sym_label,
  [sym_phi] = sym_phi,
  [sym_inst_arg] = sym_inst_arg,
  [sym_inst_one_name] = sym_inst_one_name,
  [sym_inst_one] = sym_inst_one,
  [sym_inst_two_name] = sym_inst_two_name,
  [sym_inst_two] = sym_inst_two,
  [sym_inst_three] = sym_inst_three,
  [sym_store] = sym_store,
  [sym_vastart] = sym_vastart,
  [sym_call] = sym_call,
  [sym_inst] = sym_inst,
  [sym_jump] = sym_jump,
  [sym_block] = sym_block,
  [sym_funcdef] = sym_funcdef,
  [sym_def] = sym_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_datadef_repeat1] = aux_sym_datadef_repeat1,
  [aux_sym_datadef_repeat2] = aux_sym_datadef_repeat2,
  [aux_sym_phi_repeat1] = aux_sym_phi_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_funcdef_repeat1] = aux_sym_funcdef_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_secname_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inst_one_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inst_one_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_truncd] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inst_one_name_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vaarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inst_two_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inst_two_name_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_inst_three_name] = {
    .visible = true,
    .named = true,
  },
  [sym_store_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vastart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
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
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_basety] = {
    .visible = true,
    .named = true,
  },
  [sym_extty] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_dynconst] = {
    .visible = true,
    .named = true,
  },
  [sym_val] = {
    .visible = true,
    .named = true,
  },
  [sym_secname] = {
    .visible = true,
    .named = true,
  },
  [sym_secflags] = {
    .visible = true,
    .named = true,
  },
  [sym_linkage] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_dataitem] = {
    .visible = true,
    .named = true,
  },
  [sym_datadef] = {
    .visible = true,
    .named = true,
  },
  [sym_subwty] = {
    .visible = true,
    .named = true,
  },
  [sym_abity] = {
    .visible = true,
    .named = true,
  },
  [sym_temp] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_phi] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_one_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_one] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_two_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_two] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_three] = {
    .visible = true,
    .named = true,
  },
  [sym_store] = {
    .visible = true,
    .named = true,
  },
  [sym_vastart] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_funcdef] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datadef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datadef_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_phi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_funcdef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat1] = {
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
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(137);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'j') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == 'z') ADVANCE(155);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(137);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == 'z') ADVANCE(154);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '4' ||
          lookahead == '8') ADVANCE(166);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(166);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'd' ||
          lookahead == 'l' ||
          ('s' <= lookahead && lookahead <= 'u') ||
          lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'd' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'l' ||
          ('s' <= lookahead && lookahead <= 'u') ||
          lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'g' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'd' ||
          lookahead == 'l' ||
          ('s' <= lookahead && lookahead <= 'u') ||
          lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'd' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 83:
      if (lookahead == 'q') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'f' ||
          lookahead == 'i' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'd' ||
          lookahead == 'l' ||
          ('s' <= lookahead && lookahead <= 'u') ||
          lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 109:
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 111:
      if (lookahead == 'z') ADVANCE(198);
      END_STATE();
    case 112:
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 113:
      if (lookahead == 'g' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'd' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(190);
      END_STATE();
    case 115:
      if (lookahead == 'f' ||
          lookahead == 'i' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 116:
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 117:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(192);
      END_STATE();
    case 118:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(189);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(137);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '+') ADVANCE(152);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'j') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == 'z') ADVANCE(74);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_s_);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_d_);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_thread);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_secname_token1);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_sb);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ub);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_sh);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_uh);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_phi);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_inst_one_name_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_inst_one_name_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_inst_one_name_token2);
      if (lookahead == 'b' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_truncd);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_inst_one_name_token3);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_inst_one_name_token3);
      if (lookahead == 'f' ||
          lookahead == 'i' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_vaarg);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_udiv);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_rem);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_urem);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_zor);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_sar);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_shr);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_shl);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_inst_two_name_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_inst_two_name_token1);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_inst_two_name_token2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_inst_three_name);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_store_name);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_vastart);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_jnz);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_hlt);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 120},
  [3] = {.lex_state = 120},
  [4] = {.lex_state = 120},
  [5] = {.lex_state = 120},
  [6] = {.lex_state = 120},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 120},
  [9] = {.lex_state = 120},
  [10] = {.lex_state = 120},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 120},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 120},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 120},
  [27] = {.lex_state = 120},
  [28] = {.lex_state = 120},
  [29] = {.lex_state = 120},
  [30] = {.lex_state = 120},
  [31] = {.lex_state = 120},
  [32] = {.lex_state = 120},
  [33] = {.lex_state = 120},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 120},
  [37] = {.lex_state = 120},
  [38] = {.lex_state = 120},
  [39] = {.lex_state = 120},
  [40] = {.lex_state = 120},
  [41] = {.lex_state = 120},
  [42] = {.lex_state = 120},
  [43] = {.lex_state = 120},
  [44] = {.lex_state = 120},
  [45] = {.lex_state = 120},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 120},
  [50] = {.lex_state = 120},
  [51] = {.lex_state = 120},
  [52] = {.lex_state = 120},
  [53] = {.lex_state = 120},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 120},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 120},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 120},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 120},
  [63] = {.lex_state = 120},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 120},
  [66] = {.lex_state = 120},
  [67] = {.lex_state = 120},
  [68] = {.lex_state = 120},
  [69] = {.lex_state = 120},
  [70] = {.lex_state = 120},
  [71] = {.lex_state = 120},
  [72] = {.lex_state = 120},
  [73] = {.lex_state = 120},
  [74] = {.lex_state = 120},
  [75] = {.lex_state = 120},
  [76] = {.lex_state = 120},
  [77] = {.lex_state = 120},
  [78] = {.lex_state = 120},
  [79] = {.lex_state = 120},
  [80] = {.lex_state = 120},
  [81] = {.lex_state = 120},
  [82] = {.lex_state = 120},
  [83] = {.lex_state = 120},
  [84] = {.lex_state = 120},
  [85] = {.lex_state = 120},
  [86] = {.lex_state = 120},
  [87] = {.lex_state = 120},
  [88] = {.lex_state = 120},
  [89] = {.lex_state = 120},
  [90] = {.lex_state = 120},
  [91] = {.lex_state = 120},
  [92] = {.lex_state = 120},
  [93] = {.lex_state = 120},
  [94] = {.lex_state = 120},
  [95] = {.lex_state = 120},
  [96] = {.lex_state = 120},
  [97] = {.lex_state = 120},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 120},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 120},
  [109] = {.lex_state = 120},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_s_] = ACTIONS(1),
    [anon_sym_d_] = ACTIONS(1),
    [anon_sym_thread] = ACTIONS(1),
    [aux_sym_secname_token1] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_sb] = ACTIONS(1),
    [anon_sym_ub] = ACTIONS(1),
    [anon_sym_sh] = ACTIONS(1),
    [anon_sym_uh] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_phi] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [aux_sym_inst_one_name_token1] = ACTIONS(1),
    [aux_sym_inst_one_name_token2] = ACTIONS(1),
    [anon_sym_truncd] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_vaarg] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_udiv] = ACTIONS(1),
    [anon_sym_rem] = ACTIONS(1),
    [anon_sym_urem] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_zor] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [aux_sym_inst_two_name_token2] = ACTIONS(1),
    [sym_inst_three_name] = ACTIONS(1),
    [anon_sym_vastart] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_jnz] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_hlt] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(189),
    [sym_linkage] = STATE(63),
    [sym_datadef] = STATE(84),
    [sym_funcdef] = STATE(84),
    [sym_def] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(39),
    [aux_sym_def_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_thread] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 35,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_phi,
      anon_sym_neg,
      aux_sym_inst_one_name_token1,
      aux_sym_inst_one_name_token2,
      anon_sym_truncd,
      aux_sym_inst_one_name_token3,
      anon_sym_cast,
      anon_sym_copy,
      anon_sym_vaarg,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_div,
      anon_sym_mul,
      anon_sym_udiv,
      anon_sym_rem,
      anon_sym_urem,
      anon_sym_or,
      anon_sym_zor,
      anon_sym_and,
      anon_sym_sar,
      anon_sym_shr,
      anon_sym_shl,
      aux_sym_inst_two_name_token1,
      aux_sym_inst_two_name_token2,
      sym_inst_three_name,
      anon_sym_call,
  [41] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      sym_inst_three_name,
    ACTIONS(23), 1,
      anon_sym_call,
    STATE(121), 1,
      sym_inst_one_name,
    STATE(122), 1,
      sym_inst_two_name,
    STATE(76), 4,
      sym_inst_one,
      sym_inst_two,
      sym_inst_three,
      sym_call,
    ACTIONS(17), 8,
      anon_sym_neg,
      aux_sym_inst_one_name_token1,
      aux_sym_inst_one_name_token2,
      anon_sym_truncd,
      aux_sym_inst_one_name_token3,
      anon_sym_cast,
      anon_sym_copy,
      anon_sym_vaarg,
    ACTIONS(19), 15,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_div,
      anon_sym_mul,
      anon_sym_udiv,
      anon_sym_rem,
      anon_sym_urem,
      anon_sym_or,
      anon_sym_zor,
      anon_sym_and,
      anon_sym_sar,
      anon_sym_shr,
      anon_sym_shl,
      aux_sym_inst_two_name_token1,
      aux_sym_inst_two_name_token2,
  [90] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 27,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_neg,
      aux_sym_inst_one_name_token1,
      aux_sym_inst_one_name_token2,
      anon_sym_truncd,
      aux_sym_inst_one_name_token3,
      anon_sym_cast,
      anon_sym_copy,
      anon_sym_vaarg,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_div,
      anon_sym_mul,
      anon_sym_udiv,
      anon_sym_rem,
      anon_sym_urem,
      anon_sym_or,
      anon_sym_zor,
      anon_sym_and,
      anon_sym_sar,
      anon_sym_shr,
      anon_sym_shl,
      aux_sym_inst_two_name_token1,
      aux_sym_inst_two_name_token2,
      sym_inst_three_name,
      anon_sym_call,
  [123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 27,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_neg,
      aux_sym_inst_one_name_token1,
      aux_sym_inst_one_name_token2,
      anon_sym_truncd,
      aux_sym_inst_one_name_token3,
      anon_sym_cast,
      anon_sym_copy,
      anon_sym_vaarg,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_div,
      anon_sym_mul,
      anon_sym_udiv,
      anon_sym_rem,
      anon_sym_urem,
      anon_sym_or,
      anon_sym_zor,
      anon_sym_and,
      anon_sym_sar,
      anon_sym_shr,
      anon_sym_shl,
      aux_sym_inst_two_name_token1,
      aux_sym_inst_two_name_token2,
      sym_inst_three_name,
      anon_sym_call,
  [156] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 27,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_neg,
      aux_sym_inst_one_name_token1,
      aux_sym_inst_one_name_token2,
      anon_sym_truncd,
      aux_sym_inst_one_name_token3,
      anon_sym_cast,
      anon_sym_copy,
      anon_sym_vaarg,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_div,
      anon_sym_mul,
      anon_sym_udiv,
      anon_sym_rem,
      anon_sym_urem,
      anon_sym_or,
      anon_sym_zor,
      anon_sym_and,
      anon_sym_sar,
      anon_sym_shr,
      anon_sym_shl,
      aux_sym_inst_two_name_token1,
      aux_sym_inst_two_name_token2,
      sym_inst_three_name,
      anon_sym_call,
  [189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_phi,
    ACTIONS(29), 25,
      anon_sym_neg,
      aux_sym_inst_one_name_token1,
      aux_sym_inst_one_name_token2,
      anon_sym_truncd,
      aux_sym_inst_one_name_token3,
      anon_sym_cast,
      anon_sym_copy,
      anon_sym_vaarg,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_div,
      anon_sym_mul,
      anon_sym_udiv,
      anon_sym_rem,
      anon_sym_urem,
      anon_sym_or,
      anon_sym_zor,
      anon_sym_and,
      anon_sym_sar,
      anon_sym_shr,
      anon_sym_shl,
      aux_sym_inst_two_name_token1,
      aux_sym_inst_two_name_token2,
      sym_inst_three_name,
      anon_sym_call,
  [223] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 20,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_LPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 18,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_LPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [273] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 18,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_LPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [297] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [338] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(55), 1,
      sym_store_name,
    ACTIONS(57), 1,
      anon_sym_vastart,
    ACTIONS(59), 1,
      anon_sym_jmp,
    ACTIONS(61), 1,
      anon_sym_jnz,
    ACTIONS(63), 1,
      anon_sym_ret,
    ACTIONS(65), 1,
      anon_sym_hlt,
    STATE(154), 1,
      sym_jump,
    STATE(175), 1,
      sym_temp,
    STATE(17), 2,
      sym_phi,
      aux_sym_block_repeat1,
    STATE(26), 2,
      sym_inst,
      aux_sym_block_repeat2,
    STATE(73), 3,
      sym_store,
      sym_vastart,
      sym_call,
  [385] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [426] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 17,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      anon_sym_thread,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [449] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [490] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [531] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(55), 1,
      sym_store_name,
    ACTIONS(57), 1,
      anon_sym_vastart,
    ACTIONS(59), 1,
      anon_sym_jmp,
    ACTIONS(61), 1,
      anon_sym_jnz,
    ACTIONS(63), 1,
      anon_sym_ret,
    ACTIONS(65), 1,
      anon_sym_hlt,
    STATE(150), 1,
      sym_jump,
    STATE(175), 1,
      sym_temp,
    STATE(24), 2,
      sym_inst,
      aux_sym_block_repeat2,
    STATE(44), 2,
      sym_phi,
      aux_sym_block_repeat1,
    STATE(73), 3,
      sym_store,
      sym_vastart,
      sym_call,
  [578] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [619] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [660] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(145), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [698] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(134), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [736] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(131), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [774] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_env,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(136), 1,
      sym_param,
    STATE(152), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [812] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(55), 1,
      sym_store_name,
    ACTIONS(57), 1,
      anon_sym_vastart,
    ACTIONS(59), 1,
      anon_sym_jmp,
    ACTIONS(61), 1,
      anon_sym_jnz,
    ACTIONS(63), 1,
      anon_sym_ret,
    ACTIONS(65), 1,
      anon_sym_hlt,
    STATE(151), 1,
      sym_jump,
    STATE(179), 1,
      sym_temp,
    STATE(30), 2,
      sym_inst,
      aux_sym_block_repeat2,
    STATE(73), 3,
      sym_store,
      sym_vastart,
      sym_call,
  [855] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    STATE(144), 1,
      sym_abity,
    STATE(162), 1,
      sym_global,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [890] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(55), 1,
      sym_store_name,
    ACTIONS(57), 1,
      anon_sym_vastart,
    ACTIONS(59), 1,
      anon_sym_jmp,
    ACTIONS(61), 1,
      anon_sym_jnz,
    ACTIONS(63), 1,
      anon_sym_ret,
    ACTIONS(65), 1,
      anon_sym_hlt,
    STATE(150), 1,
      sym_jump,
    STATE(179), 1,
      sym_temp,
    STATE(30), 2,
      sym_inst,
      aux_sym_block_repeat2,
    STATE(73), 3,
      sym_store,
      sym_vastart,
      sym_call,
  [933] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      aux_sym_secname_token1,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_global,
    STATE(125), 1,
      aux_sym_datadef_repeat2,
    STATE(28), 2,
      sym_dataitem,
      aux_sym_datadef_repeat1,
    STATE(68), 2,
      sym_const,
      sym_string,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [971] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      aux_sym_secname_token1,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_global,
    STATE(135), 1,
      aux_sym_datadef_repeat2,
    STATE(36), 2,
      sym_dataitem,
      aux_sym_datadef_repeat1,
    STATE(68), 2,
      sym_const,
      sym_string,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1009] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      aux_sym_secname_token1,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_global,
    STATE(129), 1,
      aux_sym_datadef_repeat2,
    STATE(31), 2,
      sym_dataitem,
      aux_sym_datadef_repeat1,
    STATE(68), 2,
      sym_const,
      sym_string,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1047] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      sym_store_name,
    ACTIONS(105), 1,
      anon_sym_vastart,
    ACTIONS(108), 1,
      anon_sym_call,
    STATE(179), 1,
      sym_temp,
    STATE(30), 2,
      sym_inst,
      aux_sym_block_repeat2,
    STATE(73), 3,
      sym_store,
      sym_vastart,
      sym_call,
    ACTIONS(111), 4,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1081] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      aux_sym_secname_token1,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_global,
    STATE(137), 1,
      aux_sym_datadef_repeat2,
    STATE(36), 2,
      sym_dataitem,
      aux_sym_datadef_repeat1,
    STATE(68), 2,
      sym_const,
      sym_string,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1119] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      aux_sym_secname_token1,
    STATE(58), 1,
      sym_global,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym_dataitem,
      aux_sym_datadef_repeat1,
    STATE(68), 2,
      sym_const,
      sym_string,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1152] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      aux_sym_secname_token1,
    STATE(58), 1,
      sym_global,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_dataitem,
      aux_sym_datadef_repeat1,
    STATE(68), 2,
      sym_const,
      sym_string,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1185] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    STATE(3), 1,
      sym_abity,
    STATE(7), 1,
      sym_basety,
    STATE(6), 2,
      sym_aggregate,
      sym_subwty,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [1216] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_s,
    ACTIONS(43), 1,
      anon_sym_COLON,
    STATE(3), 1,
      sym_abity,
    ACTIONS(39), 3,
      anon_sym_w,
      anon_sym_l,
      anon_sym_d,
    STATE(6), 3,
      sym_basety,
      sym_aggregate,
      sym_subwty,
    ACTIONS(45), 4,
      anon_sym_sb,
      anon_sym_ub,
      anon_sym_sh,
      anon_sym_uh,
  [1245] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      sym_number,
    ACTIONS(124), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      aux_sym_secname_token1,
    STATE(58), 1,
      sym_global,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_dataitem,
      aux_sym_datadef_repeat1,
    STATE(68), 2,
      sym_const,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1278] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_LPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_LPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1314] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_section,
    ACTIONS(11), 1,
      anon_sym_data,
    ACTIONS(13), 1,
      anon_sym_function,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_thread,
      anon_sym_export,
    STATE(43), 2,
      sym_def,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_linkage,
      aux_sym_def_repeat1,
    STATE(84), 2,
      sym_datadef,
      sym_funcdef,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_LPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_AT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_LPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1382] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(146), 1,
      anon_sym_thread,
    STATE(37), 1,
      sym_global,
    STATE(40), 1,
      sym_dynconst,
    STATE(41), 1,
      sym_const,
    STATE(146), 1,
      sym_val,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1416] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_section,
    ACTIONS(158), 1,
      anon_sym_data,
    ACTIONS(161), 1,
      anon_sym_function,
    ACTIONS(152), 2,
      anon_sym_thread,
      anon_sym_export,
    STATE(43), 2,
      sym_def,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_linkage,
      aux_sym_def_repeat1,
    STATE(84), 2,
      sym_datadef,
      sym_funcdef,
  [1448] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      anon_sym_PERCENT,
    STATE(170), 1,
      sym_temp,
    STATE(44), 2,
      sym_phi,
      aux_sym_block_repeat1,
    ACTIONS(167), 7,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 11,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_RPAREN,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1488] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(146), 1,
      anon_sym_thread,
    STATE(37), 1,
      sym_global,
    STATE(40), 1,
      sym_dynconst,
    STATE(41), 1,
      sym_const,
    STATE(60), 1,
      sym_val,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1518] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_z,
    STATE(32), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1544] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_z,
    STATE(32), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1570] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(146), 1,
      anon_sym_thread,
    STATE(37), 1,
      sym_global,
    STATE(40), 1,
      sym_dynconst,
    STATE(41), 1,
      sym_const,
    STATE(52), 1,
      sym_val,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1600] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_phi_repeat1,
    ACTIONS(180), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1620] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(146), 1,
      anon_sym_thread,
    STATE(37), 1,
      sym_global,
    STATE(40), 1,
      sym_dynconst,
    STATE(41), 1,
      sym_const,
    STATE(188), 1,
      sym_val,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1650] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_phi_repeat1,
    ACTIONS(184), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1670] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(146), 1,
      anon_sym_thread,
    STATE(37), 1,
      sym_global,
    STATE(40), 1,
      sym_dynconst,
    STATE(41), 1,
      sym_const,
    STATE(172), 1,
      sym_val,
    ACTIONS(83), 3,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
  [1700] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_z,
    STATE(32), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1726] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_phi_repeat1,
    ACTIONS(186), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1746] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_z,
    STATE(32), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1772] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      anon_sym_z,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_PLUS,
    ACTIONS(190), 8,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1815] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      anon_sym_z,
    STATE(32), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 9,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1853] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_z,
    STATE(27), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 9,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1891] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_section,
    ACTIONS(11), 1,
      anon_sym_data,
    ACTIONS(13), 1,
      anon_sym_function,
    ACTIONS(7), 2,
      anon_sym_thread,
      anon_sym_export,
    STATE(79), 2,
      sym_linkage,
      aux_sym_def_repeat1,
    STATE(91), 2,
      sym_datadef,
      sym_funcdef,
  [1916] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_z,
    STATE(29), 1,
      sym_extty,
    STATE(74), 1,
      sym_basety,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_h,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [1939] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1953] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 8,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 8,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1995] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 8,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 8,
      sym_number,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_s_,
      anon_sym_d_,
      aux_sym_secname_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2107] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2121] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 8,
      anon_sym_PERCENT,
      sym_store_name,
      anon_sym_vastart,
      anon_sym_call,
      anon_sym_jmp,
      anon_sym_jnz,
      anon_sym_ret,
      anon_sym_hlt,
  [2135] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_section,
    ACTIONS(231), 2,
      anon_sym_thread,
      anon_sym_export,
    ACTIONS(237), 2,
      anon_sym_data,
      anon_sym_function,
    STATE(79), 2,
      sym_linkage,
      aux_sym_def_repeat1,
  [2154] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 1,
      aux_sym_secname_token1,
    STATE(108), 1,
      sym_secflags,
    ACTIONS(239), 5,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2171] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2219] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 6,
      anon_sym_thread,
      aux_sym_secname_token1,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2291] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2303] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2327] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2339] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2363] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2375] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(178), 1,
      sym_basety,
    ACTIONS(39), 4,
      anon_sym_w,
      anon_sym_l,
      anon_sym_s,
      anon_sym_d,
  [2388] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(12), 1,
      sym_label,
    STATE(111), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2405] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 5,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2416] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(111), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2433] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(105), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2450] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(111), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2467] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(107), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2484] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(111), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2501] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(111), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2518] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(111), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2535] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(293), 5,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 5,
      anon_sym_thread,
      anon_sym_export,
      anon_sym_section,
      anon_sym_data,
      anon_sym_function,
  [2557] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(106), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2574] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      anon_sym_AT,
    STATE(12), 1,
      sym_label,
    STATE(111), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2591] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(101), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2608] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(12), 1,
      sym_label,
    STATE(103), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2625] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_label,
    STATE(99), 2,
      sym_block,
      aux_sym_funcdef_repeat1,
  [2642] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(173), 1,
      sym_inst_arg,
  [2658] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(75), 1,
      sym_inst_arg,
  [2674] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(186), 1,
      sym_inst_arg,
  [2690] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(191), 1,
      sym_inst_arg,
  [2706] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(70), 1,
      sym_inst_arg,
  [2722] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(71), 1,
      sym_inst_arg,
  [2738] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(69), 1,
      sym_inst_arg,
  [2754] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(176), 1,
      sym_inst_arg,
  [2770] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    ACTIONS(306), 1,
      sym_number,
    STATE(62), 1,
      sym_temp,
    STATE(65), 1,
      sym_inst_arg,
  [2786] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_call_repeat1,
  [2799] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_datadef_repeat2,
  [2812] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_datadef_repeat2,
  [2825] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      aux_sym_datadef_repeat2,
  [2838] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym_datadef_repeat2,
  [2851] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_datadef_repeat2,
  [2864] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_call_repeat1,
  [2877] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_call_repeat1,
  [2890] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_call_repeat1,
  [2903] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_call_repeat1,
  [2916] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_call_repeat1,
  [2929] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_datadef_repeat2,
  [2942] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_call_repeat1,
  [2955] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_datadef_repeat2,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 2,
      sym_number,
      anon_sym_PERCENT,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [2984] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2992] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      aux_sym_secname_token1,
    STATE(80), 1,
      sym_secname,
  [3002] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    STATE(183), 1,
      sym_global,
  [3012] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym_label,
  [3022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    STATE(164), 1,
      sym_global,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3040] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [3048] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(139), 1,
      sym_label,
  [3058] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(169), 1,
      sym_label,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [3084] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [3092] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_PERCENT,
    STATE(140), 1,
      sym_temp,
  [3102] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [3118] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      anon_sym_align,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [3128] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(146), 1,
      sym_label,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 2,
      sym_number,
      anon_sym_PERCENT,
  [3154] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(49), 1,
      sym_label,
  [3164] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_global,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      sym_ident,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym_number,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 1,
      sym_number,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym_number,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 1,
      anon_sym_EQ,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
  [3251] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      sym_number,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 1,
      anon_sym_EQ,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
  [3286] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_phi,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      sym_ident,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      anon_sym_EQ,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      sym_ident,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      sym_ident,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
  [3370] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      sym_number,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 1,
      anon_sym_COMMA,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 273,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 385,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 449,
  [SMALL_STATE(16)] = 490,
  [SMALL_STATE(17)] = 531,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 619,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 698,
  [SMALL_STATE(22)] = 736,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 812,
  [SMALL_STATE(25)] = 855,
  [SMALL_STATE(26)] = 890,
  [SMALL_STATE(27)] = 933,
  [SMALL_STATE(28)] = 971,
  [SMALL_STATE(29)] = 1009,
  [SMALL_STATE(30)] = 1047,
  [SMALL_STATE(31)] = 1081,
  [SMALL_STATE(32)] = 1119,
  [SMALL_STATE(33)] = 1152,
  [SMALL_STATE(34)] = 1185,
  [SMALL_STATE(35)] = 1216,
  [SMALL_STATE(36)] = 1245,
  [SMALL_STATE(37)] = 1278,
  [SMALL_STATE(38)] = 1296,
  [SMALL_STATE(39)] = 1314,
  [SMALL_STATE(40)] = 1346,
  [SMALL_STATE(41)] = 1364,
  [SMALL_STATE(42)] = 1382,
  [SMALL_STATE(43)] = 1416,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1471,
  [SMALL_STATE(46)] = 1488,
  [SMALL_STATE(47)] = 1518,
  [SMALL_STATE(48)] = 1544,
  [SMALL_STATE(49)] = 1570,
  [SMALL_STATE(50)] = 1600,
  [SMALL_STATE(51)] = 1620,
  [SMALL_STATE(52)] = 1650,
  [SMALL_STATE(53)] = 1670,
  [SMALL_STATE(54)] = 1700,
  [SMALL_STATE(55)] = 1726,
  [SMALL_STATE(56)] = 1746,
  [SMALL_STATE(57)] = 1772,
  [SMALL_STATE(58)] = 1798,
  [SMALL_STATE(59)] = 1815,
  [SMALL_STATE(60)] = 1838,
  [SMALL_STATE(61)] = 1853,
  [SMALL_STATE(62)] = 1876,
  [SMALL_STATE(63)] = 1891,
  [SMALL_STATE(64)] = 1916,
  [SMALL_STATE(65)] = 1939,
  [SMALL_STATE(66)] = 1953,
  [SMALL_STATE(67)] = 1967,
  [SMALL_STATE(68)] = 1981,
  [SMALL_STATE(69)] = 1995,
  [SMALL_STATE(70)] = 2009,
  [SMALL_STATE(71)] = 2023,
  [SMALL_STATE(72)] = 2037,
  [SMALL_STATE(73)] = 2051,
  [SMALL_STATE(74)] = 2065,
  [SMALL_STATE(75)] = 2079,
  [SMALL_STATE(76)] = 2093,
  [SMALL_STATE(77)] = 2107,
  [SMALL_STATE(78)] = 2121,
  [SMALL_STATE(79)] = 2135,
  [SMALL_STATE(80)] = 2154,
  [SMALL_STATE(81)] = 2171,
  [SMALL_STATE(82)] = 2183,
  [SMALL_STATE(83)] = 2195,
  [SMALL_STATE(84)] = 2207,
  [SMALL_STATE(85)] = 2219,
  [SMALL_STATE(86)] = 2231,
  [SMALL_STATE(87)] = 2243,
  [SMALL_STATE(88)] = 2255,
  [SMALL_STATE(89)] = 2267,
  [SMALL_STATE(90)] = 2279,
  [SMALL_STATE(91)] = 2291,
  [SMALL_STATE(92)] = 2303,
  [SMALL_STATE(93)] = 2315,
  [SMALL_STATE(94)] = 2327,
  [SMALL_STATE(95)] = 2339,
  [SMALL_STATE(96)] = 2351,
  [SMALL_STATE(97)] = 2363,
  [SMALL_STATE(98)] = 2375,
  [SMALL_STATE(99)] = 2388,
  [SMALL_STATE(100)] = 2405,
  [SMALL_STATE(101)] = 2416,
  [SMALL_STATE(102)] = 2433,
  [SMALL_STATE(103)] = 2450,
  [SMALL_STATE(104)] = 2467,
  [SMALL_STATE(105)] = 2484,
  [SMALL_STATE(106)] = 2501,
  [SMALL_STATE(107)] = 2518,
  [SMALL_STATE(108)] = 2535,
  [SMALL_STATE(109)] = 2546,
  [SMALL_STATE(110)] = 2557,
  [SMALL_STATE(111)] = 2574,
  [SMALL_STATE(112)] = 2591,
  [SMALL_STATE(113)] = 2608,
  [SMALL_STATE(114)] = 2625,
  [SMALL_STATE(115)] = 2642,
  [SMALL_STATE(116)] = 2658,
  [SMALL_STATE(117)] = 2674,
  [SMALL_STATE(118)] = 2690,
  [SMALL_STATE(119)] = 2706,
  [SMALL_STATE(120)] = 2722,
  [SMALL_STATE(121)] = 2738,
  [SMALL_STATE(122)] = 2754,
  [SMALL_STATE(123)] = 2770,
  [SMALL_STATE(124)] = 2786,
  [SMALL_STATE(125)] = 2799,
  [SMALL_STATE(126)] = 2812,
  [SMALL_STATE(127)] = 2825,
  [SMALL_STATE(128)] = 2838,
  [SMALL_STATE(129)] = 2851,
  [SMALL_STATE(130)] = 2864,
  [SMALL_STATE(131)] = 2877,
  [SMALL_STATE(132)] = 2890,
  [SMALL_STATE(133)] = 2903,
  [SMALL_STATE(134)] = 2916,
  [SMALL_STATE(135)] = 2929,
  [SMALL_STATE(136)] = 2942,
  [SMALL_STATE(137)] = 2955,
  [SMALL_STATE(138)] = 2968,
  [SMALL_STATE(139)] = 2976,
  [SMALL_STATE(140)] = 2984,
  [SMALL_STATE(141)] = 2992,
  [SMALL_STATE(142)] = 3002,
  [SMALL_STATE(143)] = 3012,
  [SMALL_STATE(144)] = 3022,
  [SMALL_STATE(145)] = 3032,
  [SMALL_STATE(146)] = 3040,
  [SMALL_STATE(147)] = 3048,
  [SMALL_STATE(148)] = 3058,
  [SMALL_STATE(149)] = 3068,
  [SMALL_STATE(150)] = 3076,
  [SMALL_STATE(151)] = 3084,
  [SMALL_STATE(152)] = 3092,
  [SMALL_STATE(153)] = 3102,
  [SMALL_STATE(154)] = 3110,
  [SMALL_STATE(155)] = 3118,
  [SMALL_STATE(156)] = 3128,
  [SMALL_STATE(157)] = 3138,
  [SMALL_STATE(158)] = 3146,
  [SMALL_STATE(159)] = 3154,
  [SMALL_STATE(160)] = 3164,
  [SMALL_STATE(161)] = 3174,
  [SMALL_STATE(162)] = 3181,
  [SMALL_STATE(163)] = 3188,
  [SMALL_STATE(164)] = 3195,
  [SMALL_STATE(165)] = 3202,
  [SMALL_STATE(166)] = 3209,
  [SMALL_STATE(167)] = 3216,
  [SMALL_STATE(168)] = 3223,
  [SMALL_STATE(169)] = 3230,
  [SMALL_STATE(170)] = 3237,
  [SMALL_STATE(171)] = 3244,
  [SMALL_STATE(172)] = 3251,
  [SMALL_STATE(173)] = 3258,
  [SMALL_STATE(174)] = 3265,
  [SMALL_STATE(175)] = 3272,
  [SMALL_STATE(176)] = 3279,
  [SMALL_STATE(177)] = 3286,
  [SMALL_STATE(178)] = 3293,
  [SMALL_STATE(179)] = 3300,
  [SMALL_STATE(180)] = 3307,
  [SMALL_STATE(181)] = 3314,
  [SMALL_STATE(182)] = 3321,
  [SMALL_STATE(183)] = 3328,
  [SMALL_STATE(184)] = 3335,
  [SMALL_STATE(185)] = 3342,
  [SMALL_STATE(186)] = 3349,
  [SMALL_STATE(187)] = 3356,
  [SMALL_STATE(188)] = 3363,
  [SMALL_STATE(189)] = 3370,
  [SMALL_STATE(190)] = 3377,
  [SMALL_STATE(191)] = 3384,
  [SMALL_STATE(192)] = 3391,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basety, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subwty, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abity, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(161),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(118),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(123),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(51),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datadef_repeat2, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datadef_repeat2, 3),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datadef_repeat1, 2), SHIFT_REPEAT(10),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datadef_repeat1, 2), SHIFT_REPEAT(185),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datadef_repeat1, 2), SHIFT_REPEAT(163),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datadef_repeat1, 2), SHIFT_REPEAT(66),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datadef_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_const, 1), REDUCE(sym_val, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynconst, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynconst, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(161),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temp, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2), SHIFT_REPEAT(143),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_const, 1), REDUCE(sym_dataitem, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_arg, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vastart, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataitem, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_one, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_three, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_two, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataitem, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extty, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 7, .production_id = 1),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(100),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(141),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linkage, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 8, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datadef, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 9, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secname, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 9, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 7, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datadef, 9),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datadef, 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 8, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 10, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 10, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datadef, 8),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datadef, 11),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 11, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datadef, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linkage, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linkage, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secflags, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcdef_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcdef_repeat1, 2), SHIFT_REPEAT(187),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(20),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datadef_repeat2, 2), SHIFT_REPEAT(59),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_one_name, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_two_name, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [414] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qbe(void) {
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
