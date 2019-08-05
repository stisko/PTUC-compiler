/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ptucc_parser.y" /* yacc.c:339  */


#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;


#line 78 "ptucc_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ptucc_parser.tab.h".  */
#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_AND = 258,
    TK_ARRAY = 259,
    TK_BOOLEAN = 260,
    TK_CHAR = 261,
    TK_BEGIN = 262,
    TK_DIV = 263,
    TK_DO = 264,
    TK_ELSE = 265,
    TK_FOR = 266,
    TK_END = 267,
    TK_FUNCTION = 268,
    TK_GOTO = 269,
    TK_IF = 270,
    TK_INTEGER = 271,
    TK_VAR = 272,
    TK_MOD = 273,
    TK_NOT = 274,
    TK_OF = 275,
    TK_OR = 276,
    TK_WHILE = 277,
    TK_PROCEDURE = 278,
    TK_PROGRAM = 279,
    TK_REAL = 280,
    TK_REPEAT = 281,
    TK_TO = 282,
    TK_RESULT = 283,
    TK_RETURN = 284,
    TK_THEN = 285,
    TK_UNTIL = 286,
    TK_DOWNTO = 287,
    TK_TRUE = 288,
    TK_FALSE = 289,
    TK_READSTRING = 290,
    TK_READINTEGER = 291,
    TK_READREAL = 292,
    TK_WRITESTRING = 293,
    TK_WRITEINTEGER = 294,
    TK_WRITEREAL = 295,
    TK_IDENTIFIER = 296,
    TK_POSITIVEINT = 297,
    TK_POSITIVEREAL = 298,
    TK_COMMON_CHARS = 299,
    TK_ESCAPE_CHARS = 300,
    TK_CONSTANT_STRING = 301,
    OP_PLUS = 302,
    OP_MINUS = 303,
    OP_MULT = 304,
    OP_DIV = 305,
    OP_EQUAL = 306,
    OP_NOTEQUAL = 307,
    OP_LESS = 308,
    OP_GREATER = 309,
    OP_LESSEQUAL = 310,
    OP_GREATEREQUAL = 311,
    OP_AND = 312,
    OP_OR = 313,
    OP_NOT = 314,
    ASSIGNMENT = 315,
    SEMICOLON = 316,
    LEFT_PARENTHESIS = 317,
    RIGHT_PARENTHESIS = 318,
    TK_COMMA = 319,
    LEFT_BRACKET = 320,
    RIGHT_BRACKET = 321,
    COLON = 322,
    DOT = 323,
    TK_EOF = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;

#line 192 "ptucc_parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "ptucc_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   826

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   135,   135,   148,   150,   153,   154,   157,   158,   161,
     162,   164,   165,   167,   168,   170,   171,   175,   178,   179,
     181,   182,   184,   185,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   207,   208,   209,   210,   212,   213,   216,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   246,   247,   248,   250,   252,
     253,   255,   257,   259,   261,   263,   264,   267,   268,   269,
     271,   272,   276,   277,   279,   282,   283,   284,   286,   287,
     290,   291,   292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_AND", "TK_ARRAY", "TK_BOOLEAN",
  "TK_CHAR", "TK_BEGIN", "TK_DIV", "TK_DO", "TK_ELSE", "TK_FOR", "TK_END",
  "TK_FUNCTION", "TK_GOTO", "TK_IF", "TK_INTEGER", "TK_VAR", "TK_MOD",
  "TK_NOT", "TK_OF", "TK_OR", "TK_WHILE", "TK_PROCEDURE", "TK_PROGRAM",
  "TK_REAL", "TK_REPEAT", "TK_TO", "TK_RESULT", "TK_RETURN", "TK_THEN",
  "TK_UNTIL", "TK_DOWNTO", "TK_TRUE", "TK_FALSE", "TK_READSTRING",
  "TK_READINTEGER", "TK_READREAL", "TK_WRITESTRING", "TK_WRITEINTEGER",
  "TK_WRITEREAL", "TK_IDENTIFIER", "TK_POSITIVEINT", "TK_POSITIVEREAL",
  "TK_COMMON_CHARS", "TK_ESCAPE_CHARS", "TK_CONSTANT_STRING", "OP_PLUS",
  "OP_MINUS", "OP_MULT", "OP_DIV", "OP_EQUAL", "OP_NOTEQUAL", "OP_LESS",
  "OP_GREATER", "OP_LESSEQUAL", "OP_GREATEREQUAL", "OP_AND", "OP_OR",
  "OP_NOT", "ASSIGNMENT", "SEMICOLON", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "TK_COMMA", "LEFT_BRACKET", "RIGHT_BRACKET",
  "COLON", "DOT", "TK_EOF", "$accept", "project", "program_declaration",
  "declarations", "variable_declaration", "declares", "var_declaration",
  "array_declaration", "array_size", "multi_identifiers", "main_body",
  "commands", "simple_commands", "simple_nonsimple_commands",
  "simple_command", "data_type", "boolean_value", "nonsimple_command",
  "expressions", "operators", "if_command", "for_command", "while_command",
  "do_while_command", "label", "goto_label", "else_tag", "function",
  "function_declaration", "procedure_declaration", "test", "parameters",
  "single_param", "return_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

#define YYPACT_NINF -185

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-185)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,   -23,    37,    21,    27,  -185,     3,    58,  -185,  -185,
    -185,     3,  -185,   -19,   704,    -2,    85,  -185,    80,    26,
     103,   108,   764,   764,   764,   312,    70,  -185,  -185,  -185,
      90,    91,    94,    33,  -185,  -185,   764,   764,   764,   274,
     134,   704,  -185,  -185,   140,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,   109,   138,  -185,   -18,  -185,  -185,  -185,
    -185,    96,    98,   100,   101,   104,   396,  -185,   410,   704,
     132,  -185,  -185,   764,    -5,   127,   128,   734,   764,  -185,
     547,   558,  -185,   107,    84,  -185,  -185,   764,   764,   764,
     764,   764,   764,   764,   764,   764,   764,   764,   764,   764,
     764,   764,   764,  -185,   111,   130,     9,   135,     4,  -185,
    -185,   764,  -185,   312,   312,   669,   764,   164,   113,   115,
     116,   117,   112,   119,   121,   123,   125,   220,   536,   -52,
      82,  -185,    89,    97,   178,  -185,   547,   558,   614,   231,
     621,    32,    46,   419,     5,   243,    25,    88,     3,   141,
    -185,   136,     9,   158,   340,   194,  -185,  -185,   536,  -185,
     144,   145,   147,   148,   161,   163,   166,  -185,  -185,  -185,
    -185,   764,  -185,  -185,    53,    65,  -185,     3,  -185,  -185,
     165,   764,   764,   312,  -185,  -185,  -185,  -185,  -185,   169,
     171,   172,   536,    26,     3,   174,    66,  -185,   466,   480,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,    21,   160,   312,
     312,  -185,  -185,    26,   175,  -185,  -185,    -3,  -185,  -185,
      21,   704,   230,   228,   704,   181,   232,  -185,   182,  -185
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     0,     1,     0,     0,    92,     3,
      15,     6,     7,     0,    18,     0,    90,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    47,    48,
       0,     0,     0,    77,    76,    75,     0,     0,     0,     0,
       0,    19,    20,    74,     0,    50,    36,    37,    38,    39,
      40,    41,     2,     0,     4,    16,     0,    44,    45,    43,
      46,     0,     0,     0,     0,    77,     0,    70,     0,     0,
       0,    22,    23,     0,     0,     0,     0,     0,    87,    83,
      62,    63,    71,     0,     0,    17,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    10,
       9,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,    88,     0,
       0,    72,    55,    66,    67,    53,    68,    69,    64,    65,
      56,    57,    58,    59,    60,    61,    54,    51,    95,     0,
      11,     0,     0,     0,     0,    85,    81,    49,    82,    31,
       0,     0,     0,     0,     0,     0,     0,    25,    27,    26,
      73,     0,    77,    52,     0,     0,    96,    95,    13,    12,
       0,     0,     0,     0,    78,    32,    33,    34,    35,     0,
       0,     0,    89,     0,     0,     0,     0,    14,     0,     0,
      86,    28,    29,    30,    99,    98,    97,     5,   100,     0,
       0,    90,    93,     0,     0,    79,    80,     0,   102,   101,
       5,    18,     0,     0,    18,     0,     0,    94,     0,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,  -185,  -168,  -185,   234,  -184,  -185,   105,
    -185,  -102,   179,   -97,   -14,   -38,   170,  -185,   -17,   120,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,    42,  -185,
    -185,    77,    61,  -185
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    11,    12,    61,   108,   174,
      15,    40,    41,    70,    71,    62,    43,    72,    44,    45,
      46,    47,    48,    49,    50,    51,   184,   129,    54,    16,
     212,   175,   176,   214
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      42,    83,   106,     1,   221,    66,    67,    68,    87,   204,
     105,   170,   171,    88,    57,    58,   155,   156,     4,    80,
      81,    82,    84,    89,   152,    59,    90,    86,    87,   218,
      56,    57,    58,    88,    60,    87,   118,     5,     6,   211,
      88,   119,    59,    89,    10,    18,    90,   107,    19,    87,
      89,    60,   222,    90,    88,    42,   117,    96,    97,    98,
     127,   128,   101,   102,    89,    14,    52,    90,   150,   153,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   200,    87,     9,   101,
     102,    87,    88,    77,   154,    78,    88,    88,    96,   158,
      79,    86,    89,   101,   102,    90,    89,    89,    53,    90,
      90,    13,   215,   216,   179,    89,    13,    18,    90,   223,
     193,    55,   226,   172,    34,    35,   194,   194,   195,   208,
      73,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    87,    63,   101,    85,   131,    88,    64,
     104,   105,    74,    75,   192,   205,    76,   109,    89,   110,
     111,    90,   112,   116,   198,   199,    78,    87,   120,   121,
     130,   149,    88,   148,   164,   219,   160,   151,   161,   162,
     163,   165,    89,   166,   167,    90,   168,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    90,
     180,   103,   178,   177,   183,   185,   186,    42,   187,   188,
      42,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    87,   189,   159,   190,   213,    88,   191,
     201,   197,   202,   203,    87,   207,   220,   224,    89,    88,
     225,    90,   227,   229,   228,    17,    87,   126,   115,    89,
     173,    88,    90,   217,   196,   206,     0,     0,     0,     0,
       0,    89,     0,     0,    90,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    57,
      58,   169,    95,    96,    97,    98,    99,   100,   101,   102,
      59,     0,     0,    23,     0,    96,    97,    98,    99,    60,
     101,   102,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,    65,    34,    35,     0,    69,
       0,    36,    37,    20,     0,     0,    21,    22,     0,     0,
       0,    23,     0,    38,    24,     0,    39,     0,    25,     0,
      26,    27,     0,    87,     0,    28,    29,     0,    88,     0,
      30,    31,    32,    33,    34,    35,     0,     0,    89,    36,
      37,    90,     0,     0,     0,     0,     0,   181,     0,     0,
       0,    38,   182,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    87,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    89,     0,     0,    90,    88,   114,
       0,     0,    87,     0,     0,     0,   113,    88,    89,     0,
       0,    90,     0,     0,     0,     0,     0,    89,     0,     0,
      90,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    87,
       0,    96,    97,     0,    88,   209,   101,   102,     0,     0,
       0,     0,     0,    87,    89,     0,     0,    90,    88,   210,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    87,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
      87,     0,     0,     0,    89,    88,     0,    90,     0,     0,
       0,    87,     0,     0,     0,    89,    88,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    89,     0,     0,    90,
       0,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    87,     0,     0,
       0,     0,    88,     0,    87,     0,     0,     0,     0,    88,
       0,     0,    89,     0,     0,    90,     0,     0,     0,    89,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    96,    97,    98,    99,   100,   101,   102,
      20,   157,     0,    21,    22,     0,     0,     0,    23,     0,
       0,    24,     0,     0,     0,    25,     0,    26,    27,     0,
       0,     0,    28,    29,     0,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    20,    36,    37,    21,    22,
       0,     0,     0,    23,     0,     0,    24,     0,    38,     0,
      25,    39,    26,    27,     0,     0,     0,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,    35,     0,     0,
       0,    36,    37,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,    39,    28,    29,   122,
     123,   124,     0,     0,     0,    65,    34,    35,     0,     0,
     125,    36,    37,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,    39,    28,    29,     0,
       0,     0,     0,     0,     0,    65,    34,    35,     0,     0,
       0,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,    39
};

static const yytype_int16 yycheck[] =
{
      14,    39,    20,    24,     7,    22,    23,    24,     3,   193,
      13,    63,    64,     8,     5,     6,   113,   114,    41,    36,
      37,    38,    39,    18,    20,    16,    21,    41,     3,   213,
       4,     5,     6,     8,    25,     3,    41,     0,    17,   207,
       8,    46,    16,    18,    41,    64,    21,    65,    67,     3,
      18,    25,   220,    21,     8,    69,    73,    52,    53,    54,
      77,    78,    57,    58,    18,     7,    68,    21,   106,    65,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   183,     3,    61,    57,
      58,     3,     8,    60,   111,    62,     8,     8,    52,   116,
      67,   115,    18,    57,    58,    21,    18,    18,    23,    21,
      21,     6,   209,   210,   152,    18,    11,    64,    21,   221,
      67,    41,   224,    41,    42,    43,    61,    61,    63,    63,
      60,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     3,    41,    57,    12,    63,     8,    41,
      41,    13,    62,    62,   171,   193,    62,    61,    18,    61,
      60,    21,    61,    31,   181,   182,    62,     3,    41,    41,
      63,    41,     8,    62,    62,   213,    63,    42,    63,    63,
      63,    62,    18,    62,    61,    21,    61,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    21,
      42,    61,    66,    62,    10,    61,    61,   221,    61,    61,
     224,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     3,    63,    61,    63,    67,     8,    63,
      61,    66,    61,    61,     3,    61,    61,     7,    18,     8,
      12,    21,    61,    61,    12,    11,     3,    77,    69,    18,
     130,     8,    21,   211,   177,   194,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     5,
       6,    61,    51,    52,    53,    54,    55,    56,    57,    58,
      16,    -1,    -1,    19,    -1,    52,    53,    54,    55,    25,
      57,    58,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,     7,
      -1,    47,    48,    11,    -1,    -1,    14,    15,    -1,    -1,
      -1,    19,    -1,    59,    22,    -1,    62,    -1,    26,    -1,
      28,    29,    -1,     3,    -1,    33,    34,    -1,     8,    -1,
      38,    39,    40,    41,    42,    43,    -1,    -1,    18,    47,
      48,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    59,    32,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     3,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    18,    -1,    -1,    21,     8,     9,
      -1,    -1,     3,    -1,    -1,    -1,    30,     8,    18,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      21,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     3,
      -1,    52,    53,    -1,     8,     9,    57,    58,    -1,    -1,
      -1,    -1,    -1,     3,    18,    -1,    -1,    21,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     3,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    18,     8,    -1,    21,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    18,     8,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     3,    -1,    -1,
      -1,    -1,     8,    -1,     3,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    18,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    52,    53,    54,    55,    56,    57,    58,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    -1,    -1,    11,    47,    48,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    59,    -1,
      26,    62,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    47,    48,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,
      46,    47,    48,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    71,    72,    41,     0,    17,    73,    74,    61,
      41,    75,    76,    79,     7,    80,    99,    76,    64,    67,
      11,    14,    15,    19,    22,    26,    28,    29,    33,    34,
      38,    39,    40,    41,    42,    43,    47,    48,    59,    62,
      81,    82,    84,    86,    88,    89,    90,    91,    92,    93,
      94,    95,    68,    23,    98,    41,     4,     5,     6,    16,
      25,    77,    85,    41,    41,    41,    88,    88,    88,     7,
      83,    84,    87,    60,    62,    62,    62,    60,    62,    67,
      88,    88,    88,    85,    88,    12,    84,     3,     8,    18,
      21,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    61,    41,    13,    20,    65,    78,    61,
      61,    60,    61,    30,     9,    82,    31,    88,    41,    46,
      41,    41,    35,    36,    37,    46,    86,    88,    88,    97,
      63,    63,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    62,    41,
      85,    42,    20,    65,    88,    83,    83,    12,    88,    61,
      63,    63,    63,    63,    62,    62,    62,    61,    61,    61,
      63,    64,    41,    89,    79,   101,   102,    62,    66,    85,
      42,    27,    32,    10,    96,    61,    61,    61,    61,    63,
      63,    63,    88,    67,    61,    63,   101,    66,    88,    88,
      83,    61,    61,    61,    77,    85,   102,    61,    63,     9,
       9,    74,   100,    67,   103,    83,    83,    98,    77,    85,
      61,     7,    74,    81,     7,    12,    81,    61,    12,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    74,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    86,    86,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    90,    91,
      91,    92,    93,    94,    95,    96,    96,    97,    97,    97,
      98,    98,    99,    99,   100,   101,   101,   101,   102,   102,
     103,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     1,     2,     4,
       4,     3,     4,     3,     4,     1,     3,     3,     0,     1,
       1,     2,     1,     1,     2,     4,     4,     4,     6,     6,
       6,     4,     5,     5,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     4,     1,     1,     1,     1,     5,     8,
       8,     4,     4,     2,     3,     0,     2,     0,     1,     3,
       0,    13,     0,     8,     6,     0,     1,     3,     3,     3,
       0,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 136 "ptucc_parser.y" /* yacc.c:1646  */
    { 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", (yyvsp[-3].crepr));
		printf(" \n %s  \n", (yyvsp[-2].crepr));
		printf("\n\nint main(){\n %s\nreturn 0;\n}  \n", (yyvsp[-1].crepr));
	}
}
#line 1581 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1587 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 150 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("\n%s\n%s\n%s\n",(yyvsp[-2].crepr),(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1593 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 153 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)="";}
#line 1599 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 154 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 1605 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 158 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s \n %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1611 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s %s;",(yyvsp[-1].crepr),(yyvsp[-3].crepr)); }
#line 1617 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 162 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s %s;",(yyvsp[-1].crepr),(yyvsp[-3].crepr));  }
#line 1623 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 164 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("typeof(%s*)",(yyvsp[0].crepr)); }
#line 1629 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=template("typeof(%s%s)",(yyvsp[0].crepr),(yyvsp[-2].crepr)); }
#line 1635 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("[%s]",(yyvsp[-1].crepr)); }
#line 1641 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr)); }
#line 1647 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1653 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 171 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1659 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 175 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=template(" %s ",(yyvsp[-1].crepr)); }
#line 1665 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 178 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template(""); }
#line 1671 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 179 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1677 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 181 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1683 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 182 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s\n %s",(yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1689 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 184 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1695 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 185 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1701 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 187 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s;",(yyvsp[-1].crepr)); }
#line 1707 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 188 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s= %s;",(yyvsp[-3].crepr),(yyvsp[-1].crepr)); }
#line 1713 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s= %s;",(yyvsp[-3].crepr),(yyvsp[-1].crepr)); }
#line 1719 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 190 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s= %s;",(yyvsp[-3].crepr),(yyvsp[-1].crepr)); }
#line 1725 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 191 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%s\",&%s);\n",(yyvsp[-5].crepr)); }
#line 1731 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 192 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%d\",&%s);\n",(yyvsp[-5].crepr)); }
#line 1737 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 193 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("scanf(\"%%f\",&%s);\n",(yyvsp[-5].crepr)); }
#line 1743 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("result= %s;",(yyvsp[-1].crepr)); }
#line 1749 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 195 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("printf(\"%%s\", &%s);\n\n",(yyvsp[-2].crepr) ); }
#line 1755 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 196 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("printf(\"%%s\", %s);\n\n",(yyvsp[-2].crepr) ); }
#line 1761 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("printf(\"%%d\", %s);\n\n",(yyvsp[-2].crepr)); }
#line 1767 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 198 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("printf(\"%%g\", %s);\n",(yyvsp[-2].crepr)); }
#line 1773 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 199 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1779 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1785 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 201 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1791 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 202 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1797 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 203 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1803 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1809 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("return result;"); }
#line 1815 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 207 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("int"); }
#line 1821 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 208 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("int"); }
#line 1827 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 209 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("char"); }
#line 1833 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("double"); }
#line 1839 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 212 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("1"); }
#line 1845 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("0"); }
#line 1851 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[-1].crepr)); }
#line 1857 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 218 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 1863 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 219 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s || %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1869 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 220 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("(%s) %s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1875 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s || %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1881 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 222 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s && %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1887 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 223 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s && %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1893 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 224 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s == %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1899 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s != %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1905 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 226 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s < %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1911 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 227 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s > %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1917 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s <= %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1923 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s >= %s",(yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1929 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 230 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("+ %s",(yyvsp[0].crepr)); }
#line 1935 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 231 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("- %s",(yyvsp[0].crepr)); }
#line 1941 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s * %s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1947 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s / %s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1953 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 234 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s / %s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1959 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 235 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s %% %s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1965 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s + %s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1971 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 237 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s - %s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1977 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("!%s",(yyvsp[0].crepr)); }
#line 1983 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("!%s",(yyvsp[0].crepr)); }
#line 1989 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 240 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("(%s)",(yyvsp[-1].crepr)); }
#line 1995 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 241 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s ( %s )",(yyvsp[-3].crepr),(yyvsp[-1].crepr)); }
#line 2001 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 242 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2007 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 246 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2013 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2019 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 248 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2025 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 250 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("\nif( %s ){\n%s\n}\n%s",(yyvsp[-3].crepr),(yyvsp[-1].crepr),(yyvsp[0].crepr) ); }
#line 2031 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 252 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("for( %s=%s; %s<%s; %s++){\n%s\n}", (yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2037 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 253 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("for( %s=%s; %s<%s; %s--){\n%s\n}", (yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2043 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 255 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("while(%s ){\n%s\n}",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 2049 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 257 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=template("do{\n%s\n}while(%s);",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 2055 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s:",(yyvsp[-1].crepr)); }
#line 2061 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 261 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("goto %s;",(yyvsp[-1].crepr)); }
#line 2067 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 263 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= ""; }
#line 2073 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 264 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("else{\n%s\n}\n"); }
#line 2079 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 267 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= ""; }
#line 2085 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 268 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2091 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 269 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 2097 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 271 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= ""; }
#line 2103 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 272 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)= template("%s\n%s %s(%s){\n%s result;\n%s\n%s\n}\n",(yyvsp[-12].crepr),(yyvsp[-6].crepr), (yyvsp[-10].crepr),(yyvsp[-8].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-2].crepr)); }
#line 2109 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 276 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= ""; }
#line 2115 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 277 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s\n void %s(%s)%s",(yyvsp[-7].crepr),(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr)); }
#line 2121 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 279 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("{\n%s\n%s\n%s\n}\n",(yyvsp[-5].crepr),(yyvsp[-4].crepr),(yyvsp[-2].crepr));}
#line 2127 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= ""; }
#line 2133 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 283 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2139 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 284 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2145 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 286 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s %s",(yyvsp[0].crepr),(yyvsp[-2].crepr)); }
#line 2151 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 287 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s %s",(yyvsp[0].crepr),(yyvsp[-2].crepr)); }
#line 2157 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 290 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= ""; }
#line 2163 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 291 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2169 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 292 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)= template("%s",(yyvsp[0].crepr)); }
#line 2175 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2179 "ptucc_parser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 294 "ptucc_parser.y" /* yacc.c:1906  */



