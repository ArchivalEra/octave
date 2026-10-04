/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         OCTAVE_STYPE
/* Substitute the variable and function names.  */
#define yyparse         octave_parse
#define yypush_parse    octave_push_parse
#define yypull_parse    octave_pull_parse
#define yypstate_new    octave_pstate_new
#define yypstate_clear  octave_pstate_clear
#define yypstate_delete octave_pstate_delete
#define yypstate        octave_pstate
#define yylex           octave_lex
#define yyerror         octave_error
#define yydebug         octave_debug
#define yynerrs         octave_nerrs

/* First part of user prologue.  */
#line 30 "../libinterp/parse-tree/oct-parse.yy"


// Uncomment to enable parser debugging
// #define OCTAVE_PARSER_DEBUG 1
#if defined (OCTAVE_PARSER_DEBUG)
  // Magic variable used by Bison
  #define OCTAVE_DEBUG 1
#endif

#if defined (HAVE_CONFIG_H)
#  include "config.h"
#endif

#include <cstdio>
#include <cstdlib>

#include <iostream>
#include <map>
#include <sstream>

#include "Matrix.h"
#include "cmd-edit.h"
#include "cmd-hist.h"
#include "file-ops.h"
#include "file-stat.h"
#include "oct-env.h"
#include "oct-time.h"
#include "quit.h"

#include "Cell.h"
#include "anon-fcn-validator.h"
#include "builtin-defun-decls.h"
#include "defun.h"
#include "dynamic-ld.h"
#include "error.h"
#include "input.h"
#include "interpreter-private.h"
#include "interpreter.h"
#include "lex.h"
#include "load-path.h"
#include "oct-sysdep.h"
#include "oct-hist.h"
#include "oct-map.h"
#include "ov-classdef.h"
#include "ov-fcn-handle.h"
#include "ov-usr-fcn.h"
#include "ov-null-mat.h"
#include "pager.h"
#include "parse.h"
#include "pt-all.h"
#include "pt-eval.h"
#include "separator-list.h"
#include "symtab.h"
#include "token.h"
#include "unwind-prot.h"
#include "utils.h"
#include "variables.h"

// oct-parse.h must be included after pt-all.h
#include "oct-parse.h"

extern int octave_lex (YYSTYPE *, void *);

// Forward declarations for some functions defined at the bottom of
// the file.

static void yyerror (octave::base_parser& parser, const char *s);

#define lexer (parser.get_lexer ())
#define scanner lexer.m_scanner

// Previous versions of Octave used Bison's YYUSE macro to avoid
// warnings about unused values in rules.  But that Bison macro was
// apparently never intended to be public.  So define our own.  All we
// need to do is mention the symantic value somewhere in the rule.  It
// doesn't actually need to be used to avoid the Bison warning, so just
// define this macro to discard its parameter.
#define OCTAVE_YYUSE(...)

#if defined (HAVE_PRAGMA_GCC_DIAGNOSTIC)
   // Disable this warning for code that is generated by Bison,
   // including grammar rules.  Push the current state so we can
   // restore the warning state prior to functions we define at
   // the bottom of the file.
#  pragma GCC diagnostic push
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#endif


#line 173 "libinterp/parse-tree/oct-parse.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "oct-parse.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* ':'  */
  YYSYMBOL_5_ = 5,                         /* '-'  */
  YYSYMBOL_6_ = 6,                         /* '+'  */
  YYSYMBOL_7_ = 7,                         /* '*'  */
  YYSYMBOL_8_ = 8,                         /* '/'  */
  YYSYMBOL_9_ = 9,                         /* '~'  */
  YYSYMBOL_10_ = 10,                       /* '!'  */
  YYSYMBOL_11_ = 11,                       /* '('  */
  YYSYMBOL_12_ = 12,                       /* ')'  */
  YYSYMBOL_13_ = 13,                       /* '['  */
  YYSYMBOL_14_ = 14,                       /* ']'  */
  YYSYMBOL_15_ = 15,                       /* '{'  */
  YYSYMBOL_16_ = 16,                       /* '}'  */
  YYSYMBOL_17_ = 17,                       /* '.'  */
  YYSYMBOL_18_ = 18,                       /* '@'  */
  YYSYMBOL_19_ = 19,                       /* ','  */
  YYSYMBOL_20_ = 20,                       /* ';'  */
  YYSYMBOL_21_n_ = 21,                     /* '\n'  */
  YYSYMBOL_ADD_EQ = 22,                    /* ADD_EQ  */
  YYSYMBOL_SUB_EQ = 23,                    /* SUB_EQ  */
  YYSYMBOL_MUL_EQ = 24,                    /* MUL_EQ  */
  YYSYMBOL_DIV_EQ = 25,                    /* DIV_EQ  */
  YYSYMBOL_LEFTDIV_EQ = 26,                /* LEFTDIV_EQ  */
  YYSYMBOL_POW_EQ = 27,                    /* POW_EQ  */
  YYSYMBOL_EMUL_EQ = 28,                   /* EMUL_EQ  */
  YYSYMBOL_EDIV_EQ = 29,                   /* EDIV_EQ  */
  YYSYMBOL_ELEFTDIV_EQ = 30,               /* ELEFTDIV_EQ  */
  YYSYMBOL_EPOW_EQ = 31,                   /* EPOW_EQ  */
  YYSYMBOL_AND_EQ = 32,                    /* AND_EQ  */
  YYSYMBOL_OR_EQ = 33,                     /* OR_EQ  */
  YYSYMBOL_EXPR_AND_AND = 34,              /* EXPR_AND_AND  */
  YYSYMBOL_EXPR_OR_OR = 35,                /* EXPR_OR_OR  */
  YYSYMBOL_EXPR_AND = 36,                  /* EXPR_AND  */
  YYSYMBOL_EXPR_OR = 37,                   /* EXPR_OR  */
  YYSYMBOL_EXPR_LT = 38,                   /* EXPR_LT  */
  YYSYMBOL_EXPR_LE = 39,                   /* EXPR_LE  */
  YYSYMBOL_EXPR_EQ = 40,                   /* EXPR_EQ  */
  YYSYMBOL_EXPR_NE = 41,                   /* EXPR_NE  */
  YYSYMBOL_EXPR_GE = 42,                   /* EXPR_GE  */
  YYSYMBOL_EXPR_GT = 43,                   /* EXPR_GT  */
  YYSYMBOL_LEFTDIV = 44,                   /* LEFTDIV  */
  YYSYMBOL_EMUL = 45,                      /* EMUL  */
  YYSYMBOL_EDIV = 46,                      /* EDIV  */
  YYSYMBOL_ELEFTDIV = 47,                  /* ELEFTDIV  */
  YYSYMBOL_HERMITIAN = 48,                 /* HERMITIAN  */
  YYSYMBOL_TRANSPOSE = 49,                 /* TRANSPOSE  */
  YYSYMBOL_PLUS_PLUS = 50,                 /* PLUS_PLUS  */
  YYSYMBOL_MINUS_MINUS = 51,               /* MINUS_MINUS  */
  YYSYMBOL_POW = 52,                       /* POW  */
  YYSYMBOL_EPOW = 53,                      /* EPOW  */
  YYSYMBOL_NUMBER = 54,                    /* NUMBER  */
  YYSYMBOL_CONSTANT = 55,                  /* CONSTANT  */
  YYSYMBOL_STRUCT_ELT = 56,                /* STRUCT_ELT  */
  YYSYMBOL_NAME = 57,                      /* NAME  */
  YYSYMBOL_END = 58,                       /* END  */
  YYSYMBOL_DQ_STRING = 59,                 /* DQ_STRING  */
  YYSYMBOL_SQ_STRING = 60,                 /* SQ_STRING  */
  YYSYMBOL_FOR = 61,                       /* FOR  */
  YYSYMBOL_PARFOR = 62,                    /* PARFOR  */
  YYSYMBOL_WHILE = 63,                     /* WHILE  */
  YYSYMBOL_DO = 64,                        /* DO  */
  YYSYMBOL_UNTIL = 65,                     /* UNTIL  */
  YYSYMBOL_SPMD = 66,                      /* SPMD  */
  YYSYMBOL_IF = 67,                        /* IF  */
  YYSYMBOL_ELSEIF = 68,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 69,                      /* ELSE  */
  YYSYMBOL_SWITCH = 70,                    /* SWITCH  */
  YYSYMBOL_CASE = 71,                      /* CASE  */
  YYSYMBOL_OTHERWISE = 72,                 /* OTHERWISE  */
  YYSYMBOL_BREAK = 73,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 74,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 75,                    /* RETURN  */
  YYSYMBOL_UNWIND = 76,                    /* UNWIND  */
  YYSYMBOL_CLEANUP = 77,                   /* CLEANUP  */
  YYSYMBOL_TRY = 78,                       /* TRY  */
  YYSYMBOL_CATCH = 79,                     /* CATCH  */
  YYSYMBOL_GLOBAL = 80,                    /* GLOBAL  */
  YYSYMBOL_PERSISTENT = 81,                /* PERSISTENT  */
  YYSYMBOL_FCN_HANDLE = 82,                /* FCN_HANDLE  */
  YYSYMBOL_CLASSDEF = 83,                  /* CLASSDEF  */
  YYSYMBOL_PROPERTIES = 84,                /* PROPERTIES  */
  YYSYMBOL_METHODS = 85,                   /* METHODS  */
  YYSYMBOL_EVENTS = 86,                    /* EVENTS  */
  YYSYMBOL_ENUMERATION = 87,               /* ENUMERATION  */
  YYSYMBOL_METAQUERY = 88,                 /* METAQUERY  */
  YYSYMBOL_SUPERCLASSREF = 89,             /* SUPERCLASSREF  */
  YYSYMBOL_FQ_IDENT = 90,                  /* FQ_IDENT  */
  YYSYMBOL_GET = 91,                       /* GET  */
  YYSYMBOL_SET = 92,                       /* SET  */
  YYSYMBOL_FUNCTION = 93,                  /* FUNCTION  */
  YYSYMBOL_ARGUMENTS = 94,                 /* ARGUMENTS  */
  YYSYMBOL_LEXICAL_ERROR = 95,             /* LEXICAL_ERROR  */
  YYSYMBOL_END_OF_INPUT = 96,              /* END_OF_INPUT  */
  YYSYMBOL_INPUT_FILE = 97,                /* INPUT_FILE  */
  YYSYMBOL_UNARY = 98,                     /* UNARY  */
  YYSYMBOL_YYACCEPT = 99,                  /* $accept  */
  YYSYMBOL_input = 100,                    /* input  */
  YYSYMBOL_simple_list = 101,              /* simple_list  */
  YYSYMBOL_simple_list1 = 102,             /* simple_list1  */
  YYSYMBOL_statement_list = 103,           /* statement_list  */
  YYSYMBOL_opt_list = 104,                 /* opt_list  */
  YYSYMBOL_list = 105,                     /* list  */
  YYSYMBOL_list1 = 106,                    /* list1  */
  YYSYMBOL_opt_fcn_list = 107,             /* opt_fcn_list  */
  YYSYMBOL_fcn_list = 108,                 /* fcn_list  */
  YYSYMBOL_fcn_list1 = 109,                /* fcn_list1  */
  YYSYMBOL_statement = 110,                /* statement  */
  YYSYMBOL_word_list_cmd = 111,            /* word_list_cmd  */
  YYSYMBOL_word_list = 112,                /* word_list  */
  YYSYMBOL_identifier = 113,               /* identifier  */
  YYSYMBOL_superclass_identifier = 114,    /* superclass_identifier  */
  YYSYMBOL_meta_identifier = 115,          /* meta_identifier  */
  YYSYMBOL_string = 116,                   /* string  */
  YYSYMBOL_constant = 117,                 /* constant  */
  YYSYMBOL_matrix = 118,                   /* matrix  */
  YYSYMBOL_matrix_rows = 119,              /* matrix_rows  */
  YYSYMBOL_cell = 120,                     /* cell  */
  YYSYMBOL_cell_rows = 121,                /* cell_rows  */
  YYSYMBOL_cell_or_matrix_row = 122,       /* cell_or_matrix_row  */
  YYSYMBOL_fcn_handle = 123,               /* fcn_handle  */
  YYSYMBOL_anon_fcn_handle = 124,          /* anon_fcn_handle  */
  YYSYMBOL_primary_expr = 125,             /* primary_expr  */
  YYSYMBOL_magic_colon = 126,              /* magic_colon  */
  YYSYMBOL_magic_tilde = 127,              /* magic_tilde  */
  YYSYMBOL_arg_list = 128,                 /* arg_list  */
  YYSYMBOL_indirect_ref_op = 129,          /* indirect_ref_op  */
  YYSYMBOL_oper_expr = 130,                /* oper_expr  */
  YYSYMBOL_power_expr = 131,               /* power_expr  */
  YYSYMBOL_colon_expr = 132,               /* colon_expr  */
  YYSYMBOL_simple_expr = 133,              /* simple_expr  */
  YYSYMBOL_assign_lhs = 134,               /* assign_lhs  */
  YYSYMBOL_assign_expr = 135,              /* assign_expr  */
  YYSYMBOL_expression = 136,               /* expression  */
  YYSYMBOL_command = 137,                  /* command  */
  YYSYMBOL_declaration = 138,              /* declaration  */
  YYSYMBOL_decl_init_list = 139,           /* decl_init_list  */
  YYSYMBOL_decl_elt = 140,                 /* decl_elt  */
  YYSYMBOL_select_command = 141,           /* select_command  */
  YYSYMBOL_if_command = 142,               /* if_command  */
  YYSYMBOL_if_clause_list = 143,           /* if_clause_list  */
  YYSYMBOL_if_clause = 144,                /* if_clause  */
  YYSYMBOL_elseif_clause = 145,            /* elseif_clause  */
  YYSYMBOL_else_clause = 146,              /* else_clause  */
  YYSYMBOL_switch_command = 147,           /* switch_command  */
  YYSYMBOL_case_list = 148,                /* case_list  */
  YYSYMBOL_case_list1 = 149,               /* case_list1  */
  YYSYMBOL_switch_case = 150,              /* switch_case  */
  YYSYMBOL_default_case = 151,             /* default_case  */
  YYSYMBOL_loop_command = 152,             /* loop_command  */
  YYSYMBOL_jump_command = 153,             /* jump_command  */
  YYSYMBOL_spmd_command = 154,             /* spmd_command  */
  YYSYMBOL_except_command = 155,           /* except_command  */
  YYSYMBOL_push_fcn_symtab = 156,          /* push_fcn_symtab  */
  YYSYMBOL_param_list_beg = 157,           /* param_list_beg  */
  YYSYMBOL_param_list_end = 158,           /* param_list_end  */
  YYSYMBOL_opt_param_list = 159,           /* opt_param_list  */
  YYSYMBOL_param_list = 160,               /* param_list  */
  YYSYMBOL_param_list1 = 161,              /* param_list1  */
  YYSYMBOL_param_list2 = 162,              /* param_list2  */
  YYSYMBOL_param_list_elt = 163,           /* param_list_elt  */
  YYSYMBOL_return_list = 164,              /* return_list  */
  YYSYMBOL_return_list1 = 165,             /* return_list1  */
  YYSYMBOL_parsing_local_fcns = 166,       /* parsing_local_fcns  */
  YYSYMBOL_push_script_symtab = 167,       /* push_script_symtab  */
  YYSYMBOL_begin_file = 168,               /* begin_file  */
  YYSYMBOL_file = 169,                     /* file  */
  YYSYMBOL_function_beg = 170,             /* function_beg  */
  YYSYMBOL_fcn_name = 171,                 /* fcn_name  */
  YYSYMBOL_function_end = 172,             /* function_end  */
  YYSYMBOL_function = 173,                 /* function  */
  YYSYMBOL_function_body = 174,            /* function_body  */
  YYSYMBOL_arguments_block_list = 175,     /* arguments_block_list  */
  YYSYMBOL_arguments_block = 176,          /* arguments_block  */
  YYSYMBOL_arguments_beg = 177,            /* arguments_beg  */
  YYSYMBOL_args_attr_list = 178,           /* args_attr_list  */
  YYSYMBOL_args_validation_list = 179,     /* args_validation_list  */
  YYSYMBOL_arg_name = 180,                 /* arg_name  */
  YYSYMBOL_arg_validation = 181,           /* arg_validation  */
  YYSYMBOL_size_spec = 182,                /* size_spec  */
  YYSYMBOL_class_name = 183,               /* class_name  */
  YYSYMBOL_validation_fcns = 184,          /* validation_fcns  */
  YYSYMBOL_classdef_beg = 185,             /* classdef_beg  */
  YYSYMBOL_classdef = 186,                 /* classdef  */
  YYSYMBOL_attr_list = 187,                /* attr_list  */
  YYSYMBOL_attr_list1 = 188,               /* attr_list1  */
  YYSYMBOL_attr = 189,                     /* attr  */
  YYSYMBOL_superclass_list = 190,          /* superclass_list  */
  YYSYMBOL_superclass_list1 = 191,         /* superclass_list1  */
  YYSYMBOL_superclass = 192,               /* superclass  */
  YYSYMBOL_class_body = 193,               /* class_body  */
  YYSYMBOL_class_body1 = 194,              /* class_body1  */
  YYSYMBOL_properties_block = 195,         /* properties_block  */
  YYSYMBOL_properties_beg = 196,           /* properties_beg  */
  YYSYMBOL_property_list = 197,            /* property_list  */
  YYSYMBOL_property_list1 = 198,           /* property_list1  */
  YYSYMBOL_class_property = 199,           /* class_property  */
  YYSYMBOL_methods_block = 200,            /* methods_block  */
  YYSYMBOL_methods_beg = 201,              /* methods_beg  */
  YYSYMBOL_method_decl1 = 202,             /* method_decl1  */
  YYSYMBOL_method_decl = 203,              /* method_decl  */
  YYSYMBOL_204_1 = 204,                    /* $@1  */
  YYSYMBOL_method = 205,                   /* method  */
  YYSYMBOL_method_list = 206,              /* method_list  */
  YYSYMBOL_method_list1 = 207,             /* method_list1  */
  YYSYMBOL_events_block = 208,             /* events_block  */
  YYSYMBOL_events_beg = 209,               /* events_beg  */
  YYSYMBOL_event_list = 210,               /* event_list  */
  YYSYMBOL_event_list1 = 211,              /* event_list1  */
  YYSYMBOL_class_event = 212,              /* class_event  */
  YYSYMBOL_enum_block = 213,               /* enum_block  */
  YYSYMBOL_enumeration_beg = 214,          /* enumeration_beg  */
  YYSYMBOL_enum_list = 215,                /* enum_list  */
  YYSYMBOL_enum_list1 = 216,               /* enum_list1  */
  YYSYMBOL_class_enum = 217,               /* class_enum  */
  YYSYMBOL_stmt_begin = 218,               /* stmt_begin  */
  YYSYMBOL_anon_fcn_begin = 219,           /* anon_fcn_begin  */
  YYSYMBOL_parse_error = 220,              /* parse_error  */
  YYSYMBOL_sep_no_nl = 221,                /* sep_no_nl  */
  YYSYMBOL_opt_sep_no_nl = 222,            /* opt_sep_no_nl  */
  YYSYMBOL_sep = 223,                      /* sep  */
  YYSYMBOL_opt_sep = 224                   /* opt_sep  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined OCTAVE_STYPE_IS_TRIVIAL && OCTAVE_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  120
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  309
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  529

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   334


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,     2,     2,     2,     2,     2,     2,
      11,    12,     7,     6,    19,     5,    17,     8,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,    20,
       2,     3,     2,     2,    18,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    13,     2,    14,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    15,     2,    16,     9,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98
};

#if OCTAVE_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   418,   418,   429,   440,   447,   454,   463,   473,   475,
     479,   490,   491,   495,   505,   507,   512,   513,   517,   527,
     529,   533,   535,   537,   549,   559,   561,   569,   574,   578,
     582,   584,   588,   590,   594,   598,   600,   604,   608,   610,
     623,   624,   631,   633,   640,   647,   656,   664,   675,   688,
     690,   692,   694,   699,   701,   703,   705,   709,   713,   717,
     719,   721,   723,   725,   727,   731,   738,   740,   742,   744,
     752,   760,   768,   776,   778,   780,   782,   784,   786,   788,
     790,   792,   794,   796,   798,   800,   802,   804,   806,   808,
     810,   812,   814,   818,   820,   822,   824,   832,   840,   848,
     856,   858,   860,   862,   864,   866,   868,   870,   874,   882,
     892,   894,   896,   898,   900,   902,   904,   906,   908,   910,
     912,   914,   918,   930,   932,   934,   936,   938,   940,   942,
     944,   946,   948,   950,   952,   954,   958,   973,   980,   988,
     990,   992,   994,   996,   998,  1000,  1008,  1013,  1020,  1022,
    1026,  1028,  1036,  1038,  1046,  1056,  1058,  1062,  1066,  1071,
    1072,  1080,  1095,  1096,  1098,  1100,  1104,  1106,  1110,  1120,
    1128,  1138,  1142,  1150,  1161,  1172,  1189,  1194,  1199,  1207,
    1221,  1229,  1237,  1252,  1264,  1281,  1291,  1292,  1296,  1303,
    1315,  1316,  1333,  1335,  1339,  1341,  1349,  1357,  1375,  1392,
    1394,  1404,  1408,  1417,  1421,  1448,  1478,  1487,  1497,  1506,
    1517,  1529,  1563,  1567,  1573,  1577,  1588,  1594,  1602,  1619,
    1628,  1629,  1643,  1648,  1663,  1667,  1675,  1686,  1687,  1700,
    1701,  1707,  1708,  1724,  1742,  1759,  1760,  1770,  1772,  1776,
    1778,  1780,  1782,  1787,  1792,  1805,  1807,  1811,  1816,  1820,
    1831,  1833,  1835,  1837,  1839,  1847,  1855,  1863,  1874,  1888,
    1896,  1900,  1912,  1914,  1947,  1951,  1965,  1972,  1977,  1984,
    1987,  1986,  2000,  2002,  2007,  2011,  2022,  2024,  2034,  2048,
    2056,  2060,  2071,  2073,  2083,  2087,  2101,  2109,  2113,  2124,
    2126,  2136,  2145,  2152,  2159,  2165,  2169,  2171,  2173,  2175,
    2180,  2181,  2185,  2187,  2189,  2191,  2193,  2195,  2200,  2201
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if OCTAVE_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'='", "':'", "'-'",
  "'+'", "'*'", "'/'", "'~'", "'!'", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "'.'", "'@'", "','", "';'", "'\\n'", "ADD_EQ", "SUB_EQ", "MUL_EQ",
  "DIV_EQ", "LEFTDIV_EQ", "POW_EQ", "EMUL_EQ", "EDIV_EQ", "ELEFTDIV_EQ",
  "EPOW_EQ", "AND_EQ", "OR_EQ", "EXPR_AND_AND", "EXPR_OR_OR", "EXPR_AND",
  "EXPR_OR", "EXPR_LT", "EXPR_LE", "EXPR_EQ", "EXPR_NE", "EXPR_GE",
  "EXPR_GT", "LEFTDIV", "EMUL", "EDIV", "ELEFTDIV", "HERMITIAN",
  "TRANSPOSE", "PLUS_PLUS", "MINUS_MINUS", "POW", "EPOW", "NUMBER",
  "CONSTANT", "STRUCT_ELT", "NAME", "END", "DQ_STRING", "SQ_STRING", "FOR",
  "PARFOR", "WHILE", "DO", "UNTIL", "SPMD", "IF", "ELSEIF", "ELSE",
  "SWITCH", "CASE", "OTHERWISE", "BREAK", "CONTINUE", "RETURN", "UNWIND",
  "CLEANUP", "TRY", "CATCH", "GLOBAL", "PERSISTENT", "FCN_HANDLE",
  "CLASSDEF", "PROPERTIES", "METHODS", "EVENTS", "ENUMERATION",
  "METAQUERY", "SUPERCLASSREF", "FQ_IDENT", "GET", "SET", "FUNCTION",
  "ARGUMENTS", "LEXICAL_ERROR", "END_OF_INPUT", "INPUT_FILE", "UNARY",
  "$accept", "input", "simple_list", "simple_list1", "statement_list",
  "opt_list", "list", "list1", "opt_fcn_list", "fcn_list", "fcn_list1",
  "statement", "word_list_cmd", "word_list", "identifier",
  "superclass_identifier", "meta_identifier", "string", "constant",
  "matrix", "matrix_rows", "cell", "cell_rows", "cell_or_matrix_row",
  "fcn_handle", "anon_fcn_handle", "primary_expr", "magic_colon",
  "magic_tilde", "arg_list", "indirect_ref_op", "oper_expr", "power_expr",
  "colon_expr", "simple_expr", "assign_lhs", "assign_expr", "expression",
  "command", "declaration", "decl_init_list", "decl_elt", "select_command",
  "if_command", "if_clause_list", "if_clause", "elseif_clause",
  "else_clause", "switch_command", "case_list", "case_list1",
  "switch_case", "default_case", "loop_command", "jump_command",
  "spmd_command", "except_command", "push_fcn_symtab", "param_list_beg",
  "param_list_end", "opt_param_list", "param_list", "param_list1",
  "param_list2", "param_list_elt", "return_list", "return_list1",
  "parsing_local_fcns", "push_script_symtab", "begin_file", "file",
  "function_beg", "fcn_name", "function_end", "function", "function_body",
  "arguments_block_list", "arguments_block", "arguments_beg",
  "args_attr_list", "args_validation_list", "arg_name", "arg_validation",
  "size_spec", "class_name", "validation_fcns", "classdef_beg", "classdef",
  "attr_list", "attr_list1", "attr", "superclass_list", "superclass_list1",
  "superclass", "class_body", "class_body1", "properties_block",
  "properties_beg", "property_list", "property_list1", "class_property",
  "methods_block", "methods_beg", "method_decl1", "method_decl", "$@1",
  "method", "method_list", "method_list1", "events_block", "events_beg",
  "event_list", "event_list1", "class_event", "enum_block",
  "enumeration_beg", "enum_list", "enum_list1", "class_enum", "stmt_begin",
  "anon_fcn_begin", "parse_error", "sep_no_nl", "opt_sep_no_nl", "sep",
  "opt_sep", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-376)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-301)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     516,  -376,  1292,  1292,  1292,  1292,  1281,  1038,  1038,     6,
    -376,  -376,  1292,  1292,  -376,  -376,  -376,  -376,  1351,  1362,
    1281,   113,   113,   113,  1281,  -376,  -376,  -376,   113,   113,
       1,     1,  -376,  -376,  -376,  -376,    68,    -3,   175,  -376,
    -376,   -12,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  1441,  -376,   607,   696,  -376,  -376,  -376,  -376,  -376,
    -376,   151,  -376,  -376,  -376,  -376,  -376,  -376,    14,   -27,
     113,  -376,    20,  -376,  -376,   204,  -376,  -376,   275,   275,
     275,   275,    79,  -376,  1292,  1266,   102,  -376,  -376,  -376,
     101,  -376,   131,  -376,  -376,    28,  -376,   275,   275,  1281,
     321,   145,  1281,   147,  -376,  -376,  -376,  -376,    89,   121,
     938,   100,  1281,   113,    97,   -19,   187,     1,  -376,     1,
    -376,  -376,  -376,   776,  -376,   -12,  -376,  1292,  1292,  1292,
    1292,  1292,  1104,  1119,  -376,  1292,  1292,  1292,  1292,  -376,
    -376,  -376,  -376,  1377,  1377,    17,  1292,  1292,  1292,  1292,
    1292,  1292,  1292,  1292,  1292,  1292,  1281,  1281,  1281,  1281,
    1281,  1281,  1281,  1281,  1281,  1281,  1281,  1281,  1281,   113,
     113,  -376,   120,  -376,  -376,   115,   857,    18,   179,   192,
     218,   222,     6,  -376,  -376,  -376,   211,  -376,  1038,  1266,
    -376,  1038,  -376,  -376,  -376,  -376,   228,   231,  -376,  1023,
     708,  1281,   775,  1281,   113,  1281,  -376,  -376,  -376,  -376,
    -376,   113,  -376,  -376,  -376,   167,   113,  -376,   113,  1281,
    -376,  -376,  -376,  1456,  1467,  1467,   275,   275,  -376,    34,
    -376,   136,   275,   275,   275,   275,  1377,  1377,  1377,  1377,
    1377,  1377,  -376,   176,   176,  1281,  -376,   226,   310,   343,
     333,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    1281,  -376,  -376,  -376,  -376,   240,  -376,  -376,  -376,    65,
       1,     1,    37,   113,  -376,  1266,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,    -1,  -376,  -376,  1281,  -376,  1281,  -376,
     212,  -376,   695,  -376,   113,   113,   113,   214,   167,  -376,
    -376,   216,   938,  -376,  1292,  -376,  1266,  -376,   176,   176,
     176,   176,   176,   176,  1185,  1200,  -376,  -376,    30,   264,
    -376,    25,     1,   113,  -376,     1,  -376,  -376,  -376,     6,
    -376,   -39,   609,  -376,   265,   113,   260,   113,  -376,  -376,
    -376,  1281,  -376,  -376,  -376,  -376,  -376,   225,   440,  -376,
      55,  -376,   156,  1281,  -376,  -376,   113,     1,     1,   281,
      57,  -376,   113,   194,  -376,   113,  -376,  -376,  -376,  -376,
     113,  -376,   113,   113,   227,  1281,   233,  -376,  -376,  -376,
    -376,   277,  -376,  -376,  -376,  1281,   113,    25,   256,   199,
    -376,   113,  -376,   -39,  -376,   609,   285,   239,  -376,   286,
    -376,   113,  -376,  -376,  -376,  -376,   210,   114,    45,  -376,
     194,  -376,  -376,     1,     1,  -376,   113,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,   245,   113,  -376,   113,  -376,   113,
    -376,   113,  -376,   113,   210,  -376,  -376,   292,  -376,   113,
     296,   250,  -376,   114,   240,   240,   240,   240,  -376,  -376,
      23,   251,  1266,  -376,     1,  -376,  -376,  -376,  -376,  -376,
       1,    32,     1,     1,   296,  -376,    59,  -376,   295,   296,
     253,   113,  -376,    48,   311,  -376,  -376,  -376,  -376,   255,
     113,  -376,   258,   113,  -376,   306,   262,   113,  -376,  -376,
    -376,  1266,   315,  -376,  -376,    23,  -376,  -376,  -376,  -376,
      39,  -376,     1,  1281,  -376,     1,   191,  1281,  -376,     1,
    -376,  -376,   309,  -376,  -376,  -376,     6,  -376,  -376
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   295,     0,     0,     0,     0,     0,    40,    40,     0,
     296,   297,     0,     0,    32,    27,    30,    31,     0,     0,
       0,   308,   308,   308,     0,   176,   177,   178,   308,   308,
       0,     0,    46,    29,    28,   294,     0,     0,   300,     8,
      23,    49,    55,    54,    33,    50,    52,    53,    51,   138,
      66,   110,   111,   136,     0,   137,    21,    22,   139,   140,
     152,   159,   155,   153,   141,   142,   143,   144,     0,     0,
     308,     4,     0,   145,     5,   301,     6,    49,    82,    81,
      79,    80,     0,    57,    58,    41,     0,    35,    60,    61,
      42,    59,     0,    38,   184,     0,   293,    77,    78,     0,
     122,     0,     0,     0,   292,   302,   303,   304,     0,   309,
      11,     0,     0,   308,     0,     0,   150,   146,   148,   147,
       1,     2,     3,   301,     7,    24,    25,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,    73,
      74,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   308,
     308,   156,     0,   206,   203,     0,    11,     0,     0,     0,
     207,     0,   186,   298,   299,    56,    44,    34,    40,    43,
      37,    40,   189,    58,   195,   194,     0,   191,   192,     0,
       0,     0,     0,     0,   308,     0,   305,   306,   307,    10,
      12,   308,    14,   179,   292,   162,   308,   182,   308,     0,
     149,     9,    26,   108,    86,    85,    87,    88,    69,     0,
      71,     0,    91,    89,    90,    92,     0,     0,     0,     0,
       0,     0,    93,    83,    84,     0,    75,   120,   121,   118,
     119,   112,   113,   114,   117,   115,   116,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   160,   154,   204,   233,   235,   201,   196,   199,     0,
       0,     0,     0,   308,   187,    45,    36,    62,    63,    64,
      39,   185,   188,     0,    48,    47,     0,   292,     0,   292,
       0,   171,   309,    13,   308,   308,   308,     0,   164,   166,
     163,     0,    11,   151,     0,    70,     0,    72,   107,   106,
     104,   105,   102,   103,     0,     0,    94,    95,     0,     0,
     292,     0,     0,   308,   198,     0,   208,   209,   207,   186,
     214,     0,    11,   193,     0,   308,   123,   308,   170,    15,
     157,     0,   169,   161,   167,   165,   180,     0,   109,    96,
       0,    98,     0,     0,   100,    76,   308,     0,     0,   239,
       0,   237,   308,    16,   200,   308,   210,   211,   212,   219,
     308,   216,   308,   308,     0,     0,     0,   292,   181,    97,
      99,     0,   158,   241,   242,     0,   308,     0,   243,     0,
      17,   308,    19,     0,   215,    11,   220,     0,   172,     0,
     174,   308,   101,   240,   236,   238,     0,   248,   308,   205,
      18,   213,   217,     0,     0,   173,   308,   168,   247,   245,
     259,   266,   279,   286,     0,   308,   250,   308,   251,   308,
     252,   308,   253,   308,     0,   244,    20,     0,   224,   308,
     227,     0,   234,   249,   235,   235,   235,   235,   246,   221,
     309,     0,     0,   222,   229,   175,   254,   255,   256,   257,
     260,   183,   280,   287,   227,   218,     0,   230,   231,   227,
       0,   308,   262,   267,     0,   273,   269,   272,   276,     0,
     308,   284,     0,   308,   282,     0,     0,   308,   289,   223,
     228,     0,   225,   264,   258,   309,   261,   268,   270,   265,
     183,   278,   281,     0,   285,   288,     0,     0,   263,     0,
     277,   283,     0,   290,   232,   226,   267,   271,   291
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -376,  -376,  -376,  -376,    33,    21,  -376,  -376,  -376,  -376,
    -376,     4,  -376,  -376,     0,  -376,  -376,   -17,  -376,  -376,
    -376,  -376,  -376,    -2,  -376,  -376,   -56,  -167,   -88,   -83,
     -87,     8,   -23,  -376,   106,     7,  -376,     3,  -376,  -376,
     298,   -81,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,    22,    26,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
       2,    -8,  -376,  -376,    43,   266,  -376,  -376,  -376,  -376,
    -376,  -376,    58,   -33,  -357,    12,  -376,   -28,  -376,  -376,
    -376,   -71,  -375,  -376,  -376,  -376,  -376,  -376,  -210,  -376,
      -7,  -376,  -376,   -53,  -376,  -376,   -61,  -376,  -376,  -376,
    -111,   -58,  -376,  -123,  -376,  -376,  -110,  -376,  -376,   -52,
    -376,  -376,  -376,  -109,   -51,  -376,  -376,  -376,  -108,  -199,
    -376,  -376,   366,   368,  -206,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    36,    37,    38,   340,   209,   210,   211,   399,   400,
     401,   212,    40,   125,    77,    42,    43,    44,    45,    46,
      86,    47,    92,    87,    48,    49,    50,    88,    89,    90,
     145,    51,   243,    52,    53,    54,    55,    91,    57,    58,
     117,   118,    59,    60,    61,    62,   171,   172,    63,   307,
     308,   309,   310,    64,    65,    66,    67,    68,    95,   292,
     283,   284,   196,   197,   198,   484,   279,   333,    69,    70,
      71,    72,   182,   378,    73,   341,   380,   381,   382,   424,
     449,   450,   463,   464,   478,   502,   275,   276,   332,   370,
     371,   417,   418,   429,   434,   435,   436,   437,   480,   481,
     482,   438,   439,   486,   487,   519,   488,   489,   490,   440,
     441,   492,   493,   494,   442,   443,   496,   497,   498,   204,
     199,    74,    75,    76,   109,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    96,   186,    56,    39,   302,    93,   194,   193,    82,
      78,    79,    80,    81,   195,   304,   402,    94,   121,   376,
      97,    98,   287,   104,   126,   101,   103,   113,   245,   192,
     116,   116,   277,   177,   367,   368,   220,   193,   220,   217,
    -190,   363,   206,   207,   208,   177,   315,    16,    17,   229,
     231,  -197,   177,   316,   108,   111,    15,   377,    15,    94,
     218,   114,   115,   446,   105,   106,   107,   389,   120,   396,
     174,   500,   180,   246,   316,    15,   397,    15,   316,   334,
      15,   444,    15,   112,   335,    15,   364,   242,   242,    15,
    -274,   185,    80,   122,    15,   116,    15,  -275,   345,   499,
     347,   288,    82,   175,   503,    82,   200,   173,   222,   202,
      41,   178,   179,    56,   485,   214,   187,   116,   287,   116,
     189,   244,   188,    41,   100,   100,    56,   221,   178,   179,
     176,   366,   105,   106,   107,   223,   224,   225,   226,   227,
     206,   207,   208,   232,   233,   234,   235,   190,   201,   287,
     203,   191,   317,   485,   205,   316,   328,   328,   213,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   390,   215,   216,   316,    41,   278,   272,    56,
     242,   242,   242,   242,   242,   242,   286,   324,   411,   290,
     219,   325,   289,   134,    10,    11,   280,   288,   430,   431,
     432,   433,   295,   271,   297,   194,   299,   524,   301,   281,
     316,   273,   195,   318,   319,   320,   321,   322,   323,   169,
     170,  -197,   313,   183,   184,   282,   326,   327,   288,   270,
     285,   328,   328,   328,   328,   328,   328,   300,   305,   306,
     291,   360,   362,   460,   470,   471,   472,   473,   329,   311,
     293,   331,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   148,   149,   150,   151,   152,   153,   154,   155,
     348,   303,   353,   330,   356,   505,   365,   383,   312,   385,
     336,   337,   338,   388,   395,   408,   132,  -183,   289,   412,
     133,   410,   134,   116,   416,   419,   423,   425,   426,   344,
     428,   346,    41,   452,   459,    56,   349,   462,   465,   475,
     501,   504,    41,   509,   508,    56,   511,   513,   517,   289,
     514,   528,   358,   139,   140,   141,   142,   143,   144,   119,
     354,   369,   372,   357,   355,   374,   343,   350,   181,   352,
     339,   375,    41,   342,   146,    56,   148,   149,   150,   151,
     152,   153,   154,   155,   387,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   351,   391,   393,   394,   148,
     421,   150,   151,   152,   153,   154,   155,   422,   384,   476,
     386,   150,   151,   152,   153,   154,   155,   403,   409,   474,
     415,   458,   466,   373,   518,   467,   527,   369,   413,   392,
     520,   468,   469,   521,   123,    41,   124,   523,    56,     0,
       0,     0,     0,   404,     0,     0,   407,     0,   516,     0,
       0,     0,     0,   447,   448,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,   342,     0,     0,     0,     0,
     405,     0,   406,     0,   427,   128,   129,   130,   131,     0,
       0,   132,     0,     0,     0,   133,   414,   134,     0,   451,
     448,   420,     0,     0,   477,     0,     0,     0,     0,     0,
     479,   483,   491,   495,     0,   507,     0,     0,   445,     0,
       0,     0,     0,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   453,     0,   454,     0,   455,
       0,   456,     0,   457,     0,   479,     0,     0,     0,   461,
     483,     0,   491,     0,     0,   495,   522,     1,   507,   526,
     525,     2,     3,     0,     0,     4,     5,     6,     0,     7,
       0,     8,     0,     0,     9,    10,    11,  -300,     0,     0,
       0,   506,     0,     0,     0,     0,     0,     0,     0,     0,
     510,     0,     0,   512,     0,     0,     0,   515,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      14,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,     0,    22,    23,     0,     0,    24,     0,     0,    25,
      26,    27,    28,     0,    29,     0,    30,    31,    32,     0,
       0,     0,     0,     0,    33,    34,     0,     0,     0,  -183,
    -122,    35,  -300,  -202,     2,     3,     0,     0,     4,     5,
       6,     0,     7,     0,     8,     0,     0,     9,     0,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,    14,     0,     0,    15,     0,    16,    17,
      18,    19,    20,    21,     0,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,    28,     0,    29,     0,    30,
      31,    32,     0,     0,     0,     0,     0,    33,    34,   156,
       2,     3,  -183,   379,     4,     5,     6,     0,     7,     0,
       8,   296,     0,     9,   206,   207,   208,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,    12,    13,     0,     0,    14,
       0,     0,    15,     0,    16,    17,    18,    19,    20,    21,
       0,    22,    23,     0,     0,    24,     0,     0,    25,    26,
      27,    28,     0,    29,     0,    30,    31,    32,   298,     0,
       0,     2,     3,    33,    34,     4,     5,     6,  -183,     7,
       0,     8,     0,     0,     9,   183,   184,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      14,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,     0,    22,    23,     0,     0,    24,     0,     0,    25,
      26,    27,    28,     0,    29,     0,    30,    31,    32,     0,
       0,     0,     2,     3,    33,    34,     4,     5,     6,  -183,
       7,     0,     8,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,    14,     0,     0,    15,     0,    16,    17,    18,    19,
      20,    21,     0,    22,    23,     0,     0,    24,     0,     0,
      25,    26,    27,    28,     0,    29,     0,    30,    31,    32,
     274,     0,     0,     2,     3,    33,    34,     4,     5,     6,
    -183,     7,     0,     8,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,    14,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,     0,    22,    23,     0,     0,    24,     0,
       0,    25,    26,    27,    28,     0,    29,     0,    30,    31,
      32,     0,     0,     0,   294,     0,    33,    34,     2,     3,
       0,  -183,     4,     5,     6,     0,     7,     0,     8,     0,
       0,     9,    83,     2,     3,     0,     0,    84,     5,     6,
       0,     7,     0,     8,     0,     0,     9,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,    14,     0,     0,
      15,     0,    16,    17,     0,     0,     0,     0,    12,    13,
       0,     0,    14,     0,     0,    15,     0,    16,    17,     0,
       0,     0,     0,     0,     0,    32,     0,     0,    83,     2,
       3,    33,    34,    84,     5,     6,   228,     7,     0,     8,
      32,     0,     9,    83,     2,     3,    33,    34,    84,     5,
       6,     0,     7,     0,     8,   230,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,    14,     0,
       0,    15,     0,    16,    17,     0,     0,     0,     0,    12,
      13,     0,     0,    14,     0,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    32,     0,     0,    83,
       2,     3,    33,    34,    84,     5,     6,   359,     7,     0,
       8,    32,     0,     9,    83,     2,     3,    33,    34,    84,
       5,     6,     0,     7,     0,     8,   361,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,    14,
       0,     0,    15,     0,    16,    17,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,     0,    15,     0,    16,
      17,     0,     0,     0,     0,     0,     0,    32,     0,     0,
      83,     2,     3,    33,    34,    84,     5,     6,     0,     7,
       0,     8,    32,     0,     9,     0,     2,     3,    33,    34,
       4,     5,     6,     0,     7,     0,     8,     2,     3,     9,
       0,     4,     5,     6,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      14,     0,     0,    15,     0,    16,    17,     0,     0,     0,
       0,    12,    13,     0,     0,    14,     0,     0,    15,     0,
      16,    17,    12,    13,     0,     0,    14,     0,    32,    15,
       0,    16,    17,     0,    33,    34,     2,     3,     0,     0,
       4,     5,    99,    32,     7,     0,     8,     2,     3,    33,
      34,     4,     5,   102,    32,     7,     0,     8,     0,     0,
      33,    34,   236,   237,     0,     0,   238,   239,     6,     0,
       7,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,    14,     0,     0,    15,     0,
      16,    17,    12,    13,     0,     0,    14,     0,     0,    15,
       0,    16,    17,     0,     0,     0,     0,   240,   241,     0,
       0,    14,     0,    32,    15,     0,    16,    17,     0,    33,
      34,     0,     0,     0,    32,   127,   128,   129,   130,   131,
      33,    34,   132,     0,     0,     0,   133,     0,   134,    32,
     314,   128,   129,   130,   131,    33,    34,   132,     0,     0,
       0,   133,     0,   134,   130,   131,     0,     0,   132,     0,
       0,     0,   133,     0,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144
};

static const yytype_int16 yycheck[] =
{
       0,     9,    85,     0,     0,   211,     8,    95,     9,     6,
       2,     3,     4,     5,    95,   214,   373,    11,    21,    58,
      12,    13,   189,    20,    41,    18,    19,    24,    11,     1,
      30,    31,    14,    13,     9,    10,   117,     9,   119,    58,
      12,    11,    19,    20,    21,    13,    12,    59,    60,   132,
     133,     3,    13,    19,    21,    22,    57,    96,    57,    11,
      79,    28,    29,   420,    19,    20,    21,    12,     0,    12,
      97,    12,    72,    56,    19,    57,    19,    57,    19,    14,
      57,    36,    57,    23,    19,    57,    56,   143,   144,    57,
      58,    12,    84,    96,    57,    95,    57,    58,   297,   474,
     299,   189,    99,    70,   479,   102,    99,    93,   125,   102,
     110,    91,    92,   110,   471,   112,    14,   117,   285,   119,
      19,   144,    20,   123,    18,    19,   123,   123,    91,    92,
      70,   330,    19,    20,    21,   127,   128,   129,   130,   131,
      19,    20,    21,   135,   136,   137,   138,    16,     3,   316,
       3,    20,    16,   510,    65,    19,   243,   244,    58,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,    16,   113,    77,    19,   176,   177,    58,   176,
     236,   237,   238,   239,   240,   241,   188,    11,   387,   191,
       3,    15,   189,    17,    19,    20,    17,   285,    84,    85,
      86,    87,   199,   170,   201,   293,   203,    16,   205,    17,
      19,    96,   293,   236,   237,   238,   239,   240,   241,    68,
      69,     3,   219,    19,    20,     3,    50,    51,   316,   169,
      19,   318,   319,   320,   321,   322,   323,   204,    71,    72,
      12,   324,   325,   449,   454,   455,   456,   457,   245,   216,
      19,    11,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    36,    37,    38,    39,    40,    41,    42,    43,
      58,   211,    58,   270,    58,   481,    12,    12,   218,    19,
     280,   281,   282,    58,     3,    58,    11,    93,   285,    12,
      15,    58,    17,   293,    38,    96,    11,    58,    12,   296,
      90,   298,   302,    58,    12,   302,   302,    11,    58,    58,
      15,    58,   312,    58,     3,   312,    58,    11,     3,   316,
      58,    12,   314,    48,    49,    50,    51,    52,    53,    31,
     308,   331,   332,   312,   308,   335,   293,   304,    72,   306,
     282,   339,   342,   283,    34,   342,    36,    37,    38,    39,
      40,    41,    42,    43,   351,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,   305,   363,   367,   368,    36,
     403,    38,    39,    40,    41,    42,    43,   405,   345,   462,
     347,    38,    39,    40,    41,    42,    43,   375,   385,   460,
     397,   444,   453,   333,   505,   453,   519,   397,   395,   366,
     510,   453,   453,   512,    38,   405,    38,   515,   405,    -1,
      -1,    -1,    -1,   380,    -1,    -1,   383,    -1,   501,    -1,
      -1,    -1,    -1,   423,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   372,    -1,    -1,   375,    -1,    -1,    -1,    -1,
     380,    -1,   382,    -1,   411,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,   396,    17,    -1,   426,
     460,   401,    -1,    -1,   464,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,    -1,   483,    -1,    -1,   418,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,   435,    -1,   437,    -1,   439,
      -1,   441,    -1,   443,    -1,   505,    -1,    -1,    -1,   449,
     510,    -1,   512,    -1,    -1,   515,   513,     1,   526,   519,
     517,     5,     6,    -1,    -1,     9,    10,    11,    -1,    13,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,   481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     490,    -1,    -1,   493,    -1,    -1,    -1,   497,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    57,    -1,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    -1,    78,    -1,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    93,
       3,    95,    96,    97,     5,     6,    -1,    -1,     9,    10,
      11,    -1,    13,    -1,    15,    -1,    -1,    18,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    -1,    66,    67,    -1,    -1,    70,
      -1,    -1,    73,    74,    75,    76,    -1,    78,    -1,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,     3,
       5,     6,    93,    94,     9,    10,    11,    -1,    13,    -1,
      15,     3,    -1,    18,    19,    20,    21,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,    74,
      75,    76,    -1,    78,    -1,    80,    81,    82,     3,    -1,
      -1,     5,     6,    88,    89,     9,    10,    11,    93,    13,
      -1,    15,    -1,    -1,    18,    19,    20,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    57,    -1,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    -1,    78,    -1,    80,    81,    82,    -1,
      -1,    -1,     5,     6,    88,    89,     9,    10,    11,    93,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,
      73,    74,    75,    76,    -1,    78,    -1,    80,    81,    82,
      83,    -1,    -1,     5,     6,    88,    89,     9,    10,    11,
      93,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    57,    -1,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    70,    -1,
      -1,    73,    74,    75,    76,    -1,    78,    -1,    80,    81,
      82,    -1,    -1,    -1,     1,    -1,    88,    89,     5,     6,
      -1,    93,     9,    10,    11,    -1,    13,    -1,    15,    -1,
      -1,    18,     4,     5,     6,    -1,    -1,     9,    10,    11,
      -1,    13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,     4,     5,
       6,    88,    89,     9,    10,    11,    12,    13,    -1,    15,
      82,    -1,    18,     4,     5,     6,    88,    89,     9,    10,
      11,    -1,    13,    -1,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,     4,
       5,     6,    88,    89,     9,    10,    11,    12,    13,    -1,
      15,    82,    -1,    18,     4,     5,     6,    88,    89,     9,
      10,    11,    -1,    13,    -1,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
       4,     5,     6,    88,    89,     9,    10,    11,    -1,    13,
      -1,    15,    82,    -1,    18,    -1,     5,     6,    88,    89,
       9,    10,    11,    -1,    13,    -1,    15,     5,     6,    18,
      -1,     9,    10,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,
      59,    60,    50,    51,    -1,    -1,    54,    -1,    82,    57,
      -1,    59,    60,    -1,    88,    89,     5,     6,    -1,    -1,
       9,    10,    11,    82,    13,    -1,    15,     5,     6,    88,
      89,     9,    10,    11,    82,    13,    -1,    15,    -1,    -1,
      88,    89,     5,     6,    -1,    -1,     9,    10,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,
      59,    60,    50,    51,    -1,    -1,    54,    -1,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    82,    57,    -1,    59,    60,    -1,    88,
      89,    -1,    -1,    -1,    82,     4,     5,     6,     7,     8,
      88,    89,    11,    -1,    -1,    -1,    15,    -1,    17,    82,
       4,     5,     6,     7,     8,    88,    89,    11,    -1,    -1,
      -1,    15,    -1,    17,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    17,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,     9,    10,    11,    13,    15,    18,
      19,    20,    50,    51,    54,    57,    59,    60,    61,    62,
      63,    64,    66,    67,    70,    73,    74,    75,    76,    78,
      80,    81,    82,    88,    89,    95,   100,   101,   102,   110,
     111,   113,   114,   115,   116,   117,   118,   120,   123,   124,
     125,   130,   132,   133,   134,   135,   136,   137,   138,   141,
     142,   143,   144,   147,   152,   153,   154,   155,   156,   167,
     168,   169,   170,   173,   220,   221,   222,   113,   130,   130,
     130,   130,   136,     4,     9,    19,   119,   122,   126,   127,
     128,   136,   121,   122,    11,   157,   160,   130,   130,    11,
     133,   134,    11,   134,   136,    19,    20,    21,   103,   223,
     224,   103,   224,   136,   103,   103,   113,   139,   140,   139,
       0,    21,    96,   221,   222,   112,   116,     4,     5,     6,
       7,     8,    11,    15,    17,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   129,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     3,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    68,
      69,   145,   146,    93,    97,   103,   224,    13,    91,    92,
     113,   164,   171,    19,    20,    12,   128,    14,    20,    19,
      16,    20,     1,     9,   127,   140,   161,   162,   163,   219,
     134,     3,   134,     3,   218,    65,    19,    20,    21,   104,
     105,   106,   110,    58,   136,   224,    77,    58,    79,     3,
     140,   110,   116,   130,   130,   130,   130,   130,    12,   128,
      16,   128,   130,   130,   130,   130,     5,     6,     9,    10,
      50,    51,   125,   131,   131,    11,    56,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     224,   103,    58,    96,    83,   185,   186,    14,   113,   165,
      17,    17,     3,   159,   160,    19,   122,   126,   127,   136,
     122,    12,   158,    19,     1,   136,     3,   136,     3,   136,
     103,   136,   223,   224,   218,    71,    72,   148,   149,   150,
     151,   103,   224,   136,     4,    12,    19,    16,   131,   131,
     131,   131,   131,   131,    11,    15,    50,    51,   129,   136,
     136,    11,   187,   166,    14,    19,   113,   113,   113,   171,
     103,   174,   224,   163,   136,   218,   136,   218,    58,   110,
     103,   224,   103,    58,   150,   151,    58,   104,   130,    12,
     128,    16,   128,    11,    56,    12,   218,     9,    10,   113,
     188,   189,   113,   224,   113,   159,    58,    96,   172,    94,
     175,   176,   177,    12,   103,    19,   103,   136,    58,    12,
      16,   136,   103,   113,   113,     3,    12,    19,   224,   107,
     108,   109,   173,   174,   103,   224,   224,   103,    58,   136,
      58,   218,    12,   136,   224,   189,    38,   190,   191,    96,
     224,   172,   176,    11,   178,    58,    12,   103,    90,   192,
      84,    85,    86,    87,   193,   194,   195,   196,   200,   201,
     208,   209,   213,   214,    36,   224,   173,   113,   113,   179,
     180,   103,    58,   224,   224,   224,   224,   224,   192,    12,
     223,   224,    11,   181,   182,    58,   195,   200,   208,   213,
     187,   187,   187,   187,   180,    58,   128,   113,   183,   113,
     197,   198,   199,   113,   164,   173,   202,   203,   205,   206,
     207,   113,   210,   211,   212,   113,   215,   216,   217,   181,
      12,    15,   184,   181,    58,   223,   224,   160,     3,    58,
     224,    58,   224,    11,    58,   224,   128,     3,   199,   204,
     205,   212,   136,   217,    16,   136,   113,   202,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   109,
     109,   110,   110,   110,   111,   112,   112,   113,   114,   115,
     116,   116,   117,   117,   118,   119,   119,   120,   121,   121,
     122,   122,   122,   122,   122,   122,   123,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   127,   128,
     128,   128,   128,   128,   128,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   136,   136,   136,   137,
     137,   137,   137,   137,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   143,   143,   144,   145,   146,
     146,   147,   148,   148,   148,   148,   149,   149,   150,   151,
     152,   152,   152,   152,   152,   152,   153,   153,   153,   154,
     155,   155,   155,   156,   157,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   164,   165,
     165,   166,   167,   168,   169,   169,   170,   171,   171,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   177,
     178,   178,   179,   179,   180,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   186,   187,   187,   188,   188,   189,
     189,   189,   189,   190,   190,   191,   191,   192,   193,   193,
     194,   194,   194,   194,   194,   194,   194,   194,   195,   196,
     197,   197,   198,   198,   199,   200,   201,   202,   202,   203,
     204,   203,   205,   205,   206,   206,   207,   207,   208,   209,
     210,   210,   211,   211,   212,   213,   214,   215,   215,   216,
     216,   217,   218,   219,   220,   220,   221,   221,   221,   221,
     222,   222,   223,   223,   223,   223,   223,   223,   224,   224
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     2,     1,     3,
       2,     0,     1,     2,     1,     3,     0,     1,     2,     1,
       3,     1,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     1,     3,
       0,     1,     1,     2,     2,     3,     1,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     1,     2,     2,     3,
       4,     3,     4,     2,     2,     3,     5,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     3,     4,     3,     4,
       3,     5,     2,     2,     2,     2,     2,     2,     3,     5,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     3,     1,     1,     3,     1,     2,     5,     5,     0,
       2,     5,     0,     1,     1,     2,     1,     2,     5,     2,
       5,     4,     7,     8,     7,    10,     1,     1,     1,     3,
       5,     6,     3,     0,     1,     1,     0,     1,     3,     2,
       0,     1,     1,     3,     1,     1,     2,     1,     3,     1,
       3,     0,     0,     2,     3,     7,     2,     1,     3,     3,
       1,     1,     5,     7,     1,     3,     1,     3,     6,     1,
       0,     3,     2,     4,     1,     3,     5,     0,     3,     0,
       1,     0,     3,     1,     7,     0,     4,     1,     3,     1,
       3,     2,     2,     0,     2,     2,     3,     1,     0,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     5,     1,
       0,     2,     1,     3,     2,     5,     1,     1,     2,     1,
       0,     4,     1,     1,     0,     2,     1,     3,     5,     1,
       0,     2,     1,     3,     1,     5,     1,     0,     2,     1,
       3,     4,     0,     0,     1,     1,     1,     1,     2,     2,
       0,     1,     1,     1,     1,     2,     2,     2,     0,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = OCTAVE_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == OCTAVE_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (parser, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use OCTAVE_error or OCTAVE_UNDEF. */
#define YYERRCODE OCTAVE_UNDEF


/* Enable debugging if requested.  */
#if OCTAVE_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, octave::base_parser& parser)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (parser);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, octave::base_parser& parser)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, parser);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, octave::base_parser& parser)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !OCTAVE_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !OCTAVE_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif
/* Parser data structure.  */
struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;
    /* Whether this instance has not started parsing yet.
     * If 2, it corresponds to a finished parsing.  */
    int yynew;
  };






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, octave::base_parser& parser)
{
  YY_USE (yyvaluep);
  YY_USE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_3_: /* '='  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1741 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_4_: /* ':'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1747 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_5_: /* '-'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1753 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_6_: /* '+'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1759 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_7_: /* '*'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1765 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_8_: /* '/'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1771 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_9_: /* '~'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1777 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_10_: /* '!'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1783 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_11_: /* '('  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1789 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_12_: /* ')'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1795 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_13_: /* '['  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1801 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_14_: /* ']'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1807 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_15_: /* '{'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1813 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_16_: /* '}'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1819 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_17_: /* '.'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1825 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_18_: /* '@'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1831 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_19_: /* ','  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1837 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_20_: /* ';'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1843 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_21_n_: /* '\n'  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1849 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ADD_EQ: /* ADD_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1855 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SUB_EQ: /* SUB_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1861 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_MUL_EQ: /* MUL_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1867 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_DIV_EQ: /* DIV_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1873 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_LEFTDIV_EQ: /* LEFTDIV_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1879 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_POW_EQ: /* POW_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1885 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EMUL_EQ: /* EMUL_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1891 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EDIV_EQ: /* EDIV_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1897 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELEFTDIV_EQ: /* ELEFTDIV_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1903 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EPOW_EQ: /* EPOW_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1909 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_AND_EQ: /* AND_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1915 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_OR_EQ: /* OR_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1921 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_AND_AND: /* EXPR_AND_AND  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1927 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_OR_OR: /* EXPR_OR_OR  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1933 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_AND: /* EXPR_AND  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1939 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_OR: /* EXPR_OR  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1945 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_LT: /* EXPR_LT  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1951 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_LE: /* EXPR_LE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1957 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_EQ: /* EXPR_EQ  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1963 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_NE: /* EXPR_NE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1969 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_GE: /* EXPR_GE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1975 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_GT: /* EXPR_GT  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1981 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_LEFTDIV: /* LEFTDIV  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1987 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EMUL: /* EMUL  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1993 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EDIV: /* EDIV  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1999 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELEFTDIV: /* ELEFTDIV  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2005 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_HERMITIAN: /* HERMITIAN  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2011 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_TRANSPOSE: /* TRANSPOSE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2017 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PLUS_PLUS: /* PLUS_PLUS  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2023 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_MINUS_MINUS: /* MINUS_MINUS  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2029 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_POW: /* POW  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2035 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EPOW: /* EPOW  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2041 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_NUMBER: /* NUMBER  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2047 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CONSTANT: /* CONSTANT  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2053 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_STRUCT_ELT: /* STRUCT_ELT  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2059 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_NAME: /* NAME  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2065 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_END: /* END  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2071 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_DQ_STRING: /* DQ_STRING  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2077 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SQ_STRING: /* SQ_STRING  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2083 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FOR: /* FOR  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2089 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PARFOR: /* PARFOR  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2095 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_WHILE: /* WHILE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2101 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_DO: /* DO  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2107 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_UNTIL: /* UNTIL  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2113 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SPMD: /* SPMD  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2119 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_IF: /* IF  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2125 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELSEIF: /* ELSEIF  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2131 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELSE: /* ELSE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2137 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SWITCH: /* SWITCH  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2143 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CASE: /* CASE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2149 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_OTHERWISE: /* OTHERWISE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2155 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_BREAK: /* BREAK  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2161 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CONTINUE: /* CONTINUE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2167 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_RETURN: /* RETURN  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2173 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_UNWIND: /* UNWIND  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2179 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CLEANUP: /* CLEANUP  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2185 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_TRY: /* TRY  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2191 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CATCH: /* CATCH  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2197 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_GLOBAL: /* GLOBAL  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2203 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PERSISTENT: /* PERSISTENT  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2209 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FCN_HANDLE: /* FCN_HANDLE  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2215 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CLASSDEF: /* CLASSDEF  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2221 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PROPERTIES: /* PROPERTIES  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2227 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_METHODS: /* METHODS  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2233 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EVENTS: /* EVENTS  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2239 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ENUMERATION: /* ENUMERATION  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2245 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_METAQUERY: /* METAQUERY  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2251 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SUPERCLASSREF: /* SUPERCLASSREF  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2257 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FQ_IDENT: /* FQ_IDENT  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2263 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_GET: /* GET  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2269 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SET: /* SET  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2275 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FUNCTION: /* FUNCTION  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2281 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ARGUMENTS: /* ARGUMENTS  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2287 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_LEXICAL_ERROR: /* LEXICAL_ERROR  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2293 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_END_OF_INPUT: /* END_OF_INPUT  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2299 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_UNARY: /* UNARY  */
#line 346 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2305 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_input: /* input  */
#line 350 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_type); }
#line 2311 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_simple_list: /* simple_list  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2317 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_simple_list1: /* simple_list1  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2323 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2329 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_list: /* opt_list  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2335 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_list: /* list  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2341 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_list1: /* list1  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2347 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_fcn_list: /* opt_fcn_list  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2353 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_list: /* fcn_list  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2359 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_list1: /* fcn_list1  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2365 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 374 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_type); }
#line 2371 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_word_list_cmd: /* word_list_cmd  */
#line 361 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_index_expression_type); }
#line 2377 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_word_list: /* word_list  */
#line 362 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2383 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 360 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2389 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass_identifier: /* superclass_identifier  */
#line 356 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_superclass_ref_type); }
#line 2395 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_meta_identifier: /* meta_identifier  */
#line 357 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_metaclass_query_type); }
#line 2401 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_string: /* string  */
#line 354 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_constant_type); }
#line 2407 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_constant: /* constant  */
#line 354 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_constant_type); }
#line 2413 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_matrix: /* matrix  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2419 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_matrix_rows: /* matrix_rows  */
#line 351 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_matrix_type); }
#line 2425 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_cell: /* cell  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2431 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_cell_rows: /* cell_rows  */
#line 352 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_cell_type); }
#line 2437 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_cell_or_matrix_row: /* cell_or_matrix_row  */
#line 362 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2443 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_handle: /* fcn_handle  */
#line 355 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_fcn_handle_type); }
#line 2449 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_anon_fcn_handle: /* anon_fcn_handle  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_anon_fcn_handle_type); }
#line 2455 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_primary_expr: /* primary_expr  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2461 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_magic_colon: /* magic_colon  */
#line 354 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_constant_type); }
#line 2467 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_magic_tilde: /* magic_tilde  */
#line 360 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2473 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arg_list: /* arg_list  */
#line 362 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2479 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_indirect_ref_op: /* indirect_ref_op  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2485 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_oper_expr: /* oper_expr  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2491 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_power_expr: /* power_expr  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2497 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_colon_expr: /* colon_expr  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2503 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_simple_expr: /* simple_expr  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2509 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_assign_lhs: /* assign_lhs  */
#line 362 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2515 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_assign_expr: /* assign_expr  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2521 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_expression: /* expression  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2527 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_command: /* command  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2533 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_declaration: /* declaration  */
#line 373 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_command_type); }
#line 2539 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_decl_init_list: /* decl_init_list  */
#line 372 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_init_list_type); }
#line 2545 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_decl_elt: /* decl_elt  */
#line 371 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_elt_type); }
#line 2551 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_select_command: /* select_command  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2557 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_if_command: /* if_command  */
#line 365 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_command_type); }
#line 2563 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_if_clause_list: /* if_clause_list  */
#line 367 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_command_list_type); }
#line 2569 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_if_clause: /* if_clause  */
#line 366 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_clause_type); }
#line 2575 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_elseif_clause: /* elseif_clause  */
#line 366 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_clause_type); }
#line 2581 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_else_clause: /* else_clause  */
#line 366 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_clause_type); }
#line 2587 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_switch_command: /* switch_command  */
#line 368 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_command_type); }
#line 2593 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_list_type); }
#line 2599 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_case_list1: /* case_list1  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_list_type); }
#line 2605 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_switch_case: /* switch_case  */
#line 369 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_type); }
#line 2611 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_default_case: /* default_case  */
#line 369 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_type); }
#line 2617 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_loop_command: /* loop_command  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2623 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_jump_command: /* jump_command  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2629 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_spmd_command: /* spmd_command  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2635 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_except_command: /* except_command  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2641 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list_beg: /* param_list_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2647 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list_end: /* param_list_end  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2653 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_param_list: /* opt_param_list  */
#line 363 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2659 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list: /* param_list  */
#line 363 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2665 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list1: /* param_list1  */
#line 363 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2671 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list2: /* param_list2  */
#line 363 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2677 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list_elt: /* param_list_elt  */
#line 371 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_elt_type); }
#line 2683 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_return_list: /* return_list  */
#line 363 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2689 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_return_list1: /* return_list1  */
#line 363 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2695 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_file: /* file  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2701 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function_beg: /* function_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2707 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_name: /* fcn_name  */
#line 360 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2713 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function_end: /* function_end  */
#line 374 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_type); }
#line 2719 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function: /* function  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_function_def_type); }
#line 2725 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function_body: /* function_body  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2731 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arguments_block_list: /* arguments_block_list  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2737 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arguments_block: /* arguments_block  */
#line 376 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arguments_block_type); }
#line 2743 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arguments_beg: /* arguments_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2749 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_args_attr_list: /* args_attr_list  */
#line 377 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_args_block_attribute_list_type); }
#line 2755 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_args_validation_list: /* args_validation_list  */
#line 378 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_args_block_validation_list_type); }
#line 2761 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arg_name: /* arg_name  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2767 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arg_validation: /* arg_validation  */
#line 379 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arg_validation_type); }
#line 2773 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_size_spec: /* size_spec  */
#line 380 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arg_size_spec_type); }
#line 2779 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_name: /* class_name  */
#line 360 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2785 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_validation_fcns: /* validation_fcns  */
#line 381 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arg_validation_fcns_type); }
#line 2791 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_classdef_beg: /* classdef_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2797 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_classdef: /* classdef  */
#line 384 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_type); }
#line 2803 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_attr_list: /* attr_list  */
#line 386 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_attribute_list_type); }
#line 2809 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_attr_list1: /* attr_list1  */
#line 386 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_attribute_list_type); }
#line 2815 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_attr: /* attr  */
#line 385 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_attribute_type); }
#line 2821 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass_list: /* superclass_list  */
#line 388 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_superclass_list_type); }
#line 2827 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass_list1: /* superclass_list1  */
#line 388 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_superclass_list_type); }
#line 2833 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass: /* superclass  */
#line 387 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_superclass_type); }
#line 2839 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_body: /* class_body  */
#line 389 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_body_type); }
#line 2845 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_body1: /* class_body1  */
#line 389 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_body_type); }
#line 2851 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_properties_block: /* properties_block  */
#line 392 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_properties_block_type); }
#line 2857 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_properties_beg: /* properties_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2863 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_property_list: /* property_list  */
#line 391 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_property_list_type); }
#line 2869 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_property_list1: /* property_list1  */
#line 391 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_property_list_type); }
#line 2875 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_property: /* class_property  */
#line 390 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_property_type); }
#line 2881 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_methods_block: /* methods_block  */
#line 394 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_methods_block_type); }
#line 2887 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_methods_beg: /* methods_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2893 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method_decl1: /* method_decl1  */
#line 382 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).octave_user_function_type); }
#line 2899 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method_decl: /* method_decl  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_function_def_type); }
#line 2905 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method: /* method  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_function_def_type); }
#line 2911 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method_list: /* method_list  */
#line 393 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_method_list_type); }
#line 2917 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method_list1: /* method_list1  */
#line 393 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_method_list_type); }
#line 2923 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_events_block: /* events_block  */
#line 397 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_events_block_type); }
#line 2929 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_events_beg: /* events_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2935 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_event_list: /* event_list  */
#line 396 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_event_list_type); }
#line 2941 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_event_list1: /* event_list1  */
#line 396 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_event_list_type); }
#line 2947 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_event: /* class_event  */
#line 395 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_event_type); }
#line 2953 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enum_block: /* enum_block  */
#line 400 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_block_type); }
#line 2959 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enumeration_beg: /* enumeration_beg  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2965 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enum_list: /* enum_list  */
#line 399 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_list_type); }
#line 2971 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enum_list1: /* enum_list1  */
#line 399 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_list_type); }
#line 2977 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_enum: /* class_enum  */
#line 398 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_type); }
#line 2983 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_sep_no_nl: /* sep_no_nl  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).sep_list_type); }
#line 2989 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_sep_no_nl: /* opt_sep_no_nl  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).sep_list_type); }
#line 2995 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_sep: /* sep  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).sep_list_type); }
#line 3001 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_sep: /* opt_sep  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).sep_list_type); }
#line 3007 "libinterp/parse-tree/oct-parse.cc"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}





int
yyparse (octave::base_parser& parser)
{
  yypstate *yyps = yypstate_new ();
  if (!yyps)
    {
      yyerror (parser, YY_("memory exhausted"));
      return 2;
    }
  int yystatus = yypull_parse (yyps, parser);
  yypstate_delete (yyps);
  return yystatus;
}

int
yypull_parse (yypstate *yyps, octave::base_parser& parser)
{
  YY_ASSERT (yyps);
  int yystatus;
  do {
    YYSTYPE yylval;
    int yychar = yylex (&yylval, scanner);
    yystatus = yypush_parse (yyps, yychar, &yylval, parser);
  } while (yystatus == YYPUSH_MORE);
  return yystatus;
}

#define octave_nerrs yyps->octave_nerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yystacksize yyps->yystacksize

/* Initialize the parser data structure.  */
static void
yypstate_clear (yypstate *yyps)
{
  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yyssp = yyss;
  yyvsp = yyvs;

  /* Initialize the state stack, in case yypcontext_expected_tokens is
     called before the first call to yyparse. */
  *yyssp = 0;
  yyps->yynew = 1;
}

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = YY_CAST (yypstate *, YYMALLOC (sizeof *yyps));
  if (!yyps)
    return YY_NULLPTR;
  yystacksize = YYINITDEPTH;
  yyss = yyssa;
  yyvs = yyvsa;
  yypstate_clear (yyps);
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
  if (yyps)
    {
#ifndef yyoverflow
      /* If the stack was reallocated but the parse did not complete, then the
         stack still needs to be freed.  */
      if (yyss != yyssa)
        YYSTACK_FREE (yyss);
#endif
      YYFREE (yyps);
    }
}



/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps,
              int yypushed_char, YYSTYPE const *yypushed_val, octave::base_parser& parser)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  switch (yyps->yynew)
    {
    case 0:
      yyn = yypact[yystate];
      goto yyread_pushed_token;

    case 2:
      yypstate_clear (yyps);
      break;

    default:
      break;
    }

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = OCTAVE_EMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == OCTAVE_EMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
    }

  if (yychar <= OCTAVE_EOF)
    {
      yychar = OCTAVE_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == OCTAVE_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = OCTAVE_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = OCTAVE_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: simple_list '\n'  */
#line 419 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok));

                    (yyval.tree_type) = nullptr;

                    if (! parser.finish_input ((yyvsp[-1].tree_statement_list_type)))
                      YYABORT;
                    else
                      YYACCEPT;
                  }
#line 3380 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 3: /* input: simple_list END_OF_INPUT  */
#line 430 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok));

                    (yyval.tree_type) = nullptr;

                    if (! parser.finish_input ((yyvsp[-1].tree_statement_list_type), true))
                      YYABORT;
                    else
                      YYACCEPT;
                  }
#line 3395 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 4: /* input: file  */
#line 441 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_end_of_input = true;

                    (yyval.tree_type) = (yyvsp[0].tree_command_type);
                    YYACCEPT;
                  }
#line 3406 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 5: /* input: parse_error  */
#line 448 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_type) = nullptr;
                    YYABORT;
                  }
#line 3415 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 6: /* simple_list: opt_sep_no_nl  */
#line 455 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: should we return an empty statement list
                    // with the separators attached?  For now, delete
                    // the unused list.
                    delete (yyvsp[0].sep_list_type);

                    (yyval.tree_statement_list_type) = nullptr;
                  }
#line 3428 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 7: /* simple_list: simple_list1 opt_sep_no_nl  */
#line 464 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_statement_list_type) = parser.set_stmt_print_flag ((yyvsp[-1].tree_statement_list_type), (yyvsp[0].sep_list_type), false);

                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);
                  }
#line 3440 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 8: /* simple_list1: statement  */
#line 474 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.make_statement_list ((yyvsp[0].tree_statement_type)); }
#line 3446 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 9: /* simple_list1: simple_list1 sep_no_nl statement  */
#line 476 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.append_statement_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].sep_list_type), (yyvsp[0].tree_statement_type), false); }
#line 3452 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 10: /* statement_list: opt_sep opt_list  */
#line 480 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_statement_list_type) = (yyvsp[0].tree_statement_list_type);
                  }
#line 3464 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 11: /* opt_list: %empty  */
#line 490 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = nullptr; }
#line 3470 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 12: /* opt_list: list  */
#line 492 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = (yyvsp[0].tree_statement_list_type); }
#line 3476 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 13: /* list: list1 opt_sep  */
#line 496 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_statement_list_type) = parser.set_stmt_print_flag ((yyvsp[-1].tree_statement_list_type), (yyvsp[0].sep_list_type), true);

                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);
                  }
#line 3488 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 14: /* list1: statement  */
#line 506 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.make_statement_list ((yyvsp[0].tree_statement_type)); }
#line 3494 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 15: /* list1: list1 sep statement  */
#line 508 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.append_statement_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].sep_list_type), (yyvsp[0].tree_statement_type), true); }
#line 3500 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 16: /* opt_fcn_list: %empty  */
#line 512 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = nullptr; }
#line 3506 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 17: /* opt_fcn_list: fcn_list  */
#line 514 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = (yyvsp[0].tree_statement_list_type); }
#line 3512 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 18: /* fcn_list: fcn_list1 opt_sep  */
#line 518 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    (yyval.tree_statement_list_type) = (yyvsp[-1].tree_statement_list_type);
                  }
#line 3524 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 19: /* fcn_list1: function  */
#line 528 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.make_function_def_list ((yyvsp[0].tree_function_def_type)); }
#line 3530 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 20: /* fcn_list1: fcn_list1 opt_sep function  */
#line 530 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.append_function_def_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].sep_list_type), (yyvsp[0].tree_function_def_type)); }
#line 3536 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 21: /* statement: expression  */
#line 534 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_type) = parser.make_statement ((yyvsp[0].tree_expression_type)); }
#line 3542 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 22: /* statement: command  */
#line 536 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_type) = parser.make_statement ((yyvsp[0].tree_command_type)); }
#line 3548 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 23: /* statement: word_list_cmd  */
#line 538 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_type) = parser.make_statement ((yyvsp[0].tree_index_expression_type)); }
#line 3554 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 24: /* word_list_cmd: identifier word_list  */
#line 550 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_index_expression_type) = parser.make_word_list_command ((yyvsp[-1].tree_identifier_type), (yyvsp[0].tree_argument_list_type))))
                      {
                        // make_index_expression deleted $1 and $2.
                        YYABORT;
                      }
                  }
#line 3566 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 25: /* word_list: string  */
#line 560 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_constant_type)); }
#line 3572 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 26: /* word_list: word_list string  */
#line 562 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-1].tree_argument_list_type), (yyvsp[0].tree_constant_type)); }
#line 3578 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 27: /* identifier: NAME  */
#line 570 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_identifier_type) = parser.make_identifier ((yyvsp[0].tok)); }
#line 3584 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 28: /* superclass_identifier: SUPERCLASSREF  */
#line 575 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_superclass_ref_type) = parser.make_superclass_ref ((yyvsp[0].tok)); }
#line 3590 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 29: /* meta_identifier: METAQUERY  */
#line 579 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_metaclass_query_type) = parser.make_metaclass_query ((yyvsp[0].tok)); }
#line 3596 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 30: /* string: DQ_STRING  */
#line 583 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok)); }
#line 3602 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 31: /* string: SQ_STRING  */
#line 585 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok)); }
#line 3608 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 32: /* constant: NUMBER  */
#line 589 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok)); }
#line 3614 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 33: /* constant: string  */
#line 591 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = (yyvsp[0].tree_constant_type); }
#line 3620 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 34: /* matrix: '[' matrix_rows ']'  */
#line 595 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.finish_matrix ((yyvsp[-2].tok), (yyvsp[-1].tree_matrix_type), (yyvsp[0].tok)); }
#line 3626 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 35: /* matrix_rows: cell_or_matrix_row  */
#line 599 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_matrix_type) = parser.make_matrix ((yyvsp[0].tree_argument_list_type)); }
#line 3632 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 36: /* matrix_rows: matrix_rows ';' cell_or_matrix_row  */
#line 601 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_matrix_type) = parser.append_matrix_row ((yyvsp[-2].tree_matrix_type), (yyvsp[-1].tok), (yyvsp[0].tree_argument_list_type)); }
#line 3638 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 37: /* cell: '{' cell_rows '}'  */
#line 605 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.finish_cell ((yyvsp[-2].tok), (yyvsp[-1].tree_cell_type), (yyvsp[0].tok)); }
#line 3644 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 38: /* cell_rows: cell_or_matrix_row  */
#line 609 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_cell_type) = parser.make_cell ((yyvsp[0].tree_argument_list_type)); }
#line 3650 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 39: /* cell_rows: cell_rows ';' cell_or_matrix_row  */
#line 611 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_cell_type) = parser.append_cell_row ((yyvsp[-2].tree_cell_type), (yyvsp[-1].tok), (yyvsp[0].tree_argument_list_type)); }
#line 3656 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 40: /* cell_or_matrix_row: %empty  */
#line 623 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = nullptr; }
#line 3662 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 41: /* cell_or_matrix_row: ','  */
#line 625 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator token info here.
                    OCTAVE_YYUSE ((yyvsp[0].tok));

                    (yyval.tree_argument_list_type) = nullptr;
                  }
#line 3673 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 42: /* cell_or_matrix_row: arg_list  */
#line 632 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = (yyvsp[0].tree_argument_list_type); }
#line 3679 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 43: /* cell_or_matrix_row: arg_list ','  */
#line 634 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator token info here.
                    OCTAVE_YYUSE ((yyvsp[0].tok));

                    (yyval.tree_argument_list_type) = (yyvsp[-1].tree_argument_list_type);
                  }
#line 3690 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 44: /* cell_or_matrix_row: ',' arg_list  */
#line 641 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator token info here.
                    OCTAVE_YYUSE ((yyvsp[-1].tok));

                    (yyval.tree_argument_list_type) = (yyvsp[0].tree_argument_list_type);
                  }
#line 3701 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 45: /* cell_or_matrix_row: ',' arg_list ','  */
#line 648 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator token info here.
                    OCTAVE_YYUSE ((yyvsp[-2].tok), (yyvsp[0].tok));

                    (yyval.tree_argument_list_type) = (yyvsp[-1].tree_argument_list_type);
                  }
#line 3712 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 46: /* fcn_handle: FCN_HANDLE  */
#line 657 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_fcn_handle_type) = parser.make_fcn_handle ((yyvsp[0].tok)); }
#line 3718 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 47: /* anon_fcn_handle: '@' param_list anon_fcn_begin expression  */
#line 665 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_anon_fcn_handle_type) = parser.make_anon_fcn_handle ((yyvsp[-3].tok), (yyvsp[-2].tree_parameter_list_type), (yyvsp[0].tree_expression_type))))
                      {
                        // make_anon_fcn_handle deleted $2 and $4.
                        YYABORT;
                      }

                    lexer.m_parsing_anon_fcn_body = false;
                    lexer.m_nesting_level.remove ();
                  }
#line 3733 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 48: /* anon_fcn_handle: '@' param_list anon_fcn_begin error  */
#line 676 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].tok), (yyvsp[-2].tree_parameter_list_type));

                    lexer.m_parsing_anon_fcn_body = false;

                    (yyval.tree_anon_fcn_handle_type) = nullptr;

                    parser.bison_error ("anonymous function bodies must be single expressions");
                    YYABORT;
                  }
#line 3748 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 49: /* primary_expr: identifier  */
#line 689 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_identifier_type); }
#line 3754 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 50: /* primary_expr: constant  */
#line 691 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_constant_type); }
#line 3760 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 51: /* primary_expr: fcn_handle  */
#line 693 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_fcn_handle_type); }
#line 3766 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 52: /* primary_expr: matrix  */
#line 695 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_matrix_or_assign_lhs = false;
                    (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                  }
#line 3775 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 53: /* primary_expr: cell  */
#line 700 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 3781 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 54: /* primary_expr: meta_identifier  */
#line 702 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_metaclass_query_type); }
#line 3787 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 55: /* primary_expr: superclass_identifier  */
#line 704 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_superclass_ref_type); }
#line 3793 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 56: /* primary_expr: '(' expression ')'  */
#line 706 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[-1].tree_expression_type)->mark_in_delims (*((yyvsp[-2].tok)), *((yyvsp[0].tok))); }
#line 3799 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 57: /* magic_colon: ':'  */
#line 710 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok)); }
#line 3805 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 58: /* magic_tilde: '~'  */
#line 714 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_identifier_type) = parser.make_black_hole ((yyvsp[0].tok)); }
#line 3811 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 59: /* arg_list: expression  */
#line 718 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_expression_type)); }
#line 3817 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 60: /* arg_list: magic_colon  */
#line 720 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_constant_type)); }
#line 3823 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 61: /* arg_list: magic_tilde  */
#line 722 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_identifier_type)); }
#line 3829 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 62: /* arg_list: arg_list ',' magic_colon  */
#line 724 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_constant_type)); }
#line 3835 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 63: /* arg_list: arg_list ',' magic_tilde  */
#line 726 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_identifier_type)); }
#line 3841 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 64: /* arg_list: arg_list ',' expression  */
#line 728 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3847 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 65: /* indirect_ref_op: '.'  */
#line 732 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_indirect_ref = true;
                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 3856 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 66: /* oper_expr: primary_expr  */
#line 739 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 3862 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 67: /* oper_expr: oper_expr PLUS_PLUS  */
#line 741 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op ((yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 3868 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 68: /* oper_expr: oper_expr MINUS_MINUS  */
#line 743 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op ((yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 3874 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 69: /* oper_expr: oper_expr '(' ')'  */
#line 745 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), nullptr, (yyvsp[0].tok), '(')))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 3886 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 70: /* oper_expr: oper_expr '(' arg_list ')'  */
#line 753 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-2].tok), (yyvsp[-1].tree_argument_list_type), (yyvsp[0].tok), '(')))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 3898 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 71: /* oper_expr: oper_expr '{' '}'  */
#line 761 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), nullptr, (yyvsp[0].tok), '{')))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 3910 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 72: /* oper_expr: oper_expr '{' arg_list '}'  */
#line 769 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-2].tok), (yyvsp[-1].tree_argument_list_type), (yyvsp[0].tok), '{')))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 3922 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 73: /* oper_expr: oper_expr HERMITIAN  */
#line 777 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op ((yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 3928 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 74: /* oper_expr: oper_expr TRANSPOSE  */
#line 779 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op ((yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 3934 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 75: /* oper_expr: oper_expr indirect_ref_op STRUCT_ELT  */
#line 781 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tok)); }
#line 3940 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 76: /* oper_expr: oper_expr indirect_ref_op '(' expression ')'  */
#line 783 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-4].tree_expression_type), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 3946 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 77: /* oper_expr: PLUS_PLUS oper_expr  */
#line 785 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3952 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 78: /* oper_expr: MINUS_MINUS oper_expr  */
#line 787 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3958 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 79: /* oper_expr: '~' oper_expr  */
#line 789 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3964 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 80: /* oper_expr: '!' oper_expr  */
#line 791 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3970 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 81: /* oper_expr: '+' oper_expr  */
#line 793 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3976 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 82: /* oper_expr: '-' oper_expr  */
#line 795 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3982 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 83: /* oper_expr: oper_expr POW power_expr  */
#line 797 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3988 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 84: /* oper_expr: oper_expr EPOW power_expr  */
#line 799 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 3994 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 85: /* oper_expr: oper_expr '+' oper_expr  */
#line 801 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4000 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 86: /* oper_expr: oper_expr '-' oper_expr  */
#line 803 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4006 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 87: /* oper_expr: oper_expr '*' oper_expr  */
#line 805 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4012 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 88: /* oper_expr: oper_expr '/' oper_expr  */
#line 807 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4018 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 89: /* oper_expr: oper_expr EMUL oper_expr  */
#line 809 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4024 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 90: /* oper_expr: oper_expr EDIV oper_expr  */
#line 811 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4030 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 91: /* oper_expr: oper_expr LEFTDIV oper_expr  */
#line 813 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4036 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 92: /* oper_expr: oper_expr ELEFTDIV oper_expr  */
#line 815 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4042 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 93: /* power_expr: primary_expr  */
#line 819 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 4048 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 94: /* power_expr: power_expr PLUS_PLUS  */
#line 821 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op ((yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 4054 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 95: /* power_expr: power_expr MINUS_MINUS  */
#line 823 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op ((yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 4060 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 96: /* power_expr: power_expr '(' ')'  */
#line 825 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), nullptr, (yyvsp[0].tok), '(')))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 4072 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 97: /* power_expr: power_expr '(' arg_list ')'  */
#line 833 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-2].tok), (yyvsp[-1].tree_argument_list_type), (yyvsp[0].tok), '(')))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 4084 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 98: /* power_expr: power_expr '{' '}'  */
#line 841 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), nullptr, (yyvsp[0].tok), '{')))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 4096 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 99: /* power_expr: power_expr '{' arg_list '}'  */
#line 849 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-2].tok), (yyvsp[-1].tree_argument_list_type), (yyvsp[0].tok), '{')))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 4108 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 100: /* power_expr: power_expr indirect_ref_op STRUCT_ELT  */
#line 857 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tok)); }
#line 4114 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 101: /* power_expr: power_expr indirect_ref_op '(' expression ')'  */
#line 859 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-4].tree_expression_type), (yyvsp[-3].tok), (yyvsp[-2].tok), (yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 4120 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 102: /* power_expr: PLUS_PLUS power_expr  */
#line 861 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4126 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 103: /* power_expr: MINUS_MINUS power_expr  */
#line 863 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4132 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 104: /* power_expr: '~' power_expr  */
#line 865 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4138 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 105: /* power_expr: '!' power_expr  */
#line 867 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4144 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 106: /* power_expr: '+' power_expr  */
#line 869 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4150 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 107: /* power_expr: '-' power_expr  */
#line 871 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ((yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4156 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 108: /* colon_expr: oper_expr ':' oper_expr  */
#line 875 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_colon_expression ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type))))
                      {
                        // make_colon_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 4168 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 109: /* colon_expr: oper_expr ':' oper_expr ':' oper_expr  */
#line 883 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_expression_type) = parser.make_colon_expression ((yyvsp[-4].tree_expression_type), (yyvsp[-3].tok), (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type))))
                      {
                        // make_colon_expression deleted $1, $3, and $5.
                        YYABORT;
                      }
                  }
#line 4180 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 110: /* simple_expr: oper_expr  */
#line 893 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 4186 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 111: /* simple_expr: colon_expr  */
#line 895 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 4192 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 112: /* simple_expr: simple_expr EXPR_LT simple_expr  */
#line 897 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4198 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 113: /* simple_expr: simple_expr EXPR_LE simple_expr  */
#line 899 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4204 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 114: /* simple_expr: simple_expr EXPR_EQ simple_expr  */
#line 901 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4210 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 115: /* simple_expr: simple_expr EXPR_GE simple_expr  */
#line 903 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4216 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 116: /* simple_expr: simple_expr EXPR_GT simple_expr  */
#line 905 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4222 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 117: /* simple_expr: simple_expr EXPR_NE simple_expr  */
#line 907 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4228 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 118: /* simple_expr: simple_expr EXPR_AND simple_expr  */
#line 909 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4234 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 119: /* simple_expr: simple_expr EXPR_OR simple_expr  */
#line 911 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4240 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 120: /* simple_expr: simple_expr EXPR_AND_AND simple_expr  */
#line 913 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_boolean_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4246 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 121: /* simple_expr: simple_expr EXPR_OR_OR simple_expr  */
#line 915 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_boolean_op ((yyvsp[-2].tree_expression_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4252 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 122: /* assign_lhs: simple_expr  */
#line 919 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_argument_list_type) = parser.validate_matrix_for_assignment ((yyvsp[0].tree_expression_type))))
                      {
                        // validate_matrix_for_assignment deleted $1.
                        YYABORT;
                      }

                    lexer.m_looking_at_matrix_or_assign_lhs = false;
                  }
#line 4266 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 123: /* assign_expr: assign_lhs '=' expression  */
#line 931 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4272 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 124: /* assign_expr: assign_lhs ADD_EQ expression  */
#line 933 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4278 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 125: /* assign_expr: assign_lhs SUB_EQ expression  */
#line 935 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4284 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 126: /* assign_expr: assign_lhs MUL_EQ expression  */
#line 937 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4290 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 127: /* assign_expr: assign_lhs DIV_EQ expression  */
#line 939 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4296 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 128: /* assign_expr: assign_lhs LEFTDIV_EQ expression  */
#line 941 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4302 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 129: /* assign_expr: assign_lhs POW_EQ expression  */
#line 943 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4308 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 130: /* assign_expr: assign_lhs EMUL_EQ expression  */
#line 945 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4314 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 131: /* assign_expr: assign_lhs EDIV_EQ expression  */
#line 947 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4320 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 132: /* assign_expr: assign_lhs ELEFTDIV_EQ expression  */
#line 949 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4326 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 133: /* assign_expr: assign_lhs EPOW_EQ expression  */
#line 951 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4332 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 134: /* assign_expr: assign_lhs AND_EQ expression  */
#line 953 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4338 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 135: /* assign_expr: assign_lhs OR_EQ expression  */
#line 955 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ((yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4344 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 136: /* expression: simple_expr  */
#line 959 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if ((yyvsp[0].tree_expression_type) && ((yyvsp[0].tree_expression_type)->is_matrix () || (yyvsp[0].tree_expression_type)->iscell ()))
                      {
                        if (parser.validate_array_list ((yyvsp[0].tree_expression_type)))
                          (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                        else
                          {
                            delete (yyvsp[0].tree_expression_type);
                            YYABORT;
                          }
                      }
                    else
                      (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                  }
#line 4363 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 137: /* expression: assign_expr  */
#line 974 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! (yyvsp[0].tree_expression_type))
                      YYABORT;

                    (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                  }
#line 4374 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 138: /* expression: anon_fcn_handle  */
#line 981 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_anon_fcn_handle_type); }
#line 4380 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 139: /* command: declaration  */
#line 989 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_decl_command_type); }
#line 4386 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 140: /* command: select_command  */
#line 991 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4392 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 141: /* command: loop_command  */
#line 993 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4398 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 142: /* command: jump_command  */
#line 995 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4404 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 143: /* command: spmd_command  */
#line 997 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4410 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 144: /* command: except_command  */
#line 999 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4416 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 145: /* command: function  */
#line 1001 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_function_def_type); }
#line 4422 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 146: /* declaration: GLOBAL decl_init_list  */
#line 1009 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_decl_command_type) = parser.make_decl_command ((yyvsp[-1].tok), (yyvsp[0].tree_decl_init_list_type));
                    lexer.m_looking_at_decl_list = false;
                  }
#line 4431 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 147: /* declaration: PERSISTENT decl_init_list  */
#line 1014 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_decl_command_type) = parser.make_decl_command ((yyvsp[-1].tok), (yyvsp[0].tree_decl_init_list_type));
                    lexer.m_looking_at_decl_list = false;
                  }
#line 4440 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 148: /* decl_init_list: decl_elt  */
#line 1021 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_init_list_type) = parser.make_decl_init_list ((yyvsp[0].tree_decl_elt_type)); }
#line 4446 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 149: /* decl_init_list: decl_init_list decl_elt  */
#line 1023 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_init_list_type) = parser.append_decl_init_list ((yyvsp[-1].tree_decl_init_list_type), (yyvsp[0].tree_decl_elt_type)); }
#line 4452 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 150: /* decl_elt: identifier  */
#line 1027 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = parser.make_decl_elt ((yyvsp[0].tree_identifier_type)); }
#line 4458 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 151: /* decl_elt: identifier '=' expression  */
#line 1029 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = parser.make_decl_elt ((yyvsp[-2].tree_identifier_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 4464 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 152: /* select_command: if_command  */
#line 1037 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_if_command_type); }
#line 4470 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 153: /* select_command: switch_command  */
#line 1039 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_switch_command_type); }
#line 4476 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 154: /* if_command: if_clause_list else_clause END  */
#line 1047 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_if_command_type) = parser.finish_if_command ((yyvsp[-2].tree_if_command_list_type), (yyvsp[-1].tree_if_clause_type), (yyvsp[0].tok))))
                      {
                        // finish_if_command deleted $1 and $2.
                        YYABORT;
                      }
                  }
#line 4488 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 155: /* if_clause_list: if_clause  */
#line 1057 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_command_list_type) = parser.start_if_command ((yyvsp[0].tree_if_clause_type)); }
#line 4494 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 156: /* if_clause_list: if_clause_list elseif_clause  */
#line 1059 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_command_list_type) = parser.append_if_clause ((yyvsp[-1].tree_if_command_list_type), (yyvsp[0].tree_if_clause_type)); }
#line 4500 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 157: /* if_clause: IF opt_sep expression stmt_begin statement_list  */
#line 1063 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_clause_type) = parser.make_if_clause ((yyvsp[-4].tok), (yyvsp[-3].sep_list_type), (yyvsp[-2].tree_expression_type), (yyvsp[0].tree_statement_list_type)); }
#line 4506 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 158: /* elseif_clause: ELSEIF opt_sep expression stmt_begin statement_list  */
#line 1067 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_clause_type) = parser.make_if_clause ((yyvsp[-4].tok), (yyvsp[-3].sep_list_type), (yyvsp[-2].tree_expression_type), (yyvsp[0].tree_statement_list_type)); }
#line 4512 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 159: /* else_clause: %empty  */
#line 1071 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_clause_type) = nullptr; }
#line 4518 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 160: /* else_clause: ELSE statement_list  */
#line 1073 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_clause_type) = parser.make_if_clause ((yyvsp[-1].tok), nullptr, nullptr, (yyvsp[0].tree_statement_list_type)); }
#line 4524 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 161: /* switch_command: SWITCH expression opt_sep case_list END  */
#line 1081 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-2].sep_list_type);

                    if (! ((yyval.tree_switch_command_type) = parser.finish_switch_command ((yyvsp[-4].tok), (yyvsp[-3].tree_expression_type), (yyvsp[-1].tree_switch_case_list_type), (yyvsp[0].tok))))
                      {
                        // finish_switch_command deleted $2 and $4.
                        YYABORT;
                      }
                  }
#line 4540 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 162: /* case_list: %empty  */
#line 1095 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = nullptr; }
#line 4546 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 163: /* case_list: default_case  */
#line 1097 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.make_switch_case_list ((yyvsp[0].tree_switch_case_type)); }
#line 4552 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 164: /* case_list: case_list1  */
#line 1099 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = (yyvsp[0].tree_switch_case_list_type); }
#line 4558 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 165: /* case_list: case_list1 default_case  */
#line 1101 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.append_switch_case ((yyvsp[-1].tree_switch_case_list_type), (yyvsp[0].tree_switch_case_type)); }
#line 4564 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 166: /* case_list1: switch_case  */
#line 1105 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.make_switch_case_list ((yyvsp[0].tree_switch_case_type)); }
#line 4570 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 167: /* case_list1: case_list1 switch_case  */
#line 1107 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.append_switch_case ((yyvsp[-1].tree_switch_case_list_type), (yyvsp[0].tree_switch_case_type)); }
#line 4576 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 168: /* switch_case: CASE opt_sep expression stmt_begin statement_list  */
#line 1111 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-3].sep_list_type);

                    (yyval.tree_switch_case_type) = parser.make_switch_case ((yyvsp[-4].tok), (yyvsp[-2].tree_expression_type), (yyvsp[0].tree_statement_list_type));
                  }
#line 4588 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 169: /* default_case: OTHERWISE statement_list  */
#line 1121 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_type) = parser.make_default_switch_case ((yyvsp[-1].tok), (yyvsp[0].tree_statement_list_type)); }
#line 4594 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 170: /* loop_command: WHILE expression stmt_begin statement_list END  */
#line 1129 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    parser.maybe_convert_to_braindead_shortcircuit ((yyvsp[-3].tree_expression_type));

                    if (! ((yyval.tree_command_type) = parser.make_while_command ((yyvsp[-4].tok), (yyvsp[-3].tree_expression_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_while_command deleted $2 and $4.
                        YYABORT;
                      }
                  }
#line 4608 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 171: /* loop_command: DO statement_list UNTIL expression  */
#line 1139 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_command_type) = parser.make_do_until_command ((yyvsp[-3].tok), (yyvsp[-2].tree_statement_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type));
                  }
#line 4616 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 172: /* loop_command: FOR assign_lhs '=' expression stmt_begin statement_list END  */
#line 1143 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_for_command ((yyvsp[-6].tok), nullptr, (yyvsp[-5].tree_argument_list_type), (yyvsp[-4].tok), (yyvsp[-3].tree_expression_type), nullptr, nullptr, nullptr, (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_for_command deleted $2, $4, and $6.
                        YYABORT;
                      }
                  }
#line 4628 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 173: /* loop_command: FOR '(' assign_lhs '=' expression ')' statement_list END  */
#line 1151 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture token info here.
                    OCTAVE_YYUSE ((yyvsp[-6].tok), (yyvsp[-4].tok), (yyvsp[-2].tok));

                    if (! ((yyval.tree_command_type) = parser.make_for_command ((yyvsp[-7].tok), (yyvsp[-6].tok), (yyvsp[-5].tree_argument_list_type), (yyvsp[-4].tok), (yyvsp[-3].tree_expression_type), nullptr, nullptr, (yyvsp[-2].tok), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_for_command deleted $3, $5, and $7.
                        YYABORT;
                      }
                  }
#line 4643 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 174: /* loop_command: PARFOR assign_lhs '=' expression stmt_begin statement_list END  */
#line 1162 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture token info here.
                    OCTAVE_YYUSE ((yyvsp[-4].tok));

                    if (! ((yyval.tree_command_type) = parser.make_for_command ((yyvsp[-6].tok), nullptr, (yyvsp[-5].tree_argument_list_type), (yyvsp[-4].tok), (yyvsp[-3].tree_expression_type), nullptr, nullptr, nullptr, (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_for_command deleted $2, $4, and $6.
                        YYABORT;
                      }
                  }
#line 4658 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 175: /* loop_command: PARFOR '(' assign_lhs '=' expression ',' expression ')' statement_list END  */
#line 1173 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture token info here.
                    OCTAVE_YYUSE ((yyvsp[-8].tok), (yyvsp[-6].tok), (yyvsp[-4].tok), (yyvsp[-2].tok));

                    if (! ((yyval.tree_command_type) = parser.make_for_command ((yyvsp[-9].tok), (yyvsp[-8].tok), (yyvsp[-7].tree_argument_list_type), (yyvsp[-6].tok), (yyvsp[-5].tree_expression_type), (yyvsp[-4].tok), (yyvsp[-3].tree_expression_type), (yyvsp[-2].tok), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_for_command deleted $3, $5, $7, and $9.
                        YYABORT;
                      }
                  }
#line 4673 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 176: /* jump_command: BREAK  */
#line 1190 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_break_command ((yyvsp[0].tok))))
                      YYABORT;
                  }
#line 4682 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 177: /* jump_command: CONTINUE  */
#line 1195 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_continue_command ((yyvsp[0].tok))))
                      YYABORT;
                  }
#line 4691 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 178: /* jump_command: RETURN  */
#line 1200 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = parser.make_return_command ((yyvsp[0].tok)); }
#line 4697 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 179: /* spmd_command: SPMD statement_list END  */
#line 1208 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_spmd_command ((yyvsp[-2].tok), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_spmd_command deleted $2.
                        YYABORT;
                      }
                  }
#line 4709 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 180: /* except_command: UNWIND statement_list CLEANUP statement_list END  */
#line 1222 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_unwind_command ((yyvsp[-4].tok), (yyvsp[-3].tree_statement_list_type), (yyvsp[-2].tok), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_unwind_command deleted $2 and $4.
                        YYABORT;
                      }
                  }
#line 4721 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 181: /* except_command: TRY statement_list CATCH opt_sep opt_list END  */
#line 1230 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_try_command ((yyvsp[-5].tok), (yyvsp[-4].tree_statement_list_type), (yyvsp[-3].tok), (yyvsp[-2].sep_list_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok))))
                      {
                        // make_try_command deleted $2, $4, and $5.
                        YYABORT;
                      }
                  }
#line 4733 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 182: /* except_command: TRY statement_list END  */
#line 1238 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_try_command ((yyvsp[-2].tok), (yyvsp[-1].tree_statement_list_type), nullptr, nullptr, nullptr, (yyvsp[0].tok))))
                      {
                        // make_try_command deleted $2.
                        YYABORT;
                      }
                  }
#line 4745 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 183: /* push_fcn_symtab: %empty  */
#line 1252 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! parser.push_fcn_symtab ())
                      YYABORT;

                    (yyval.dummy_type) = 0;
                  }
#line 4756 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 184: /* param_list_beg: '('  */
#line 1265 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_parameter_list = true;
                    lexer.m_arguments_is_keyword = false;

                    if (lexer.m_looking_at_function_handle)
                      {
                        // Will get a real name later.
                        lexer.m_symtab_context.push (octave::symbol_scope ("parser:param_list_beg"));
                        lexer.m_looking_at_function_handle--;
                        lexer.m_looking_at_anon_fcn_args = true;
                      }

                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 4775 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 185: /* param_list_end: ')'  */
#line 1282 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_parameter_list = false;
                    lexer.m_arguments_is_keyword = true;
                    lexer.m_looking_for_object_index = false;
                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 4786 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 186: /* opt_param_list: %empty  */
#line 1291 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = nullptr; }
#line 4792 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 187: /* opt_param_list: param_list  */
#line 1293 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = (yyvsp[0].tree_parameter_list_type); }
#line 4798 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 188: /* param_list: param_list_beg param_list1 param_list_end  */
#line 1297 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if ((yyvsp[-1].tree_parameter_list_type))
                      lexer.mark_as_variables ((yyvsp[-1].tree_parameter_list_type)->variable_names ());

                    (yyval.tree_parameter_list_type) = (yyvsp[-1].tree_parameter_list_type)->mark_in_delims (*((yyvsp[-2].tok)), *((yyvsp[0].tok)));
                  }
#line 4809 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 189: /* param_list: param_list_beg error  */
#line 1304 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok));

                    (yyval.tree_parameter_list_type) = nullptr;

                    parser.bison_error ("invalid parameter list");
                    YYABORT;
                  }
#line 4822 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 190: /* param_list1: %empty  */
#line 1315 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = parser.make_parameter_list (octave::tree_parameter_list::in); }
#line 4828 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 191: /* param_list1: param_list2  */
#line 1317 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyvsp[0].tree_parameter_list_type)->mark_as_formal_parameters ();

                    if (parser.validate_param_list ((yyvsp[0].tree_parameter_list_type), octave::tree_parameter_list::in))
                      {
                        lexer.mark_as_variables ((yyvsp[0].tree_parameter_list_type)->variable_names ());
                        (yyval.tree_parameter_list_type) = (yyvsp[0].tree_parameter_list_type);
                      }
                    else
                      {
                        delete (yyvsp[0].tree_parameter_list_type);
                        YYABORT;
                      }
                  }
#line 4847 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 192: /* param_list2: param_list_elt  */
#line 1334 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = parser.make_parameter_list (octave::tree_parameter_list::in, (yyvsp[0].tree_decl_elt_type)); }
#line 4853 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 193: /* param_list2: param_list2 ',' param_list_elt  */
#line 1336 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = parser.append_parameter_list ((yyvsp[-2].tree_parameter_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_decl_elt_type)); }
#line 4859 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 194: /* param_list_elt: decl_elt  */
#line 1340 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = (yyvsp[0].tree_decl_elt_type); }
#line 4865 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 195: /* param_list_elt: magic_tilde  */
#line 1342 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = parser.make_decl_elt ((yyvsp[0].tree_identifier_type)); }
#line 4871 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 196: /* return_list: '[' ']'  */
#line 1350 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_return_list = false;

                    octave::tree_parameter_list *tmp = parser.make_parameter_list (octave::tree_parameter_list::out);

                    (yyval.tree_parameter_list_type) = tmp->mark_in_delims (*((yyvsp[-1].tok)), *((yyvsp[0].tok)));
                  }
#line 4883 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 197: /* return_list: identifier  */
#line 1358 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_return_list = false;

                    octave::tree_parameter_list *tmp = parser.make_parameter_list (octave::tree_parameter_list::out, (yyvsp[0].tree_identifier_type));

                    // Even though this parameter list can contain only
                    // a single identifier, we still need to validate it
                    // to check for varargin or varargout.

                    if (parser.validate_param_list (tmp, octave::tree_parameter_list::out))
                      (yyval.tree_parameter_list_type) = tmp;
                    else
                      {
                        delete tmp;
                        YYABORT;
                      }
                  }
#line 4905 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 198: /* return_list: '[' return_list1 ']'  */
#line 1376 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_return_list = false;

                    // Check for duplicate parameter names, varargin,
                    // or varargout.

                    if (parser.validate_param_list ((yyvsp[-1].tree_parameter_list_type), octave::tree_parameter_list::out))
                      (yyval.tree_parameter_list_type) = (yyvsp[-1].tree_parameter_list_type)->mark_in_delims (*((yyvsp[-2].tok)), *((yyvsp[0].tok)));
                    else
                      {
                        delete (yyvsp[-1].tree_parameter_list_type);
                        YYABORT;
                      }
                  }
#line 4924 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 199: /* return_list1: identifier  */
#line 1393 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = parser.make_parameter_list (octave::tree_parameter_list::out, (yyvsp[0].tree_identifier_type)); }
#line 4930 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 200: /* return_list1: return_list1 ',' identifier  */
#line 1395 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = parser.append_parameter_list ((yyvsp[-2].tree_parameter_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_identifier_type)); }
#line 4936 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 201: /* parsing_local_fcns: %empty  */
#line 1404 "../libinterp/parse-tree/oct-parse.yy"
                  { parser.parsing_local_functions (true); }
#line 4942 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 202: /* push_script_symtab: %empty  */
#line 1408 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;

                    // This scope may serve as the parent scope for local
                    // functions in classdef files..
                    lexer.m_symtab_context.push (octave::symbol_scope ("parser:push_script_symtab"));
                  }
#line 4954 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 203: /* begin_file: push_script_symtab INPUT_FILE  */
#line 1418 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.dummy_type) = 0; }
#line 4960 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 204: /* file: begin_file statement_list END_OF_INPUT  */
#line 1422 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (lexer.m_reading_fcn_file)
                      {
                        // Delete the dummy statement_list we created
                        // after parsing the function.  Any function
                        // definitions found in the file have already
                        // been stored in the symbol table or in
                        // base_parser::m_primary_fcn.

                        // Unused symbol table context.
                        lexer.m_symtab_context.pop ();

                        delete (yyvsp[-1].tree_statement_list_type);
                      }
                    else
                      {
                        octave::tree_statement *end_of_script = parser.make_end ("endscript", true, (yyvsp[0].tok));

                        parser.make_script ((yyvsp[-1].tree_statement_list_type), end_of_script);
                      }

                    if (! parser.validate_primary_fcn ())
                      YYABORT;

                    (yyval.tree_command_type) = nullptr;
                  }
#line 4991 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 205: /* file: begin_file opt_sep classdef parsing_local_fcns opt_sep opt_fcn_list END_OF_INPUT  */
#line 1449 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // We need to skip whitespace before the classdef
                    // keyword.  The opt_sep rule is more liberal than
                    // we need to be because it accepts ';' and ',' in
                    // addition to '\n', but we need to use it to avoid
                    // creating a reduce/reduce conflict with the rule
                    // above.  Matching the extra ';' and ',' characters
                    // doesn't cause trouble because the lexer ensures
                    // that classdef is the first token in the file.

                    // FIXME: Need to capture separator lists here.
                    // For now, delete the unused lists.
                    delete (yyvsp[-5].sep_list_type);
                    delete (yyvsp[-2].sep_list_type);

                    // Unused symbol table context.
                    lexer.m_symtab_context.pop ();

                    if (! parser.finish_classdef_file ((yyvsp[-4].tree_classdef_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok)))
                      YYABORT;

                    (yyval.tree_command_type) = nullptr;
                  }
#line 5019 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 206: /* function_beg: push_fcn_symtab FUNCTION  */
#line 1479 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (lexer.m_reading_classdef_file || lexer.m_parsing_classdef)
                      lexer.m_maybe_classdef_get_set_method = true;

                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 5030 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 207: /* fcn_name: identifier  */
#line 1488 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_identifier_type) = parser.make_fcn_name ((yyvsp[0].tree_identifier_type))))
                      {
                        // make_fcn_name deleted $1.
                        YYABORT;
                      }

                    lexer.m_arguments_is_keyword = true;
                  }
#line 5044 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 208: /* fcn_name: GET '.' identifier  */
#line 1498 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_identifier_type) = (yyvsp[0].tree_identifier_type)->mark_get_set (*((yyvsp[-2].tok)), *((yyvsp[-1].tok)));

                    lexer.m_parsed_function_name.top () = true;
                    lexer.m_maybe_classdef_get_set_method = false;
                    lexer.m_parsing_classdef_get_method = true;
                    lexer.m_arguments_is_keyword = true;
                  }
#line 5057 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 209: /* fcn_name: SET '.' identifier  */
#line 1507 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_identifier_type) = (yyvsp[0].tree_identifier_type)->mark_get_set (*((yyvsp[-2].tok)), *((yyvsp[-1].tok)));

                    lexer.m_parsed_function_name.top () = true;
                    lexer.m_maybe_classdef_get_set_method = false;
                    lexer.m_parsing_classdef_set_method = true;
                    lexer.m_arguments_is_keyword = true;
                  }
#line 5070 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 210: /* function_end: END  */
#line 1518 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    parser.endfunction_found (true);

                    if (parser.end_token_ok ((yyvsp[0].tok), octave::token::function_end))
                      (yyval.tree_statement_type) = parser.make_end ("endfunction", false, (yyvsp[0].tok));
                    else
                      {
                        parser.end_token_error ((yyvsp[0].tok), octave::token::function_end);
                        YYABORT;
                      }
                  }
#line 5086 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 211: /* function_end: END_OF_INPUT  */
#line 1530 "../libinterp/parse-tree/oct-parse.yy"
                  {
// A lot of tests are based on the assumption that this is OK
//                  if (lexer.m_reading_script_file)
//                    {
//                      parser.bison_error ("function body open at end of script");
//                      YYABORT;
//                    }

                    if (parser.endfunction_found ())
                      {
                        parser.bison_error ("inconsistent function endings -- "
                                 "if one function is explicitly ended, "
                                 "so must all the others");
                        YYABORT;
                      }

                    if (! (lexer.m_reading_fcn_file || lexer.m_reading_script_file
                           || lexer.input_from_eval_string ()))
                      {
                        parser.bison_error ("function body open at end of input");
                        YYABORT;
                      }

                    if (lexer.m_reading_classdef_file)
                      {
                        parser.bison_error ("classdef body open at end of input");
                        YYABORT;
                      }

                    (yyval.tree_statement_type) = parser.make_end ("endfunction", true, (yyvsp[0].tok));
                  }
#line 5122 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 212: /* function: function_beg fcn_name opt_param_list function_body function_end  */
#line 1564 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_function_def_type) = parser.make_function ((yyvsp[-4].tok), nullptr, nullptr, (yyvsp[-3].tree_identifier_type), (yyvsp[-2].tree_parameter_list_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tree_statement_type));
                  }
#line 5130 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 213: /* function: function_beg return_list '=' fcn_name opt_param_list function_body function_end  */
#line 1568 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_function_def_type) = parser.make_function ((yyvsp[-6].tok), (yyvsp[-5].tree_parameter_list_type), (yyvsp[-4].tok), (yyvsp[-3].tree_identifier_type), (yyvsp[-2].tree_parameter_list_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tree_statement_type));
                  }
#line 5138 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 214: /* function_body: statement_list  */
#line 1574 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_statement_list_type) = (yyvsp[0].tree_statement_list_type);
                  }
#line 5146 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 215: /* function_body: opt_sep arguments_block_list statement_list  */
#line 1578 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-2].sep_list_type);

                    (yyval.tree_statement_list_type) = parser.append_function_body ((yyvsp[-1].tree_statement_list_type), (yyvsp[0].tree_statement_list_type));
                  }
#line 5158 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 216: /* arguments_block_list: arguments_block  */
#line 1589 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    octave::tree_statement *stmt = parser.make_statement ((yyvsp[0].tree_arguments_block_type));

                    (yyval.tree_statement_list_type) = parser.make_statement_list (stmt);
                  }
#line 5168 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 217: /* arguments_block_list: arguments_block_list opt_sep arguments_block  */
#line 1595 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    octave::tree_statement *stmt = parser.make_statement ((yyvsp[0].tree_arguments_block_type));

                    (yyval.tree_statement_list_type) = parser.append_statement_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].sep_list_type), stmt, false);
                  }
#line 5178 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 218: /* arguments_block: arguments_beg opt_sep args_attr_list args_validation_list opt_sep END  */
#line 1603 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused lists.
                    delete (yyvsp[-4].sep_list_type);
                    delete (yyvsp[-1].sep_list_type);

                    if (! ((yyval.tree_arguments_block_type) = parser.make_arguments_block ((yyvsp[-5].tok), (yyvsp[-3].tree_args_block_attribute_list_type), (yyvsp[-2].tree_args_block_validation_list_type), (yyvsp[0].tok))))
                      {
                        // make_arguments_block deleted $3, and $4.
                        YYABORT;
                      }

                    lexer.m_arguments_is_keyword = true;
                  }
#line 5197 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 219: /* arguments_beg: ARGUMENTS  */
#line 1620 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tok) = (yyvsp[0].tok);

                    lexer.m_arguments_is_keyword = false;
                  }
#line 5207 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 220: /* args_attr_list: %empty  */
#line 1628 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_args_block_attribute_list_type) = nullptr; }
#line 5213 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 221: /* args_attr_list: '(' identifier ')'  */
#line 1630 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyvsp[-1].tree_identifier_type)->mark_in_delims (*((yyvsp[-2].tok)), *((yyvsp[0].tok)));

                    // Error if $$ is nullptr.
                    if  (! ((yyval.tree_args_block_attribute_list_type) = parser.make_args_attribute_list ((yyvsp[-1].tree_identifier_type))))
                      {
                        // make_args_attribute_list deleted $2.
                        YYABORT;
                      }
                  }
#line 5228 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 222: /* args_validation_list: arg_name arg_validation  */
#line 1644 "../libinterp/parse-tree/oct-parse.yy"
                    {
                      (yyvsp[0].tree_arg_validation_type)->arg_name ((yyvsp[-1].tree_expression_type));
                      (yyval.tree_args_block_validation_list_type) = parser.make_args_validation_list ((yyvsp[0].tree_arg_validation_type));
                    }
#line 5237 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 223: /* args_validation_list: args_validation_list sep arg_name arg_validation  */
#line 1649 "../libinterp/parse-tree/oct-parse.yy"
                    {
                      // FIXME: Need to capture SEP here.
                      // For now, delete the unused list.
                      delete (yyvsp[-2].sep_list_type);

                      (yyvsp[0].tree_arg_validation_type)->arg_name ((yyvsp[-1].tree_expression_type));
                      (yyval.tree_args_block_validation_list_type) = parser.append_args_validation_list ((yyvsp[-3].tree_args_block_validation_list_type), (yyvsp[0].tree_arg_validation_type));
                    }
#line 5250 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 224: /* arg_name: identifier  */
#line 1664 "../libinterp/parse-tree/oct-parse.yy"
                    { (yyval.tree_expression_type) = (yyvsp[0].tree_identifier_type); }
#line 5256 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 225: /* arg_validation: size_spec class_name validation_fcns  */
#line 1668 "../libinterp/parse-tree/oct-parse.yy"
                    {
                      if (! ((yyval.tree_arg_validation_type) = parser.make_arg_validation ((yyvsp[-2].tree_arg_size_spec_type), (yyvsp[-1].tree_identifier_type), (yyvsp[0].tree_arg_validation_fcns_type))))
                        {
                          // make_arg_validation deleted ...
                          YYABORT;
                        }
                    }
#line 5268 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 226: /* arg_validation: size_spec class_name validation_fcns '=' expression  */
#line 1676 "../libinterp/parse-tree/oct-parse.yy"
                    {
                      if (! ((yyval.tree_arg_validation_type) = parser.make_arg_validation ((yyvsp[-4].tree_arg_size_spec_type), (yyvsp[-3].tree_identifier_type), (yyvsp[-2].tree_arg_validation_fcns_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type))))
                        {
                          // make_arg_validation deleted ...
                          YYABORT;
                        }
                    }
#line 5280 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 227: /* size_spec: %empty  */
#line 1686 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_arg_size_spec_type) = nullptr; }
#line 5286 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 228: /* size_spec: '(' arg_list ')'  */
#line 1688 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyvsp[-1].tree_argument_list_type)->mark_in_delims (*((yyvsp[-2].tok)), *((yyvsp[0].tok)));

                    if (! ((yyval.tree_arg_size_spec_type) = parser.make_arg_size_spec ((yyvsp[-1].tree_argument_list_type))))
                      {
                        // make_arg_size_spec deleted $2.
                        YYABORT;
                      }
                  }
#line 5300 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 229: /* class_name: %empty  */
#line 1700 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_identifier_type) = nullptr; }
#line 5306 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 230: /* class_name: identifier  */
#line 1702 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_identifier_type) = (yyvsp[0].tree_identifier_type); }
#line 5312 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 231: /* validation_fcns: %empty  */
#line 1707 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_arg_validation_fcns_type) = nullptr; }
#line 5318 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 232: /* validation_fcns: '{' arg_list '}'  */
#line 1709 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyvsp[-1].tree_argument_list_type)->mark_in_delims (*((yyvsp[-2].tok)), *((yyvsp[0].tok)));

                    if (! ((yyval.tree_arg_validation_fcns_type) = parser.make_arg_validation_fcns ((yyvsp[-1].tree_argument_list_type))))
                      {
                        // make_arg_validation_fcns deleted $2.
                        YYABORT;
                      }
                  }
#line 5332 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 233: /* classdef_beg: CLASSDEF  */
#line 1725 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! lexer.m_reading_classdef_file)
                      {
                        parser.bison_error ("classdef must appear inside a file containing only a class definition");
                        YYABORT;
                      }

                    // Create invalid parent scope.
                    lexer.m_symtab_context.push (octave::symbol_scope::anonymous ());
                    lexer.m_parsing_classdef = true;
                    lexer.m_parsing_classdef_decl = true;
                    lexer.m_classdef_element_names_are_keywords = true;

                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 5352 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 234: /* classdef: classdef_beg attr_list identifier opt_sep superclass_list class_body END  */
#line 1743 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-3].sep_list_type);

                    lexer.m_parsing_classdef = false;

                    if (! ((yyval.tree_classdef_type) = parser.make_classdef ((yyvsp[-6].tok), (yyvsp[-5].tree_classdef_attribute_list_type), (yyvsp[-4].tree_identifier_type), (yyvsp[-2].tree_classdef_superclass_list_type), (yyvsp[-1].tree_classdef_body_type), (yyvsp[0].tok))))
                      {
                        // make_classdef deleted $2, $3, $5, $6
                        YYABORT;
                      }
                  }
#line 5370 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 235: /* attr_list: %empty  */
#line 1759 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_list_type) = nullptr; }
#line 5376 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 236: /* attr_list: '(' attr_list1 ')' opt_sep  */
#line 1761 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    (yyval.tree_classdef_attribute_list_type) = (yyvsp[-2].tree_classdef_attribute_list_type)->mark_in_delims (*((yyvsp[-3].tok)), *((yyvsp[-1].tok)));
                  }
#line 5388 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 237: /* attr_list1: attr  */
#line 1771 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_list_type) = parser.make_classdef_attribute_list ((yyvsp[0].tree_classdef_attribute_type)); }
#line 5394 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 238: /* attr_list1: attr_list1 ',' attr  */
#line 1773 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_list_type) = parser.append_classdef_attribute ((yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_classdef_attribute_type)); }
#line 5400 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 239: /* attr: identifier  */
#line 1777 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_type) = parser.make_classdef_attribute ((yyvsp[0].tree_identifier_type)); }
#line 5406 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 240: /* attr: identifier '=' expression  */
#line 1779 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_type) = parser.make_classdef_attribute ((yyvsp[-2].tree_identifier_type), (yyvsp[-1].tok), (yyvsp[0].tree_expression_type)); }
#line 5412 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 241: /* attr: '~' identifier  */
#line 1781 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_type) = parser.make_not_classdef_attribute ((yyvsp[-1].tok), (yyvsp[0].tree_identifier_type)); }
#line 5418 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 242: /* attr: '!' identifier  */
#line 1783 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_type) = parser.make_not_classdef_attribute ((yyvsp[-1].tok), (yyvsp[0].tree_identifier_type)); }
#line 5424 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 243: /* superclass_list: %empty  */
#line 1787 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_parsing_classdef_decl = false;
                    lexer.m_parsing_classdef_superclass = false;
                    (yyval.tree_classdef_superclass_list_type) = nullptr;
                  }
#line 5434 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 244: /* superclass_list: superclass_list1 opt_sep  */
#line 1793 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    lexer.m_parsing_classdef_decl = false;
                    lexer.m_parsing_classdef_superclass = false;
                    (yyval.tree_classdef_superclass_list_type) = (yyvsp[-1].tree_classdef_superclass_list_type);
                  }
#line 5448 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 245: /* superclass_list1: EXPR_LT superclass  */
#line 1806 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_superclass_list_type) = parser.make_classdef_superclass_list ((yyvsp[-1].tok), (yyvsp[0].tree_classdef_superclass_type)); }
#line 5454 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 246: /* superclass_list1: superclass_list1 EXPR_AND superclass  */
#line 1808 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_superclass_list_type) = parser.append_classdef_superclass ((yyvsp[-2].tree_classdef_superclass_list_type), (yyvsp[-1].tok), (yyvsp[0].tree_classdef_superclass_type)); }
#line 5460 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 247: /* superclass: FQ_IDENT  */
#line 1812 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_superclass_type) = parser.make_classdef_superclass ((yyvsp[0].tok)); }
#line 5466 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 248: /* class_body: %empty  */
#line 1816 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tree_classdef_body_type) = nullptr;
                  }
#line 5475 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 249: /* class_body: class_body1 opt_sep  */
#line 1821 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tree_classdef_body_type) = (yyvsp[-1].tree_classdef_body_type);
                  }
#line 5488 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 250: /* class_body1: properties_block  */
#line 1832 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_properties_block_type)); }
#line 5494 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 251: /* class_body1: methods_block  */
#line 1834 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_methods_block_type)); }
#line 5500 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 252: /* class_body1: events_block  */
#line 1836 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_events_block_type)); }
#line 5506 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 253: /* class_body1: enum_block  */
#line 1838 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_enum_block_type)); }
#line 5512 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 254: /* class_body1: class_body1 opt_sep properties_block  */
#line 1840 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_classdef_body_type) = parser.append_classdef_properties_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_properties_block_type));
                  }
#line 5524 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 255: /* class_body1: class_body1 opt_sep methods_block  */
#line 1848 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_classdef_body_type) = parser.append_classdef_methods_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_methods_block_type));
                  }
#line 5536 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 256: /* class_body1: class_body1 opt_sep events_block  */
#line 1856 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_classdef_body_type) = parser.append_classdef_events_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_events_block_type));
                  }
#line 5548 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 257: /* class_body1: class_body1 opt_sep enum_block  */
#line 1864 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_classdef_body_type) = parser.append_classdef_enum_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_enum_block_type));
                  }
#line 5560 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 258: /* properties_block: properties_beg opt_sep attr_list property_list END  */
#line 1875 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-3].sep_list_type);

                    if (! ((yyval.tree_classdef_properties_block_type) = parser.make_classdef_properties_block ((yyvsp[-4].tok), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_property_list_type), (yyvsp[0].tok))))
                      {
                        // make_classdef_properties_block deleted $3 and $4.
                        YYABORT;
                      }
                  }
#line 5576 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 259: /* properties_beg: PROPERTIES  */
#line 1889 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 5585 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 260: /* property_list: %empty  */
#line 1896 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_property_list_type) = nullptr;
                  }
#line 5594 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 261: /* property_list: property_list1 opt_sep  */
#line 1901 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_property_list_type) = (yyvsp[-1].tree_classdef_property_list_type);
                  }
#line 5607 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 262: /* property_list1: class_property  */
#line 1913 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_property_list_type) = parser.make_classdef_property_list ((yyvsp[0].tree_classdef_property_type)); }
#line 5613 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 263: /* property_list1: property_list1 sep class_property  */
#line 1915 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture SEP here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    // We don't look ahead to grab end-of-line comments.
                    // Instead, they are grabbed when we see the
                    // identifier that becomes the next element in the
                    // list.  If the element at the end of the list
                    // doesn't have a doc string, see whether the
                    // element we are adding is storing an end-of-line
                    // comment for us to use.

                    octave::tree_classdef_property *last_elt = (yyvsp[-2].tree_classdef_property_list_type)->back ();

                    if (! last_elt->have_doc_string ())
                      {
                        octave::comment_list comments = (yyvsp[0].tree_classdef_property_type)->leading_comments ();

                        if (! comments.empty ())
                          {
                            octave::comment_elt elt = comments.front ();

                            if (elt.is_end_of_line ())
                              last_elt->doc_string (elt.text ());
                          }
                      }

                    (yyval.tree_classdef_property_list_type) = parser.append_classdef_property ((yyvsp[-2].tree_classdef_property_list_type), (yyvsp[0].tree_classdef_property_type));
                  }
#line 5648 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 264: /* class_property: identifier arg_validation  */
#line 1948 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_property_type) = parser.make_classdef_property ((yyvsp[-1].tree_identifier_type), (yyvsp[0].tree_arg_validation_type)); }
#line 5654 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 265: /* methods_block: methods_beg opt_sep attr_list method_list END  */
#line 1952 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-3].sep_list_type);

                    if (! ((yyval.tree_classdef_methods_block_type) = parser.make_classdef_methods_block ((yyvsp[-4].tok), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_method_list_type), (yyvsp[0].tok))))
                      {
                        // make_classdef_methods_block deleted $3 and $4.
                        YYABORT;
                      }
                  }
#line 5670 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 266: /* methods_beg: METHODS  */
#line 1966 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 5679 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 267: /* method_decl1: identifier  */
#line 1973 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.octave_user_function_type) = parser.start_classdef_external_method ((yyvsp[0].tree_identifier_type))))
                      YYABORT;
                  }
#line 5688 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 268: /* method_decl1: identifier param_list  */
#line 1978 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.octave_user_function_type) = parser.start_classdef_external_method ((yyvsp[-1].tree_identifier_type), (yyvsp[0].tree_parameter_list_type))))
                      YYABORT;
                  }
#line 5697 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 269: /* method_decl: method_decl1  */
#line 1985 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_function_def_type) = parser.finish_classdef_external_method ((yyvsp[0].octave_user_function_type)); }
#line 5703 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 270: /* $@1: %empty  */
#line 1987 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_defining_fcn++;
                    lexer.m_parsed_function_name.push (false);
                  }
#line 5712 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 271: /* method_decl: return_list '=' $@1 method_decl1  */
#line 1992 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_defining_fcn--;
                    lexer.m_parsed_function_name.pop ();

                    (yyval.tree_function_def_type) = parser.finish_classdef_external_method ((yyvsp[0].octave_user_function_type), (yyvsp[-3].tree_parameter_list_type), (yyvsp[-2].tok));
                  }
#line 5723 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 272: /* method: method_decl  */
#line 2001 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_function_def_type) = (yyvsp[0].tree_function_def_type); }
#line 5729 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 273: /* method: function  */
#line 2003 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_function_def_type) = (yyvsp[0].tree_function_def_type); }
#line 5735 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 274: /* method_list: %empty  */
#line 2007 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_method_list_type) = nullptr;
                  }
#line 5744 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 275: /* method_list: method_list1 opt_sep  */
#line 2012 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_method_list_type) = (yyvsp[-1].tree_classdef_method_list_type);
                  }
#line 5757 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 276: /* method_list1: method  */
#line 2023 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_method_list_type) = parser.make_classdef_method_list ((yyvsp[0].tree_function_def_type)); }
#line 5763 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 277: /* method_list1: method_list1 opt_sep method  */
#line 2025 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_classdef_method_list_type) = parser.append_classdef_method ((yyvsp[-2].tree_classdef_method_list_type), (yyvsp[0].tree_function_def_type));
                  }
#line 5775 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 278: /* events_block: events_beg opt_sep attr_list event_list END  */
#line 2035 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-3].sep_list_type);

                    if (! ((yyval.tree_classdef_events_block_type) = parser.make_classdef_events_block ((yyvsp[-4].tok), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_event_list_type), (yyvsp[0].tok))))
                      {
                        // make_classdef_events_block deleted $4 and $5.
                        YYABORT;
                      }
                  }
#line 5791 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 279: /* events_beg: EVENTS  */
#line 2049 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 5800 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 280: /* event_list: %empty  */
#line 2056 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_event_list_type) = nullptr;
                  }
#line 5809 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 281: /* event_list: event_list1 opt_sep  */
#line 2061 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_event_list_type) = (yyvsp[-1].tree_classdef_event_list_type);
                  }
#line 5822 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 282: /* event_list1: class_event  */
#line 2072 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_event_list_type) = parser.make_classdef_event_list ((yyvsp[0].tree_classdef_event_type)); }
#line 5828 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 283: /* event_list1: event_list1 opt_sep class_event  */
#line 2074 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_classdef_event_list_type) = parser.append_classdef_event ((yyvsp[-2].tree_classdef_event_list_type), (yyvsp[0].tree_classdef_event_type));
                  }
#line 5840 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 284: /* class_event: identifier  */
#line 2084 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_event_type) = parser.make_classdef_event ((yyvsp[0].tree_identifier_type)); }
#line 5846 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 285: /* enum_block: enumeration_beg opt_sep attr_list enum_list END  */
#line 2088 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-3].sep_list_type);

                    if (! ((yyval.tree_classdef_enum_block_type) = parser.make_classdef_enum_block ((yyvsp[-4].tok), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_enum_list_type), (yyvsp[0].tok))))
                      {
                        // make_classdef_enum_block deleted $3 and $4.
                        YYABORT;
                      }
                  }
#line 5862 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 286: /* enumeration_beg: ENUMERATION  */
#line 2102 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok) = (yyvsp[0].tok);
                  }
#line 5871 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 287: /* enum_list: %empty  */
#line 2109 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_enum_list_type) = nullptr;
                  }
#line 5880 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 288: /* enum_list: enum_list1 opt_sep  */
#line 2114 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[0].sep_list_type);

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_enum_list_type) = (yyvsp[-1].tree_classdef_enum_list_type);
                  }
#line 5893 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 289: /* enum_list1: class_enum  */
#line 2125 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_enum_list_type) = parser.make_classdef_enum_list ((yyvsp[0].tree_classdef_enum_type)); }
#line 5899 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 290: /* enum_list1: enum_list1 opt_sep class_enum  */
#line 2127 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    // FIXME: Need to capture separator list here.
                    // For now, delete the unused list.
                    delete (yyvsp[-1].sep_list_type);

                    (yyval.tree_classdef_enum_list_type) = parser.append_classdef_enum ((yyvsp[-2].tree_classdef_enum_list_type), (yyvsp[0].tree_classdef_enum_type));
                  }
#line 5911 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 291: /* class_enum: identifier '(' expression ')'  */
#line 2137 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_enum_type) = parser.make_classdef_enum ((yyvsp[-3].tree_identifier_type), (yyvsp[-2].tok), (yyvsp[-1].tree_expression_type), (yyvsp[0].tok)); }
#line 5917 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 292: /* stmt_begin: %empty  */
#line 2145 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;
                    lexer.m_at_beginning_of_statement = true;
                  }
#line 5926 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 293: /* anon_fcn_begin: %empty  */
#line 2152 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;
                    lexer.m_at_beginning_of_statement = true;
                    lexer.m_parsing_anon_fcn_body = true;
                  }
#line 5936 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 294: /* parse_error: LEXICAL_ERROR  */
#line 2160 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;
                    std::string msg = (yyvsp[0].tok)->text ();
                    parser.bison_error (msg.c_str ());
                  }
#line 5946 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 295: /* parse_error: error  */
#line 2166 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.dummy_type) = 0; }
#line 5952 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 296: /* sep_no_nl: ','  */
#line 2170 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = new octave::separator_list (*((yyvsp[0].tok))); }
#line 5958 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 297: /* sep_no_nl: ';'  */
#line 2172 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = new octave::separator_list (*((yyvsp[0].tok))); }
#line 5964 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 298: /* sep_no_nl: sep_no_nl ','  */
#line 2174 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = (yyvsp[-1].sep_list_type)->append (*((yyvsp[0].tok))); }
#line 5970 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 299: /* sep_no_nl: sep_no_nl ';'  */
#line 2176 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = (yyvsp[-1].sep_list_type)->append (*((yyvsp[0].tok))); }
#line 5976 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 300: /* opt_sep_no_nl: %empty  */
#line 2180 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = nullptr; }
#line 5982 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 301: /* opt_sep_no_nl: sep_no_nl  */
#line 2182 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = (yyvsp[0].sep_list_type); }
#line 5988 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 302: /* sep: ','  */
#line 2186 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = new octave::separator_list (*((yyvsp[0].tok))); }
#line 5994 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 303: /* sep: ';'  */
#line 2188 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = new octave::separator_list (*((yyvsp[0].tok))); }
#line 6000 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 304: /* sep: '\n'  */
#line 2190 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = new octave::separator_list (*((yyvsp[0].tok))); }
#line 6006 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 305: /* sep: sep ','  */
#line 2192 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = (yyvsp[-1].sep_list_type)->append (*((yyvsp[0].tok))); }
#line 6012 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 306: /* sep: sep ';'  */
#line 2194 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = (yyvsp[-1].sep_list_type)->append (*((yyvsp[0].tok))); }
#line 6018 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 307: /* sep: sep '\n'  */
#line 2196 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = (yyvsp[-1].sep_list_type)->append (*((yyvsp[0].tok))); }
#line 6024 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 308: /* opt_sep: %empty  */
#line 2200 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = nullptr; }
#line 6030 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 309: /* opt_sep: sep  */
#line 2202 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.sep_list_type) = (yyvsp[0].sep_list_type); }
#line 6036 "libinterp/parse-tree/oct-parse.cc"
    break;


#line 6040 "libinterp/parse-tree/oct-parse.cc"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == OCTAVE_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (parser, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= OCTAVE_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == OCTAVE_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, parser);
          yychar = OCTAVE_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != OCTAVE_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, parser);
      YYPOPSTACK (1);
    }
  yyps->yynew = 2;
  goto yypushreturn;


/*-------------------------.
| yypushreturn -- return.  |
`-------------------------*/
yypushreturn:

  return yyresult;
}
#undef octave_nerrs
#undef yystate
#undef yyerrstatus
#undef yyssa
#undef yyss
#undef yyssp
#undef yyvsa
#undef yyvs
#undef yyvsp
#undef yystacksize
#line 2205 "../libinterp/parse-tree/oct-parse.yy"


#if defined (HAVE_PRAGMA_GCC_DIAGNOSTIC)
   // Restore prevailing warning state for remainder of the file.
#  pragma GCC diagnostic pop
#endif

// Generic error messages.

#undef lexer
#undef scanner

static void
yyerror (octave::base_parser& parser, const char *s)
{
  parser.bison_error (s);
}

OCTAVE_BEGIN_NAMESPACE(octave)

class OCTINTERP_EXCEPTION_API parse_exception : public std::runtime_error
{
public:

  parse_exception () = delete;

  parse_exception (const std::string& message, const std::string& fcn_name = "", const std::string& file_name = "", const filepos& pos = filepos ())
    : runtime_error (message), m_message (message), m_fcn_name (fcn_name), m_file_name (file_name), m_pos (pos)
  { }

  OCTAVE_DEFAULT_COPY_MOVE_DELETE (parse_exception)

  std::string message () const { return m_message; }

  // Provided for std::exception interface.
  const char * what () const noexcept { return m_message.c_str (); }

  std::string fcn_name () const { return m_fcn_name; }
  std::string file_name () const { return m_file_name; }

  filepos pos () const { return m_pos; }

  // virtual void display (std::ostream& os) const;

private:

  std::string m_message;

  std::string m_fcn_name;
  std::string m_file_name;
  filepos m_pos;
};

class parse_tree_validator : public tree_walker
{
public:

  parse_tree_validator ()
    : m_scope (symbol_scope::anonymous ()), m_error_list ()
  { }

  OCTAVE_DISABLE_COPY_MOVE (parse_tree_validator)

  ~parse_tree_validator () = default;

  symbol_scope get_scope () const { return m_scope; }

  bool ok () const { return m_error_list.empty (); }

  std::list<parse_exception> error_list () const
  {
    return m_error_list;
  }

  void visit_octave_user_script (octave_user_script& script)
  {
    unwind_protect_var<symbol_scope> restore_var (m_scope, script.scope ());

    tree_statement_list *stmt_list = script.body ();

    if (stmt_list)
      stmt_list->accept (*this);
  }

  void visit_octave_user_function (octave_user_function& fcn)
  {
    unwind_protect_var<symbol_scope> restore_var (m_scope, fcn.scope ());

    tree_statement_list *stmt_list = fcn.body ();

    if (stmt_list)
      stmt_list->accept (*this);

    std::map<std::string, octave_value> subfcns = fcn.subfunctions ();

    if (! subfcns.empty ())
      {
        for (auto& nm_val : subfcns)
          {
            octave_user_function *subfcn = nm_val.second.user_function_value ();

            if (subfcn)
              subfcn->accept (*this);
          }
      }
  }

  void visit_index_expression (tree_index_expression& idx_expr)
  {
    if (idx_expr.is_word_list_cmd ())
      {
        std::string sym_nm = idx_expr.name ();

        if (m_scope.is_variable (sym_nm))
          {
            std::string message = sym_nm + ": invalid use of symbol as both variable and command";
            parse_exception pe (message, m_scope.fcn_name (), m_scope.fcn_file_name (), idx_expr.beg_pos ());

            m_error_list.push_back (pe);
          }
      }
  }

private:

  symbol_scope m_scope;

  std::list<parse_exception> m_error_list;
};

template <typename LIST_T, typename ELT_T>
static LIST_T *
list_append (LIST_T *list, ELT_T elt)
{
  list->push_back (elt);
  return list;
}

template <typename LIST_T, typename ELT_T>
static LIST_T *
list_append (LIST_T *list, const token& /*sep_tok*/, ELT_T elt)
{
  // FIXME: Need to capture SEP_TOK here
  list->push_back (elt);
  return list;
}

std::size_t
base_parser::parent_scope_info::size () const
{
  return m_info.size ();
}

void
base_parser::parent_scope_info::push (const value_type& elt)
{
  m_info.push_back (elt);
}

void
base_parser::parent_scope_info::push (const symbol_scope& scope)
{
  push (value_type (scope, ""));
}

void
base_parser::parent_scope_info::pop ()
{
  m_info.pop_back ();
}

bool
base_parser::parent_scope_info::name_ok (const std::string& name)
{
  // Name can't be the same as any parent function or any other
  // function we've already seen.  We could maintain a complex
  // tree structure of names, or we can just store the set of
  // full names of all the functions, which must be unique.

  std::string full_name;

  for (std::size_t i = 0; i < size()-1; i++)
    {
      const value_type& elt = m_info[i];

      if (name == elt.second)
        return false;

      full_name += elt.second + ">";
    }

  full_name += name;

  if (m_all_names.find (full_name) != m_all_names.end ())
    {
      // Return false (failure) if we are parsing a subfunction, local
      // function, or nested function.  Otherwise, it is OK to have a
      // duplicate name.

      return ! (m_parser.parsing_subfunctions () || m_parser.parsing_local_functions () || m_parser.curr_fcn_depth () > 0);
    }

  m_all_names.insert (full_name);

  return true;
}

bool
base_parser::parent_scope_info::name_current_scope (const std::string& name)
{
  if (! name_ok (name))
    return false;

  if (size () > 0)
    m_info.back().second = name;

  return true;
}

symbol_scope
base_parser::parent_scope_info::parent_scope () const
{
  return size () > 1 ? m_info[size()-2].first : symbol_scope::invalid ();
}

std::string
base_parser::parent_scope_info::parent_name () const
{
  return m_info[size()-2].second;
}

void base_parser::parent_scope_info::clear ()
{
  m_info.clear ();
  m_all_names.clear ();
}

base_parser::base_parser (base_lexer& lxr)
  : m_endfunction_found (false), m_autoloading (false),
    m_fcn_file_from_relative_lookup (false),
    m_parsing_subfunctions (false), m_parsing_local_functions (false),
    m_max_fcn_depth (-1), m_curr_fcn_depth (-1),
    m_primary_fcn_scope (symbol_scope::invalid ()),
    m_curr_class_name (), m_curr_package_name (), m_function_scopes (*this),
    m_primary_fcn (), m_subfunction_names (), m_classdef_object (),
    m_stmt_list (), m_lexer (lxr), m_parser_state (yypstate_new ())
{ }

base_parser::~base_parser ()
{
  delete &m_lexer;

  // FIXME: Deleting the internal Bison parser state structure does
  // not clean up any partial parse trees in the event of an interrupt or
  // error.  It's not clear how to safely do that with the C language
  // parser that Bison generates.  The C++ language parser that Bison
  // generates would do it for us automatically whenever an exception
  // is thrown while parsing input, but there is currently no C++
  // interface for a push parser.

  yypstate_delete (static_cast<yypstate *> (m_parser_state));
}

void
base_parser::reset ()
{
  m_endfunction_found = false;
  m_autoloading = false;
  m_fcn_file_from_relative_lookup = false;
  m_parsing_subfunctions = false;
  m_parsing_local_functions = false;
  m_max_fcn_depth = -1;
  m_curr_fcn_depth = -1;
  m_primary_fcn_scope = symbol_scope::invalid ();
  m_curr_class_name = "";
  m_curr_package_name = "";
  m_function_scopes.clear ();
  m_primary_fcn = octave_value ();
  m_subfunction_names.clear ();
  m_classdef_object.reset ();
  m_stmt_list.reset ();

  m_lexer.reset ();

  yypstate_delete (static_cast<yypstate *> (m_parser_state));
  m_parser_state = yypstate_new ();
}

OCTAVE_NORETURN static void
unexpected_token (int tok_id, const char *where)
{
  error ("unexpected token (= %d) in %s - please report this bug", tok_id, where);
}

// Error messages for mismatched end tokens.

static std::string
end_token_as_string (token::end_tok_type ettype)
{
  std::string retval = "<unknown>";

  switch (ettype)
    {
    case token::simple_end:
      retval = "end";
      break;

    case token::arguments_end:
      retval = "endarguments";
      break;

    case token::classdef_end:
      retval = "endclassdef";
      break;

    case token::enumeration_end:
      retval = "endenumeration";
      break;

    case token::events_end:
      retval = "endevents";
      break;

    case token::for_end:
      retval = "endfor";
      break;

    case token::function_end:
      retval = "endfunction";
      break;

    case token::if_end:
      retval = "endif";
      break;

    case token::methods_end:
      retval = "endmethods";
      break;

    case token::parfor_end:
      retval = "endparfor";
      break;

    case token::properties_end:
      retval = "endproperties";
      break;

    case token::spmd_end:
      retval = "endspmd";
      break;

    case token::switch_end:
      retval = "endswitch";
      break;

    case token::try_catch_end:
      retval = "end_try_catch";
      break;

    case token::unwind_protect_end:
      retval = "end_unwind_protect";
      break;

    case token::while_end:
      retval = "endwhile";
      break;

      // We should have handled all possible enum values above.  Rely on
      // compiler diagnostics to warn if we haven't.  For example, GCC's
      // -Wswitch option, enabled by -Wall, will provide a warning.
    }

  return retval;
}

void
base_parser::statement_list (std::shared_ptr<tree_statement_list>& lst)
{
  if (! lst)
    return;

  if (m_stmt_list)
    {
      // Append additional code to existing statement list.

      while (! lst->empty ())
        {
          m_stmt_list->push_back (lst->front ());
          lst->pop_front ();
        }
    }
  else
    m_stmt_list = lst;
}

void
base_parser::end_token_error (token *tok, token::end_tok_type expected)
{
  std::string msg = ("'" + end_token_as_string (expected) + "' command matched by '" + end_token_as_string (tok->ettype ()) + "'");

  bison_error (msg, tok->beg_pos ());
}

// Check to see that end tokens are properly matched.

bool
base_parser::end_token_ok (token *tok, token::end_tok_type expected)
{
  token::end_tok_type ettype = tok->ettype ();

  return ettype == expected || ettype == token::simple_end;
}

bool
base_parser::push_fcn_symtab ()
{
  m_curr_fcn_depth++;

  if (m_max_fcn_depth < m_curr_fcn_depth)
    m_max_fcn_depth = m_curr_fcn_depth;

  // Will get a real name later.
  m_lexer.m_symtab_context.push (symbol_scope ("parser:push_fcn_symtab"));
  m_function_scopes.push (m_lexer.m_symtab_context.curr_scope ());

  if (! m_lexer.m_reading_script_file && m_curr_fcn_depth == 0 && ! m_parsing_subfunctions)
    {
      m_primary_fcn_scope = m_lexer.m_symtab_context.curr_scope ();
      m_primary_fcn_scope.mark_primary_fcn_scope ();
    }

  if (m_lexer.m_reading_script_file && m_curr_fcn_depth > 0)
    {
      bison_error ("nested functions not implemented in this context");

      return false;
    }

  return true;
}

// Make a constant.

tree_constant *
base_parser::make_constant (token *tok)
{
  int tok_id = tok->token_id ();

  tree_constant *retval = nullptr;

  switch (tok_id)
    {
    case ':':
      retval = new tree_constant (octave_value (octave_value::magic_colon_t), *tok);
      break;

    case NUMBER:
      retval = new tree_constant (tok->number (), tok->text_rep (), *tok);
      break;

    case DQ_STRING:
    case SQ_STRING:
      {
        std::string txt = tok->text ();

        char delim = tok_id == DQ_STRING ? '"' : '\'';
        octave_value tmp (txt, delim);

        if (txt.empty ())
          {
            if (tok_id == DQ_STRING)
              tmp = octave_null_str::instance;
            else
              tmp = octave_null_sq_str::instance;
          }

        if (tok_id == DQ_STRING)
          txt = undo_string_escapes (txt);

        // FIXME: maybe the addition of delims should be handled by
        // tok->text_rep () for character strings?

        retval = new tree_constant (tmp, delim + txt + delim, *tok);
      }
      break;

    default:
      unexpected_token (tok_id, "base_parser::make_constant");
      break;
    }

  return retval;
}

tree_black_hole *
base_parser::make_black_hole (token *tilde)
{
  return new tree_black_hole (*tilde);
}

// Make a function handle.

tree_fcn_handle *
base_parser::make_fcn_handle (token *tok)
{
  tree_fcn_handle *retval = new tree_fcn_handle (*tok);

  return retval;
}

// Make an anonymous function handle.

tree_anon_fcn_handle *
base_parser::make_anon_fcn_handle (token *at_tok, tree_parameter_list *param_list, tree_expression *expr)
{
  // FIXME: We need to examine EXPR and issue an error if any
  // sub-expression contains an assignment, compound assignment,
  // increment, or decrement operator.

  anon_fcn_validator validator (param_list, expr);

  if (! validator.ok ())
    {
      delete param_list;
      delete expr;

      bison_error (validator.message (), validator.beg_pos ());

      return nullptr;
    }

  symbol_scope fcn_scope = m_lexer.m_symtab_context.curr_scope ();
  symbol_scope parent_scope = m_lexer.m_symtab_context.parent_scope ();

  m_lexer.m_symtab_context.pop ();

  expr->set_print_flag (false);

  fcn_scope.mark_static ();

  tree_anon_fcn_handle *retval = new tree_anon_fcn_handle (*at_tok, param_list, expr, fcn_scope, parent_scope);

  std::ostringstream buf;

  tree_print_code tpc (buf);

  retval->accept (tpc);

  std::string file = m_lexer.m_fcn_file_full_name;
  if (! file.empty ())
    buf << ": file: " << file;
  else if (m_lexer.input_from_terminal ())
    buf << ": *terminal input*";
  else if (m_lexer.input_from_eval_string ())
    buf << ": *eval string*";

  filepos at_pos = at_tok->beg_pos ();
  buf << ": line: " << at_pos.line () << " column: " << at_pos.column ();

  std::string scope_name = buf.str ();

  fcn_scope.cache_name (scope_name);

  // FIXME: Stash the filename.  This does not work and produces
  // errors when executed.
  //retval->stash_file_name (m_lexer.m_fcn_file_name);

  return retval;
}

// Build a colon expression.

tree_expression *
base_parser::make_colon_expression (tree_expression *base, token *colon_tok, tree_expression *limit)
{
  return make_colon_expression (base, colon_tok, nullptr, nullptr, limit);
}

tree_expression *
base_parser::make_colon_expression (tree_expression *base, token *colon_1_tok, tree_expression *incr, token *colon_2_tok, tree_expression *limit)
{
  tree_expression *retval = nullptr;

  if (! base || ! limit)
    {
      delete base;
      delete limit;
      delete incr;

      return retval;
    }

  token tmp_colon_2_tok = colon_2_tok ? *colon_2_tok : token ();

  tree_colon_expression *expr = new tree_colon_expression (base, *colon_1_tok, incr, tmp_colon_2_tok, limit);

  retval = expr;

  if (base->is_constant () && limit->is_constant () && (! incr || incr->is_constant ()))
    {
      interpreter& interp = m_lexer.m_interpreter;

      try
        {
          // If the evaluation generates a warning message, restore
          // the previous value of last_warning_message and skip the
          // conversion to a constant value.

          error_system& es = interp.get_error_system ();

          unwind_action restore_last_warning_message (&error_system::set_last_warning_message, &es, es.last_warning_message (""));

          unwind_action restore_discard_warning_messages (&error_system::set_discard_warning_messages, &es, es.discard_warning_messages (true));

          tree_evaluator& tw = interp.get_evaluator ();

          octave_value tmp = expr->evaluate (tw);

          std::string msg = es.last_warning_message ();

          if (msg.empty ())
            {
              std::ostringstream buf;

              tree_print_code tpc (buf);

              expr->accept (tpc);

              std::string orig_text = buf.str ();

              token tok (CONSTANT, tmp, orig_text, expr->beg_pos (), expr->end_pos ());

              tree_constant *tc_retval = new tree_constant (tmp, orig_text, tok);

              delete expr;

              retval = tc_retval;
            }
        }
      catch (const execution_exception&)
        {
          interp.recover_from_exception ();
        }
    }

  return retval;
}

// Build a binary expression.

tree_expression *
base_parser::make_binary_op (tree_expression *op1, token *op_tok, tree_expression *op2)
{
  octave_value::binary_op t = octave_value::unknown_binary_op;

  int tok_id = op_tok->token_id ();

  switch (tok_id)
    {
    case POW:
      t = octave_value::op_pow;
      break;

    case EPOW:
      t = octave_value::op_el_pow;
      break;

    case '+':
      t = octave_value::op_add;
      break;

    case '-':
      t = octave_value::op_sub;
      break;

    case '*':
      t = octave_value::op_mul;
      break;

    case '/':
      t = octave_value::op_div;
      break;

    case EMUL:
      t = octave_value::op_el_mul;
      break;

    case EDIV:
      t = octave_value::op_el_div;
      break;

    case LEFTDIV:
      t = octave_value::op_ldiv;
      break;

    case ELEFTDIV:
      t = octave_value::op_el_ldiv;
      break;

    case EXPR_LT:
      t = octave_value::op_lt;
      break;

    case EXPR_LE:
      t = octave_value::op_le;
      break;

    case EXPR_EQ:
      t = octave_value::op_eq;
      break;

    case EXPR_GE:
      t = octave_value::op_ge;
      break;

    case EXPR_GT:
      t = octave_value::op_gt;
      break;

    case EXPR_NE:
      t = octave_value::op_ne;
      break;

    case EXPR_AND:
      t = octave_value::op_el_and;
      break;

    case EXPR_OR:
      t = octave_value::op_el_or;
      break;

    default:
      unexpected_token (tok_id, "base_parser::make_binary_op");
      break;
    }

  return maybe_compound_binary_expression (op1, *op_tok, op2, t);
}

void
base_parser::maybe_convert_to_braindead_shortcircuit (tree_expression*& expr)
{
  if (expr->is_binary_expression ())
    {
      tree_binary_expression *binexp = dynamic_cast<tree_binary_expression *> (expr);

      token op_tok = binexp->op_token ();

      tree_expression *lhs = binexp->lhs ();
      tree_expression *rhs = binexp->rhs ();

      maybe_convert_to_braindead_shortcircuit (lhs);
      maybe_convert_to_braindead_shortcircuit (rhs);

      // Operands may have changed.
      binexp->lhs (lhs);
      binexp->rhs (rhs);

      octave_value::binary_op op_type = binexp->op_type ();
      if (op_type == octave_value::op_el_and || op_type == octave_value::op_el_or)
        {
          binexp->preserve_operands ();

          delete expr;

          expr = new tree_braindead_shortcircuit_binary_expression (lhs, op_tok, rhs, op_type);
        }
    }
}

// Build a boolean expression.

tree_expression *
base_parser::make_boolean_op (tree_expression *op1, token *op_tok, tree_expression *op2)
{
  tree_boolean_expression::type t;

  int tok_id = op_tok->token_id ();

  switch (tok_id)
    {
    case EXPR_AND_AND:
      t = tree_boolean_expression::bool_and;
      break;

    case EXPR_OR_OR:
      t = tree_boolean_expression::bool_or;
      break;

    default:
      unexpected_token (tok_id, "base_parser::make_boolean_op");
      break;
    }

  return new tree_boolean_expression (op1, *op_tok, op2, t);
}

// Build a prefix expression.

tree_expression *
base_parser::make_prefix_op (token *op_tok, tree_expression *op1)
{
  octave_value::unary_op t = octave_value::unknown_unary_op;

  int tok_id = op_tok->token_id ();

  switch (tok_id)
    {
    case '~':
    case '!':
      t = octave_value::op_not;
      break;

    case '+':
      t = octave_value::op_uplus;
      break;

    case '-':
      t = octave_value::op_uminus;
      break;

    case PLUS_PLUS:
      t = octave_value::op_incr;
      break;

    case MINUS_MINUS:
      t = octave_value::op_decr;
      break;

    default:
      unexpected_token (tok_id, "base_parser::make_prefix_op");
      break;
    }

  return new tree_prefix_expression (*op_tok, op1, t);
}

// Build a postfix expression.

tree_expression *
base_parser::make_postfix_op (tree_expression *op1, token *op_tok)
{
  octave_value::unary_op t = octave_value::unknown_unary_op;

  int tok_id = op_tok->token_id ();

  switch (tok_id)
    {
    case HERMITIAN:
      t = octave_value::op_hermitian;
      break;

    case TRANSPOSE:
      t = octave_value::op_transpose;
      break;

    case PLUS_PLUS:
      t = octave_value::op_incr;
      break;

    case MINUS_MINUS:
      t = octave_value::op_decr;
      break;

    default:
      unexpected_token (tok_id, "base_parser::make_postfix_op");
      break;
    }

  return new tree_postfix_expression (op1, *op_tok, t);
}

// Build an unwind-protect command.

tree_command *
base_parser::make_unwind_command (token *unwind_tok, tree_statement_list *body, token *cleanup_tok, tree_statement_list *cleanup_stmts, token *end_tok)
{
  tree_command *retval = nullptr;

  if (end_token_ok (end_tok, token::unwind_protect_end))
    {
      retval = new tree_unwind_protect_command (*unwind_tok, body, *cleanup_tok, cleanup_stmts, *end_tok);
    }
  else
    {
      delete body;
      delete cleanup_stmts;

      end_token_error (end_tok, token::unwind_protect_end);
    }

  return retval;
}

// Build a try-catch command.

tree_command *
base_parser::make_try_command (token *try_tok, tree_statement_list *body, token *catch_tok, separator_list *catch_sep_list, tree_statement_list *cleanup_stmts, token *end_tok)
{
  tree_command *retval = nullptr;

  if (end_token_ok (end_tok, token::try_catch_end))
    {
      tree_identifier *id = nullptr;

      // Look for exception ID.  Note that adding a separate rule to
      // match
      //
      //   try
      //     try-body
      //   catch IDENTIFIER
      //     catch-body
      //   end
      //
      // in the grammar leads to yet another shift-reduce conflict, so
      // instead we only match
      //
      //   try
      //     try-body
      //   catch
      //     catch-body
      //   end
      //
      // and then recognize the first form above by checking that the
      // first element of CATCH-BODY is an identifier and that there is
      // is no separator (comma, semicolon, or newline) between the
      // CATCH token and the identifier.

      if (! catch_sep_list && cleanup_stmts && ! cleanup_stmts->empty ())
        {
          tree_statement *stmt = cleanup_stmts->front ();

          if (stmt)
            {
              tree_expression *expr = stmt->expression ();

              if (expr && expr->is_identifier ())
                {
                  id = dynamic_cast<tree_identifier *> (expr);

                  cleanup_stmts->pop_front ();

                  stmt->set_expression (nullptr);
                  delete stmt;
                }
            }
        }

      token tmp_catch_tok = catch_tok ? *catch_tok : token ();

      // FIXME: Need to capture separator list here.
      // For now, delete the unused list.
      delete catch_sep_list;

      retval = new tree_try_catch_command (*try_tok, body, tmp_catch_tok, id, cleanup_stmts, *end_tok);
    }
  else
    {
      delete body;
      delete catch_sep_list;
      delete cleanup_stmts;

      end_token_error (end_tok, token::try_catch_end);
    }

  return retval;
}

// Build a while command.

tree_command *
base_parser::make_while_command (token *while_tok, tree_expression *expr, tree_statement_list *body, token *end_tok)
{
  tree_command *retval = nullptr;

  maybe_warn_assign_as_truth_value (expr);

  if (end_token_ok (end_tok, token::while_end))
    {
      m_lexer.m_looping--;

      retval = new tree_while_command (*while_tok, expr, body, *end_tok);
    }
  else
    {
      delete expr;
      delete body;

      end_token_error (end_tok, token::while_end);
    }

  return retval;
}

// Build a do-until command.

tree_command *
base_parser::make_do_until_command (token *do_tok, tree_statement_list *body, token *until_tok, tree_expression *expr)
{
  maybe_warn_assign_as_truth_value (expr);

  m_lexer.m_looping--;

  return new tree_do_until_command (*do_tok, body, *until_tok, expr);
}

// Build a for command.

tree_command *
base_parser::make_for_command (token *for_tok, token *open_paren, tree_argument_list *lhs, token *eq_tok, tree_expression *expr, token *sep_tok, tree_expression *maxproc, token *close_paren, tree_statement_list *body, token *end_tok)
{
  tree_command *retval = nullptr;

  bool parfor = for_tok->token_id () == PARFOR;

  token tmp_open_paren = open_paren ? *open_paren : token ();
  token tmp_close_paren = close_paren ? *close_paren : token ();
  token tmp_sep_tok = sep_tok ? *sep_tok : token ();

  if (end_token_ok (end_tok, parfor ? token::parfor_end : token::for_end))
    {
      expr->mark_as_for_cmd_expr ();

      m_lexer.m_looping--;

      if (lhs->size () == 1)
        {
          tree_expression *tmp = lhs->remove_front ();

          m_lexer.mark_as_variable (tmp->name ());

          retval = new tree_simple_for_command (parfor, *for_tok, tmp_open_paren, tmp, *eq_tok, expr, tmp_sep_tok, maxproc, tmp_close_paren, body, *end_tok);

          delete lhs;
        }
      else if (parfor)
        {
          delete lhs;
          delete expr;
          delete maxproc;
          delete body;

          bison_error ("invalid syntax for parfor statement");
        }
      else
        {
          m_lexer.mark_as_variables (lhs->variable_names ());

          retval = new tree_complex_for_command (*for_tok, lhs, *eq_tok, expr, body, *end_tok);
        }
    }
  else
    {
      delete lhs;
      delete expr;
      delete maxproc;
      delete body;

      end_token_error (end_tok, parfor ? token::parfor_end : token::for_end);
    }

  return retval;
}

// Build a break command.

tree_command *
base_parser::make_break_command (token *break_tok)
{
  if (! m_lexer.m_looping)
    {
      bison_error ("break must appear within a loop");
      return nullptr;
    }
  else
    return new tree_break_command (*break_tok);
}

// Build a continue command.

tree_command *
base_parser::make_continue_command (token *continue_tok)
{
  if (! m_lexer.m_looping)
    {
      bison_error ("continue must appear within a loop");
      return nullptr;
    }
  else
    return new tree_continue_command (*continue_tok);
}

// Build a return command.

tree_command *
base_parser::make_return_command (token *return_tok)
{
  return new tree_return_command (*return_tok);
}

// Build an spmd command.

tree_spmd_command *
base_parser::make_spmd_command (token *spmd_tok, tree_statement_list *body, token *end_tok)
{
  tree_spmd_command *retval = nullptr;

  if (end_token_ok (end_tok, token::spmd_end))
    retval = new tree_spmd_command (*spmd_tok, body, *end_tok);
  else
    {
      delete body;

      end_token_error (end_tok, token::spmd_end);
    }

  return retval;
}

// Start an if command.

tree_if_command_list *
base_parser::start_if_command (tree_if_clause *clause)
{
  return new tree_if_command_list (clause);
}

// Finish an if command.

tree_if_command *
base_parser::finish_if_command (tree_if_command_list *list, tree_if_clause *else_clause, token *end_tok)
{
  tree_if_command *retval = nullptr;

  if (end_token_ok (end_tok, token::if_end))
    {
      if (else_clause)
        list_append (list, else_clause);

      token if_tok = list->if_token ();

      retval = new tree_if_command (if_tok, list, *end_tok);
    }
  else
    {
      delete list;
      delete else_clause;

      end_token_error (end_tok, token::if_end);
    }

  return retval;
}

// Build an if, elseif, or else clause.

tree_if_clause *
base_parser::make_if_clause (token *if_tok, separator_list *if_sep_list, tree_expression *expr, tree_statement_list *list)
{
  if (expr)
    {
      maybe_warn_assign_as_truth_value (expr);

      maybe_convert_to_braindead_shortcircuit (expr);
    }

  // FIXME: Need to capture separator list here.
  // For now, delete the unused list.
  delete if_sep_list;

  return new tree_if_clause (*if_tok, expr, list);
}

tree_if_command_list *
base_parser::append_if_clause (tree_if_command_list *list, tree_if_clause *clause)
{
  return list_append (list, clause);
}

// Finish a switch command.

tree_switch_command *
base_parser::finish_switch_command (token *switch_tok, tree_expression *expr, tree_switch_case_list *list, token *end_tok)
{
  tree_switch_command *retval = nullptr;

  if (end_token_ok (end_tok, token::switch_end))
    retval = new tree_switch_command (*switch_tok, expr, list, *end_tok);
  else
    {
      delete expr;
      delete list;

      end_token_error (end_tok, token::switch_end);
    }

  return retval;
}

tree_switch_case_list *
base_parser::make_switch_case_list (tree_switch_case *switch_case)
{
  return new tree_switch_case_list (switch_case);
}

// Build a switch case.

tree_switch_case *
base_parser::make_switch_case (token *case_tok, tree_expression *expr, tree_statement_list *list)
{
  maybe_warn_variable_switch_label (expr);

  return new tree_switch_case (*case_tok, expr, list);
}

tree_switch_case *
base_parser::make_default_switch_case (token *default_tok, tree_statement_list *list)
{
  return new tree_switch_case (*default_tok, list);
}

tree_switch_case_list *
base_parser::append_switch_case (tree_switch_case_list *list, tree_switch_case *elt)
{
  return list_append (list, elt);
}

// Build an assignment to a variable.

tree_expression *
base_parser::make_assign_op (tree_argument_list *lhs, token *eq_tok, tree_expression *rhs)
{
  octave_value::assign_op t = octave_value::unknown_assign_op;

  int tok_id = eq_tok->token_id ();

  switch (tok_id)
    {
    case '=':
      t = octave_value::op_asn_eq;
      break;

    case ADD_EQ:
      t = octave_value::op_add_eq;
      break;

    case SUB_EQ:
      t = octave_value::op_sub_eq;
      break;

    case MUL_EQ:
      t = octave_value::op_mul_eq;
      break;

    case DIV_EQ:
      t = octave_value::op_div_eq;
      break;

    case LEFTDIV_EQ:
      t = octave_value::op_ldiv_eq;
      break;

    case POW_EQ:
      t = octave_value::op_pow_eq;
      break;

    case EMUL_EQ:
      t = octave_value::op_el_mul_eq;
      break;

    case EDIV_EQ:
      t = octave_value::op_el_div_eq;
      break;

    case ELEFTDIV_EQ:
      t = octave_value::op_el_ldiv_eq;
      break;

    case EPOW_EQ:
      t = octave_value::op_el_pow_eq;
      break;

    case AND_EQ:
      t = octave_value::op_el_and_eq;
      break;

    case OR_EQ:
      t = octave_value::op_el_or_eq;
      break;

    default:
      unexpected_token (tok_id, "base_parser::make_assign_op");
      break;
    }

  if (! lhs->is_simple_assign_lhs () && t != octave_value::op_asn_eq)
    {
      // Multiple assignments like [x,y] OP= rhs are only valid for
      // '=', not '+=', etc.

      delete lhs;
      delete rhs;

      bison_error ("computed multiple assignment not allowed", eq_tok->beg_pos ());

      return nullptr;
    }

  if (lhs->is_simple_assign_lhs ())
    {
      // We are looking at a simple assignment statement like x = rhs;

      tree_expression *tmp = lhs->remove_front ();

      if ((tmp->is_identifier () || tmp->is_index_expression ()) && iskeyword (tmp->name ()))
        {
          std::string kw = tmp->name ();

          delete tmp;
          delete lhs;
          delete rhs;

          bison_error ("invalid assignment to keyword \"" + kw + "\"", eq_tok->beg_pos ());

          return nullptr;
        }

      delete lhs;

      m_lexer.mark_as_variable (tmp->name ());

      return new tree_simple_assignment (tmp, rhs, false, t);
    }
  else
    {
      std::list<std::string> names = lhs->variable_names ();

      for (const auto& kw : names)
        {
          if (iskeyword (kw))
            {
              delete lhs;
              delete rhs;

              bison_error ("invalid assignment to keyword \"" + kw + "\"", eq_tok->beg_pos ());

              return nullptr;
            }
        }

      m_lexer.mark_as_variables (names);

      return new tree_multi_assignment (lhs, rhs, false);
    }
}

void
base_parser::make_script (tree_statement_list *cmds, tree_statement *end_script)
{
  // Any comments at the beginning of a script file should be
  // attached to the first statement in the file or the END_SCRIPT
  // statement created by the parser.

  if (! cmds)
    cmds = new tree_statement_list ();

  cmds->push_back (end_script);

  symbol_scope script_scope = m_lexer.m_symtab_context.curr_scope ();

  script_scope.cache_name (m_lexer.m_fcn_file_full_name);
  script_scope.cache_fcn_file_name (m_lexer.m_fcn_file_full_name);
  script_scope.cache_dir_name (m_lexer.m_dir_name);

  // First non-copyright comment in classdef body, before first
  // properties, methods, etc. block.

  comment_list leading_comments = cmds->leading_comments ();

  std::string doc_string = leading_comments.find_doc_string ();

  octave_user_script *script = new octave_user_script (m_lexer.m_fcn_file_full_name, m_lexer.m_fcn_file_name, script_scope, cmds, doc_string);

  m_lexer.m_symtab_context.pop ();

  sys::time now;

  script->stash_fcn_file_time (now);
  script->stash_dir_name (m_lexer.m_dir_name);

  m_primary_fcn = octave_value (script);
}

tree_identifier *
base_parser::make_fcn_name (tree_identifier *id)
{
  std::string id_name = id->name ();

  // Make classdef local functions unique from classdef methods.

  if (m_parsing_local_functions && m_curr_fcn_depth == 0)
    id_name = m_lexer.m_fcn_file_name + ">" + id_name;

  if (! m_function_scopes.name_current_scope (id_name))
    {
      // FIXME: is this correct?  Before using position, the column
      // was incremented.  Hmm.

      filepos id_pos = id->beg_pos ();
      id_pos.increment_column ();

      bison_error ("duplicate subfunction or nested function name", id_pos);

      delete id;
      return nullptr;
    }

  symbol_scope curr_scope = m_lexer.m_symtab_context.curr_scope ();
  curr_scope.cache_name (id_name);

  m_lexer.m_parsed_function_name.top () = true;
  m_lexer.m_maybe_classdef_get_set_method = false;

  return id;
}

// Define a function.

// FIXME: combining start_function, finish_function, and
// recover_from_parsing_function should be possible, but it makes
// for a large mess.  Maybe this could be a bit better organized?

tree_function_def *
base_parser::make_function (token *fcn_tok, tree_parameter_list *ret_list, token *eq_tok, tree_identifier *id, tree_parameter_list *param_list, tree_statement_list *body, tree_statement *end_fcn_stmt)
{
  // First non-copyright comments found above and below function keyword.
  comment_elt leading_doc_comment;
  comment_elt body_doc_comment;

  comment_list lc = fcn_tok->leading_comments ();

  if (! lc.empty ())
    leading_doc_comment = lc.find_doc_comment ();

  if (body)
    {
      comment_list bc = body->leading_comments ();

      if (! bc.empty ())
        body_doc_comment = bc.find_doc_comment ();
    }
  else if (end_fcn_stmt)
    {
      comment_list ec = end_fcn_stmt->leading_comments ();

      if (! ec.empty ())
        body_doc_comment = ec.find_doc_comment ();
    }

  // Choose which comment to use for doc string.

  // For ordinary functions, use the first comment that isn't empty.

  // If we are looking at a classdef method and there is a comment
  // prior to the function keyword and another after, then
  //
  //   * Choose the one outside the function definition if either of
  //     the comments use hash '#' characters.  This is the preferred
  //     Octave style.
  //
  //   * Choose the one inside the function definition if both
  //     comments use percent '%' characters.  This is
  //     Matlab-compatible behavior.

  // FIXME: maybe choose which comment to used by checking whether
  // any language extensions are noticed in the entire source file,
  // not just in the comments that are candidates to become the
  // function doc string.

  std::string doc_string;

  if (leading_doc_comment.empty ()
      || (m_lexer.m_parsing_classdef && ! body_doc_comment.empty ()
          && (! (leading_doc_comment.uses_hash_char () || body_doc_comment.uses_hash_char ()))))
    doc_string = body_doc_comment.text ();
  else
    doc_string = leading_doc_comment.text ();

  octave_user_function *tmp_fcn = start_function (id, param_list, body, end_fcn_stmt, doc_string);

  tree_function_def *retval = finish_function (fcn_tok, ret_list, eq_tok, tmp_fcn);

  recover_from_parsing_function ();

  return retval;
}

// Begin defining a function.

octave_user_function *
base_parser::start_function (tree_identifier *id, tree_parameter_list *param_list, tree_statement_list *body, tree_statement *end_fcn_stmt, const std::string& doc_string)
{
  // We'll fill in the return list later.

  std::string id_name = id->name ();

  if (m_lexer.m_parsing_classdef_get_method)
    id_name.insert (0, "get.");
  else if (m_lexer.m_parsing_classdef_set_method)
    id_name.insert (0, "set.");

  m_lexer.m_parsing_classdef_get_method = false;
  m_lexer.m_parsing_classdef_set_method = false;

  if (! body)
    body = new tree_statement_list ();

  body->push_back (end_fcn_stmt);

  octave_user_function *fcn = new octave_user_function (m_lexer.m_symtab_context.curr_scope (), id, param_list, nullptr, body);

  // If input is coming from a file, issue a warning if the name of
  // the file does not match the name of the function stated in the
  // file.  Matlab doesn't provide a diagnostic (it ignores the stated
  // name).
  if (! m_autoloading && m_lexer.m_reading_fcn_file && m_curr_fcn_depth == 0 && ! m_parsing_subfunctions)
    {
      // FIXME: should m_lexer.m_fcn_file_name already be
      // preprocessed when we get here?  It seems to only be a
      // problem with relative filenames.

      std::string nm = m_lexer.m_fcn_file_name;

      std::size_t pos = nm.find_last_of (sys::file_ops::dir_sep_chars ());

      if (pos != std::string::npos)
        nm = m_lexer.m_fcn_file_name.substr (pos+1);

      if (nm != id_name)
        {
          warning_with_id ("Octave:function-name-clash", "function name '%s' does not agree with function filename '%s'", id_name.c_str (), m_lexer.m_fcn_file_full_name.c_str ());

          id_name = nm;
        }
    }

  sys::time now;

  fcn->stash_fcn_file_name (m_lexer.m_fcn_file_full_name);
  fcn->stash_fcn_file_time (now);
  fcn->stash_dir_name (m_lexer.m_dir_name);
  fcn->stash_package_name (m_lexer.m_package_name);
  fcn->mark_as_system_fcn_file ();
  fcn->stash_function_name (id_name);

  if (m_lexer.m_reading_fcn_file || m_lexer.m_reading_classdef_file || m_autoloading)
    {
      if (m_fcn_file_from_relative_lookup)
        fcn->mark_relative ();

      if (m_lexer.m_parsing_class_method)
        {
          if (m_lexer.m_parsing_classdef)
            {
              if (m_curr_class_name == id_name)
                fcn->mark_as_classdef_constructor ();
              else
                fcn->mark_as_classdef_method ();
            }
          else
            {
              if (m_curr_class_name == id_name)
                fcn->mark_as_legacy_constructor ();
              else
                fcn->mark_as_legacy_method ();
            }

          fcn->stash_dispatch_class (m_curr_class_name);
        }

      std::string nm = fcn->fcn_file_name ();

      sys::file_stat fs (nm);

      if (fs && fs.is_newer (now))
        warning_with_id ("Octave:future-time-stamp", "time stamp for '%s' is in the future", nm.c_str ());
    }
  else if (! m_lexer.input_from_tmp_history_file () && ! m_lexer.m_force_script && m_lexer.m_reading_script_file && m_lexer.m_fcn_file_name == id_name)
    warning ("function '%s' defined within script file '%s'", id_name.c_str (), m_lexer.m_fcn_file_full_name.c_str ());

  // Record doc string for functions other than nested functions.
  // We cannot currently record help for nested functions (bug #46008)
  // because the doc_string of the outermost function is read first,
  // whereas this function is called for the innermost function first.
  // We could have a stack of doc_string objects in lexer.
  if (! doc_string.empty () && m_curr_fcn_depth == 0)
    fcn->document (doc_string);


  if (m_lexer.m_reading_fcn_file && m_curr_fcn_depth == 0 && ! m_parsing_subfunctions)
    m_primary_fcn = octave_value (fcn);

  return fcn;
}

tree_statement *
base_parser::make_end (const std::string& type, bool eof, token *end_tok)
{
  return make_statement (new tree_no_op_command (type, eof, *end_tok));
}

tree_function_def *
base_parser::finish_function (token *fcn_tok, tree_parameter_list *ret_list, token *eq_tok, octave_user_function *fcn)
{
  tree_function_def *retval = nullptr;

  if (! ret_list)
    ret_list = new tree_parameter_list (tree_parameter_list::out);

  ret_list->mark_as_formal_parameters ();

  if (fcn)
    {
      fcn->set_fcn_tok (*fcn_tok);

      if (eq_tok)
        fcn->set_eq_tok (*eq_tok);

      std::string fcn_nm = fcn->name ();
      std::string file = fcn->fcn_file_name ();

      std::string tmp = fcn_nm;
      if (! file.empty ())
        tmp += ": " + file;

      symbol_scope fcn_scope = fcn->scope ();
      fcn_scope.cache_name (tmp);
      fcn_scope.cache_fcn_name (fcn_nm);
      fcn_scope.cache_fcn_file_name (file);
      fcn_scope.cache_dir_name (m_lexer.m_dir_name);

      fcn->define_ret_list (ret_list);

      if (m_curr_fcn_depth > 0 || m_parsing_subfunctions)
        {
          octave_value ov_fcn (fcn);

          if (m_endfunction_found && m_function_scopes.size () > 1)
            {
              fcn->mark_as_nested_function ();
              fcn_scope.set_nesting_depth (m_curr_fcn_depth);

              symbol_scope pscope = m_function_scopes.parent_scope ();
              fcn_scope.set_parent (pscope);
              fcn_scope.set_primary_parent (m_primary_fcn_scope);

              pscope.install_nestfunction (fcn_nm, ov_fcn, fcn_scope);

              // For nested functions, the list of parent functions is
              // set in symbol_scope::update_nest.
            }
          else
            {
              fcn->mark_as_subfunction ();
              m_subfunction_names.push_back (fcn_nm);

              fcn_scope.set_parent (m_primary_fcn_scope);
              if (m_parsing_subfunctions)
                fcn_scope.set_primary_parent (m_primary_fcn_scope);

              m_primary_fcn_scope.install_subfunction (fcn_nm, ov_fcn);
            }
        }

      if (m_curr_fcn_depth == 0)
        fcn_scope.update_nest ();

      if (! m_lexer.m_reading_fcn_file && m_curr_fcn_depth == 0)
        {
          // We are either reading a script file or defining a function
          // at the command line, so this definition creates a
          // tree_function object that is placed in the parse tree.
          // Otherwise, it is just inserted in the symbol table,
          // either as a subfunction or nested function (see above),
          // or as the primary function for the file, via
          // m_primary_fcn (see also load_fcn_from_file,,
          // parse_fcn_file, and
          // fcn_info::fcn_info_rep::find_user_function).

          if (m_lexer.m_buffer_function_text)
            {
              fcn->cache_function_text (m_lexer.m_function_text, fcn->time_parsed ());
              m_lexer.m_buffer_function_text = false;
            }

          retval = new tree_function_def (fcn);
        }
    }

  return retval;
}

tree_statement_list *
base_parser::append_function_body (tree_statement_list *body, tree_statement_list *list)
{
  if (list)
    {
      for (const auto& elt : *list)
        list_append (body, elt);

      list->clear ();
      delete (list);
    }

  return body;
}

tree_arguments_block *
base_parser::make_arguments_block (token *arguments_tok, tree_args_block_attribute_list *attr_list, tree_args_block_validation_list *validation_list, token *end_tok)
{
  tree_arguments_block *retval = nullptr;

  if (end_token_ok (end_tok, token::arguments_end))
    retval = new tree_arguments_block (*arguments_tok, attr_list, validation_list, *end_tok);
  else
    {
      delete attr_list;
      delete validation_list;
    }

  return retval;
}

tree_arg_validation *
base_parser::make_arg_validation (tree_arg_size_spec *size_spec, tree_identifier *class_name, tree_arg_validation_fcns *validation_fcns, token *eq_tok, tree_expression *default_value)
{
  // FIXME: Validate arguments and convert to more specific types
  // (std::string for arg_name and class_name, etc).

  token tmp_eq_tok = eq_tok ? *eq_tok : token ();

  return new tree_arg_validation (size_spec, class_name, validation_fcns, tmp_eq_tok, default_value);
}

tree_args_block_attribute_list *
base_parser::make_args_attribute_list (tree_identifier *attribute_name)
{
  // FIXME: Validate argument and convert to more specific type
  // (std::string for attribute_name).

  return new tree_args_block_attribute_list (attribute_name);
}

tree_args_block_validation_list *
base_parser::make_args_validation_list (tree_arg_validation *arg_validation)
{
  return new tree_args_block_validation_list (arg_validation);
}

tree_args_block_validation_list *
base_parser::append_args_validation_list (tree_args_block_validation_list *list, tree_arg_validation *arg_validation)
{
  return list_append (list, arg_validation);
}

tree_arg_size_spec *
base_parser::make_arg_size_spec (tree_argument_list *size_args)
{
  // FIXME: Validate argument.

  return new tree_arg_size_spec (size_args);
}

tree_arg_validation_fcns *
base_parser::make_arg_validation_fcns (tree_argument_list *fcn_args)
{
  // FIXME: Validate argument.

  return new tree_arg_validation_fcns (fcn_args);
}

void
base_parser::recover_from_parsing_function ()
{
  m_lexer.m_symtab_context.pop ();

  if (m_lexer.m_reading_fcn_file && m_curr_fcn_depth == 0 && ! m_parsing_subfunctions)
    m_parsing_subfunctions = true;

  m_curr_fcn_depth--;
  m_function_scopes.pop ();

  m_lexer.m_defining_fcn--;
  m_lexer.m_parsed_function_name.pop ();
  m_lexer.m_looking_at_return_list = false;
  m_lexer.m_looking_at_parameter_list = false;
}

// A CLASSDEF block defines a class that has a constructor and other
// methods, but it is not an executable command.  Parsing the block
// makes some changes in the symbol table (inserting the constructor
// and methods, and adding to the list of known objects) and creates
// a parse tree containing meta information about the class.

tree_classdef *
base_parser::make_classdef (token *cdef_tok, tree_classdef_attribute_list *a, tree_identifier *id, tree_classdef_superclass_list *sc, tree_classdef_body *body, token *end_tok)
{
  tree_classdef *retval = nullptr;

  m_lexer.m_symtab_context.pop ();

  std::string cls_name = id->name ();

  std::string full_name = m_lexer.m_fcn_file_full_name;
  std::string short_name = m_lexer.m_fcn_file_name;

  std::size_t pos = short_name.find_last_of (sys::file_ops::dir_sep_chars ());

  if (pos != std::string::npos)
    short_name = short_name.substr (pos+1);

  if (short_name != cls_name)
    {
      filepos f_pos = id->beg_pos ();

      delete a;
      delete id;
      delete sc;
      delete body;

      bison_error ("invalid classdef definition, the class name must match the filename", f_pos);

    }
  else
    {
      if (end_token_ok (end_tok, token::classdef_end))
        {
          if (! body)
            body = new tree_classdef_body ();

          retval = new tree_classdef (m_lexer.m_symtab_context.curr_scope (), *cdef_tok, a, id, sc, body, *end_tok, m_curr_package_name, full_name);
        }
      else
        {
          delete a;
          delete id;
          delete sc;
          delete body;

          end_token_error (end_tok, token::switch_end);
        }
    }

  return retval;
}

tree_classdef_properties_block *
base_parser::make_classdef_properties_block (token *tok, tree_classdef_attribute_list *a, tree_classdef_property_list *plist, token *end_tok)
{
  tree_classdef_properties_block *retval = nullptr;

  if (end_token_ok (end_tok, token::properties_end))
    {
      if (plist)
        {
          // If the element at the end of the list doesn't have a doc
          // string, see whether the first element of the comments
          // attached to the end token is an end-of-line comment for
          // us to use.

          tree_classdef_property *last_elt = plist->back ();

          if (last_elt && ! last_elt->have_doc_string ())
            {
              comment_list comments = end_tok->leading_comments ();

              if (! comments.empty ())
                {
                  comment_elt elt = comments.front ();

                  if (elt.is_end_of_line ())
                    last_elt->doc_string (elt.text ());
                }
            }
        }
      else
        plist = new tree_classdef_property_list ();

      retval = new tree_classdef_properties_block (*tok, a, plist, *end_tok);
    }
  else
    {
      delete a;
      delete plist;

      end_token_error (end_tok, token::properties_end);
    }

  return retval;
}

tree_classdef_property_list *
base_parser::make_classdef_property_list (tree_classdef_property *prop)
{
  return new tree_classdef_property_list (prop);
}

tree_classdef_property *
base_parser::make_classdef_property (tree_identifier *id, tree_arg_validation *av)
{
  av->arg_name (id);

  if (av->size_spec () || av->class_name () || av->validation_fcns ())
    warning ("size, class, and validation function specifications are not yet supported for classdef properties; INCORRECT RESULTS ARE POSSIBLE!");

  return new tree_classdef_property (av);
}

tree_classdef_methods_block *
base_parser::make_classdef_methods_block (token *tok, tree_classdef_attribute_list *a, tree_classdef_method_list *mlist, token *end_tok)
{
  tree_classdef_methods_block *retval = nullptr;

  if (end_token_ok (end_tok, token::methods_end))
    {
      if (! mlist)
        mlist = new tree_classdef_method_list ();

      retval = new tree_classdef_methods_block (*tok, a, mlist, *end_tok);
    }
  else
    {
      delete a;
      delete mlist;

      end_token_error (end_tok, token::methods_end);
    }

  return retval;
}

tree_classdef_events_block *
base_parser::make_classdef_events_block (token *tok, tree_classdef_attribute_list *a, tree_classdef_event_list *elist, token *end_tok)
{
  tree_classdef_events_block *retval = nullptr;

  if (end_token_ok (end_tok, token::events_end))
    {
      if (! elist)
        elist = new tree_classdef_event_list ();

      retval = new tree_classdef_events_block (*tok, a, elist, *end_tok);
    }
  else
    {
      delete a;
      delete elist;

      end_token_error (end_tok, token::events_end);
    }

  return retval;
}

tree_classdef_event_list *
base_parser::make_classdef_event_list (tree_classdef_event *e)
{
  return new tree_classdef_event_list (e);
}

tree_classdef_event *
base_parser::make_classdef_event (tree_identifier *id)
{
  return new tree_classdef_event (id);
}

tree_classdef_enum_block *
base_parser::make_classdef_enum_block (token *tok, tree_classdef_attribute_list *a, tree_classdef_enum_list *elist, token *end_tok)
{
  tree_classdef_enum_block *retval = nullptr;

  if (end_token_ok (end_tok, token::enumeration_end))
    {
      if (! elist)
        elist = new tree_classdef_enum_list ();

      retval = new tree_classdef_enum_block (*tok, a, elist, *end_tok);
    }
  else
    {
      delete a;
      delete elist;

      end_token_error (end_tok, token::enumeration_end);
    }

  return retval;
}

tree_classdef_enum_list *
base_parser::make_classdef_enum_list (tree_classdef_enum *e)
{
  return new tree_classdef_enum_list (e);
}

tree_classdef_enum *
base_parser::make_classdef_enum (tree_identifier *id, token *open_paren, tree_expression *expr, token *close_paren)
{
  return new tree_classdef_enum (id, *open_paren, expr, *close_paren);
}

tree_classdef_property_list *
base_parser::append_classdef_property (tree_classdef_property_list *list, tree_classdef_property *elt)
{
  return list_append (list, elt);
}

tree_classdef_event_list *
base_parser::append_classdef_event (tree_classdef_event_list *list, tree_classdef_event *elt)
{
  return list_append (list, elt);
}

tree_classdef_enum_list *
base_parser::append_classdef_enum (tree_classdef_enum_list *list, tree_classdef_enum *elt)
{
  return list_append (list, elt);
}

tree_classdef_superclass_list *
base_parser::make_classdef_superclass_list (token *lt_tok, tree_classdef_superclass *sc)
{
  sc->set_separator (*lt_tok);

  return new tree_classdef_superclass_list (sc);
}

tree_classdef_superclass *
base_parser::make_classdef_superclass (token *fqident)
{
  return new tree_classdef_superclass (*fqident);
}

tree_classdef_superclass_list *
base_parser::append_classdef_superclass (tree_classdef_superclass_list *list, token *and_tok, tree_classdef_superclass *elt)
{
  elt->set_separator (*and_tok);

  return list_append (list, elt);
}

tree_classdef_attribute_list *
base_parser::make_classdef_attribute_list (tree_classdef_attribute *attr)
{
  return new tree_classdef_attribute_list (attr);
}

tree_classdef_attribute *
base_parser::make_classdef_attribute (tree_identifier *id)
{
  return make_classdef_attribute (id, nullptr, nullptr);
}

tree_classdef_attribute *
base_parser::make_classdef_attribute (tree_identifier *id, token *eq_tok, tree_expression *expr)
{
  return (expr ? new tree_classdef_attribute (id, *eq_tok, expr) : new tree_classdef_attribute (id));
}

tree_classdef_attribute *
base_parser::make_not_classdef_attribute (token *not_tok, tree_identifier *id)
{
  return new tree_classdef_attribute (*not_tok, id, false);
}

tree_classdef_attribute_list *
base_parser::append_classdef_attribute (tree_classdef_attribute_list *list, token *sep_tok, tree_classdef_attribute *elt)
{
  return list_append (list, *sep_tok, elt);
}

tree_classdef_body *
base_parser::make_classdef_body (tree_classdef_properties_block *pb)
{
  return new tree_classdef_body (pb);
}

tree_classdef_body *
base_parser::make_classdef_body (tree_classdef_methods_block *mb)
{
  return new tree_classdef_body (mb);
}

tree_classdef_body *
base_parser::make_classdef_body (tree_classdef_events_block *evb)
{
  return new tree_classdef_body (evb);
}

tree_classdef_body *
base_parser::make_classdef_body  (tree_classdef_enum_block *enb)
{
  return new tree_classdef_body (enb);
}

tree_classdef_body *
base_parser::append_classdef_properties_block (tree_classdef_body *body, tree_classdef_properties_block *block)
{
  return body->append (block);
}

tree_classdef_body *
base_parser::append_classdef_methods_block (tree_classdef_body *body, tree_classdef_methods_block *block)
{
  return body->append (block);
}

tree_classdef_body *
base_parser::append_classdef_events_block (tree_classdef_body *body, tree_classdef_events_block *block)
{
  return body->append (block);
}

tree_classdef_body *
base_parser::append_classdef_enum_block (tree_classdef_body *body, tree_classdef_enum_block *block)
{
  return body->append (block);
}

octave_user_function*
base_parser::start_classdef_external_method (tree_identifier *id, tree_parameter_list *pl)
{
  octave_user_function* retval = nullptr;

  // External methods are only allowed within @-folders. In this case,
  // m_curr_class_name will be non-empty.

  if (! m_curr_class_name.empty ())
    {
      std::string mname = id->name ();

      // Methods that cannot be declared outside the classdef file:
      // - methods with '.' character (e.g. property accessors)
      // - class constructor
      // - 'delete'

      if (mname.find_first_of (".") == std::string::npos && mname != "delete" && mname != m_curr_class_name)
        {
          // Create a dummy function that is used until the real method
          // is loaded.

          retval = new octave_user_function (symbol_scope::anonymous (), id, pl);

          retval->stash_function_name (mname);
        }
      else
        bison_error ("invalid external method declaration, an external method cannot be the class constructor, 'delete' or have a dot (.) character in its name");
    }
  else
    bison_error ("external methods are only allowed in @-folders");

  return retval;
}

tree_function_def *
base_parser::finish_classdef_external_method (octave_user_function *fcn, tree_parameter_list *ret_list, token *eq_tok)
{
  if (! ret_list)
    ret_list = new tree_parameter_list (tree_parameter_list::out);

  fcn->define_ret_list (ret_list);

  if (eq_tok)
    fcn->set_eq_tok (*eq_tok);

  return new tree_function_def (fcn);
}

tree_classdef_method_list *
base_parser::make_classdef_method_list (tree_function_def *fcn_def)
{
  octave_value fcn;

  if (fcn_def)
    fcn = fcn_def->function ();

  delete fcn_def;

  return new tree_classdef_method_list (fcn);
}

tree_classdef_method_list *
base_parser::append_classdef_method (tree_classdef_method_list *list, tree_function_def *fcn_def)
{
  octave_value fcn;

  if (fcn_def)
    {
      fcn = fcn_def->function ();

      delete fcn_def;
    }

  return list_append (list, fcn);
}

bool
base_parser::finish_classdef_file (tree_classdef *cls, tree_statement_list *local_fcns, token *eof_tok)
{
  parse_tree_validator validator;

  cls->accept (validator);

  if (local_fcns)
    {
      for (tree_statement *elt : *local_fcns)
        {
          tree_command *cmd = elt->command ();

          tree_function_def *fcn_def = dynamic_cast<tree_function_def *> (cmd);

          fcn_def->accept (validator);
        }
    }

  if (! validator.ok ())
    {
      delete cls;
      delete local_fcns;

      bison_error (validator.error_list ());

      return false;
    }

  // Require all validations to succeed before installing any local
  // functions or defining the classdef object for later use.

  if (local_fcns)
    {
      interpreter& interp = m_lexer.m_interpreter;

      symbol_table& symtab = interp.get_symbol_table ();

      for (tree_statement *elt : *local_fcns)
        {
          tree_command *cmd = elt->command ();

          tree_function_def *fcn_def = dynamic_cast<tree_function_def *> (cmd);

          octave_value ov_fcn = fcn_def->function ();
          octave_user_function *fcn = ov_fcn.user_function_value ();

          std::string nm = fcn->name ();
          std::string file = fcn->fcn_file_name ();

          fcn->attach_trailing_comments (eof_tok->leading_comments ());

          symtab.install_local_function (nm, ov_fcn, file);
        }

      delete local_fcns;
    }

  // FIXME: Is it possible for the following condition to be false?
  if (m_lexer.m_reading_classdef_file)
    m_classdef_object = std::shared_ptr<tree_classdef> (cls);

  return true;
}

// Make a word list command.
tree_index_expression *
base_parser::make_word_list_command (tree_expression *expr, tree_argument_list *args)
{
  tree_index_expression *retval = make_index_expression (expr, nullptr, args, nullptr, '(');

  if (retval)
    retval->mark_word_list_cmd ();

  return retval;
}

// Make an index expression.

tree_index_expression *
base_parser::make_index_expression (tree_expression *expr, token *open_delim, tree_argument_list *args, token *close_delim, char type)
{
  tree_index_expression *retval = nullptr;

  if (! args)
    args = new tree_argument_list ();

  if (args->has_magic_tilde ())
    {
      delete expr;
      delete args;

      bison_error ("invalid use of empty argument (~) in index expression");
    }
  else
    {
      if (! expr->is_postfix_indexed ())
        expr->set_postfix_index (type);

      token tmp_open_delim = open_delim ? *open_delim : token ();
      token tmp_close_delim = close_delim ? *close_delim : token ();

      if (expr->is_index_expression ())
        {
          retval = dynamic_cast<tree_index_expression *> (expr);

          retval->append (tmp_open_delim, args, tmp_close_delim, type);
        }
      else
        retval = new tree_index_expression (expr, tmp_open_delim, args, tmp_close_delim, type);
    }

  return retval;
}

// Make an indirect reference expression.

tree_index_expression *
base_parser::make_indirect_ref (tree_expression *expr, token *dot_tok, token *struct_elt_tok)
{
  tree_index_expression *retval = nullptr;

  if (! expr->is_postfix_indexed ())
    expr->set_postfix_index ('.');

  if (expr->is_index_expression ())
    {
      retval = dynamic_cast<tree_index_expression *> (expr);

      retval->append (*dot_tok, *struct_elt_tok);
    }
  else
    retval = new tree_index_expression (expr, *dot_tok, *struct_elt_tok);

  m_lexer.m_looking_at_indirect_ref = false;

  return retval;
}

// Make an indirect reference expression with dynamic field name.

tree_index_expression *
base_parser::make_indirect_ref (tree_expression *expr, token *dot_tok, token *open_paren, tree_expression *elt, token *close_paren)
{
  tree_index_expression *retval = nullptr;

  if (! expr->is_postfix_indexed ())
    expr->set_postfix_index ('.');

  if (expr->is_index_expression ())
    {
      retval = dynamic_cast<tree_index_expression *> (expr);

      retval->append (*dot_tok, *open_paren, elt, *close_paren);
    }
  else
    retval = new tree_index_expression (expr, *dot_tok, *open_paren, elt, *close_paren);

  m_lexer.m_looking_at_indirect_ref = false;

  return retval;
}

// Make a declaration command.

tree_decl_command *
base_parser::make_decl_command (token *tok, tree_decl_init_list *lst)
{
  tree_decl_command *retval = nullptr;

  if (lst)
    m_lexer.mark_as_variables (lst->variable_names ());

  int tok_id = tok->token_id ();

  switch (tok->token_id ())
    {
    case GLOBAL:
      {
        retval = new tree_decl_command ("global", *tok, lst);
        retval->mark_global ();
      }
      break;

    case PERSISTENT:
      if (m_curr_fcn_depth >= 0)
        {
          retval = new tree_decl_command ("persistent", *tok, lst);
          retval->mark_persistent ();
        }
      else
        {
          filepos pos = tok->beg_pos ();
          int line = pos.line ();

          if (m_lexer.m_reading_script_file)
            warning ("ignoring persistent declaration near line %d of file '%s'", line, m_lexer.m_fcn_file_full_name.c_str ());
          else
            warning ("ignoring persistent declaration near line %d", line);
        }
      break;

    default:
      unexpected_token (tok_id, "base_parser::make_decl_command");
      break;
    }

  return retval;
}

tree_decl_init_list *
base_parser::make_decl_init_list (tree_decl_elt *elt)
{
  return new tree_decl_init_list (elt);
}

tree_decl_init_list *
base_parser::append_decl_init_list (tree_decl_init_list *list, tree_decl_elt *elt)
{
  return list_append (list, elt);
}

tree_decl_elt *
base_parser::make_decl_elt (tree_identifier *id, token */*eq_op*/, tree_expression *expr)
{
  // FIXME: Need to capture EQ_OP here.
  return expr ? new tree_decl_elt (id, expr) : new tree_decl_elt (id);
}

bool
base_parser::validate_param_list (tree_parameter_list *lst, tree_parameter_list::in_or_out type)
{
  std::set<std::string> dict;

  for (tree_decl_elt *elt : *lst)
    {
      tree_identifier *id = elt->ident ();

      if (id)
        {
          std::string name = id->name ();

          if (id->is_black_hole ())
            {
              if (type != tree_parameter_list::in)
                {
                  bison_error ("invalid use of ~ in output list");
                  return false;
                }
            }
          else if (iskeyword (name))
            {
              bison_error ("invalid use of keyword '" + name + "' in parameter list");
              return false;
            }
          else if (dict.find (name) != dict.end ())
            {
              bison_error ("'" + name + "' appears more than once in parameter list");
              return false;
            }
          else
            dict.insert (name);
        }
    }

  std::string va_type = (type == tree_parameter_list::in ? "varargin" : "varargout");

  std::size_t len = lst->size ();

  if (len > 0)
    {
      tree_decl_elt *elt = lst->back ();

      tree_identifier *id = elt->ident ();

      if (id && id->name () == va_type)
        {
          if (len == 1)
            lst->mark_varargs_only ();
          else
            lst->mark_varargs ();

          tree_parameter_list::iterator p = lst->end ();
          --p;
          delete *p;
          lst->erase (p);
        }
    }

  return true;
}

bool
base_parser::validate_array_list (tree_expression *e)
{
  bool retval = true;

  tree_array_list *al = dynamic_cast<tree_array_list *> (e);

  for (tree_argument_list* row : *al)
    {
      if (row && row->has_magic_tilde ())
        {
          retval = false;

          if (e->is_matrix ())
            bison_error ("invalid use of tilde (~) in matrix expression");
          else
            bison_error ("invalid use of tilde (~) in cell expression");

          break;
        }
    }

  return retval;
}

tree_argument_list *
base_parser::validate_matrix_for_assignment (tree_expression *e)
{
  tree_argument_list *retval = nullptr;

  if (e->is_constant ())
    {
      interpreter& interp = m_lexer.m_interpreter;

      tree_evaluator& tw = interp.get_evaluator ();

      octave_value ov = e->evaluate (tw);

      delete e;

      if (ov.isempty ())
        bison_error ("invalid empty left hand side of assignment");
      else
        bison_error ("invalid constant left hand side of assignment");
    }
  else
    {
      bool is_simple_assign = true;

      tree_argument_list *tmp = nullptr;

      if (e->is_matrix ())
        {
          tree_matrix *mat = dynamic_cast<tree_matrix *> (e);

          if (mat && mat->size () == 1)
            {
              tmp = mat->front ();
              mat->pop_front ();
              delete e;
              is_simple_assign = false;
            }
        }
      else
        tmp = new tree_argument_list (e);

      if (tmp && tmp->is_valid_lvalue_list ())
        {
          m_lexer.mark_as_variables (tmp->variable_names ());
          retval = tmp;
        }
      else
        {
          delete tmp;

          bison_error ("invalid left hand side of assignment");
        }

      if (retval && is_simple_assign)
        retval->mark_as_simple_assign_lhs ();
    }

  return retval;
}

// Finish building an array_list.

tree_expression *
base_parser::finish_array_list (token *open_delim, tree_array_list *array_list, token *close_delim)
{
  tree_expression *retval = array_list;

  array_list->mark_in_delims (*open_delim, *close_delim);

  if (array_list->all_elements_are_constant ())
    {
      interpreter& interp = m_lexer.m_interpreter;

      try
        {
          // If the evaluation generates a warning message, restore
          // the previous value of last_warning_message and skip the
          // conversion to a constant value.

          error_system& es = interp.get_error_system ();

          unwind_action restore_last_warning_message (&error_system::set_last_warning_message, &es, es.last_warning_message (""));

          unwind_action restore_discard_warning_messages (&error_system::set_discard_warning_messages, &es, es.discard_warning_messages (true));

          tree_evaluator& tw = interp.get_evaluator ();

          octave_value tmp = array_list->evaluate (tw);

          std::string msg = es.last_warning_message ();

          if (msg.empty ())
            {
              std::ostringstream buf;

              tree_print_code tpc (buf);

              array_list->accept (tpc);

              std::string orig_text = buf.str ();

              token tok (CONSTANT, tmp, orig_text, open_delim->beg_pos (), close_delim->end_pos ());

              tree_constant *tc_retval = new tree_constant (tmp, orig_text, tok);

              delete array_list;

              retval = tc_retval;
            }
        }
      catch (const execution_exception&)
        {
          interp.recover_from_exception ();
        }
    }

  return retval;
}

// Finish building a matrix list.

tree_expression *
base_parser::finish_matrix (token *open_delim, tree_matrix *m, token *close_delim)
{
  if (m)
    return finish_array_list (open_delim, m, close_delim);

  octave_value tmp {octave_null_matrix::instance};
  std::string orig_text {"{}"};

  token tok (CONSTANT, tmp, orig_text, open_delim->beg_pos (), close_delim->end_pos ());

  return new tree_constant (tmp, orig_text, tok);
}

tree_matrix *
base_parser::make_matrix (tree_argument_list *row)
{
  return row ? new tree_matrix (row) : nullptr;
}

tree_matrix *
base_parser::append_matrix_row (tree_matrix *matrix, token *sep_tok, tree_argument_list *row)
{
  if (! matrix)
    return make_matrix (row);

  return row ? list_append (matrix, *sep_tok, row) : matrix;
}

// Finish building a cell list.

tree_expression *
base_parser::finish_cell (token *open_delim, tree_cell *c, token *close_delim)
{
  if (c)
    return finish_array_list (open_delim, c, close_delim);

  octave_value tmp {Cell ()};
  std::string orig_text {"{}"};

  token tok (CONSTANT, tmp, orig_text, open_delim->beg_pos (), close_delim->end_pos ());

  return new tree_constant (tmp, orig_text, tok);
}

tree_cell *
base_parser::make_cell (tree_argument_list *row)
{
  return row ? new tree_cell (row) : nullptr;
}

tree_cell *
base_parser::append_cell_row (tree_cell *cell, token *sep_tok, tree_argument_list *row)
{
  if (! cell)
    return make_cell (row);

  return row ? list_append (cell, *sep_tok, row) : cell;
}

tree_identifier *
base_parser::make_identifier (token *ident)
{
  symbol_scope scope = m_lexer.m_symtab_context.curr_scope ();

  return new tree_identifier (scope, *ident);
}

tree_superclass_ref *
base_parser::make_superclass_ref (token *superclassref)
{
  std::string meth = superclassref->superclass_method_name ();
  std::string cls = superclassref->superclass_class_name ();

  return new tree_superclass_ref (meth, cls, *superclassref);
}

tree_metaclass_query *
base_parser::make_metaclass_query (token *metaquery)
{
  std::string cls = metaquery->text ();

  return new tree_metaclass_query (cls, *metaquery);
}

tree_statement_list *
base_parser::set_stmt_print_flag (tree_statement_list *list, int sep_char, bool warn_missing_semi)
{
  tree_statement *tmp = list->back ();

  switch (sep_char)
    {
    case ';':
      tmp->set_print_flag (false);
      break;

    case '\0':
    case ',':
    case '\n':
      tmp->set_print_flag (true);
      if (warn_missing_semi)
        maybe_warn_missing_semi (list);
      break;

    default:
      warning ("unrecognized separator type!");
      break;
    }

  // Even if a statement is null, we add it to the list then remove it
  // here so that the print flag is applied to the correct statement.

  if (tmp->is_null_statement ())
    {
      list->pop_back ();
      delete tmp;
    }

  return list;
}

tree_statement_list *
base_parser::set_stmt_print_flag (tree_statement_list *list, const token& sep_tok, bool warn_missing_semi)
{
  return set_stmt_print_flag (list, sep_tok.token_id (), warn_missing_semi);
}

tree_statement_list *
base_parser::set_stmt_print_flag (tree_statement_list *list, separator_list *sep_list, bool warn_missing_semi)
{
  return (sep_list
          ? set_stmt_print_flag (list, sep_list->front (), warn_missing_semi)
          : set_stmt_print_flag (list, '\0', warn_missing_semi));
}

// Finish building a statement.
template <typename T>
tree_statement *
base_parser::make_statement (T *arg)
{
  return new tree_statement (arg);
}

tree_statement_list *
base_parser::make_statement_list (tree_statement *stmt)
{
  return new tree_statement_list (stmt);
}

tree_statement_list *
base_parser::append_statement_list (tree_statement_list *list, int sep_char, tree_statement *stmt, bool warn_missing_semi)
{
  set_stmt_print_flag (list, sep_char, warn_missing_semi);

  // FIXME: need to capture SEP_CHAR here.
  return list_append (list, stmt);
}

tree_statement_list *
base_parser::append_statement_list (tree_statement_list *list, token *sep_tok, tree_statement *stmt, bool warn_missing_semi)
{
  if (sep_tok)
    set_stmt_print_flag (list, *sep_tok, warn_missing_semi);
  else
    set_stmt_print_flag (list, '\0', warn_missing_semi);

  // FIXME: need to capture SEP_TOK here.
  return list_append (list, stmt);
}

tree_statement_list *
base_parser::append_statement_list (tree_statement_list *list, separator_list *sep_list, tree_statement *stmt, bool warn_missing_semi)
{
  set_stmt_print_flag (list, sep_list, warn_missing_semi);

  // FIXME: need to capture separator list here.
  // For now, delete the unused list.
  delete sep_list;

  return list_append (list, stmt);
}

tree_statement_list *
base_parser::make_function_def_list (tree_function_def *fcn_def)
{
  tree_statement *stmt = make_statement (fcn_def);

  return new tree_statement_list (stmt);
}

tree_statement_list *
base_parser::append_function_def_list (tree_statement_list *list, separator_list *sep_list, tree_function_def *fcn_def)
{
  tree_statement *stmt = make_statement (fcn_def);

  // FIXME: Need to capture separator list here.
  // For now, delete the unused list.
  delete sep_list;

  return list_append (list, stmt);
}

tree_argument_list *
base_parser::make_argument_list (tree_expression *expr)
{
  return new tree_argument_list (expr);
}

tree_argument_list *
base_parser::append_argument_list (tree_argument_list *list, tree_expression *expr)
{
  return list_append (list, expr);
}

tree_argument_list *
base_parser::append_argument_list (tree_argument_list *list, token *sep_tok, tree_expression *expr)
{
  return list_append (list, *sep_tok, expr);
}

tree_parameter_list *
base_parser::make_parameter_list (tree_parameter_list::in_or_out io)
{
  return new tree_parameter_list (io);
}

tree_parameter_list *
base_parser::make_parameter_list (tree_parameter_list::in_or_out io, tree_decl_elt *t)
{
  return new tree_parameter_list (io, t);
}

tree_parameter_list *
base_parser::make_parameter_list (tree_parameter_list::in_or_out io, tree_identifier *id)
{
  return new tree_parameter_list (io, id);
}

tree_parameter_list *
base_parser::append_parameter_list (tree_parameter_list *list, token *sep_tok, tree_decl_elt *t)
{
  return list_append (list, *sep_tok, t);
}

tree_parameter_list *
base_parser::append_parameter_list (tree_parameter_list *list, token *sep_tok, tree_identifier *id)
{
  return list_append (list, *sep_tok, new tree_decl_elt (id));
}

void
base_parser::disallow_command_syntax ()
{
  m_lexer.m_allow_command_syntax = false;
}

void
base_parser::bison_error (const std::string& str)
{
  bison_error (str, m_lexer.m_filepos);
}

void
base_parser::bison_error (const std::string& str, const filepos& pos)
{
  std::ostringstream output_buf;

  int err_line = pos.line ();
  int err_col = pos.column ();

  bool in_file = (m_lexer.m_reading_fcn_file || m_lexer.m_reading_script_file || m_lexer.m_reading_classdef_file);

  // Adjust the error column for display because it is 1-based in the
  // lexer for easier reporting.
  err_col--;

  if (in_file)
    output_buf << str << " near line " << err_line << ", column " << err_col << " in file " << m_lexer.m_fcn_file_full_name << "\n";
  else
    {
      // On command line, point directly to error
      output_buf << str << "\n\n";
      std::string curr_line = m_lexer.m_current_input_line;

      if (! curr_line.empty ())
        {
          // FIXME: we could do better if we just cached lines from the
          // input file in a list.  See also functions for managing input
          // buffers in lex.ll.
          std::size_t len = curr_line.length ();

          if (curr_line[len-1] == '\n')
            curr_line.resize (len-1);

          // Print the line, maybe with a pointer near the error token.
          output_buf << ">>> " << curr_line << "\n";

          if (err_col == 0)
            err_col = len;

          for (int i = 0; i < err_col + 3; i++)
            output_buf << " ";

          output_buf << "^" << "\n";
        }

    }

  m_parse_error_msg = output_buf.str ();
}

void
base_parser::bison_error (const parse_exception& pe)
{
  bison_error (pe.message (), pe.pos ());
}

void
base_parser::bison_error (const std::list<parse_exception>& pe_list)
{
  // For now, we just report the first error found.  Reporting all
  // errors will require a bit more refactoring.

  parse_exception pe = pe_list.front ();

  bison_error (pe.message (), pe.pos ());
}

int
parser::run ()
{
  int status = -1;

  yypstate *pstate = static_cast<yypstate *> (m_parser_state);

  try
    {
      status = octave_pull_parse (pstate, *this);
    }
  catch (const execution_exception&)
    {
      // FIXME: In previous versions, we emitted a parse error here
      // but that is not always correct because the error could have
      // happened inside a GUI callback functions executing in the
      // readline event_hook loop.  Maybe we need a separate exception
      // class for parse errors?

      throw;
    }
  catch (const exit_exception&)
    {
      throw;
    }
  catch (const interrupt_exception&)
    {
      throw;
    }
  catch (...)
    {
      std::string file = m_lexer.m_fcn_file_full_name;

      if (file.empty ())
        error ("unexpected exception while parsing input");
      else
        error ("unexpected exception while parsing %s", file.c_str ());
    }

  if (status != 0)
    parse_error_with_id ("Octave:parse-error", "%s", m_parse_error_msg.c_str ());

  return status;
}

// Parse input from INPUT.  Pass TRUE for EOF if the end of INPUT should
// finish the parse.

int
push_parser::run (const std::string& input, bool eof)
{
  int status = -1;

  dynamic_cast<push_lexer&> (m_lexer).append_input (input, eof);

  do
    {
      YYSTYPE lval;

      int tok_id = octave_lex (&lval, m_lexer.m_scanner);

      if (tok_id < 0)
        {
          // TOKEN == -2 means that the lexer recognized a comment
          // and we should be at the end of the buffer but not the
          // end of the file so we should return 0 to indicate
          // "complete input" instead of -1 to request more input.

          status = (tok_id == -2 ? 0 : -1);

          if (! eof && m_lexer.at_end_of_buffer ())
            return status;

          break;
        }

      yypstate *pstate = static_cast<yypstate *> (m_parser_state);

      try
        {
          status = octave_push_parse (pstate, tok_id, &lval, *this);
        }
      catch (execution_exception& e)
        {
          std::string file = m_lexer.m_fcn_file_full_name;

          if (file.empty ())
            error (e, "parse error");
          else
            error (e, "parse error in %s", file.c_str ());
        }
      catch (const exit_exception&)
        {
          throw;
        }
      catch (interrupt_exception &)
        {
          throw;
        }
      catch (...)
        {
          std::string file = m_lexer.m_fcn_file_full_name;

          if (file.empty ())
            error ("unexpected exception while parsing input");
          else
            error ("unexpected exception while parsing %s", file.c_str ());
        }
    }
  while (status == YYPUSH_MORE || ! m_lexer.at_end_of_buffer ());

  if (status != 0)
    parse_error_with_id ("Octave:parse-error", "%s", m_parse_error_msg.c_str ());

  return status;
}

int
push_parser::run ()
{
  if (! m_reader)
    error ("push_parser::run requires valid input_reader");

  int exit_status = 0;

  std::string prompt = command_editor::decode_prompt_string (m_interpreter.PS1 ());

  do
    {
      // Reset status each time through the read loop so that
      // it won't be set to -1 and cause us to exit the outer
      // loop early if there is an exception while reading
      // input or parsing.

      exit_status = 0;

      bool eof = false;
      std::string input_line = m_reader->get_input (prompt, eof);

      if (eof)
        {
          exit_status = EOF;
          break;
        }

      exit_status = run (input_line, false);

      prompt = command_editor::decode_prompt_string (m_interpreter.PS2 ());
    }
  while (exit_status < 0);

  return exit_status;
}

octave_value
parse_fcn_file (interpreter& interp, const std::string& full_file, const std::string& file, const std::string& dir_name, const std::string& dispatch_type, const std::string& package_name, bool require_file, bool force_script, bool autoload, bool relative_lookup)
{
  octave_value retval;

  FILE *ffile = nullptr;

  if (! full_file.empty ())
    {
      // Check that m-file is not overly large which can segfault interpreter.
      const int max_file_size = 512 * 1024 * 1024;  // 512 MB
      sys::file_stat fs (full_file);

      if (fs && fs.size () > max_file_size)
        {
          error ("file '%s' is too large, > 512 MB", full_file.c_str ());

          return octave_value ();
        }

      ffile = sys::fopen (full_file, "rb");
    }

  if (! ffile)
    {
      if (require_file)
        error ("no such file, '%s'", full_file.c_str ());

      return octave_value ();
    }

  unwind_action act ([ffile] () { ::fclose (ffile); });

  // get the encoding for this folder
  input_system& input_sys = interp.get_input_system ();
  parser parser (ffile, interp, input_sys.dir_encoding (dir_name));

  parser.m_curr_class_name = dispatch_type;
  parser.m_curr_package_name = package_name;
  parser.m_autoloading = autoload;
  parser.m_fcn_file_from_relative_lookup = relative_lookup;

  parser.m_lexer.m_force_script = force_script;
  parser.m_lexer.prep_for_file ();
  parser.m_lexer.m_parsing_class_method = ! dispatch_type.empty ();

  parser.m_lexer.m_fcn_file_name = file;
  parser.m_lexer.m_fcn_file_full_name = full_file;
  parser.m_lexer.m_dir_name = dir_name;
  parser.m_lexer.m_package_name = package_name;

  int err = parser.run ();

  if (err)
    error ("parse error while reading file %s", full_file.c_str ());

  octave_value ov_fcn = parser.m_primary_fcn;

  if (parser.m_lexer.m_reading_classdef_file && parser.classdef_object ())
    {
      // Convert parse tree for classdef object to
      // meta.class info (and stash it in the symbol
      // table?).  Return pointer to constructor?

      if (ov_fcn.is_defined ())
        error ("unexpected: defining classdef object but primary_fcn is already defined - please report this bug");

      bool is_at_folder = ! dispatch_type.empty ();

      std::shared_ptr<tree_classdef> cdef_obj = parser.classdef_object();

      return cdef_obj->make_meta_class (interp, is_at_folder);
    }
  else if (ov_fcn.is_defined ())
    {
      octave_function *fcn = ov_fcn.function_value ();

      fcn->maybe_relocate_end ();

      if (parser.m_parsing_subfunctions)
        {
          if (! parser.m_endfunction_found)
            parser.m_subfunction_names.reverse ();

          fcn->stash_subfunction_names (parser.m_subfunction_names);
        }

      return ov_fcn;
    }

  return octave_value ();
}

bool
base_parser::finish_input (tree_statement_list *lst, bool at_eof)
{
  m_lexer.m_end_of_input = at_eof;

  if (lst)
    {
      parse_tree_validator validator;

      lst->accept (validator);

      if (! validator.ok ())
        {
          delete lst;

          bison_error (validator.error_list ());

          return false;
        }
    }

  std::shared_ptr<tree_statement_list> tmp_lst (lst);

  statement_list (tmp_lst);

  return true;
}

// Check script or function for semantic errors.
bool
base_parser::validate_primary_fcn ()
{
  octave_user_code *code = m_primary_fcn.user_code_value ();

  if (code)
    {
      parse_tree_validator validator;

      code->accept (validator);

      if (! validator.ok ())
        {
          bison_error (validator.error_list ());

          return false;
        }
    }

  return true;
}

// Maybe print a warning if an assignment expression is used as the
// test in a logical expression.

void
base_parser::maybe_warn_assign_as_truth_value (tree_expression *expr)
{
  if (expr->is_assignment_expression () && expr->delim_count () < 2)
    {
      if (m_lexer.m_fcn_file_full_name.empty ())
        warning_with_id ("Octave:assign-as-truth-value", "suggest parenthesis around assignment used as truth value");
      else
        warning_with_id ("Octave:assign-as-truth-value", "suggest parenthesis around assignment used as truth value near line %d, column %d in file '%s'", expr->line (), expr->column (), m_lexer.m_fcn_file_full_name.c_str ());
    }
}

// Maybe print a warning about switch labels that aren't constants.

void
base_parser::maybe_warn_variable_switch_label (tree_expression *expr)
{
  if (! expr->is_constant ())
    {
      if (m_lexer.m_fcn_file_full_name.empty ())
        warning_with_id ("Octave:variable-switch-label", "variable switch label");
      else
        warning_with_id ("Octave:variable-switch-label", "variable switch label near line %d, column %d in file '%s'", expr->line (), expr->column (), m_lexer.m_fcn_file_full_name.c_str ());
    }
}

void
base_parser::maybe_warn_missing_semi (tree_statement_list *t)
{
  if (m_curr_fcn_depth >= 0)
    {
      tree_statement *tmp = t->back ();

      if (tmp->is_expression ())
        warning_with_id ("Octave:missing-semicolon", "missing semicolon near line %d, column %d in file '%s'", tmp->line (), tmp->column (), m_lexer.m_fcn_file_full_name.c_str ());
    }
}

std::string
get_help_from_file (const std::string& nm, bool& symbol_found, std::string& full_file)
{
  std::string retval;

  full_file = fcn_file_in_path (nm);

  std::string file = full_file;

  std::size_t file_len = file.length ();

  if ((file_len > 4 && file.substr (file_len-4) == ".oct")
      || (file_len > 4 && file.substr (file_len-4) == ".mex")
      || (file_len > 2 && file.substr (file_len-2) == ".m"))
    {
      file = sys::env::base_pathname (file);
      file = file.substr (0, file.find_last_of ('.'));

      std::size_t pos = file.find_last_of (sys::file_ops::dir_sep_str ());
      if (pos != std::string::npos)
        file = file.substr (pos+1);
    }

  if (! file.empty ())
    {
      interpreter& interp = __get_interpreter__ ();

      symbol_found = true;

      octave_value ov_fcn = parse_fcn_file (interp, full_file, file, "", "", "", true, false, false, false);

      if (ov_fcn.is_defined ())
        {
          octave_function *fcn = ov_fcn.function_value ();

          if (fcn)
            retval = fcn->doc_string ();
        }
    }

  return retval;
}

std::string
get_help_from_file (const std::string& nm, bool& symbol_found)
{
  std::string file;
  return get_help_from_file (nm, symbol_found, file);
}

octave_value
load_fcn_from_file (const std::string& file_name, const std::string& dir_name, const std::string& dispatch_type, const std::string& package_name, const std::string& fcn_name, bool autoload)
{
  octave_value retval;

  unwind_protect frame;

  std::string nm = file_name;

  std::size_t nm_len = nm.length ();

  std::string file;

  bool relative_lookup = false;

  file = nm;

  if ((nm_len > 4 && nm.substr (nm_len-4) == ".oct")
      || (nm_len > 4 && nm.substr (nm_len-4) == ".mex")
      || (nm_len > 2 && nm.substr (nm_len-2) == ".m"))
    {
      nm = sys::env::base_pathname (file);
      nm = nm.substr (0, nm.find_last_of ('.'));

      std::size_t pos = nm.find_last_of (sys::file_ops::dir_sep_str ());
      if (pos != std::string::npos)
        nm = nm.substr (pos+1);
    }

  relative_lookup = ! sys::env::absolute_pathname (file);

  file = sys::env::make_absolute (file);

  int len = file.length ();

  interpreter& interp = __get_interpreter__ ();

  dynamic_loader& dyn_loader = interp.get_dynamic_loader ();

  if (len > 4 && file.substr (len-4, len-1) == ".oct")
    {
      if (autoload && ! fcn_name.empty ())
        nm = fcn_name;

      octave_function *tmpfcn = dyn_loader.load_oct (nm, file, relative_lookup);

      if (tmpfcn)
        {
          tmpfcn->stash_package_name (package_name);
          retval = octave_value (tmpfcn);
        }
    }
  else if (len > 4 && file.substr (len-4, len-1) == ".mex")
    {
      // Temporarily load m-file version of mex-file, if it exists,
      // to get the help-string to use.

      std::string doc_string;

      octave_value ov_fcn = parse_fcn_file (interp, file.substr (0, len - 2), nm, dir_name, dispatch_type, package_name, false, autoload, autoload, relative_lookup);

      if (ov_fcn.is_defined ())
        {
          octave_function *tmpfcn = ov_fcn.function_value ();

          if (tmpfcn)
            doc_string = tmpfcn->doc_string ();
        }

      octave_function *tmpfcn = dyn_loader.load_mex (nm, file, relative_lookup);

      if (tmpfcn)
        {
          tmpfcn->document (doc_string);
          tmpfcn->stash_package_name (package_name);

          retval = octave_value (tmpfcn);
        }
    }
  else if (len > 2)
    retval = parse_fcn_file (interp, file, nm, dir_name, dispatch_type, package_name, true, autoload, autoload, relative_lookup);

  return retval;
}

DEFMETHOD (autoload, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn  {} {@var{autoload_map} =} autoload ()
@deftypefnx {} {} autoload (@var{function}, @var{file})
@deftypefnx {} {} autoload (@dots{}, "remove")
Define @var{function} to autoload from @var{file}.

The second argument, @var{file}, should be an absolute filename or a file
name in the same directory as the function or script from which the autoload
command was run.  @var{file} @emph{should not} depend on the Octave load
path.

Normally, calls to @code{autoload} appear in PKG_ADD script files that are
evaluated when a directory is added to Octave's load path.  To avoid having
to hardcode directory names in @var{file}, if @var{file} is in the same
directory as the PKG_ADD script then

@example
autoload ("foo", "bar.oct");
@end example

@noindent
will load the function @code{foo} from the file @code{bar.oct}.  The above
usage when @code{bar.oct} is not in the same directory, or usages such as

@example
autoload ("foo", file_in_loadpath ("bar.oct"))
@end example

@noindent
are strongly discouraged, as their behavior may be unpredictable.

With no arguments, return a structure containing the current autoload map.

If a third argument @qcode{"remove"} is given, the function is cleared and
not loaded anymore during the current Octave session.

@seealso{PKG_ADD}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin == 1 || nargin > 3)
    print_usage ();

  tree_evaluator& tw = interp.get_evaluator ();

  if (nargin == 0)
    return octave_value (tw.get_autoload_map ());
  else
    {
      string_vector argv = args.make_argv ("autoload");

      if (nargin == 2)
        tw.add_autoload (argv[1], argv[2]);
      else if (nargin == 3)
        {
          if (argv[3] != "remove")
            error_with_id ("Octave:invalid-input-arg", "autoload: third argument can only be 'remove'");

          tw.remove_autoload (argv[1], argv[2]);
        }
    }

  return octave_value_list ();
}

DEFMETHOD (mfilename, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} mfilename ()
@deftypefnx {} {} mfilename ("fullpath")
@deftypefnx {} {} mfilename ("fullpathext")
Return the name of the currently executing file.

The base name of the currently executing script or function is returned without
any extension.  If called from outside an m-file, such as the command line,
return the empty string.

Given the argument @qcode{"fullpath"}, include the directory part of the
filename, but not the extension.

Given the argument @qcode{"fullpathext"}, include the directory part of
the filename and the extension.
@seealso{inputname, dbstack}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin > 1)
    print_usage ();

  std::string opt;

  if (nargin == 1)
    opt = args(0).xstring_value ("mfilename: option argument must be a string");

  return octave_value (interp.mfilename (opt));
}

  // Execute the contents of a script file.  For compatibility with
  // Matlab, also execute a function file by calling the function it
  // defines with no arguments and nargout = 0.

  void
  source_file (const std::string& file_name, const std::string& context,
               bool verbose, bool require_file)
  {
    interpreter& interp = __get_interpreter__ ();

    interp.source_file (file_name, context, verbose, require_file);
  }

DEFMETHOD (source, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} source (@var{file})
@deftypefnx {} {} source (@var{file}, @var{context})
Parse and execute the contents of @var{file}.

Without specifying @var{context}, this is equivalent to executing commands
from a script file, but without requiring the file to be named
@file{@var{file}.m} or to be on the execution path.

Instead of the current context, the script may be executed in either the
context of the function that called the present function
(@qcode{"caller"}), or the top-level context (@qcode{"base"}).
@seealso{run}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin < 1 || nargin > 2)
    print_usage ();

  std::string file_name = args(0).xstring_value ("source: FILE must be a string");

  std::string context;
  if (nargin == 2)
    context = args(1).xstring_value ("source: CONTEXT must be a string");

  interp.source_file (file_name, context);

  return octave_value_list ();
}

  //! Evaluate an Octave function (built-in or interpreted) and return
  //! the list of result values.
  //!
  //! @param name The name of the function to call.
  //! @param args The arguments to the function.
  //! @param nargout The number of output arguments expected.
  //! @return A list of output values.  The length of the list is not
  //!         necessarily the same as @c nargout.

  octave_value_list
  feval (const char *name, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (name, args, nargout);
  }

  octave_value_list
  feval (const std::string& name, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (name, args, nargout);
  }

  octave_value_list
  feval (octave_function *fcn, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (fcn, args, nargout);
  }

  octave_value_list
  feval (const octave_value& val, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (val, args, nargout);
  }

  octave_value_list
  feval (const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (args, nargout);
  }

DEFMETHOD (feval, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn  {} {[@var{y1}, @var{y2}, @dots{}] =} feval ('@var{fcn}', @var{x1}, @var{x2}, @dots{})
@deftypefnx {} {[@var{y1}, @var{y2}, @dots{}] =} feval (@@@var{fcn}, @var{x1}, @var{x2}, @dots{})
Evaluate the function @var{fcn} with inputs @var{x1}, @var{x2}, @enddots{}

The function @var{fcn} may be specified by name in a string or given as a
function handle.  Any arguments after the first are passed as inputs to the
named function.  For example,

@example
@group
feval ("acos", -1)
     @xresult{} 3.1416
@end group
@end example

@noindent
calls the function @code{acos} with the argument @samp{-1}.

The function @code{feval} can also be used with function handles of any sort
(@pxref{Function Handles}).  Historically, @code{feval} was the only way to
call user-supplied functions in strings, but function handles are now preferred
due to the cleaner syntax they offer.  For example,

@example
@group
@var{f} = @@exp;
feval (@var{f}, 1)
    @xresult{} 2.7183
@var{f} (1)
    @xresult{} 2.7183
@end group
@end example

@noindent
are equivalent ways to call the function referred to by @var{f}.  If it cannot
be predicted beforehand whether @var{f} is a function handle, function name in
a string, or inline function then @code{feval} can be used instead.
@seealso{builtin, eval, evalin}
@end deftypefn */)
{
  if (args.length () == 0)
    print_usage ();

  return interp.feval (args, nargout);
}

DEFMETHOD (builtin, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn {} {[@dots{}] =} builtin (@var{f}, @dots{})
Call the base function @var{f} even if @var{f} is overloaded to another
function for the given type signature.

This is normally useful when doing object-oriented programming and there is
a requirement to call one of Octave's base functions rather than the
overloaded one of a new class.

A trivial example which redefines the @code{sin} function to be the
@code{cos} function shows how @code{builtin} works.

@example
@group
sin (0)
  @xresult{} 0
function y = sin (x), y = cos (x); endfunction
sin (0)
  @xresult{} 1
builtin ("sin", 0)
  @xresult{} 0
@end group
@end example
@end deftypefn */)
{
  octave_value_list retval;

  if (args.length () == 0)
    print_usage ();

  const std::string name (args(0).xstring_value ("builtin: function name (F) must be a string"));

  symbol_table& symtab = interp.get_symbol_table ();

  octave_value fcn = symtab.builtin_find (name);

  if (fcn.is_defined ())
    retval = interp.feval (fcn.function_value (), args.splice (0, 1), nargout);
  else
    error ("builtin: lookup for symbol '%s' failed", name.c_str ());

  return retval;
}

DEFMETHOD (eval, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} eval (@var{try})
@deftypefnx {} {} eval (@var{try}, @var{catch})
@deftypefnx {} {[@var{var1}, @dots{}] =} eval (@dots{})
Parse the string @var{try} and evaluate it as if it were an Octave program.

If execution fails, evaluate the optional string @var{catch}.

The string @var{try} is evaluated in the current context, so any results remain
available after @code{eval} returns.

The following example creates the variable @var{A} with the approximate value
of pi (3.1416) in the current workspace.

@example
eval ('A = acos (-1);');
@end example

If an error occurs during the evaluation of @var{try} then the @var{catch}
string is evaluated, as the following example shows:

@example
@group
eval ('error ("This is a bad example");',
      'printf ("This error occurred:\n%s\n", lasterr ());');
     @print{} This error occurred:
        This is a bad example
@end group
@end example

Rather than create variables as part of the code string @var{try}, it is
clearer and slightly faster to assign the results of evaluation to an output
variable(s).  The first example can be re-written as

@example
A = eval ('acos (-1);');
@end example

Programming Note: if you are only using @code{eval} as an error-capturing
mechanism, rather than for the execution of arbitrary code strings, consider
using @code{try}/@code{catch} blocks or
@code{unwind_protect}/@code{unwind_protect_cleanup} blocks instead.  These
techniques have higher performance and don't introduce the security
considerations that the evaluation of arbitrary code does.
@seealso{evalin, evalc, assignin, feval, try, unwind_protect}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin < 1 || nargin > 2)
    print_usage ();

  if (! args(0).is_string () || args(0).rows () > 1 || args(0).ndims () != 2)
    error ("eval: TRY must be a string");

  std::string try_code = args(0).string_value ();

  if (nargin == 1)
    return interp.eval (try_code, nargout);
  else
    {
      if (! args(1).is_string () || args(1).rows () > 1 || args(1).ndims () != 2)
        error ("eval: CATCH must be a string");

      std::string catch_code = args(1).string_value ();

      return interp.eval (try_code, catch_code, nargout);
    }
}

/*

%!shared x
%! x = 1;

%!assert (eval ("x"), 1)
%!assert (eval ("x;"))
%!assert (eval ("x;"), 1)

%!test
%! y = eval ("x");
%! assert (y, 1);

%!test
%! y = eval ("x;");
%! assert (y, 1);

%!test
%! eval ("x = 1;");
%! assert (x,1);

%!test
%! eval ("flipud = 2;");
%! assert (flipud, 2);

%!function y = __f ()
%!  eval ("flipud = 2;");
%!  y = flipud;
%!endfunction
%!assert (__f(), 2)

%!test <*35645>
%! [a,] = gcd (1,2);
%! [a,b,] = gcd (1, 2);

## Can't assign to a keyword
%!error eval ("switch = 13;")

%!shared str
%! str = "disp ('hello');";
%! str(:,:,2) = str(:,:,1);

%!error <TRY must be a string> eval (1)
%!error <TRY must be a string> eval (['a';'b'])
%!error <TRY must be a string> eval (str)

%!error <CATCH must be a string> eval (str(:,:,1), 1)
%!error <CATCH must be a string> eval (str(:,:,1), ['a';'b'])
%!error <CATCH must be a string> eval (str(:,:,1), str)

*/

DEFMETHOD (assignin, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn {} {} assignin (@var{context}, @var{varname}, @var{value})
Assign @var{value} to @var{varname} in context @var{context}, which
may be either @qcode{"base"} or @qcode{"caller"}.
@seealso{evalin}
@end deftypefn */)
{
  if (args.length () != 3)
    print_usage ();

  std::string context = args(0).xstring_value ("assignin: CONTEXT must be a string");

  std::string varname = args(1).xstring_value ("assignin: VARNAME must be a string");

  interp.assignin (context, varname, args(2));

  return octave_value_list ();
}

/*

%!error assignin ("base", "switch", "13")

*/

DEFMETHOD (evalin, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} evalin (@var{context}, @var{try})
@deftypefnx {} {} evalin (@var{context}, @var{try}, @var{catch})
@deftypefnx {} {[@var{var1}, @dots{}] =} evalin (@dots{})
Like @code{eval}, except that the expressions are evaluated in the context
@var{context}, which may be either @qcode{"caller"} or @qcode{"base"}.
@seealso{eval, assignin}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin < 2 || nargin > 3)
    print_usage ();

  std::string context = args(0).xstring_value ("evalin: CONTEXT must be a string");

  std::string try_code = args(1).xstring_value ("evalin: TRY must be a string");

  if (nargin == 3)
    {
      std::string catch_code = args(2).xstring_value ("evalin: CATCH must be a string");

      return interp.evalin (context, try_code, catch_code, nargout);
    }

  return interp.evalin (context, try_code, nargout);
}

DEFMETHOD (evalc, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn  {} {@var{s} =} evalc (@var{try})
@deftypefnx {} {@var{s} =} evalc (@var{try}, @var{catch})
@deftypefnx {} {[~, @var{var1}, @dots{}] =} evalc (@dots{})
Parse and evaluate the string @var{try} as if it were an Octave program,
while capturing the output into the return variable @var{s}.

If execution fails, evaluate the optional string @var{catch}.

This function behaves like @code{eval}, but any output or warning messages
which would normally be written to the console are captured and returned in
the string @var{s}.

If the first output @var{s} is ignored with @code{~} then the actual results
of the code evaluation (not the string capture) will be assigned to output
variables @var{var1}, @var{var2}, etc.

Example 1:

@example
@group
s = evalc ("t = 42"), t
  @xresult{} s = t =  42

  @xresult{} t =  42
@end group
@end example

Example 2:

@example
@group
[~, p] = evalc ("pi")
  @xresult{} p = 3.1416
@end group
@end example

Programming Note: The @code{diary} is disabled during the execution of this
function.  When @code{system} is used, any output produced by external programs
is @emph{not} captured, unless their output is captured by the @code{system}
function itself.

@seealso{eval, diary}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin == 0 || nargin > 2)
    print_usage ();

  // Flush pending output and redirect stdout/stderr to capturing
  // buffer.

  octave_stdout.flush ();
  std::cerr.flush ();

  std::stringbuf buffer;

  std::streambuf *old_out_buf = octave_stdout.rdbuf (&buffer);
  std::streambuf *old_err_buf = std::cerr.rdbuf (&buffer);

  // Restore previous output buffers no matter how control exits this
  // function.  There's no need to flush here.  That has already
  // happened for the normal execution path.  If an error happens during
  // the eval, then the message is stored in the exception object and we
  // will display it later, after the buffers have been restored.

  unwind_action act ([old_out_buf, old_err_buf] ()
                             {
                               octave_stdout.rdbuf (old_out_buf);
                               std::cerr.rdbuf (old_err_buf);
                             });

  // Call standard eval function.

  int eval_nargout = std::max (0, nargout - 1);

  octave_value_list retval = Feval (interp, args, eval_nargout);

  // Make sure we capture all pending output.

  octave_stdout.flush ();
  std::cerr.flush ();

  retval.prepend (buffer.str ());

  return retval;
}

/*

%!test
%! [old_fmt, old_spacing] = format ();
%! unwind_protect
%!   format short;
%!   str = evalc ("1");
%!   assert (str, "ans = 1\n");
%! unwind_protect_cleanup
%!   format (old_fmt);
%!   format (old_spacing);
%! end_unwind_protect

%!assert (evalc ("1;"), "")

%!test
%! [s, y] = evalc ("1");
%! assert (s, "");
%! assert (y, 1);

%!test
%! [s, y] = evalc ("1;");
%! assert (s, "");
%! assert (y, 1);

%!test
%! [old_fmt, old_spacing] = format ();
%! unwind_protect
%!   format short;
%!   str = evalc ("y = 2");
%!   assert (str, "y = 2\n");
%!   assert (y, 2);
%! unwind_protect_cleanup
%!   format (old_fmt);
%!   format (old_spacing);
%! end_unwind_protect

%!test
%! assert (evalc ("y = 3;"), "");
%! assert (y, 3);

%!test
%! [s, a, b] = evalc ("deal (1, 2)");
%! assert (s, "");
%! assert (a, 1);
%! assert (b, 2);

%!function [a, b] = __f_evalc ()
%!  printf ("foo");
%!  fprintf (stdout, "bar ");
%!  disp (pi);
%!  a = 1;
%!  b = 2;
%!endfunction
%!test
%! [old_fmt, old_spacing] = format ();
%! unwind_protect
%!   format short;
%!   [s, a, b] = evalc ("__f_evalc ()");
%!   assert (s, "foobar 3.1416\n");
%!   assert (a, 1);
%!   assert (b, 2);
%! unwind_protect_cleanup
%!   format (old_fmt);
%!   format (old_spacing);
%! end_unwind_protect

%!error <foo> (evalc ("error ('foo')"))
%!error <bar> (evalc ("error ('foo')", "error ('bar')"))

%!test
%! warning ("off", "quiet", "local");
%! str = evalc ("warning ('foo')");
%! assert (str(1:13), "warning: foo\n");

%!test
%! warning ("off", "quiet", "local");
%! str = evalc ("error ('foo')", "warning ('bar')");
%! assert (str(1:13), "warning: bar\n");

%!error evalc ("switch = 13;")

*/

DEFUN (__parser_debug_flag__, args, nargout,
       doc: /* -*- texinfo -*-
@deftypefn  {} {@var{val} =} __parser_debug_flag__ ()
@deftypefnx {} {@var{old_val} =} __parser_debug_flag__ (@var{new_val})
Query or set the internal flag that determines whether Octave's parser
prints debug information as it processes an expression.
@seealso{__lexer_debug_flag__}
@end deftypefn */)
{
#if defined (OCTAVE_PARSER_DEBUG)
  octave_value retval;

  bool debug_flag = octave_debug;

  retval = set_internal_variable (debug_flag, args, nargout,
                                  "__parser_debug_flag__");

  octave_debug = debug_flag;

  return retval;
#else

  octave_unused_parameter (args);
  octave_unused_parameter (nargout);

  error ("__parser_debug_flag__: support for debugging the parser was disabled when Octave was built");

#endif
}

DEFMETHOD (__parse_file__, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn {} {} __parse_file__ (@var{file}, @var{verbose})
Undocumented internal function.
@end deftypefn */)
{
  octave_value retval;

  int nargin = args.length ();

  if (nargin < 1 || nargin > 2)
    print_usage ();

  std::string file = args(0).xstring_value ("__parse_file__: expecting filename as argument");

  std::string full_file = sys::file_ops::tilde_expand (file);

  full_file = sys::env::make_absolute (full_file);

  std::string dir_name;

  std::size_t file_len = file.length ();

  if ((file_len > 4 && file.substr (file_len-4) == ".oct")
      || (file_len > 4 && file.substr (file_len-4) == ".mex")
      || (file_len > 2 && file.substr (file_len-2) == ".m"))
    {
      file = sys::env::base_pathname (file);
      file = file.substr (0, file.find_last_of ('.'));

      std::size_t pos = file.find_last_of (sys::file_ops::dir_sep_str ());
      if (pos != std::string::npos)
        {
          dir_name = file.substr (0, pos);
          file = file.substr (pos+1);
        }
    }

  if (nargin == 2)
    octave_stdout << "parsing " << full_file << std::endl;

  octave_value ov_fcn = parse_fcn_file (interp, full_file, file, dir_name, "", "", true, false, false, false);

  return retval;
}

OCTAVE_END_NAMESPACE(octave)
