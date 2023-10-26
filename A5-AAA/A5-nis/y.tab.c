/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PARENTHESIS_OPEN = 258,
     PARENTHESIS_CLOSE = 259,
     CURLY_BRACE_OPEN = 260,
     CURLY_BRACE_CLOSE = 261,
     SQR_BRACE_OPEN = 262,
     SQR_BRACE_CLOSE = 263,
     INC_OP = 264,
     DEC_OP = 265,
     LEFT_OP = 266,
     RIGHT_OP = 267,
     EQ_OP = 268,
     NE_OP = 269,
     LTE_OP = 270,
     GTE_OP = 271,
     AND_OP = 272,
     OR_OP = 273,
     PTR_OP = 274,
     LT_OP = 275,
     GT_OP = 276,
     EQ = 277,
     DOT = 278,
     BITWISEAND = 279,
     BITWISEOR = 280,
     BITWISEXOR = 281,
     STAR = 282,
     PLUS = 283,
     MINUS = 284,
     NOT = 285,
     EXCLAMATION = 286,
     DIVIDE = 287,
     PERCENTAGE = 288,
     ADD_ASSIGN = 289,
     SUB_ASSIGN = 290,
     MUL_ASSIGN = 291,
     DIV_ASSIGN = 292,
     MOD_ASSIGN = 293,
     LEFT_ASSIGN = 294,
     RIGHT_ASSIGN = 295,
     OR_ASSIGN = 296,
     AND_ASSIGN = 297,
     XOR_ASSIGN = 298,
     COLON = 299,
     SEMI_COLON = 300,
     ELLIPSIS = 301,
     QUESTION_MARK = 302,
     COMMA = 303,
     HASH = 304,
     EXTERN = 305,
     STATIC = 306,
     AUTO = 307,
     REGISTER = 308,
     VOID_TYPE = 309,
     CHAR_TYPE = 310,
     SHORT = 311,
     INT_TYPE = 312,
     LONG = 313,
     FLOAT_TYPE = 314,
     DOUBLE = 315,
     SIGNED = 316,
     UNSIGNED = 317,
     BOOL = 318,
     COMPLEX = 319,
     IMAGINARY = 320,
     CONST = 321,
     RESTRICT = 322,
     VOLATILE = 323,
     ENUM = 324,
     INLINE = 325,
     SIZEOF = 326,
     STRUCT = 327,
     TYPEDEF = 328,
     UNION = 329,
     IF = 330,
     ELSE = 331,
     CASE = 332,
     DEFAULT = 333,
     WHILE = 334,
     CONTINUE = 335,
     DO = 336,
     GOTO = 337,
     FOR = 338,
     RETURN = 339,
     BREAK = 340,
     SWITCH = 341,
     UNEXPECTED_TOKEN = 342,
     IDENTIFIER = 343,
     INTEGER_CONST = 344,
     FLOAT_CONST = 345,
     CHAR_CONST = 346,
     STRING_LITERAL = 347,
     THEN = 348
   };
#endif
/* Tokens.  */
#define PARENTHESIS_OPEN 258
#define PARENTHESIS_CLOSE 259
#define CURLY_BRACE_OPEN 260
#define CURLY_BRACE_CLOSE 261
#define SQR_BRACE_OPEN 262
#define SQR_BRACE_CLOSE 263
#define INC_OP 264
#define DEC_OP 265
#define LEFT_OP 266
#define RIGHT_OP 267
#define EQ_OP 268
#define NE_OP 269
#define LTE_OP 270
#define GTE_OP 271
#define AND_OP 272
#define OR_OP 273
#define PTR_OP 274
#define LT_OP 275
#define GT_OP 276
#define EQ 277
#define DOT 278
#define BITWISEAND 279
#define BITWISEOR 280
#define BITWISEXOR 281
#define STAR 282
#define PLUS 283
#define MINUS 284
#define NOT 285
#define EXCLAMATION 286
#define DIVIDE 287
#define PERCENTAGE 288
#define ADD_ASSIGN 289
#define SUB_ASSIGN 290
#define MUL_ASSIGN 291
#define DIV_ASSIGN 292
#define MOD_ASSIGN 293
#define LEFT_ASSIGN 294
#define RIGHT_ASSIGN 295
#define OR_ASSIGN 296
#define AND_ASSIGN 297
#define XOR_ASSIGN 298
#define COLON 299
#define SEMI_COLON 300
#define ELLIPSIS 301
#define QUESTION_MARK 302
#define COMMA 303
#define HASH 304
#define EXTERN 305
#define STATIC 306
#define AUTO 307
#define REGISTER 308
#define VOID_TYPE 309
#define CHAR_TYPE 310
#define SHORT 311
#define INT_TYPE 312
#define LONG 313
#define FLOAT_TYPE 314
#define DOUBLE 315
#define SIGNED 316
#define UNSIGNED 317
#define BOOL 318
#define COMPLEX 319
#define IMAGINARY 320
#define CONST 321
#define RESTRICT 322
#define VOLATILE 323
#define ENUM 324
#define INLINE 325
#define SIZEOF 326
#define STRUCT 327
#define TYPEDEF 328
#define UNION 329
#define IF 330
#define ELSE 331
#define CASE 332
#define DEFAULT 333
#define WHILE 334
#define CONTINUE 335
#define DO 336
#define GOTO 337
#define FOR 338
#define RETURN 339
#define BREAK 340
#define SWITCH 341
#define UNEXPECTED_TOKEN 342
#define IDENTIFIER 343
#define INTEGER_CONST 344
#define FLOAT_CONST 345
#define CHAR_CONST 346
#define STRING_LITERAL 347
#define THEN 348




/* Copy the first part of user declarations.  */
#line 1 "ass5_19CS30031_19CS10070.y"

    #include "ass5_19CS30031_19CS10070_translator.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(const char*);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "ass5_19CS30031_19CS10070.y"
{
    int ival;
    char *fval;
    char *cval;
    char *sval;
    char *unary_op;
    int instr_num;
    int num_params;
    Expression *expr;
    Statement *stmt;
    Array *array;
    SymType *sym_type;
    Symbol *symbol;
}
/* Line 193 of yacc.c.  */
#line 305 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 318 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   995

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNRULES -- Number of states.  */
#define YYNSTATES  369

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,     7,     9,    11,    13,
      17,    19,    21,    23,    25,    30,    35,    39,    43,    46,
      49,    56,    64,    66,    67,    69,    73,    75,    78,    81,
      84,    87,    92,    94,    96,    98,   100,   102,   104,   106,
     111,   113,   117,   121,   125,   127,   131,   135,   137,   141,
     145,   147,   151,   155,   159,   163,   165,   169,   173,   175,
     179,   181,   185,   187,   191,   193,   198,   200,   205,   207,
     217,   219,   223,   225,   227,   229,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   251,   253,   257,   260,   263,
     266,   269,   271,   272,   274,   278,   280,   281,   283,   287,
     289,   291,   293,   295,   297,   299,   301,   303,   305,   307,
     309,   311,   313,   315,   317,   319,   321,   324,   327,   329,
     330,   332,   333,   339,   346,   349,   351,   355,   357,   361,
     363,   365,   367,   369,   372,   374,   376,   380,   386,   391,
     396,   400,   407,   413,   420,   426,   431,   437,   442,   447,
     450,   454,   456,   459,   461,   462,   464,   468,   470,   474,
     477,   479,   481,   485,   487,   489,   493,   498,   501,   506,
     509,   511,   512,   514,   517,   521,   524,   526,   528,   530,
     532,   534,   536,   540,   545,   549,   555,   557,   561,   563,
     564,   566,   568,   571,   573,   574,   585,   593,   599,   607,
     617,   631,   640,   644,   647,   650,   654,   656,   659,   661,
     663,   671,   673,   676,   678
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     165,     0,    -1,    -1,    -1,    -1,    -1,    88,    -1,   100,
      -1,    92,    -1,     3,   120,     4,    -1,    89,    -1,    90,
      -1,    91,    -1,    99,    -1,   101,     7,   120,     8,    -1,
     101,     3,   102,     4,    -1,   101,    23,    88,    -1,   101,
      19,    88,    -1,   101,     9,    -1,   101,    10,    -1,     3,
     147,     4,     5,   149,     6,    -1,     3,   147,     4,     5,
     149,    48,     6,    -1,   103,    -1,    -1,   118,    -1,   103,
      48,   118,    -1,   101,    -1,     9,   104,    -1,    10,   104,
      -1,   105,   106,    -1,    71,   104,    -1,    71,     3,   147,
       4,    -1,    24,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,   104,    -1,     3,   147,     4,   106,
      -1,   106,    -1,   107,    27,   106,    -1,   107,    32,   106,
      -1,   107,    33,   106,    -1,   107,    -1,   108,    28,   107,
      -1,   108,    29,   107,    -1,   108,    -1,   109,    11,   108,
      -1,   109,    12,   108,    -1,   109,    -1,   110,    20,   109,
      -1,   110,    21,   109,    -1,   110,    15,   109,    -1,   110,
      16,   109,    -1,   110,    -1,   111,    13,   110,    -1,   111,
      14,   110,    -1,   111,    -1,   112,    24,   111,    -1,   112,
      -1,   113,    26,   112,    -1,   113,    -1,   114,    25,   113,
      -1,   114,    -1,   115,    17,    95,   114,    -1,   115,    -1,
     116,    18,    95,   115,    -1,   116,    -1,   116,    96,    47,
      95,   120,    96,    44,    95,   117,    -1,   117,    -1,   104,
     119,   118,    -1,    22,    -1,    36,    -1,    37,    -1,    38,
      -1,    34,    -1,    35,    -1,    39,    -1,    40,    -1,    42,
      -1,    43,    -1,    41,    -1,   118,    -1,   120,    48,   118,
      -1,   117,    -1,   123,   126,    45,    -1,   128,   124,    -1,
     129,   124,    -1,   136,   124,    -1,   137,   124,    -1,   123,
      -1,    -1,   127,    -1,   125,    48,   127,    -1,   125,    -1,
      -1,   138,    -1,   138,    22,   148,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,   133,
      -1,   129,   131,    -1,   136,   131,    -1,   130,    -1,    -1,
      88,    -1,    -1,    69,   132,     5,   134,     6,    -1,    69,
     132,     5,   134,    48,     6,    -1,    69,    88,    -1,   135,
      -1,   134,    48,   135,    -1,    88,    -1,    88,    22,   121,
      -1,    66,    -1,    67,    -1,    68,    -1,    70,    -1,   140,
     139,    -1,   139,    -1,    88,    -1,     3,   138,     4,    -1,
     139,     7,   141,   118,     8,    -1,   139,     7,   141,     8,
      -1,   139,     7,   118,     8,    -1,   139,     7,     8,    -1,
     139,     7,    51,   141,   118,     8,    -1,   139,     7,    51,
     118,     8,    -1,   139,     7,   141,    51,   118,     8,    -1,
     139,     7,   141,    27,     8,    -1,   139,     7,    27,     8,
      -1,   139,     3,    97,   143,     4,    -1,   139,     3,   146,
       4,    -1,   139,     3,    97,     4,    -1,    27,   142,    -1,
      27,   142,   140,    -1,   136,    -1,   141,   136,    -1,   141,
      -1,    -1,   144,    -1,   144,    48,    46,    -1,   145,    -1,
     144,    48,   145,    -1,   123,   138,    -1,   123,    -1,    88,
      -1,   146,    48,    88,    -1,   130,    -1,   118,    -1,     5,
     149,     6,    -1,     5,   149,    48,     6,    -1,   151,   148,
      -1,   149,    48,   151,   148,    -1,   152,    22,    -1,   150,
      -1,    -1,   153,    -1,   152,   153,    -1,     7,   121,     8,
      -1,    23,    88,    -1,   155,    -1,   156,    -1,   160,    -1,
     162,    -1,   163,    -1,   164,    -1,    88,    44,   154,    -1,
      77,   121,    44,   154,    -1,    78,    44,   154,    -1,     5,
      98,    97,   158,     6,    -1,   159,    -1,   157,    95,   159,
      -1,   157,    -1,    -1,   122,    -1,   154,    -1,   161,    45,
      -1,   120,    -1,    -1,    75,     3,   120,     4,    95,   154,
      96,    76,    95,   154,    -1,    75,     3,   120,     4,    95,
     154,    96,    -1,    86,     3,   120,     4,   154,    -1,    79,
      95,     3,   120,     4,    95,   154,    -1,    81,    95,   154,
      95,    79,     3,   120,     4,    45,    -1,    83,     3,   161,
      45,    95,   161,    45,    95,   161,    96,     4,    95,   154,
      -1,    83,     3,   122,   161,    45,   161,     4,   154,    -1,
      82,    88,    45,    -1,    80,    45,    -1,    85,    45,    -1,
      84,   161,    45,    -1,   166,    -1,   165,   166,    -1,   167,
      -1,   122,    -1,   123,   138,   169,    97,     5,   158,     6,
      -1,   122,    -1,   168,   122,    -1,   168,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    92,   101,   114,   129,   135,   140,   147,
     155,   162,   169,   178,   187,   210,   219,   222,   225,   233,
     242,   245,   252,   258,   264,   270,   278,   282,   289,   296,
     335,   338,   344,   348,   352,   356,   360,   364,   371,   376,
     385,   406,   435,   463,   493,   498,   511,   526,   531,   544,
     561,   565,   580,   595,   610,   627,   632,   652,   676,   681,
     695,   699,   713,   717,   733,   738,   754,   759,   774,   780,
     806,   812,   832,   836,   838,   840,   842,   844,   846,   848,
     850,   852,   854,   859,   865,   870,   878,   884,   887,   890,
     893,   898,   902,   906,   909,   914,   918,   922,   926,   935,
     938,   941,   944,   951,   956,   961,   964,   969,   972,   977,
     980,   983,   986,   989,   992,   995,  1001,  1003,  1009,  1013,
    1017,  1021,  1026,  1029,  1032,  1039,  1042,  1047,  1050,  1055,
    1058,  1061,  1066,  1071,  1082,  1098,  1104,  1109,  1112,  1115,
    1137,  1158,  1161,  1164,  1167,  1170,  1174,  1192,  1195,  1217,
    1222,  1229,  1232,  1237,  1241,  1245,  1248,  1253,  1256,  1261,
    1264,  1269,  1272,  1277,  1282,  1287,  1290,  1295,  1298,  1303,
    1308,  1312,  1316,  1319,  1324,  1327,  1336,  1339,  1344,  1350,
    1355,  1360,  1368,  1371,  1374,  1381,  1389,  1394,  1402,  1408,
    1415,  1419,  1426,  1433,  1438,  1448,  1461,  1472,  1479,  1495,
    1508,  1523,  1529,  1532,  1535,  1538,  1549,  1552,  1557,  1560,
    1566,  1575,  1578,  1583,  1587
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PARENTHESIS_OPEN", "PARENTHESIS_CLOSE",
  "CURLY_BRACE_OPEN", "CURLY_BRACE_CLOSE", "SQR_BRACE_OPEN",
  "SQR_BRACE_CLOSE", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "EQ_OP",
  "NE_OP", "LTE_OP", "GTE_OP", "AND_OP", "OR_OP", "PTR_OP", "LT_OP",
  "GT_OP", "EQ", "DOT", "BITWISEAND", "BITWISEOR", "BITWISEXOR", "STAR",
  "PLUS", "MINUS", "NOT", "EXCLAMATION", "DIVIDE", "PERCENTAGE",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "OR_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "COLON", "SEMI_COLON", "ELLIPSIS", "QUESTION_MARK", "COMMA", "HASH",
  "EXTERN", "STATIC", "AUTO", "REGISTER", "VOID_TYPE", "CHAR_TYPE",
  "SHORT", "INT_TYPE", "LONG", "FLOAT_TYPE", "DOUBLE", "SIGNED",
  "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY", "CONST", "RESTRICT",
  "VOLATILE", "ENUM", "INLINE", "SIZEOF", "STRUCT", "TYPEDEF", "UNION",
  "IF", "ELSE", "CASE", "DEFAULT", "WHILE", "CONTINUE", "DO", "GOTO",
  "FOR", "RETURN", "BREAK", "SWITCH", "UNEXPECTED_TOKEN", "IDENTIFIER",
  "INTEGER_CONST", "FLOAT_CONST", "CHAR_CONST", "STRING_LITERAL", "THEN",
  "$accept", "M", "N", "CT", "CB", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list", "init_declarator_list_opt", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "identifier_opt", "enum_specifier",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "type_qualifier_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designation_opt", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item_list_opt", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "declaration_list_opt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    98,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   109,   109,   109,
     110,   110,   110,   110,   110,   111,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   122,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   137,   138,   138,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   148,   148,   148,   149,   149,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   154,
     154,   154,   155,   155,   155,   156,   157,   157,   158,   158,
     159,   159,   160,   161,   161,   162,   162,   162,   163,   163,
     163,   163,   164,   164,   164,   164,   165,   165,   166,   166,
     167,   168,   168,   169,   169
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     1,     1,     1,     3,
       1,     1,     1,     1,     4,     4,     3,     3,     2,     2,
       6,     7,     1,     0,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     4,     1,     4,     1,     9,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     0,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     0,
       1,     0,     5,     6,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     2,     1,     1,     3,     5,     4,     4,
       3,     6,     5,     6,     5,     4,     5,     4,     4,     2,
       3,     1,     2,     1,     0,     1,     3,     1,     3,     2,
       1,     1,     3,     1,     1,     3,     4,     2,     4,     2,
       1,     0,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     5,     1,     3,     1,     0,
       1,     1,     2,     1,     0,    10,     7,     5,     7,     9,
      13,     8,     3,     2,     2,     3,     1,     2,     1,     1,
       7,     1,     2,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   129,   130,   131,
     121,   132,   209,    96,    92,    92,   115,    92,    92,     0,
     206,   208,   124,     0,     0,   154,   135,    95,     0,    93,
      97,   134,     0,    91,    87,    88,    89,    90,     1,   207,
       0,     0,   151,   153,   149,     0,    86,     0,   211,    96,
     213,     4,     4,     0,   133,   127,     0,   125,   136,   152,
     150,    94,    97,     0,   171,     0,     0,    32,    33,    34,
      35,    36,    37,     0,     6,    10,    11,    12,     8,    13,
       7,    26,    38,     0,    40,    44,    47,    50,    55,    58,
      60,    62,    64,    66,    68,    70,   164,    98,   212,     0,
     161,     0,     0,   140,    33,     0,     0,     0,     0,   122,
       0,    83,     0,   119,   163,   119,     0,     0,     0,     0,
     170,     0,     0,   172,     0,    27,    28,     0,    30,    23,
       0,    18,    19,     0,     0,    72,    76,    77,    73,    74,
      75,    78,    79,    82,    80,    81,     0,    38,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     2,     0,   189,   148,
     160,     0,   155,   157,   147,     0,   145,     0,     0,   139,
     138,    33,     0,     0,    85,   128,   123,   126,     9,     0,
     118,   116,   117,     0,     0,   175,   165,   171,   167,   169,
     173,     0,     0,     0,    22,    24,     0,    17,    16,    71,
      41,    42,    43,    45,    46,    48,    49,    53,    54,    51,
      52,    56,    57,    59,    61,    63,     0,     0,     2,     5,
       0,     0,     0,     2,     0,     2,     0,     0,   194,     0,
       0,     6,   193,   190,   191,   176,   177,     2,     0,   186,
     178,     0,   179,   180,   181,   159,   146,     0,   162,   142,
       0,   144,     0,   137,    84,   171,    39,   174,   166,     0,
       0,    31,    15,     0,    14,    65,    67,     0,     4,     0,
       0,   194,     0,   203,   194,     0,   194,     0,   204,     0,
     194,   194,   210,   192,   156,   158,   141,   143,     0,   168,
      25,     3,   189,     0,   194,   184,     0,     2,   202,   194,
       0,   205,     0,   182,   187,    20,   171,     0,     0,     2,
     183,     0,     0,     0,     2,   194,    21,     2,   185,   194,
       2,     0,   194,   194,   197,     0,     3,   194,     0,     0,
       0,    69,   196,   198,     0,   194,     2,     2,     0,   201,
     194,   194,   199,     3,   195,     0,     2,   194,   200
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   236,   177,   109,   288,    89,    90,    91,   213,   214,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   121,   156,   252,   195,   253,    59,
      44,    37,    38,    39,    24,    25,   124,   201,    33,    26,
      66,    67,    27,    28,    72,    41,    42,    53,    54,   181,
     182,   183,   112,   126,   107,   129,   130,   131,   132,   133,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    29,    30,    31,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -300
static const yytype_int16 yypact[] =
{
     925,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
     -70,  -300,  -300,    19,   925,   925,  -300,   925,   925,   817,
    -300,  -300,    51,    62,    19,    92,  -300,    27,   101,  -300,
     904,   154,    18,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
      49,   106,  -300,    92,   142,    19,  -300,   668,  -300,    19,
     925,  -300,    83,   598,   154,   152,    33,  -300,  -300,  -300,
    -300,  -300,   169,   493,   147,   705,   705,  -300,  -300,  -300,
    -300,  -300,  -300,   742,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,   132,   249,   774,  -300,    87,    -4,    37,   157,   110,
     170,   173,   171,   186,    65,  -300,  -300,  -300,  -300,   199,
    -300,   838,    15,  -300,   197,   440,   198,   652,   774,  -300,
      21,  -300,    22,   318,  -300,   318,   203,   774,   121,    67,
    -300,   668,   143,  -300,   493,  -300,  -300,   493,  -300,   774,
     774,  -300,  -300,   122,   123,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,   774,  -300,  -300,   774,
     774,   774,   774,   774,   774,   774,   774,   774,   774,   774,
     774,   774,   774,   774,   774,  -300,  -300,   166,   250,  -300,
      19,   212,   174,  -300,  -300,   130,  -300,   211,   440,  -300,
    -300,   213,   774,   215,  -300,  -300,  -300,  -300,  -300,   774,
    -300,  -300,  -300,   697,   217,  -300,  -300,    36,  -300,  -300,
    -300,   222,   224,   226,   188,  -300,     9,  -300,  -300,  -300,
    -300,  -300,  -300,    87,    87,    -4,    -4,    37,    37,    37,
      37,   157,   157,   110,   170,   173,   774,   774,  -300,  -300,
     231,   774,   193,  -300,   194,  -300,   150,   237,   774,   196,
     239,   201,   195,  -300,  -300,  -300,  -300,   240,   241,  -300,
    -300,   204,  -300,  -300,  -300,  -300,  -300,   877,  -300,  -300,
     242,  -300,   246,  -300,  -300,   147,  -300,  -300,  -300,   668,
     243,   243,  -300,   774,  -300,   171,   186,   774,  -300,   774,
     214,   562,   253,  -300,   562,   218,   424,   219,  -300,   774,
     562,   340,  -300,  -300,  -300,  -300,  -300,  -300,    68,  -300,
    -300,   195,   250,    24,   562,  -300,   774,  -300,  -300,   774,
     220,  -300,    28,  -300,  -300,  -300,    46,   223,   251,  -300,
    -300,    32,   183,   230,  -300,   562,  -300,  -300,  -300,   562,
    -300,   265,   774,   774,  -300,   774,  -300,   562,   774,   278,
     248,  -300,   221,  -300,    34,   562,  -300,  -300,   254,  -300,
     774,   562,  -300,  -300,  -300,   290,  -300,   562,  -300
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -105,  -299,   -55,  -300,  -300,  -300,  -300,  -300,  -300,
     -73,  -300,   -82,    35,    20,    14,    31,    97,   125,   148,
      88,    86,  -300,  -114,   -13,  -300,   -72,  -112,     0,     6,
     162,  -300,  -300,   271,  -300,    11,    70,   227,  -300,  -300,
    -300,   228,   -12,  -300,   -18,   295,   292,   -49,  -300,  -300,
    -300,    77,  -300,   -79,  -123,    72,  -300,  -198,  -300,   225,
    -147,  -300,  -300,  -300,    39,    52,  -300,  -211,  -300,  -300,
    -300,  -300,   325,  -300,  -300,  -300
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -215
static const yytype_int16 yytable[] =
{
      22,   122,   135,   136,   194,    40,    23,   111,   208,   279,
     138,   158,   327,   194,   117,   204,    51,   284,    32,   184,
     157,    34,    34,    52,   162,   163,   198,   196,   329,    22,
      43,    43,   335,    43,    43,    23,   340,   297,   358,   119,
      58,    69,   278,   127,   106,   157,    35,   352,   164,   165,
     116,    52,   336,   127,   157,   211,  -120,   199,   212,   128,
     108,   125,   122,   185,   365,   122,   188,    50,   216,   128,
     199,   237,   199,   206,   325,    55,   199,   220,   221,   222,
     199,   120,   199,   176,   123,   320,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   187,    52,   193,    69,    36,    36,   333,    65,
      68,   125,    -3,   125,   159,   207,   326,   180,   106,   160,
     161,   276,   125,   170,   171,   125,   215,   194,   279,   290,
     157,   349,   350,   287,   123,   139,   123,    65,   292,   140,
     294,   141,   142,   219,   315,   123,    56,   317,   123,   363,
     127,   143,   301,   323,   127,   144,   309,    62,    17,    18,
      19,    63,   265,   157,   157,   209,   128,   330,   157,    35,
     128,   110,   166,   167,   118,   270,    69,   168,   169,   272,
     227,   228,   229,   230,   225,   226,   274,    45,   344,    46,
      47,    57,   346,   200,   172,   200,   174,   223,   224,   173,
     353,   231,   232,   175,   178,   186,   189,   203,   359,   205,
     217,   218,   332,   238,   364,   311,   266,   313,   268,   269,
     368,   271,   267,   273,   339,   277,   280,   322,   281,   343,
     282,   351,   345,   312,   289,   347,   283,   291,   295,   293,
     296,   298,   299,   199,   331,   300,  -188,   302,   275,   303,
     306,   360,   361,    73,   307,   239,   316,   338,   314,    75,
      76,   367,   341,   318,   321,   334,   106,   337,   348,   233,
     310,   145,   157,   180,    77,   342,   354,    78,    79,    80,
      81,    82,   355,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   356,   366,  -194,   319,   357,   234,   362,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    83,   235,   286,   285,   240,    71,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,    64,   251,    85,
      86,    87,    88,    73,   305,   239,    70,   308,   197,    75,
      76,   328,   202,   324,    49,     0,     0,   210,     0,     0,
       0,     0,     0,     0,    77,     0,     0,    78,    79,    80,
      81,    82,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    83,     0,     0,     0,   240,     0,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,    73,   251,    85,
      86,    87,    88,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,    77,    75,
      76,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,    78,    79,    80,
      81,    82,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    83,    73,     0,     0,     0,
       0,     0,    75,    76,     0,     0,    17,    18,    19,     0,
       0,    83,    84,    85,    86,    87,    88,    77,     0,     0,
      78,    79,    80,    81,    82,     0,     0,     0,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,    83,    73,     0,   239,     0,     0,
       0,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    77,     0,     0,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   113,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,   114,    79,    80,    81,    82,
       0,     0,     0,    83,     0,     0,     0,   240,     0,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   115,
     251,    85,    86,    87,    88,    73,     0,     0,     0,     0,
     190,    75,    76,     0,    17,    18,    19,     0,     0,    83,
       0,    73,     0,    74,     0,     0,    77,    75,    76,   191,
      79,    80,    81,    82,     0,     0,    84,    85,    86,    87,
      88,     0,    77,     0,     0,    78,    79,    80,    81,    82,
      73,     0,   275,   192,     0,     0,    75,    76,   134,     0,
       0,     0,     0,     0,    75,    76,     0,     0,    17,    18,
      19,    77,     0,    83,    78,    79,    80,    81,    82,    77,
       0,     0,    78,    79,    80,    81,    82,     0,     0,    83,
      84,    85,    86,    87,    88,   137,     0,     0,     0,     0,
       0,    75,    76,     0,     0,     0,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,    77,     0,    83,    78,
      79,    80,    81,    82,     0,     0,    83,    73,     0,     0,
       0,     0,     0,    75,    76,    84,    85,    86,    87,    88,
       0,     0,     0,    84,    85,    86,    87,    88,    77,     0,
       0,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,   179,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,  -214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   304,     0,     0,    57,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    75,    76,   118,    23,     0,    62,   131,   207,
      83,    93,   311,   127,    63,   127,    34,     8,    88,     4,
      93,     3,     3,    35,    28,    29,     4,     6,     4,    29,
      24,    25,     4,    27,    28,    29,     4,   248,     4,     6,
      40,    53,     6,     7,    57,   118,    27,   346,    11,    12,
      63,    63,     6,     7,   127,   134,     5,    48,   137,    23,
      60,    73,   134,    48,   363,   137,   115,     5,   140,    23,
      48,   176,    48,     6,     6,    48,    48,   159,   160,   161,
      48,    48,    48,    18,    73,   296,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   115,   115,   117,   117,    88,    88,   319,    88,
       4,   123,    47,   125,    27,    48,    48,   111,   131,    32,
      33,   203,   134,    13,    14,   137,   139,   241,   326,   241,
     203,   342,   343,   238,   123,     3,   125,    88,   243,     7,
     245,     9,    10,   156,   291,   134,    45,   294,   137,   360,
       7,    19,   257,   300,     7,    23,   279,     3,    66,    67,
      68,     7,   180,   236,   237,    22,    23,   314,   241,    27,
      23,    88,    15,    16,    22,   188,   188,    20,    21,   192,
     166,   167,   168,   169,   164,   165,   199,    25,   335,    27,
      28,    22,   339,   123,    24,   125,    25,   162,   163,    26,
     347,   170,   171,    17,     5,     8,     8,     4,   355,    88,
      88,    88,   317,    47,   361,   287,     4,   289,    88,     8,
     367,     8,    48,     8,   329,     8,     4,   299,     4,   334,
       4,   345,   337,   288,     3,   340,    48,    44,    88,    45,
       3,    45,     3,    48,   316,    44,     6,     6,     5,    45,
       8,   356,   357,     3,     8,     5,     3,     6,    44,     9,
      10,   366,    79,    45,    45,    45,   279,    44,     3,   172,
     283,    22,   345,   267,    24,    45,   348,    27,    28,    29,
      30,    31,     4,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    45,     4,    45,   296,    76,   173,    45,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   174,   237,   236,    75,    55,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    42,    88,    89,
      90,    91,    92,     3,   267,     5,    54,   275,   120,     9,
      10,   312,   125,   301,    29,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    29,
      30,    31,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,     3,    88,    89,
      90,    91,    92,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    24,     9,
      10,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    29,
      30,    31,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     3,    -1,    -1,    -1,
      -1,    -1,     9,    10,    -1,    -1,    66,    67,    68,    -1,
      -1,    71,    88,    89,    90,    91,    92,    24,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,     3,    -1,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    24,    -1,    -1,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    51,
      88,    89,    90,    91,    92,     3,    -1,    -1,    -1,    -1,
       8,     9,    10,    -1,    66,    67,    68,    -1,    -1,    71,
      -1,     3,    -1,     5,    -1,    -1,    24,     9,    10,    27,
      28,    29,    30,    31,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    24,    -1,    -1,    27,    28,    29,    30,    31,
       3,    -1,     5,    51,    -1,    -1,     9,    10,     3,    -1,
      -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    66,    67,
      68,    24,    -1,    71,    27,    28,    29,    30,    31,    24,
      -1,    -1,    27,    28,    29,    30,    31,    -1,    -1,    71,
      88,    89,    90,    91,    92,     3,    -1,    -1,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    24,    -1,    71,    27,
      28,    29,    30,    31,    -1,    -1,    71,     3,    -1,    -1,
      -1,    -1,    -1,     9,    10,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    24,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,     0,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    22,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   122,   123,   128,   129,   133,   136,   137,   165,
     166,   167,    88,   132,     3,    27,    88,   125,   126,   127,
     138,   139,   140,   123,   124,   124,   124,   124,     0,   166,
       5,   138,   136,   141,   142,    48,    45,    22,   122,   123,
     168,   169,     3,     7,   139,    88,   134,   135,     4,   136,
     140,   127,   138,     3,     5,     9,    10,    24,    27,    28,
      29,    30,    31,    71,    88,    89,    90,    91,    92,    99,
     100,   101,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   148,   122,    97,
      88,    97,   146,     8,    27,    51,   118,   141,    22,     6,
      48,   118,   120,   129,   130,   136,   147,     7,    23,   149,
     150,   151,   152,   153,     3,   104,   104,     3,   104,     3,
       7,     9,    10,    19,    23,    22,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,   119,   104,   106,    27,
      32,    33,    28,    29,    11,    12,    15,    16,    20,    21,
      13,    14,    24,    26,    25,    17,    18,    96,     5,     4,
     123,   143,   144,   145,     4,    48,     8,   118,   141,     8,
       8,    27,    51,   118,   117,   121,     6,   135,     4,    48,
     130,   131,   131,     4,   121,    88,     6,    48,   148,    22,
     153,   147,   147,   102,   103,   118,   120,    88,    88,   118,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   110,   110,   111,   112,   113,    95,    95,    47,     5,
      75,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    88,   120,   122,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   138,     4,    48,    88,     8,
     118,     8,   118,     8,   118,     5,   106,     8,     6,   151,
       4,     4,     4,    48,     8,   114,   115,    95,    98,     3,
     121,    44,    95,    45,    95,    88,     3,   161,    45,     3,
      44,    95,     6,    45,    46,   145,     8,     8,   149,   148,
     118,   120,    97,   120,    44,   154,     3,   154,    45,   122,
     161,    45,   120,   154,   159,     6,    48,    96,   158,     4,
     154,   120,    95,   161,    45,     4,     6,    44,     6,    95,
       4,    79,    45,    95,   154,    95,   154,    95,     3,   161,
     161,   117,    96,   154,   120,     4,    45,    76,     4,   154,
      95,    95,    45,   161,   154,    96,     4,    95,   154
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 86 "ass5_19CS30031_19CS10070.y"
    {
        (yyval.instr_num) = nextinstr();
    }
    break;

  case 3:
#line 92 "ass5_19CS30031_19CS10070.y"
    {
        (yyval.stmt) = new Statement();
        (yyval.stmt)->nextList = makelist(nextinstr());
        emit("goto", "");
    }
    break;

  case 4:
#line 101 "ass5_19CS30031_19CS10070.y"
    {
        if(currentSymbol->nestedTable == NULL) {
            changeTable(new SymTable(""));
        }
        else {
            changeTable(currentSymbol->nestedTable);
            emit("label", currentTable->name);
        }
    }
    break;

  case 5:
#line 114 "ass5_19CS30031_19CS10070.y"
    {
        string name = currentTable->name + "_" + toString(tableCount++); // name for new ST
        Symbol *s = currentTable->lookup(name); 
        s->nestedTable = new SymTable(name, currentTable);
        s->type = new SymType(BLOCK);
        currentSymbol = s;
    }
    break;

  case 6:
#line 130 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = new Expression(); // making a new expression and storing the symbol
            (yyval.expr)->symbol = (yyvsp[(1) - (1)].symbol);
            (yyval.expr)->type = Expression::NONBOOLEAN; 
        }
    break;

  case 7:
#line 136 "ass5_19CS30031_19CS10070.y"
    {
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on which type of constant
        }
    break;

  case 8:
#line 141 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(POINTER, (yyvsp[(1) - (1)].sval));
            (yyval.expr)->symbol->type->arr_type = new SymType(CHAR);
        }
    break;

  case 9:
#line 148 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(2) - (3)].expr); // simply equate to expression
        }
    break;

  case 10:
#line 156 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(INT, to_string((yyvsp[(1) - (1)].ival)));
            emit("=", (yyval.expr)->symbol->name, (yyvsp[(1) - (1)].ival));
        }
    break;

  case 11:
#line 163 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(FLOAT, (yyvsp[(1) - (1)].fval));
            emit("=", (yyval.expr)->symbol->name, (yyvsp[(1) - (1)].fval));
        }
    break;

  case 12:
#line 170 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(CHAR, (yyvsp[(1) - (1)].cval));
            emit("=", (yyval.expr)->symbol->name, (yyvsp[(1) - (1)].cval));
        }
    break;

  case 13:
#line 179 "ass5_19CS30031_19CS10070.y"
    { 
            // create a new array and append location of primary_expression
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[(1) - (1)].expr)->symbol;
            (yyval.array)->loc = (yyval.array)->symbol;
            (yyval.array)->subarr_type = (yyvsp[(1) - (1)].expr)->symbol->type;
        }
    break;

  case 14:
#line 188 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[(1) - (4)].array)->symbol;    
            (yyval.array)->subarr_type = (yyvsp[(1) - (4)].array)->subarr_type->arr_type; // indexing - going one level deeper
            (yyval.array)->loc = gentemp(INT); 
            (yyval.array)->type = Array::ARRAY;

            // checking if array is 1D or multi-dimensional
            if((yyvsp[(1) - (4)].array)->type == Array::ARRAY) {
                // multi-dimensional array - so need to multiply size and add offset
                Symbol *sym = gentemp(INT);
                int size = (yyval.array)->subarr_type->getSize();
                emit("*", sym->name, (yyvsp[(3) - (4)].expr)->symbol->name, to_string(size));
                emit("+", (yyval.array)->loc->name, (yyvsp[(1) - (4)].array)->loc->name, sym->name);
            } else {
                // 1D array - just calculate size
                int size = (yyval.array)->subarr_type->getSize();
                emit("*", (yyval.array)->loc->name, (yyvsp[(3) - (4)].expr)->symbol->name, to_string(size));
            }

        }
    break;

  case 15:
#line 211 "ass5_19CS30031_19CS10070.y"
    { 
            // function call
            (yyval.array) = new Array();
            (yyval.array)->symbol = gentemp((yyvsp[(1) - (4)].array)->symbol->type->type);
            emit("call", (yyval.array)->symbol->name, (yyvsp[(1) - (4)].array)->symbol->name, to_string((yyvsp[(3) - (4)].num_params)));
        }
    break;

  case 16:
#line 220 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 17:
#line 223 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 18:
#line 226 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = new Array();
            // temp with old value, then add 1
            (yyval.array)->symbol = gentemp((yyvsp[(1) - (2)].array)->symbol->type->type);
            emit("=", (yyval.array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name);
            emit("+", (yyvsp[(1) - (2)].array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name, "1"); 
        }
    break;

  case 19:
#line 234 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = new Array();
            // temp with old value, then subtract 1
            (yyval.array)->symbol = gentemp((yyvsp[(1) - (2)].array)->symbol->type->type);
            emit("=", (yyval.array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name);
            emit("-", (yyvsp[(1) - (2)].array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name, "1");
        }
    break;

  case 20:
#line 243 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 21:
#line 246 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 22:
#line 253 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.num_params) = (yyvsp[(1) - (1)].num_params); // depends on argument expression list
        }
    break;

  case 23:
#line 258 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.num_params) = 0; // no arguments
        }
    break;

  case 24:
#line 265 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.num_params) = 1; // 1 argument
            emit("param", (yyvsp[(1) - (1)].expr)->symbol->name);
        }
    break;

  case 25:
#line 271 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.num_params) = (yyvsp[(1) - (3)].num_params) + 1; // one more argument added
            emit("param", (yyvsp[(3) - (3)].expr)->symbol->name);
        }
    break;

  case 26:
#line 279 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = (yyvsp[(1) - (1)].array); // depends on postfix expression
        }
    break;

  case 27:
#line 283 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = (yyvsp[(2) - (2)].array);
            // this is pre increment, so 1 is added directly
            emit("+", (yyvsp[(2) - (2)].array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name, "1");
        }
    break;

  case 28:
#line 290 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = (yyvsp[(2) - (2)].array);
            // similar to pre increment
            emit("-", (yyvsp[(2) - (2)].array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name, "1");
        }
    break;

  case 29:
#line 297 "ass5_19CS30031_19CS10070.y"
    { 
            // operation depends on unary operator

            (yyval.array) = new Array();

            if(strcmp((yyvsp[(1) - (2)].unary_op), "&") == 0) {
                // address of -> generate new pointer type
                (yyval.array)->symbol = gentemp(POINTER);
                (yyval.array)->symbol->type->arr_type = (yyvsp[(2) - (2)].array)->symbol->type;
                emit("=&", (yyval.array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name);
            } 
            
            else if(strcmp((yyvsp[(1) - (2)].unary_op), "*") == 0) {
                // dereferencing
                (yyval.array)->symbol = (yyvsp[(2) - (2)].array)->symbol;
                (yyval.array)->loc = gentemp((yyvsp[(2) - (2)].array)->loc->type->arr_type->type);
                (yyval.array)->loc->type->arr_type = (yyvsp[(2) - (2)].array)->loc->type->arr_type->arr_type;
                (yyval.array)->type = Array::POINTER;
                emit("=*", (yyval.array)->loc->name, (yyvsp[(2) - (2)].array)->loc->name);
            } 

            else if(strcmp((yyvsp[(1) - (2)].unary_op), "+") == 0) {
                // unary plus
                (yyval.array) = (yyvsp[(2) - (2)].array);
            } 
            else { 
                // for unary minus, bitwise not and logical not
                (yyval.array) = new Array();
                (yyval.array)->symbol = gentemp((yyvsp[(2) - (2)].array)->symbol->type->type);
                
                if (strcmp((yyvsp[(1) - (2)].unary_op),"-")==0)
                    emit("=-", (yyval.array)->symbol->name, "0", (yyvsp[(2) - (2)].array)->symbol->name); // to differentiate between unary and binary minus
                else
                    emit((yyvsp[(1) - (2)].unary_op), (yyval.array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name);
            }
        }
    break;

  case 30:
#line 336 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 31:
#line 339 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 32:
#line 345 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.unary_op) = strdup("&"); 
        }
    break;

  case 33:
#line 349 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.unary_op) = strdup("*"); 
        }
    break;

  case 34:
#line 353 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.unary_op) = strdup("+"); 
        }
    break;

  case 35:
#line 357 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.unary_op) = strdup("=-"); 
        }
    break;

  case 36:
#line 361 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.unary_op) = strdup("~"); 
        }
    break;

  case 37:
#line 365 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.unary_op) = strdup("!"); 
        }
    break;

  case 38:
#line 372 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = (yyvsp[(1) - (1)].array); // depends on unary expression
        }
    break;

  case 39:
#line 377 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[(4) - (4)].array)->symbol->convert(currentType); // convert to required type
        }
    break;

  case 40:
#line 386 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = new Expression();

            // we have to obtain base type of the expression
            SymType *bType = (yyvsp[(1) - (1)].array)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            if((yyvsp[(1) - (1)].array)->type == Array::ARRAY) {
                (yyval.expr)->symbol = gentemp(bType->type);
                emit("=[]", (yyval.expr)->symbol->name, (yyvsp[(1) - (1)].array)->symbol->name, (yyvsp[(1) - (1)].array)->loc->name);
            } 
            
            else if((yyvsp[(1) - (1)].array)->type == Array::POINTER)
                (yyval.expr)->symbol = (yyvsp[(1) - (1)].array)->loc;

            else
                (yyval.expr)->symbol = (yyvsp[(1) - (1)].array)->symbol;

        }
    break;

  case 41:
#line 407 "ass5_19CS30031_19CS10070.y"
    { 
            // similar to above, we obtain base type and create temp symbol
            SymType *bType = (yyvsp[(1) - (3)].expr)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if((yyvsp[(3) - (3)].array)->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, (yyvsp[(3) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].array)->loc->name);
            } 
            else if((yyvsp[(3) - (3)].array)->type == Array::POINTER)
                temp = (yyvsp[(3) - (3)].array)->loc;
            else
                temp = (yyvsp[(3) - (3)].array)->symbol;

            // now we execute the required operation (here, multiplication)
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, temp)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type);
                emit("*", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 42:
#line 436 "ass5_19CS30031_19CS10070.y"
    { 
            // similar to above agains
            SymType *bType = (yyvsp[(1) - (3)].expr)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if((yyvsp[(3) - (3)].array)->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, (yyvsp[(3) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].array)->loc->name);
            } 
            else if((yyvsp[(3) - (3)].array)->type == Array::POINTER)
                temp = (yyvsp[(3) - (3)].array)->loc;
            else
                temp = (yyvsp[(3) - (3)].array)->symbol;

            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, temp)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type);
                emit("/", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 43:
#line 464 "ass5_19CS30031_19CS10070.y"
    { 
            // similar to above agains
            SymType *bType = (yyvsp[(1) - (3)].expr)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if((yyvsp[(3) - (3)].array)->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, (yyvsp[(3) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].array)->loc->name);
            } 
            else if((yyvsp[(3) - (3)].array)->type == Array::POINTER)
                temp = (yyvsp[(3) - (3)].array)->loc;
            else
                temp = (yyvsp[(3) - (3)].array)->symbol;

            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, temp)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type);
                emit("%", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 44:
#line 494 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on multiplicative expression
        }
    break;

  case 45:
#line 499 "ass5_19CS30031_19CS10070.y"
    {   
            // addition operation
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type);
                emit("+", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 46:
#line 512 "ass5_19CS30031_19CS10070.y"
    { 
            // subtraction operation
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type);
                emit("-", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 47:
#line 527 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on additive expression
        }
    break;

  case 48:
#line 532 "ass5_19CS30031_19CS10070.y"
    { 
            // left shift operation
            if((yyvsp[(3) - (3)].expr)->symbol->type->type == INT) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp(INT);
                emit("<<", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 49:
#line 545 "ass5_19CS30031_19CS10070.y"
    { 
            // right shift operation
            if((yyvsp[(3) - (3)].expr)->symbol->type->type == INT) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp(INT);
                emit(">>", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 50:
#line 562 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on shift expression
        }
    break;

  case 51:
#line 566 "ass5_19CS30031_19CS10070.y"
    {   
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->trueList = makelist(nextinstr());
                (yyval.expr)->falseList = makelist(nextinstr() + 1);
                emit("<", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 52:
#line 581 "ass5_19CS30031_19CS10070.y"
    { 
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->trueList = makelist(nextinstr());
                (yyval.expr)->falseList = makelist(nextinstr() + 1);
                emit(">", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 53:
#line 596 "ass5_19CS30031_19CS10070.y"
    { 
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->trueList = makelist(nextinstr());
                (yyval.expr)->falseList = makelist(nextinstr() + 1);
                emit("<=", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 54:
#line 611 "ass5_19CS30031_19CS10070.y"
    { 
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->trueList = makelist(nextinstr());
                (yyval.expr)->falseList = makelist(nextinstr() + 1);
                emit(">=", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 55:
#line 628 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on relational expression
        }
    break;

  case 56:
#line 633 "ass5_19CS30031_19CS10070.y"
    { 
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyvsp[(1) - (3)].expr)->toInt();
                (yyvsp[(3) - (3)].expr)->toInt();

                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->trueList = makelist(nextinstr());
                (yyval.expr)->falseList = makelist(nextinstr() + 1);

                emit("==", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
                emit("goto", "");

            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 57:
#line 653 "ass5_19CS30031_19CS10070.y"
    { 
            if(typeCheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
                (yyvsp[(1) - (3)].expr)->toInt();
                (yyvsp[(3) - (3)].expr)->toInt();

                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->trueList = makelist(nextinstr());
                (yyval.expr)->falseList = makelist(nextinstr() + 1);

                emit("!=", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
                emit("goto", "");

            } 
            else {
                yyerror("Type mismatch!");
            }
        }
    break;

  case 58:
#line 677 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on equality expression
        }
    break;

  case 59:
#line 682 "ass5_19CS30031_19CS10070.y"
    { 
            (yyvsp[(1) - (3)].expr)->toInt();
            (yyvsp[(3) - (3)].expr)->toInt();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::NONBOOLEAN;
            (yyval.expr)->symbol = gentemp(INT);

            emit("&", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }
    break;

  case 60:
#line 696 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on AND expression
        }
    break;

  case 61:
#line 700 "ass5_19CS30031_19CS10070.y"
    { 
            (yyvsp[(1) - (3)].expr)->toInt();
            (yyvsp[(3) - (3)].expr)->toInt();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::NONBOOLEAN;
            (yyval.expr)->symbol = gentemp(INT);

            emit("^", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }
    break;

  case 62:
#line 714 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on exclusive OR expression
        }
    break;

  case 63:
#line 718 "ass5_19CS30031_19CS10070.y"
    {  
            (yyvsp[(1) - (3)].expr)->toInt();
            (yyvsp[(3) - (3)].expr)->toInt();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::NONBOOLEAN;
            (yyval.expr)->symbol = gentemp(INT);

            emit("|", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }
    break;

  case 64:
#line 734 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on inclusive OR expression
        }
    break;

  case 65:
#line 739 "ass5_19CS30031_19CS10070.y"
    { 
            (yyvsp[(1) - (4)].expr)->toBool();
            (yyvsp[(4) - (4)].expr)->toBool();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::BOOLEAN;

            backpatch((yyvsp[(1) - (4)].expr)->trueList, (yyvsp[(3) - (4)].instr_num)); // backpatching
            (yyval.expr)->trueList = (yyvsp[(4) - (4)].expr)->trueList; // B.truelist = B2.truelist
            (yyval.expr)->falseList = merge((yyvsp[(1) - (4)].expr)->falseList, (yyvsp[(4) - (4)].expr)->falseList); // B.falselist = merge(B1.falselist, B2.falselist)
        }
    break;

  case 66:
#line 755 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on logical AND expression
        }
    break;

  case 67:
#line 760 "ass5_19CS30031_19CS10070.y"
    {  
            (yyvsp[(1) - (4)].expr)->toBool();
            (yyvsp[(4) - (4)].expr)->toBool();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::BOOLEAN;

            backpatch((yyvsp[(1) - (4)].expr)->falseList, (yyvsp[(3) - (4)].instr_num)); // backpatching
            (yyval.expr)->trueList = merge((yyvsp[(1) - (4)].expr)->trueList, (yyvsp[(4) - (4)].expr)->trueList); // B.truelist = merge(B1.truelist, B2.truelist)
            (yyval.expr)->falseList = (yyvsp[(4) - (4)].expr)->falseList; // B.falselist = B2.falselist
        }
    break;

  case 68:
#line 775 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on logical OR expression
        }
    break;

  case 69:
#line 781 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr)->symbol = gentemp((yyvsp[(5) - (9)].expr)->symbol->type->type);
            emit("=", (yyval.expr)->symbol->name, (yyvsp[(9) - (9)].expr)->symbol->name);

            list<int> l = makelist(nextinstr());
            emit("goto", "");

            backpatch((yyvsp[(6) - (9)].stmt)->nextList, nextinstr());
            emit("=", (yyval.expr)->symbol->name, (yyvsp[(5) - (9)].expr)->symbol->name);

            l = merge(l, makelist(nextinstr()));
            emit("goto", "");

            backpatch((yyvsp[(2) - (9)].stmt)->nextList, nextinstr());

            (yyvsp[(1) - (9)].expr)->toBool();

            backpatch((yyvsp[(1) - (9)].expr)->trueList, (yyvsp[(4) - (9)].instr_num));
            backpatch((yyvsp[(1) - (9)].expr)->falseList, (yyvsp[(8) - (9)].instr_num));

            backpatch(l, nextinstr());
        }
    break;

  case 70:
#line 807 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on conditional expression
        }
    break;

  case 71:
#line 813 "ass5_19CS30031_19CS10070.y"
    { 
            if((yyvsp[(1) - (3)].array)->type == Array::ARRAY) {
                (yyvsp[(3) - (3)].expr)->symbol = (yyvsp[(3) - (3)].expr)->symbol->convert((yyvsp[(1) - (3)].array)->subarr_type->type);
                emit("[]=", (yyvsp[(1) - (3)].array)->symbol->name, (yyvsp[(1) - (3)].array)->loc->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            } 
            else if ((yyvsp[(1) - (3)].array)->type == Array::POINTER) {
                (yyvsp[(3) - (3)].expr)->symbol = (yyvsp[(3) - (3)].expr)->symbol->convert((yyvsp[(1) - (3)].array)->loc->type->type);
                emit("*=", (yyvsp[(1) - (3)].array)->loc->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            } 
            else {
                (yyvsp[(3) - (3)].expr)->symbol = (yyvsp[(3) - (3)].expr)->symbol->convert((yyvsp[(1) - (3)].array)->symbol->type->type);
                emit("=", (yyvsp[(1) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            }

            (yyval.expr) = (yyvsp[(3) - (3)].expr);
        }
    break;

  case 72:
#line 833 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 73:
#line 837 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 74:
#line 839 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 75:
#line 841 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 76:
#line 843 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 77:
#line 845 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 78:
#line 847 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 79:
#line 849 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 80:
#line 851 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 81:
#line 853 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 82:
#line 855 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 83:
#line 860 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on assignment expression
        }
    break;

  case 84:
#line 866 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 85:
#line 871 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 86:
#line 879 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 87:
#line 885 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 88:
#line 888 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 89:
#line 891 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 90:
#line 894 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 91:
#line 899 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 92:
#line 902 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 93:
#line 907 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 94:
#line 910 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 95:
#line 915 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 96:
#line 918 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 97:
#line 923 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.symbol) = (yyvsp[(1) - (1)].symbol); // depends on declarator
        }
    break;

  case 98:
#line 927 "ass5_19CS30031_19CS10070.y"
    { 
            if((yyvsp[(3) - (3)].symbol)->initialValue != "") (yyvsp[(1) - (3)].symbol)->initialValue = (yyvsp[(3) - (3)].symbol)->initialValue;
            emit("=", (yyvsp[(1) - (3)].symbol)->name, (yyvsp[(3) - (3)].symbol)->name);
        }
    break;

  case 99:
#line 936 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 100:
#line 939 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 101:
#line 942 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 102:
#line 945 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 103:
#line 952 "ass5_19CS30031_19CS10070.y"
    { 
            currentType = VOID;
        }
    break;

  case 104:
#line 957 "ass5_19CS30031_19CS10070.y"
    { 
            currentType = CHAR;
        }
    break;

  case 105:
#line 962 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 106:
#line 965 "ass5_19CS30031_19CS10070.y"
    { 
            currentType = INT;
        }
    break;

  case 107:
#line 970 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 108:
#line 973 "ass5_19CS30031_19CS10070.y"
    { 
            currentType = FLOAT;
        }
    break;

  case 109:
#line 978 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 110:
#line 981 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 111:
#line 984 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 112:
#line 987 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 113:
#line 990 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 114:
#line 993 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 115:
#line 996 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 116:
#line 1002 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 117:
#line 1004 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 118:
#line 1010 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 119:
#line 1013 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 120:
#line 1018 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 121:
#line 1021 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 122:
#line 1027 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 123:
#line 1030 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 124:
#line 1033 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 125:
#line 1040 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 126:
#line 1043 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 127:
#line 1048 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 128:
#line 1051 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 129:
#line 1056 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 130:
#line 1059 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 131:
#line 1062 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 132:
#line 1067 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 133:
#line 1072 "ass5_19CS30031_19CS10070.y"
    { 
            // for multi-dimensional arrays -> moving deeper until base type is obtained
            SymType *temp = (yyvsp[(1) - (2)].sym_type);
            while(temp->arr_type != NULL) 
                temp = temp->arr_type;

            temp->arr_type = (yyvsp[(2) - (2)].symbol)->type;
            (yyval.symbol) = (yyvsp[(2) - (2)].symbol)->update((yyvsp[(1) - (2)].sym_type));
        }
    break;

  case 134:
#line 1083 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 135:
#line 1099 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.symbol) = (yyvsp[(1) - (1)].symbol)->update(new SymType(currentType)); 
            currentSymbol = (yyval.symbol);
        }
    break;

  case 136:
#line 1105 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.symbol) = (yyvsp[(2) - (3)].symbol); // depends on declarator
        }
    break;

  case 137:
#line 1110 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 138:
#line 1113 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 139:
#line 1116 "ass5_19CS30031_19CS10070.y"
    { 
            
            // to check whether array is 1D or multi-dimensional
            SymType *temp = (yyvsp[(1) - (4)].symbol)->type, *prev = NULL;
            while(temp->type == ARRAY) { 
                prev = temp;
                temp = temp->arr_type;
            }

            if(prev != NULL) { 
                // case of multi-dimensional array
                prev->arr_type =  new SymType(ARRAY, temp, atoi((yyvsp[(3) - (4)].expr)->symbol->initialValue.c_str()));	
                (yyval.symbol) = (yyvsp[(1) - (4)].symbol)->update((yyvsp[(1) - (4)].symbol)->type);
            }
            else { 
                // just 1D array
                SymType* new_type = new SymType(ARRAY, (yyvsp[(1) - (4)].symbol)->type, atoi((yyvsp[(3) - (4)].expr)->symbol->initialValue.c_str()));
                (yyval.symbol) = (yyvsp[(1) - (4)].symbol)->update(new_type);
            }
        }
    break;

  case 140:
#line 1138 "ass5_19CS30031_19CS10070.y"
    { 
            // similar to previous one, but initial value is kept as 0 
            SymType *temp = (yyvsp[(1) - (3)].symbol)->type, *prev = NULL;
            while(temp->type == ARRAY) { 
                prev = temp;
                temp = temp->arr_type;
            }

            if(prev != NULL) { 
                // case of multi-dimensional array
                prev->arr_type =  new SymType(ARRAY, temp, 0);	
                (yyval.symbol) = (yyvsp[(1) - (3)].symbol)->update((yyvsp[(1) - (3)].symbol)->type);
            }
            else { 
                // just 1D array
                SymType* new_type = new SymType(ARRAY, (yyvsp[(1) - (3)].symbol)->type, 0);
                (yyval.symbol) = (yyvsp[(1) - (3)].symbol)->update(new_type);
            }
        }
    break;

  case 141:
#line 1159 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 142:
#line 1162 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 143:
#line 1165 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 144:
#line 1168 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 145:
#line 1171 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 146:
#line 1175 "ass5_19CS30031_19CS10070.y"
    { 
            // function declaration
            currentTable->name = (yyvsp[(1) - (5)].symbol)->name;

            if((yyvsp[(1) - (5)].symbol)->type->type != VOID) {
                Symbol* s = currentTable->lookup("return");
                s->update((yyvsp[(1) - (5)].symbol)->type);
            }

            // set nested table for function
            (yyvsp[(1) - (5)].symbol)->nestedTable = currentTable;
            currentTable->parent = globalTable;

            changeTable(globalTable); // change to global table
            currentSymbol = (yyval.symbol);
        }
    break;

  case 147:
#line 1193 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 148:
#line 1196 "ass5_19CS30031_19CS10070.y"
    { 
            // same as previous one
            currentTable->name = (yyvsp[(1) - (4)].symbol)->name;

            if((yyvsp[(1) - (4)].symbol)->type->type != VOID) {
                Symbol* s = currentTable->lookup("return");
                s->update((yyvsp[(1) - (4)].symbol)->type);
            }

            // set nested table for function
            (yyvsp[(1) - (4)].symbol)->nestedTable = currentTable;
            currentTable->parent = globalTable;

            changeTable(globalTable); // change to global table
            currentSymbol = (yyval.symbol);
        }
    break;

  case 149:
#line 1218 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.sym_type) = new SymType(POINTER); // new pointer
        }
    break;

  case 150:
#line 1223 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.sym_type) = new SymType(POINTER, (yyvsp[(3) - (3)].sym_type)); // nested pointer
        }
    break;

  case 151:
#line 1230 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 152:
#line 1233 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 153:
#line 1238 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 154:
#line 1241 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 155:
#line 1246 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 156:
#line 1249 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 157:
#line 1254 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 158:
#line 1257 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 159:
#line 1262 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 160:
#line 1265 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 161:
#line 1270 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 162:
#line 1273 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 163:
#line 1278 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 164:
#line 1283 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.symbol) = (yyvsp[(1) - (1)].expr)->symbol; // depends on assignment expression
        }
    break;

  case 165:
#line 1288 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 166:
#line 1291 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 167:
#line 1296 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 168:
#line 1299 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 169:
#line 1304 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 170:
#line 1309 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 171:
#line 1312 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 172:
#line 1317 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 173:
#line 1320 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 174:
#line 1325 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 175:
#line 1328 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 176:
#line 1337 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 177:
#line 1340 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(1) - (1)].stmt); 
        }
    break;

  case 178:
#line 1345 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextList = (yyvsp[(1) - (1)].expr)->nextList;
        }
    break;

  case 179:
#line 1351 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        }
    break;

  case 180:
#line 1356 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        }
    break;

  case 181:
#line 1361 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        }
    break;

  case 182:
#line 1369 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 183:
#line 1372 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 184:
#line 1375 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 185:
#line 1382 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(4) - (5)].stmt);
            changeTable(currentTable->parent); // return to parent ST
        }
    break;

  case 186:
#line 1390 "ass5_19CS30031_19CS10070.y"
    {
            (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        }
    break;

  case 187:
#line 1395 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(3) - (3)].stmt);
            backpatch((yyvsp[(1) - (3)].stmt)->nextList,(yyvsp[(2) - (3)].instr_num));
        }
    break;

  case 188:
#line 1403 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        }
    break;

  case 189:
#line 1408 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();
        }
    break;

  case 190:
#line 1416 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();
        }
    break;

  case 191:
#line 1420 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        }
    break;

  case 192:
#line 1427 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (2)].expr);
        }
    break;

  case 193:
#line 1434 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr);
        }
    break;

  case 194:
#line 1438 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.expr) = new Expression();
        }
    break;

  case 195:
#line 1449 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();

            (yyvsp[(3) - (10)].expr)->toBool();

            backpatch((yyvsp[(3) - (10)].expr)->trueList, (yyvsp[(5) - (10)].instr_num)); // if true, go to M1 (if-statement)
            backpatch((yyvsp[(3) - (10)].expr)->falseList, (yyvsp[(9) - (10)].instr_num)); // if false, go to M2 (else-statement)

            (yyval.stmt)->nextList = merge((yyvsp[(10) - (10)].stmt)->nextList, merge((yyvsp[(6) - (10)].stmt)->nextList, (yyvsp[(7) - (10)].stmt)->nextList)); // to go out of if-else after it's done
        }
    break;

  case 196:
#line 1462 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();

            (yyvsp[(3) - (7)].expr)->toBool();

            backpatch((yyvsp[(3) - (7)].expr)->trueList, (yyvsp[(5) - (7)].instr_num)); // // if true, go to M1 (if-statement)

            (yyval.stmt)->nextList = merge((yyvsp[(3) - (7)].expr)->falseList, merge((yyvsp[(6) - (7)].stmt)->nextList, (yyvsp[(7) - (7)].stmt)->nextList)); // to go out of if when expression is false
        }
    break;

  case 197:
#line 1473 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 198:
#line 1480 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();

            (yyvsp[(4) - (7)].expr)->toBool();

            backpatch((yyvsp[(7) - (7)].stmt)->nextList, (yyvsp[(2) - (7)].instr_num)); // M1 -> to go back to start of loop
            backpatch((yyvsp[(4) - (7)].expr)->trueList, (yyvsp[(6) - (7)].instr_num)); // if true, go to M2 (statement)

            (yyval.stmt)->nextList = (yyvsp[(4) - (7)].expr)->falseList; // to go out of while when expression is false

            emit("goto", to_string((yyvsp[(2) - (7)].instr_num)));
        }
    break;

  case 199:
#line 1496 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();

            (yyvsp[(7) - (9)].expr)->toBool();

            backpatch((yyvsp[(7) - (9)].expr)->trueList, (yyvsp[(2) - (9)].instr_num)); // if true, go to M1 (statement)
            backpatch((yyvsp[(3) - (9)].stmt)->nextList, (yyvsp[(4) - (9)].instr_num)); // M2 -> to go to check expression once statement is executed

            (yyval.stmt)->nextList = (yyvsp[(7) - (9)].expr)->falseList; // to go out of do-while when expression is false
        }
    break;

  case 200:
#line 1509 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();

            (yyvsp[(6) - (13)].expr)->toBool();

            backpatch((yyvsp[(6) - (13)].expr)->trueList, (yyvsp[(12) - (13)].instr_num)); // if true, go to M3 (statement)
            backpatch((yyvsp[(10) - (13)].stmt)->nextList, (yyvsp[(5) - (13)].instr_num)); // go to M1 after N1 (for checking condition)
            backpatch((yyvsp[(13) - (13)].stmt)->nextList, (yyvsp[(8) - (13)].instr_num)); // go to M2 (3rd part of for loop), after statement is executed

            emit("goto", toString((yyvsp[(8) - (13)].instr_num)));

            (yyval.stmt)->nextList = (yyvsp[(6) - (13)].expr)->falseList; // to go out of for when expression is false
        }
    break;

  case 201:
#line 1524 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 202:
#line 1530 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 203:
#line 1533 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 204:
#line 1536 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 205:
#line 1539 "ass5_19CS30031_19CS10070.y"
    { 
            (yyval.stmt) = new Statement();
            emit("return",((yyvsp[(2) - (3)].expr)->symbol == NULL) ? "" : (yyvsp[(2) - (3)].expr)->symbol->name);
        }
    break;

  case 206:
#line 1550 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 207:
#line 1553 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 208:
#line 1558 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 209:
#line 1561 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 210:
#line 1567 "ass5_19CS30031_19CS10070.y"
    { 
            tableCount = 0;
            (yyvsp[(2) - (7)].symbol)->isFunction = true;
            changeTable(globalTable); // return to global ST
        }
    break;

  case 211:
#line 1576 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 212:
#line 1579 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 213:
#line 1584 "ass5_19CS30031_19CS10070.y"
    { }
    break;

  case 214:
#line 1587 "ass5_19CS30031_19CS10070.y"
    { }
    break;


/* Line 1267 of yacc.c.  */
#line 3760 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1590 "ass5_19CS30031_19CS10070.y"


void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}   
