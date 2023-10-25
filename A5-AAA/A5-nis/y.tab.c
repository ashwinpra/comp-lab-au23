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
     VOIDTYPE = 309,
     CHARTYPE = 310,
     SHORT = 311,
     INTTYPE = 312,
     LONG = 313,
     FLOATTYPE = 314,
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
#define VOIDTYPE 309
#define CHARTYPE 310
#define SHORT 311
#define INTTYPE 312
#define LONG 313
#define FLOATTYPE 314
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
    void yyerror(string);
    void yyinfo(string);


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
#line 19 "ass5_19CS30031_19CS10070.y"
{
    int intVal;
    char *floatVal;
    char *charVal;
    char *stringVal;
    char *unaryOperator;
    int instructionNumber;
    int parameterCount;
    Expression *expression;
    Statement *statement;
    Array *array;
    SymType *SymType;
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
#define YYLAST   1023

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNRULES -- Number of states.  */
#define YYNSTATES  368

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
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    29,    33,    37,    40,    43,    50,    58,    60,    61,
      63,    67,    69,    72,    75,    78,    81,    86,    88,    90,
      92,    94,    96,    98,   100,   105,   107,   111,   115,   119,
     121,   125,   129,   131,   135,   139,   141,   145,   149,   153,
     157,   159,   163,   167,   169,   173,   175,   179,   181,   185,
     186,   187,   189,   194,   196,   201,   203,   213,   215,   219,
     221,   223,   225,   227,   229,   231,   233,   235,   237,   239,
     241,   243,   247,   249,   253,   255,   256,   259,   262,   265,
     268,   270,   271,   273,   277,   279,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   301,   303,   305,   307,   309,
     311,   313,   315,   317,   320,   323,   325,   326,   332,   339,
     342,   344,   345,   347,   351,   353,   357,   359,   361,   363,
     365,   368,   370,   371,   373,   377,   383,   388,   393,   397,
     404,   410,   417,   423,   428,   434,   439,   444,   446,   447,
     450,   454,   456,   459,   461,   465,   467,   471,   474,   476,
     478,   482,   484,   486,   490,   495,   498,   503,   505,   506,
     509,   511,   514,   518,   521,   523,   525,   527,   529,   531,
     533,   537,   542,   546,   547,   553,   555,   556,   558,   562,
     564,   566,   569,   571,   572,   580,   591,   597,   605,   615,
     629,   638,   642,   645,   648,   652,   654,   657,   659,   661,
     669,   671,   672,   674
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     164,     0,    -1,    88,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,    -1,     3,   117,     4,    -1,    95,    -1,    96,
       7,   117,     8,    -1,    96,     3,    97,     4,    -1,    96,
      23,    88,    -1,    96,    19,    88,    -1,    96,     9,    -1,
      96,    10,    -1,     3,   145,     4,     5,   147,     6,    -1,
       3,   145,     4,     5,   147,    48,     6,    -1,    98,    -1,
      -1,   115,    -1,    98,    48,   115,    -1,    96,    -1,     9,
      99,    -1,    10,    99,    -1,   100,   101,    -1,    71,    99,
      -1,    71,     3,   145,     4,    -1,    24,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    99,    -1,
       3,   145,     4,   101,    -1,   101,    -1,   102,    27,   101,
      -1,   102,    32,   101,    -1,   102,    33,   101,    -1,   102,
      -1,   103,    28,   102,    -1,   103,    29,   102,    -1,   103,
      -1,   104,    11,   103,    -1,   104,    12,   103,    -1,   104,
      -1,   105,    20,   104,    -1,   105,    21,   104,    -1,   105,
      15,   104,    -1,   105,    16,   104,    -1,   105,    -1,   106,
      13,   105,    -1,   106,    14,   105,    -1,   106,    -1,   107,
      24,   106,    -1,   107,    -1,   108,    26,   107,    -1,   108,
      -1,   109,    25,   108,    -1,    -1,    -1,   109,    -1,   112,
      17,   110,   109,    -1,   112,    -1,   113,    18,   110,   112,
      -1,   113,    -1,   113,   111,    47,   110,   117,   111,    44,
     110,   114,    -1,   114,    -1,    99,   116,   115,    -1,    22,
      -1,    36,    -1,    37,    -1,    38,    -1,    34,    -1,    35,
      -1,    39,    -1,    40,    -1,    42,    -1,    43,    -1,    41,
      -1,   115,    -1,   117,    48,   115,    -1,   114,    -1,   121,
     120,    45,    -1,   123,    -1,    -1,   125,   122,    -1,   126,
     122,    -1,   133,   122,    -1,   134,   122,    -1,   121,    -1,
      -1,   124,    -1,   123,    48,   124,    -1,   135,    -1,   135,
      22,   146,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1,   129,    -1,   126,   128,    -1,
     133,   128,    -1,   127,    -1,    -1,    69,   130,     5,   131,
       6,    -1,    69,   130,     5,   131,    48,     6,    -1,    69,
      88,    -1,    88,    -1,    -1,   132,    -1,   131,    48,   132,
      -1,    88,    -1,    88,    22,   118,    -1,    66,    -1,    67,
      -1,    68,    -1,    70,    -1,   139,   137,    -1,   137,    -1,
      -1,    88,    -1,     3,   135,     4,    -1,   137,     7,   140,
     115,     8,    -1,   137,     7,   140,     8,    -1,   137,     7,
     115,     8,    -1,   137,     7,     8,    -1,   137,     7,    51,
     140,   115,     8,    -1,   137,     7,    51,   115,     8,    -1,
     137,     7,   140,    51,   115,     8,    -1,   137,     7,   140,
      27,     8,    -1,   137,     7,    27,     8,    -1,   137,     3,
     136,   141,     4,    -1,   137,     3,   144,     4,    -1,   137,
       3,   136,     4,    -1,   140,    -1,    -1,    27,   138,    -1,
      27,   138,   139,    -1,   133,    -1,   140,   133,    -1,   142,
      -1,   142,    48,    46,    -1,   143,    -1,   142,    48,   143,
      -1,   121,   135,    -1,   121,    -1,    88,    -1,   144,    48,
      88,    -1,   127,    -1,   115,    -1,     5,   147,     6,    -1,
       5,   147,    48,     6,    -1,   148,   146,    -1,   147,    48,
     148,   146,    -1,   149,    -1,    -1,   150,    22,    -1,   151,
      -1,   150,   151,    -1,     7,   118,     8,    -1,    23,    88,
      -1,   153,    -1,   155,    -1,   159,    -1,   161,    -1,   162,
      -1,   163,    -1,    88,    44,   152,    -1,    77,   118,    44,
     152,    -1,    78,    44,   152,    -1,    -1,     5,   154,   136,
     156,     6,    -1,   157,    -1,    -1,   158,    -1,   157,   110,
     158,    -1,   119,    -1,   152,    -1,   160,    45,    -1,   117,
      -1,    -1,    75,     3,   117,     4,   110,   152,   111,    -1,
      75,     3,   117,     4,   110,   152,   111,    76,   110,   152,
      -1,    86,     3,   117,     4,   152,    -1,    79,   110,     3,
     117,     4,   110,   152,    -1,    81,   110,   152,   110,    79,
       3,   117,     4,    45,    -1,    83,     3,   160,    45,   110,
     160,    45,   110,   160,   111,     4,   110,   152,    -1,    83,
       3,   119,   160,    45,   160,     4,   152,    -1,    82,    88,
      45,    -1,    80,    45,    -1,    85,    45,    -1,    84,   160,
      45,    -1,   165,    -1,   164,   165,    -1,   166,    -1,   119,
      -1,   121,   135,   167,   136,     5,   156,     6,    -1,   168,
      -1,    -1,   119,    -1,   168,   119,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   143,   143,   150,   157,   164,   171,   178,   186,   195,
     215,   223,   227,   231,   240,   249,   253,   262,   268,   276,
     283,   293,   298,   305,   312,   339,   343,   354,   359,   364,
     369,   374,   379,   387,   392,   414,   431,   454,   477,   503,
     508,   519,   533,   538,   549,   572,   577,   591,   605,   619,
     636,   641,   657,   687,   692,   705,   710,   723,   728,   751,
     758,   800,   805,   819,   824,   838,   843,   863,   868,   889,
     893,   897,   901,   905,   909,   913,   917,   921,   925,   929,
     936,   941,   948,   957,   964,   969,   975,   979,   983,   987,
     994,   999,  1005,  1009,  1016,  1021,  1033,  1037,  1041,  1045,
    1052,  1057,  1062,  1066,  1071,  1075,  1080,  1084,  1088,  1092,
    1096,  1100,  1104,  1111,  1115,  1122,  1127,  1133,  1137,  1141,
    1148,  1153,  1159,  1163,  1170,  1174,  1181,  1185,  1189,  1196,
    1203,  1212,  1219,  1237,  1243,  1248,  1252,  1256,  1274,  1293,
    1297,  1301,  1305,  1309,  1313,  1328,  1332,  1350,  1355,  1390,
    1396,  1405,  1409,  1416,  1420,  1427,  1431,  1438,  1442,  1449,
    1453,  1460,  1467,  1472,  1476,  1483,  1487,  1494,  1499,  1505,
    1512,  1516,  1523,  1527,  1536,  1540,  1545,  1551,  1556,  1561,
    1569,  1573,  1577,  1591,  1602,  1611,  1617,  1624,  1629,  1639,
    1644,  1652,  1660,  1666,  1692,  1700,  1709,  1740,  1750,  1759,
    1770,  1777,  1781,  1785,  1789,  1804,  1808,  1815,  1819,  1827,
    1837,  1842,  1848,  1852
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
  "EXTERN", "STATIC", "AUTO", "REGISTER", "VOIDTYPE", "CHARTYPE", "SHORT",
  "INTTYPE", "LONG", "FLOATTYPE", "DOUBLE", "SIGNED", "UNSIGNED", "BOOL",
  "COMPLEX", "IMAGINARY", "CONST", "RESTRICT", "VOLATILE", "ENUM",
  "INLINE", "SIZEOF", "STRUCT", "TYPEDEF", "UNION", "IF", "ELSE", "CASE",
  "DEFAULT", "WHILE", "CONTINUE", "DO", "GOTO", "FOR", "RETURN", "BREAK",
  "SWITCH", "UNEXPECTED_TOKEN", "IDENTIFIER", "INTEGER_CONST",
  "FLOAT_CONST", "CHAR_CONST", "STRING_LITERAL", "THEN", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression", "M", "N",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "change_scope", "direct_declarator",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initialiser", "initialiser_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "change_block", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", 0
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
       0,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     135,   135,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   146,   146,   146,   147,   147,   148,   148,   149,
     150,   150,   151,   151,   152,   152,   152,   152,   152,   152,
     153,   153,   153,   154,   155,   156,   156,   157,   157,   158,
     158,   159,   160,   160,   161,   161,   161,   162,   162,   162,
     162,   163,   163,   163,   163,   164,   164,   165,   165,   166,
     167,   167,   168,   168
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     4,     1,     4,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     5,     6,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     0,     1,     3,     5,     4,     4,     3,     6,
       5,     6,     5,     4,     5,     4,     4,     1,     0,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     1,     0,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     0,     5,     1,     0,     1,     3,     1,
       1,     2,     1,     0,     7,    10,     5,     7,     9,    13,
       8,     3,     2,     2,     3,     1,     2,     1,     1,     7,
       1,     0,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   126,   127,   128,
     121,   129,   208,    85,    91,    91,   112,    91,    91,     0,
     205,   207,   119,     0,     0,   148,   133,     0,    84,    92,
      94,   131,     0,    90,    86,    87,    88,    89,     1,   206,
       0,     0,   151,   149,   147,    83,     0,     0,   212,    85,
     132,   210,   132,     0,   130,   124,     0,   122,   134,   150,
     152,    93,    94,     0,   168,     0,     0,    27,    28,    29,
      30,    31,    32,     0,     2,     3,     4,     5,     6,     8,
      21,    33,     0,    35,    39,    42,    45,    50,    53,    55,
      57,    61,    63,    65,    67,   162,    95,     0,   213,   159,
       0,     0,   138,    28,     0,     0,     0,     0,   117,     0,
      80,     0,   116,   161,   116,     0,     0,     0,     0,     0,
     167,     0,   170,     0,    22,    23,     0,    25,    18,     0,
      13,    14,     0,     0,    69,    73,    74,    70,    71,    72,
      75,    76,    79,    77,    78,     0,    33,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    59,     0,   186,   146,   158,
       0,   153,   155,   145,     0,   143,     0,     0,   137,   136,
      28,     0,     0,    82,   125,   118,   123,     7,     0,   115,
     113,   114,     0,     0,   173,   163,   168,   165,   169,   171,
       0,     0,     0,    17,    19,     0,    12,    11,    68,    36,
      37,    38,    40,    41,    43,    44,    48,    49,    46,    47,
      51,    52,    54,    56,    58,     0,     0,    59,   183,     0,
       0,     0,    59,     0,    59,     0,     0,   193,     0,     0,
       2,   192,   189,   190,   174,   175,     0,    59,   187,   176,
       0,   177,   178,   179,   157,   144,     0,   160,   140,     0,
     142,     0,   135,    81,   168,    34,   172,   164,     0,     0,
      26,    10,     0,     9,    62,    64,     0,   132,     0,     0,
     193,     0,   202,   193,     0,   193,     0,   203,     0,   193,
     209,   193,   191,   154,   156,   139,   141,     0,   166,    20,
      60,   186,     0,   193,   182,     0,    59,   201,   193,     0,
     204,     0,   180,   188,    15,   168,     0,     0,    59,   181,
       0,     0,     0,    59,   193,    16,    59,   184,   193,    59,
       0,   193,   193,   196,     0,    60,   193,     0,     0,     0,
      66,   194,   197,     0,   193,    59,    59,     0,   200,   193,
     193,   198,    60,   195,     0,    59,   193,   199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    89,    90,   212,   213,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   235,   176,   102,   103,
     104,   120,   155,   251,   194,   252,    37,    59,    44,    38,
      39,    24,    25,   123,   200,    26,    33,    66,    67,    27,
      28,    72,   107,    41,    53,    42,    54,   180,   181,   182,
     111,   125,   106,   128,   129,   130,   131,   132,   253,   254,
     287,   255,   256,   257,   258,   259,   260,   261,   262,   263,
      29,    30,    31,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -297
static const yytype_int16 yypact[] =
{
     953,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
    -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
     -70,  -297,  -297,    16,   953,   953,  -297,   953,   953,   842,
    -297,  -297,    22,    50,    16,   111,  -297,   -22,    30,  -297,
     932,   146,    19,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
      -4,   108,  -297,    83,   111,  -297,    16,   671,  -297,    16,
    -297,   953,    41,   601,   146,   110,    15,  -297,  -297,  -297,
    -297,  -297,   121,   496,    34,   708,   708,  -297,  -297,  -297,
    -297,  -297,  -297,   745,  -297,  -297,  -297,  -297,  -297,  -297,
     151,   211,   777,  -297,   106,   112,    36,   100,   142,    98,
     120,   127,   150,     6,  -297,  -297,  -297,   154,  -297,  -297,
     866,    21,  -297,   165,   443,   167,   655,   777,  -297,    20,
    -297,    24,   321,  -297,   321,   180,   777,   101,    31,   671,
    -297,   128,  -297,   496,  -297,  -297,   496,  -297,   777,   777,
    -297,  -297,   103,   113,  -297,  -297,  -297,  -297,  -297,  -297,
    -297,  -297,  -297,  -297,  -297,   777,  -297,  -297,   777,   777,
     777,   777,   777,   777,   777,   777,   777,   777,   777,   777,
     777,   777,   777,   777,  -297,  -297,   139,   253,  -297,    16,
     199,   156,  -297,  -297,   118,  -297,   201,   443,  -297,  -297,
     205,   777,   206,  -297,  -297,  -297,  -297,  -297,   777,  -297,
    -297,  -297,   700,   208,  -297,  -297,    44,  -297,  -297,  -297,
     214,   215,   216,   173,  -297,     8,  -297,  -297,  -297,  -297,
    -297,  -297,   106,   106,   112,   112,    36,    36,    36,    36,
     100,   100,   142,    98,   120,   777,   777,  -297,  -297,   219,
     777,   179,  -297,   181,  -297,   141,   228,   777,   187,   232,
     192,   189,  -297,  -297,  -297,  -297,   233,   234,  -297,  -297,
     193,  -297,  -297,  -297,  -297,  -297,   905,  -297,  -297,   235,
    -297,   247,  -297,  -297,    34,  -297,  -297,  -297,   671,   236,
     236,  -297,   777,  -297,   127,   150,   777,  -297,   777,   198,
     565,   254,  -297,   565,   220,   427,   221,  -297,   777,   565,
    -297,   343,  -297,  -297,  -297,  -297,  -297,    32,  -297,  -297,
     189,   253,    26,   565,  -297,   777,  -297,  -297,   777,   223,
    -297,    29,  -297,  -297,  -297,    53,   225,   258,  -297,  -297,
      54,   191,   229,  -297,   565,  -297,  -297,  -297,   565,  -297,
     256,   777,   777,  -297,   777,  -297,   565,   777,   271,   240,
    -297,   184,  -297,    66,   565,  -297,  -297,   241,  -297,   777,
     565,  -297,  -297,  -297,   274,  -297,   565,  -297
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -297,  -297,  -297,  -297,  -297,   -72,  -297,   -77,    38,    18,
      27,    42,   116,   107,   115,    55,  -131,  -296,    56,  -297,
    -116,   -11,  -297,   -71,  -117,     0,  -297,     7,   144,  -297,
     237,  -297,    12,   -49,   170,  -297,  -297,  -297,   172,    74,
    -297,   -17,   -57,   255,  -297,   243,   -50,  -297,  -297,    23,
    -297,   -94,  -121,    25,  -194,  -297,  -297,   169,   525,  -297,
    -297,  -297,   -10,  -297,     1,  -297,  -176,  -297,  -297,  -297,
    -297,   296,  -297,  -297,  -297
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -212
static const yytype_int16 yytable[] =
{
      22,   193,   121,   134,   135,   110,    40,    23,   207,   203,
     193,   137,   278,   116,   326,   157,   283,    51,    32,    34,
     156,   118,    34,    55,   175,   183,   195,  -120,   197,    22,
     328,    43,    43,   334,    43,    43,    23,   205,   324,   210,
      58,   126,   211,    35,   236,   156,   105,   163,   164,   351,
     277,   126,   115,   -60,   156,    50,   198,   127,   339,   335,
     126,   108,   121,   119,   187,   121,   364,   127,   215,   184,
     357,   296,   198,   199,   198,   199,   127,   198,    56,   206,
     325,   219,   220,   221,    65,   122,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   198,   186,    36,   192,   286,    36,    65,    52,
      35,   291,    68,   293,   198,   165,   166,   179,   105,   319,
     167,   168,   171,   289,   193,   275,   301,   214,    70,   109,
     156,   278,   117,   158,   122,   126,   122,    52,   159,   160,
     161,   162,   332,    57,   218,   122,   172,   124,   122,    62,
     208,   127,   173,    63,   138,   169,   170,   308,   139,   177,
     140,   141,   264,   156,   156,   348,   349,   174,   156,    45,
     142,    46,    47,   185,   143,   188,   269,    17,    18,    19,
     271,   224,   225,   362,   202,   331,   237,   273,    52,   204,
      70,   216,   226,   227,   228,   229,   124,   338,   124,   222,
     223,   217,   342,   265,   266,   344,   267,   124,   346,   268,
     124,   230,   231,   270,   272,   310,   276,   312,   279,   280,
     281,   282,   288,   290,   359,   360,   292,   321,   350,   294,
     311,   295,   297,   144,   366,   298,   299,   198,   302,   300,
    -185,   274,   313,   305,   330,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   306,    73,   315,   238,   347,
     356,    70,    75,    76,   337,   317,   320,   105,   333,   336,
     340,   309,   156,   179,   341,   354,   353,    77,   365,   233,
      78,    79,    80,    81,    82,   355,   361,   232,   234,   304,
     284,   196,   285,    71,   201,   318,    69,    64,  -193,   307,
     209,   327,   323,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    83,    49,     0,     0,   239,     0,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
       0,   250,    85,    86,    87,    88,    73,     0,   238,     0,
       0,     0,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
      78,    79,    80,    81,    82,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    83,     0,     0,     0,   239,     0,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      73,   250,    85,    86,    87,    88,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,    77,    75,    76,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
      78,    79,    80,    81,    82,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    83,    73,
       0,     0,     0,     0,     0,    75,    76,     0,     0,    17,
      18,    19,     0,     0,    83,    84,    85,    86,    87,    88,
      77,     0,     0,    78,    79,    80,    81,    82,     0,     0,
       0,    84,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,    83,    73,     0,
     238,     0,     0,     0,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    77,
       0,     0,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   112,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,   113,    79,
      80,    81,    82,     0,     0,     0,    83,     0,     0,     0,
     239,     0,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   114,   250,    85,    86,    87,    88,    73,     0,
       0,     0,     0,   189,    75,    76,     0,    17,    18,    19,
       0,     0,    83,     0,    73,     0,    74,     0,     0,    77,
      75,    76,   190,    79,    80,    81,    82,     0,     0,    84,
      85,    86,    87,    88,     0,    77,     0,     0,    78,    79,
      80,    81,    82,    73,     0,   274,   191,     0,     0,    75,
      76,   133,     0,     0,     0,     0,     0,    75,    76,     0,
       0,    17,    18,    19,    77,     0,    83,    78,    79,    80,
      81,    82,    77,     0,     0,    78,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,   136,     0,
       0,     0,     0,     0,    75,    76,     0,     0,     0,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,    77,
       0,    83,    78,    79,    80,    81,    82,     0,     0,    83,
      73,     0,     0,     0,     0,     0,    75,    76,    84,    85,
      86,    87,    88,     0,     0,     0,    84,    85,    86,    87,
      88,    77,     0,     0,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,     0,   314,    83,     0,   316,     0,
       0,     0,     0,     0,   322,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,   329,     0,
       0,     0,    48,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,     0,   345,     0,    84,    85,    86,    87,    88,
     178,   352,     0,     0,     0,     0,     0,     0,     0,   358,
       0,     0,     0,     0,     0,   363,     0,     0,     0,     0,
       0,   367,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,  -211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,     0,     0,    57,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,   117,    73,    75,    76,    62,    23,     0,   129,   126,
     126,    83,   206,    63,   310,    92,     8,    34,    88,     3,
      92,     6,     3,    45,    18,     4,     6,     5,     4,    29,
       4,    24,    25,     4,    27,    28,    29,     6,     6,   133,
      40,     7,   136,    27,   175,   117,    57,    11,    12,   345,
       6,     7,    63,    47,   126,     5,    48,    23,     4,     6,
       7,    61,   133,    48,   114,   136,   362,    23,   139,    48,
       4,   247,    48,   122,    48,   124,    23,    48,    48,    48,
      48,   158,   159,   160,    88,    73,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    48,   114,    88,   116,   237,    88,    88,    35,
      27,   242,     4,   244,    48,    15,    16,   110,   129,   295,
      20,    21,    24,   240,   240,   202,   257,   138,    54,    88,
     202,   325,    22,    27,   122,     7,   124,    63,    32,    33,
      28,    29,   318,    22,   155,   133,    26,    73,   136,     3,
      22,    23,    25,     7,     3,    13,    14,   278,     7,     5,
       9,    10,   179,   235,   236,   341,   342,    17,   240,    25,
      19,    27,    28,     8,    23,     8,   187,    66,    67,    68,
     191,   163,   164,   359,     4,   316,    47,   198,   114,    88,
     116,    88,   165,   166,   167,   168,   122,   328,   124,   161,
     162,    88,   333,     4,    48,   336,    88,   133,   339,     8,
     136,   169,   170,     8,     8,   286,     8,   288,     4,     4,
       4,    48,     3,    44,   355,   356,    45,   298,   344,    88,
     287,     3,    45,    22,   365,     3,    44,    48,    45,     6,
       6,     5,    44,     8,   315,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     8,     3,     3,     5,     3,
      76,   187,     9,    10,     6,    45,    45,   278,    45,    44,
      79,   282,   344,   266,    45,     4,   347,    24,     4,   172,
      27,    28,    29,    30,    31,    45,    45,   171,   173,   266,
     235,   119,   236,    56,   124,   295,    53,    42,    45,   274,
     131,   311,   301,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    29,    -1,    -1,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,     3,    -1,     5,    -1,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    29,    30,    31,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
       3,    88,    89,    90,    91,    92,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    24,     9,    10,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    66,
      67,    68,    -1,    -1,    71,    88,    89,    90,    91,    92,
      24,    -1,    -1,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,     3,    -1,
       5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    24,
      -1,    -1,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    51,    88,    89,    90,    91,    92,     3,    -1,
      -1,    -1,    -1,     8,     9,    10,    -1,    66,    67,    68,
      -1,    -1,    71,    -1,     3,    -1,     5,    -1,    -1,    24,
       9,    10,    27,    28,    29,    30,    31,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    24,    -1,    -1,    27,    28,
      29,    30,    31,     3,    -1,     5,    51,    -1,    -1,     9,
      10,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,
      -1,    66,    67,    68,    24,    -1,    71,    27,    28,    29,
      30,    31,    24,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    -1,    71,    88,    89,    90,    91,    92,     3,    -1,
      -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    71,    27,    28,    29,    30,    31,    -1,    -1,    71,
       3,    -1,    -1,    -1,    -1,    -1,     9,    10,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    24,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    71,    -1,   293,    -1,
      -1,    -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,   313,    -1,
      -1,    -1,     0,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,   338,    -1,    88,    89,    90,    91,    92,
       4,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,   366,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    22,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   119,   121,   125,   126,   129,   133,   134,   164,
     165,   166,    88,   130,     3,    27,    88,   120,   123,   124,
     135,   137,   139,   121,   122,   122,   122,   122,     0,   165,
       5,   135,   133,   138,   140,    45,    48,    22,   119,   121,
     167,   168,     3,     7,   137,    88,   131,   132,     4,   139,
     133,   124,   135,     3,     5,     9,    10,    24,    27,    28,
      29,    30,    31,    71,    88,    89,    90,    91,    92,    95,
      96,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   112,   113,   114,   115,   146,   136,   119,    88,
     136,   144,     8,    27,    51,   115,   140,    22,     6,    48,
     115,   117,   126,   127,   133,   145,     7,    23,   147,   148,
     149,   150,   151,     3,    99,    99,     3,    99,     3,     7,
       9,    10,    19,    23,    22,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,   116,    99,   101,    27,    32,
      33,    28,    29,    11,    12,    15,    16,    20,    21,    13,
      14,    24,    26,    25,    17,    18,   111,     5,     4,   121,
     141,   142,   143,     4,    48,     8,   115,   140,     8,     8,
      27,    51,   115,   114,   118,     6,   132,     4,    48,   127,
     128,   128,     4,   118,    88,     6,    48,   146,    22,   151,
     145,   145,    97,    98,   115,   117,    88,    88,   115,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   110,   110,    47,     5,    75,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      88,   117,   119,   152,   153,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   135,     4,    48,    88,     8,   115,
       8,   115,     8,   115,     5,   101,     8,     6,   148,     4,
       4,     4,    48,     8,   109,   112,   110,   154,     3,   118,
      44,   110,    45,   110,    88,     3,   160,    45,     3,    44,
       6,   110,    45,    46,   143,     8,     8,   147,   146,   115,
     117,   136,   117,    44,   152,     3,   152,    45,   119,   160,
      45,   117,   152,   158,     6,    48,   111,   156,     4,   152,
     117,   110,   160,    45,     4,     6,    44,     6,   110,     4,
      79,    45,   110,   152,   110,   152,   110,     3,   160,   160,
     114,   111,   152,   117,     4,    45,    76,     4,   152,   110,
     110,    45,   160,   152,   111,     4,   110,   152
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
#line 144 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => IDENTIFIER");
                            (yyval.expression) = new Expression(); // create new non boolean expression and symbol is the identifier
                            (yyval.expression)->symbol = (yyvsp[(1) - (1)].symbol);
                            (yyval.expression)->type = Expression::NONBOOLEAN; 
                        }
    break;

  case 3:
#line 151 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => INTEGER_CONST"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(INT, toString((yyvsp[(1) - (1)].intVal)));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[(1) - (1)].intVal));
                        }
    break;

  case 4:
#line 158 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => FLOAT_CONST"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(FLOAT, (yyvsp[(1) - (1)].floatVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[(1) - (1)].floatVal));
                        }
    break;

  case 5:
#line 165 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => CHAR_CONST"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(CHAR, (yyvsp[(1) - (1)].charVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[(1) - (1)].charVal));
                        }
    break;

  case 6:
#line 172 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => STRING_LITERAL"); 
                            (yyval.expression) = new Expression();
		                    (yyval.expression)->symbol = gentemp(POINTER, (yyvsp[(1) - (1)].stringVal));
		                    (yyval.expression)->symbol->type->arr_type = new SymType(CHAR);
                        }
    break;

  case 7:
#line 179 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => ( expression )"); 
                            (yyval.expression) = (yyvsp[(2) - (3)].expression);
                        }
    break;

  case 8:
#line 187 "ass5_19CS30031_19CS10070.y"
    { 
                            // create new array with the same symbol as the primary expression
                            yyinfo("postfix_expression => primary_expression"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = (yyvsp[(1) - (1)].expression)->symbol;
                            (yyval.array)->loc = (yyval.array)->symbol;
                            (yyval.array)->subarr_type = (yyvsp[(1) - (1)].expression)->symbol->type;
                        }
    break;

  case 9:
#line 196 "ass5_19CS30031_19CS10070.y"
    { 
                            // this is an array expression, create a new array
                            yyinfo("postfix_expression => postfix_expression [ expression ]"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = (yyvsp[(1) - (4)].array)->symbol;    // same symbol as before
                            (yyval.array)->subarr_type = (yyvsp[(1) - (4)].array)->subarr_type->arr_type; // as we are indexing we go one level deeper
                            (yyval.array)->loc = gentemp(INT); // temporary to compute location
                            (yyval.array)->type = Array::ARRAY;    // type will be array

                            if((yyvsp[(1) - (4)].array)->type == Array::ARRAY) {
                                // postfix_expression is already array so multiply size of subarray with expression and add
                                Symbol *sym = gentemp(INT);
                                emit("*", sym->name, (yyvsp[(3) - (4)].expression)->symbol->name, toString((yyval.array)->subarr_type->getSize()));
                                emit("+", (yyval.array)->loc->name, (yyvsp[(1) - (4)].array)->loc->name, sym->name);
                            } else {
                                emit("*", (yyval.array)->loc->name, (yyvsp[(3) - (4)].expression)->symbol->name, toString((yyval.array)->subarr_type->getSize()));
                            }

                        }
    break;

  case 10:
#line 216 "ass5_19CS30031_19CS10070.y"
    { 
                            // function call, number of parameters stored in argument_expression_list_opt
                            yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[(1) - (4)].array)->symbol->type->type);
                            emit("call", (yyval.array)->symbol->name, (yyvsp[(1) - (4)].array)->symbol->name, toString((yyvsp[(3) - (4)].parameterCount)));
                        }
    break;

  case 11:
#line 224 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => postfix_expression . IDENTIFIER"); 
                        }
    break;

  case 12:
#line 228 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => postfix_expression -> IDENTIFIER"); 
                        }
    break;

  case 13:
#line 232 "ass5_19CS30031_19CS10070.y"
    { 
                            // post increment, first generate temporary with old value, then add 1
                            yyinfo("postfix_expression => postfix_expression ++");
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[(1) - (2)].array)->symbol->type->type);
                            emit("=", (yyval.array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name);
                            emit("+", (yyvsp[(1) - (2)].array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name, toString(1)); 
                        }
    break;

  case 14:
#line 241 "ass5_19CS30031_19CS10070.y"
    { 
                            // post decrement, first generate temporary with old value, then subtract 1
                            yyinfo("postfix_expression => postfix_expression --"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[(1) - (2)].array)->symbol->type->type);
                            emit("=", (yyval.array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name);
                            emit("-", (yyvsp[(1) - (2)].array)->symbol->name, (yyvsp[(1) - (2)].array)->symbol->name, toString(1));
                        }
    break;

  case 15:
#line 250 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list }"); 
                        }
    break;

  case 16:
#line 254 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list , }"); 
                        }
    break;

  case 17:
#line 263 "ass5_19CS30031_19CS10070.y"
    { 
                                        yyinfo("argument_expression_list_opt => argument_expression_list"); 
                                        (yyval.parameterCount) = (yyvsp[(1) - (1)].parameterCount);
                                    }
    break;

  case 18:
#line 268 "ass5_19CS30031_19CS10070.y"
    { 
                                        // empty so 0 params
                                        yyinfo("argument_expression_list_opt => epsilon");
                                        (yyval.parameterCount) = 0;
                                    }
    break;

  case 19:
#line 277 "ass5_19CS30031_19CS10070.y"
    { 
                                    // first param, initialise param count to 1
                                    yyinfo("argument_expression_list => assignment_expression"); 
                                    emit("param", (yyvsp[(1) - (1)].expression)->symbol->name);
                                    (yyval.parameterCount) = 1;
                                }
    break;

  case 20:
#line 284 "ass5_19CS30031_19CS10070.y"
    { 
                                    // one new param, add 1 to param count
                                    yyinfo("argument_expression_list => argument_expression_list , assignment_expression");
                                    emit("param", (yyvsp[(3) - (3)].expression)->symbol->name);
                                    (yyval.parameterCount) = (yyvsp[(1) - (3)].parameterCount) + 1; 
                                }
    break;

  case 21:
#line 294 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("unary_expression => postfix_expression"); 
                            (yyval.array) = (yyvsp[(1) - (1)].array);
                        }
    break;

  case 22:
#line 299 "ass5_19CS30031_19CS10070.y"
    { 
                            // pre increment, no new temporary simply add 1
                            yyinfo("unary_expression => ++ unary_expression"); 
                            (yyval.array) = (yyvsp[(2) - (2)].array);
                            emit("+", (yyvsp[(2) - (2)].array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name, toString(1));
                        }
    break;

  case 23:
#line 306 "ass5_19CS30031_19CS10070.y"
    { 
                            // pre decrement, no new temporary simply subtract 1
                            yyinfo("unary_expression => -- unary_expression"); 
                            (yyval.array) = (yyvsp[(2) - (2)].array);
                            emit("-", (yyvsp[(2) - (2)].array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name, toString(1));
                        }
    break;

  case 24:
#line 313 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("unary_expression => unary_operator cast_expression");
                            if(strcmp((yyvsp[(1) - (2)].unaryOperator), "&") == 0) {
                                // addressing, this generates a pointer, the subArray type will thus be the symbol type of the cast_expression
                                (yyval.array) = new Array();
                                (yyval.array)->symbol = gentemp(POINTER);
                                (yyval.array)->symbol->type->arr_type = (yyvsp[(2) - (2)].array)->symbol->type;
                                emit("=&", (yyval.array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name);
                            } else if(strcmp((yyvsp[(1) - (2)].unaryOperator), "*") == 0) {
                                // dereferncing, this generates a pointer, a new temporary generated with type as the subarray type of the cast_expression
                                // the subArray type will thus be one level deeper that of the cast_expression
                                (yyval.array) = new Array();
                                (yyval.array)->symbol = (yyvsp[(2) - (2)].array)->symbol;
                                (yyval.array)->loc = gentemp((yyvsp[(2) - (2)].array)->loc->type->arr_type->type);
                                (yyval.array)->loc->type->arr_type = (yyvsp[(2) - (2)].array)->loc->type->arr_type->arr_type;
                                (yyval.array)->type = Array::POINTER;
                                emit("=*", (yyval.array)->loc->name, (yyvsp[(2) - (2)].array)->loc->name);
                            } else if(strcmp((yyvsp[(1) - (2)].unaryOperator), "+") == 0) {
                                (yyval.array) = (yyvsp[(2) - (2)].array);
                            } else { // for -, ~ and !
                                // simply apply the operator on cast_expression
                                (yyval.array) = new Array();
                                (yyval.array)->symbol = gentemp((yyvsp[(2) - (2)].array)->symbol->type->type);
                                emit((yyvsp[(1) - (2)].unaryOperator), (yyval.array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name);
                            }
                        }
    break;

  case 25:
#line 340 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("unary_expression => sizeof unary_expression"); 
                        }
    break;

  case 26:
#line 344 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("unary_expression => sizeof ( type_name )"); 
                        }
    break;

  case 27:
#line 355 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => &"); 
                        (yyval.unaryOperator) = strdup("&"); 
                    }
    break;

  case 28:
#line 360 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => *"); 
                        (yyval.unaryOperator) = strdup("*"); 
                    }
    break;

  case 29:
#line 365 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => +"); 
                        (yyval.unaryOperator) = strdup("+"); 
                    }
    break;

  case 30:
#line 370 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => -"); 
                        (yyval.unaryOperator) = strdup("=-"); 
                    }
    break;

  case 31:
#line 375 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => ~"); 
                        (yyval.unaryOperator) = strdup("~"); 
                    }
    break;

  case 32:
#line 380 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => !"); 
                        (yyval.unaryOperator) = strdup("!"); 
                    }
    break;

  case 33:
#line 388 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("cast_expression => unary_expression"); 
                        (yyval.array) = (yyvsp[(1) - (1)].array);
                    }
    break;

  case 34:
#line 393 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("cast_expression => ( type_name ) cast_expression"); 
                        (yyval.array) = new Array();
                        (yyval.array)->symbol = (yyvsp[(4) - (4)].array)->symbol->convert(currentType);
                    }
    break;

  case 35:
#line 415 "ass5_19CS30031_19CS10070.y"
    { 
                                    SymType *baseType = (yyvsp[(1) - (1)].array)->symbol->type;
                                    while(baseType->arr_type)
                                        baseType = baseType->arr_type;
                                    yyinfo("multiplicative_expression => cast_expression"); 
                                    (yyval.expression) = new Expression();
                                    if((yyvsp[(1) - (1)].array)->type == Array::ARRAY) {
                                        (yyval.expression)->symbol = gentemp(baseType->type);
                                        emit("=[]", (yyval.expression)->symbol->name, (yyvsp[(1) - (1)].array)->symbol->name, (yyvsp[(1) - (1)].array)->loc->name);
                                    } else if((yyvsp[(1) - (1)].array)->type == Array::POINTER) {
                                        (yyval.expression)->symbol = (yyvsp[(1) - (1)].array)->loc;
                                    } 
                                    else {
                                        (yyval.expression)->symbol = (yyvsp[(1) - (1)].array)->symbol;
                                    }
                                }
    break;

  case 36:
#line 432 "ass5_19CS30031_19CS10070.y"
    { 
                                    SymType *baseType = (yyvsp[(3) - (3)].array)->symbol->type;
                                    while(baseType->arr_type)
                                        baseType = baseType->arr_type;
                                    Symbol *temp;
                                    if((yyvsp[(3) - (3)].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[(3) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].array)->loc->name);
                                    } else if((yyvsp[(3) - (3)].array)->type == Array::POINTER) {
                                        temp = (yyvsp[(3) - (3)].array)->loc;
                                    } else {
                                        temp = (yyvsp[(3) - (3)].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression * cast_expression"); 
                                    if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[(1) - (3)].expression)->symbol->type->type);
                                        emit("*", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
    break;

  case 37:
#line 455 "ass5_19CS30031_19CS10070.y"
    { 
                                    SymType *baseType = (yyvsp[(3) - (3)].array)->symbol->type;
                                    while(baseType->arr_type)
                                        baseType = baseType->arr_type;
                                    Symbol *temp;
                                    if((yyvsp[(3) - (3)].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[(3) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].array)->loc->name);
                                    } else if((yyvsp[(3) - (3)].array)->type == Array::POINTER) {
                                        temp = (yyvsp[(3) - (3)].array)->loc;
                                    } else {
                                        temp = (yyvsp[(3) - (3)].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression / cast_expression");
                                    if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[(1) - (3)].expression)->symbol->type->type);
                                        emit("/", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
    break;

  case 38:
#line 478 "ass5_19CS30031_19CS10070.y"
    { 
                                    SymType *baseType = (yyvsp[(3) - (3)].array)->symbol->type;
                                    while(baseType->arr_type)
                                        baseType = baseType->arr_type;
                                    Symbol *temp;
                                    if((yyvsp[(3) - (3)].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[(3) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].array)->loc->name);
                                    } else if((yyvsp[(3) - (3)].array)->type == Array::POINTER) {
                                        temp = (yyvsp[(3) - (3)].array)->loc;
                                    } else {
                                        temp = (yyvsp[(3) - (3)].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression % cast_expression"); 
                                    if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[(1) - (3)].expression)->symbol->type->type);
                                        emit("%", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
    break;

  case 39:
#line 504 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("additive_expression => multiplicative_expression"); 
                            (yyval.expression) = (yyvsp[(1) - (1)].expression);
                        }
    break;

  case 40:
#line 509 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("additive_expression => additive_expression + multiplicative_expression"); 
                            if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp((yyvsp[(1) - (3)].expression)->symbol->type->type);
                                emit("+", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
    break;

  case 41:
#line 520 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("additive_expression => additive_expression - multiplicative_expression"); 
                            if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp((yyvsp[(1) - (3)].expression)->symbol->type->type);
                                emit("-", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
    break;

  case 42:
#line 534 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("shift_expression => additive_expression");
                            (yyval.expression) = (yyvsp[(1) - (1)].expression);
                        }
    break;

  case 43:
#line 539 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("shift_expression => shift_expression << additive_expression"); 
                            if((yyvsp[(3) - (3)].expression)->symbol->type->type == INT) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp(INT);
                                emit("<<", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
    break;

  case 44:
#line 550 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("shift_expression => shift_expression >> additive_expression"); 
                            if((yyvsp[(3) - (3)].expression)->symbol->type->type == INT) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp(INT);
                                emit(">>", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
    break;

  case 45:
#line 573 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("relational_expression => shift_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 46:
#line 578 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("relational_expression => relational_expression < shift_expression"); 
                                if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makelist(nextinstr());
			                        (yyval.expression)->falseList = makelist(nextinstr() + 1);
                                    emit("<", "", (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
    break;

  case 47:
#line 592 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("relational_expression => relational_expression > shift_expression"); 
                                if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makelist(nextinstr());
			                        (yyval.expression)->falseList = makelist(nextinstr() + 1);
                                    emit(">", "", (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
    break;

  case 48:
#line 606 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("relational_expression => relational_expression <= shift_expression"); 
                                if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makelist(nextinstr());
			                        (yyval.expression)->falseList = makelist(nextinstr() + 1);
                                    emit("<=", "", (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
    break;

  case 49:
#line 620 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("relational_expression => relational_expression >= shift_expression"); 
                                if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makelist(nextinstr());
			                        (yyval.expression)->falseList = makelist(nextinstr() + 1);
                                    emit(">=", "", (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
    break;

  case 50:
#line 637 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("equality_expression => relational_expression"); 
                            (yyval.expression) = (yyvsp[(1) - (1)].expression);
                        }
    break;

  case 51:
#line 642 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("equality_expression => equality_expression == relational_expression"); 
                            if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                (yyvsp[(1) - (3)].expression)->toInt();
                                (yyvsp[(3) - (3)].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                (yyval.expression)->trueList = makelist(nextinstr());
			                    (yyval.expression)->falseList = makelist(nextinstr() + 1);
                                emit("==", "", (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                emit("goto", "");
                            } else {
                                yyerror("Type error.");
                            }
                        }
    break;

  case 52:
#line 658 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("equality_expression => equality_expression != relational_expression"); 
                            if(typeCheck((yyvsp[(1) - (3)].expression)->symbol, (yyvsp[(3) - (3)].expression)->symbol)) {
                                (yyvsp[(1) - (3)].expression)->toInt();
                                (yyvsp[(3) - (3)].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                (yyval.expression)->trueList = makelist(nextinstr());
			                    (yyval.expression)->falseList = makelist(nextinstr() + 1);
                                emit("!=", "", (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                emit("goto", "");
                            } else {
                                yyerror("Type error.");
                            }
                        }
    break;

  case 53:
#line 688 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("AND_expression => equality_expression"); 
                        (yyval.expression) = (yyvsp[(1) - (1)].expression);
                    }
    break;

  case 54:
#line 693 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("AND_expression => AND_expression & equality_expression"); 
                        (yyvsp[(1) - (3)].expression)->toInt();
                        (yyvsp[(3) - (3)].expression)->toInt();
                        (yyval.expression) = new Expression();
                        (yyval.expression)->type = Expression::NONBOOLEAN;
                        (yyval.expression)->symbol = gentemp(INT);
                        emit("&", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                    }
    break;

  case 55:
#line 706 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("exclusive_OR_expression => AND_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 56:
#line 711 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression"); 
                                (yyvsp[(1) - (3)].expression)->toInt();
                                (yyvsp[(3) - (3)].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(INT);
                                emit("^", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                            }
    break;

  case 57:
#line 724 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("inclusive_OR_expression => exclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 58:
#line 729 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression"); 
                                (yyvsp[(1) - (3)].expression)->toInt();
                                (yyvsp[(3) - (3)].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(INT);
                                emit("|", (yyval.expression)->symbol->name, (yyvsp[(1) - (3)].expression)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                            }
    break;

  case 59:
#line 751 "ass5_19CS30031_19CS10070.y"
    {
            yyinfo("M => epsilon");
            (yyval.instructionNumber) = nextinstr();
        }
    break;

  case 60:
#line 758 "ass5_19CS30031_19CS10070.y"
    {
            yyinfo("N => epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makelist(nextinstr());
            emit("goto", "");
        }
    break;

  case 61:
#line 801 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("logical_AND_expression => inclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 62:
#line 806 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("logical_AND_expression => logical_AND_expression && inclusive_OR_expression");
                                (yyvsp[(1) - (4)].expression)->toBool();
                                (yyvsp[(4) - (4)].expression)->toBool();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                backpatch((yyvsp[(1) - (4)].expression)->trueList, (yyvsp[(3) - (4)].instructionNumber));
                                (yyval.expression)->trueList = (yyvsp[(4) - (4)].expression)->trueList;
                                (yyval.expression)->falseList = merge((yyvsp[(1) - (4)].expression)->falseList, (yyvsp[(4) - (4)].expression)->falseList);
                            }
    break;

  case 63:
#line 820 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("logical_OR_expression => logical_AND_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 64:
#line 825 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("logical_OR_expression => logical_OR_expression || logical_AND_expression"); 
                                (yyvsp[(1) - (4)].expression)->toBool();
                                (yyvsp[(4) - (4)].expression)->toBool();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                backpatch((yyvsp[(1) - (4)].expression)->falseList, (yyvsp[(3) - (4)].instructionNumber));
                                (yyval.expression)->trueList = merge((yyvsp[(1) - (4)].expression)->trueList, (yyvsp[(4) - (4)].expression)->trueList);
                                (yyval.expression)->falseList = (yyvsp[(4) - (4)].expression)->falseList;
                            }
    break;

  case 65:
#line 839 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("conditional_expression => logical_OR_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 66:
#line 844 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("conditional_expression => logical_OR_expression ? expression : conditional_expression"); 
                                (yyval.expression)->symbol = gentemp((yyvsp[(5) - (9)].expression)->symbol->type->type);
                                emit("=", (yyval.expression)->symbol->name, (yyvsp[(9) - (9)].expression)->symbol->name);
                                list<int> l = makelist(nextinstr());
                                emit("goto", "");
                                backpatch((yyvsp[(6) - (9)].statement)->nextList, nextinstr());
                                emit("=", (yyval.expression)->symbol->name, (yyvsp[(5) - (9)].expression)->symbol->name);
                                l = merge(l, makelist(nextinstr()));
                                emit("goto", "");
                                backpatch((yyvsp[(2) - (9)].statement)->nextList, nextinstr());
                                (yyvsp[(1) - (9)].expression)->toBool();
                                backpatch((yyvsp[(1) - (9)].expression)->trueList, (yyvsp[(4) - (9)].instructionNumber));
                                backpatch((yyvsp[(1) - (9)].expression)->falseList, (yyvsp[(8) - (9)].instructionNumber));
                                backpatch(l, nextinstr());
                            }
    break;

  case 67:
#line 864 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("assignment_expression => conditional_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 68:
#line 869 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("assignment_expression => unary_expression assignment_operator assignment_expression"); 
                                if((yyvsp[(1) - (3)].array)->type == Array::ARRAY) {
                                    // assignment to array
                                    (yyvsp[(3) - (3)].expression)->symbol = (yyvsp[(3) - (3)].expression)->symbol->convert((yyvsp[(1) - (3)].array)->subarr_type->type);
                                    emit("[]=", (yyvsp[(1) - (3)].array)->symbol->name, (yyvsp[(1) - (3)].array)->loc->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                } else if((yyvsp[(1) - (3)].array)->type == Array::POINTER) {
                                    // assignment to pointer
                                    (yyvsp[(3) - (3)].expression)->symbol = (yyvsp[(3) - (3)].expression)->symbol->convert((yyvsp[(1) - (3)].array)->loc->type->type);
                                    emit("*=", (yyvsp[(1) - (3)].array)->loc->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                } else {
                                    // assignment to other
                                    (yyvsp[(3) - (3)].expression)->symbol = (yyvsp[(3) - (3)].expression)->symbol->convert((yyvsp[(1) - (3)].array)->symbol->type->type);
			                        emit("=", (yyvsp[(1) - (3)].array)->symbol->name, (yyvsp[(3) - (3)].expression)->symbol->name);
                                }
                                (yyval.expression) = (yyvsp[(3) - (3)].expression);
                            }
    break;

  case 69:
#line 890 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => ="); 
                        }
    break;

  case 70:
#line 894 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => *="); 
                        }
    break;

  case 71:
#line 898 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => /="); 
                        }
    break;

  case 72:
#line 902 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => %="); 
                        }
    break;

  case 73:
#line 906 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => += "); 
                        }
    break;

  case 74:
#line 910 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => -= "); 
                        }
    break;

  case 75:
#line 914 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => <<="); 
                        }
    break;

  case 76:
#line 918 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => >>="); 
                        }
    break;

  case 77:
#line 922 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => &="); 
                        }
    break;

  case 78:
#line 926 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => ^="); 
                        }
    break;

  case 79:
#line 930 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => |="); 
                        }
    break;

  case 80:
#line 937 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("expression => assignment_expression"); 
                    (yyval.expression) = (yyvsp[(1) - (1)].expression);
                }
    break;

  case 81:
#line 942 "ass5_19CS30031_19CS10070.y"
    {
                     yyinfo("expression => expression , assignment_expression"); 
                }
    break;

  case 82:
#line 949 "ass5_19CS30031_19CS10070.y"
    {
                             yyinfo("constant_expression => conditional_expression"); 
                        }
    break;

  case 83:
#line 958 "ass5_19CS30031_19CS10070.y"
    {
                     yyinfo("declaration => declaration_specifiers init_declarator_list_opt ;"); 
                }
    break;

  case 84:
#line 965 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("init_declarator_list_opt => init_declarator_list"); 
                                }
    break;

  case 85:
#line 969 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("init_declarator_list_opt => epsilon"); 
                                }
    break;

  case 86:
#line 976 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => storage_class_specifier declaration_specifiers_opt"); 
                            }
    break;

  case 87:
#line 980 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => type_specifier declaration_specifiers_opt"); 
                            }
    break;

  case 88:
#line 984 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => type_qualifier declaration_specifiers_opt"); 
                            }
    break;

  case 89:
#line 988 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => function_specifier declaration_specifiers_opt"); 
                            }
    break;

  case 90:
#line 995 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("declaration_specifiers_opt => declaration_specifiers"); 
                                }
    break;

  case 91:
#line 999 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("declaration_specifiers_opt => epsilon "); 
                                }
    break;

  case 92:
#line 1006 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("init_declarator_list => init_declarator"); 
                            }
    break;

  case 93:
#line 1010 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("init_declarator_list => init_declarator_list , init_declarator"); 
                            }
    break;

  case 94:
#line 1017 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("init_declarator => declarator"); 
                        (yyval.symbol) = (yyvsp[(1) - (1)].symbol);
                    }
    break;

  case 95:
#line 1022 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("init_declarator => declarator = initialiser");
                        // if there is some initial value assign it 
                        if((yyvsp[(3) - (3)].symbol)->initialValue != "") 
                            (yyvsp[(1) - (3)].symbol)->initialValue = (yyvsp[(3) - (3)].symbol)->initialValue;
                        // = assignment
		                emit("=", (yyvsp[(1) - (3)].symbol)->name, (yyvsp[(3) - (3)].symbol)->name);
                    }
    break;

  case 96:
#line 1034 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => extern"); 
                            }
    break;

  case 97:
#line 1038 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => static"); 
                            }
    break;

  case 98:
#line 1042 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => auto"); 
                            }
    break;

  case 99:
#line 1046 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => register"); 
                            }
    break;

  case 100:
#line 1053 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => void");
                        currentType = VOID;
                    }
    break;

  case 101:
#line 1058 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => char"); 
                        currentType = CHAR;
                    }
    break;

  case 102:
#line 1063 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => short"); 
                    }
    break;

  case 103:
#line 1067 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => int"); 
                        currentType = INT;
                    }
    break;

  case 104:
#line 1072 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => long"); 
                    }
    break;

  case 105:
#line 1076 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => float"); 
                        currentType = FLOAT;
                    }
    break;

  case 106:
#line 1081 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => double"); 
                    }
    break;

  case 107:
#line 1085 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => signed"); 
                    }
    break;

  case 108:
#line 1089 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => unsigned"); 
                    }
    break;

  case 109:
#line 1093 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => _Bool"); 
                    }
    break;

  case 110:
#line 1097 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => _Complex"); 
                    }
    break;

  case 111:
#line 1101 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => _Imaginary"); 
                    }
    break;

  case 112:
#line 1105 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => enum_specifier"); 
                    }
    break;

  case 113:
#line 1112 "ass5_19CS30031_19CS10070.y"
    { 
                                    yyinfo("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt"); 
                                }
    break;

  case 114:
#line 1116 "ass5_19CS30031_19CS10070.y"
    { 
                                    yyinfo("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt"); 
                                }
    break;

  case 115:
#line 1123 "ass5_19CS30031_19CS10070.y"
    { 
                                        yyinfo("specifier_qualifier_list_opt => specifier_qualifier_list"); 
                                    }
    break;

  case 116:
#line 1127 "ass5_19CS30031_19CS10070.y"
    { 
                                        yyinfo("specifier_qualifier_list_opt => epsilon"); 
                                    }
    break;

  case 117:
#line 1134 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list }"); 
                    }
    break;

  case 118:
#line 1138 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list , }"); 
                    }
    break;

  case 119:
#line 1142 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enum_specifier => enum IDENTIFIER"); 
                    }
    break;

  case 120:
#line 1149 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_opt => IDENTIFIER"); 
                    }
    break;

  case 121:
#line 1153 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_opt => epsilon"); 
                    }
    break;

  case 122:
#line 1160 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enumerator_list => enumerator"); 
                    }
    break;

  case 123:
#line 1164 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enumerator_list => enumerator_list , enumerator"); 
                    }
    break;

  case 124:
#line 1171 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT"); 
                }
    break;

  case 125:
#line 1175 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT = constant_expression"); 
                }
    break;

  case 126:
#line 1182 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_qualifier => const"); 
                    }
    break;

  case 127:
#line 1186 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_qualifier => restrict"); 
                    }
    break;

  case 128:
#line 1190 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_qualifier => volatile"); 
                    }
    break;

  case 129:
#line 1197 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("function_specifier => inline"); 
                        }
    break;

  case 130:
#line 1204 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("declarator => pointer direct_declarator"); 
                    SymType *it = (yyvsp[(1) - (2)].SymType);
                    while(it->arr_type != NULL) 
                        it = it->arr_type;
                    it->arr_type = (yyvsp[(2) - (2)].symbol)->type;
                    (yyval.symbol) = (yyvsp[(2) - (2)].symbol)->update((yyvsp[(1) - (2)].SymType));
                }
    break;

  case 131:
#line 1213 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("declarator => direct_declarator"); 
                }
    break;

  case 132:
#line 1219 "ass5_19CS30031_19CS10070.y"
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

  case 133:
#line 1238 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => IDENTIFIER"); 
                            (yyval.symbol) = (yyvsp[(1) - (1)].symbol)->update(new SymType(currentType)); // update type to the last type seen
                            currentSymbol = (yyval.symbol);
                        }
    break;

  case 134:
#line 1244 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => ( declarator )"); 
                            (yyval.symbol) = (yyvsp[(2) - (3)].symbol);
                        }
    break;

  case 135:
#line 1249 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
                        }
    break;

  case 136:
#line 1253 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
                        }
    break;

  case 137:
#line 1257 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
                            SymType *it1 = (yyvsp[(1) - (4)].symbol)->type, *it2 = NULL;
                            while(it1->type == ARRAY) { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->arr_type;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width the value of assignment_expression
                                it2->arr_type =  new SymType(ARRAY, it1, atoi((yyvsp[(3) - (4)].expression)->symbol->initialValue.c_str()));	
                                (yyval.symbol) = (yyvsp[(1) - (4)].symbol)->update((yyvsp[(1) - (4)].symbol)->type);
                            }
                            else { // fresh array
                                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                                (yyval.symbol) = (yyvsp[(1) - (4)].symbol)->update(new SymType(ARRAY, (yyvsp[(1) - (4)].symbol)->type, atoi((yyvsp[(3) - (4)].expression)->symbol->initialValue.c_str())));
                            }
                        }
    break;

  case 138:
#line 1275 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ ]"); 
                            // same as the previous rule, just we dont know the size so put it as 0
                            SymType *it1 = (yyvsp[(1) - (3)].symbol)->type, *it2 = NULL;
                            while(it1->type == ARRAY) { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->arr_type;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width the value of assignment_expression
                                it2->arr_type =  new SymType(ARRAY, it1, 0);	
                                (yyval.symbol) = (yyvsp[(1) - (3)].symbol)->update((yyvsp[(1) - (3)].symbol)->type);
                            }
                            else { // fresh array
                                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                                (yyval.symbol) = (yyvsp[(1) - (3)].symbol)->update(new SymType(ARRAY, (yyvsp[(1) - (3)].symbol)->type, 0));
                            }
                        }
    break;

  case 139:
#line 1294 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
                        }
    break;

  case 140:
#line 1298 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
                        }
    break;

  case 141:
#line 1302 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
                        }
    break;

  case 142:
#line 1306 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
                        }
    break;

  case 143:
#line 1310 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ * ]"); 
                        }
    break;

  case 144:
#line 1314 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator ( parameter_type_list )"); 
                            // function declaration
                            currentTable->name = (yyvsp[(1) - (5)].symbol)->name;
                            if((yyvsp[(1) - (5)].symbol)->type->type != VOID) {
                                // set type of return value
                                currentTable->lookup("return")->update((yyvsp[(1) - (5)].symbol)->type);
                            }
                            // move back to the global table and set the nested table for the function
                            (yyvsp[(1) - (5)].symbol)->nestedTable = currentTable;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
    break;

  case 145:
#line 1329 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator ( identifier_list )"); 
                        }
    break;

  case 146:
#line 1333 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator ( )"); 
                            // same as the previous rule
                            currentTable->name = (yyvsp[(1) - (4)].symbol)->name;
                            if((yyvsp[(1) - (4)].symbol)->type->type != VOID) {
                                // set type of return value
                                currentTable->lookup("return")->update((yyvsp[(1) - (4)].symbol)->type);
                            }
                            // move back to the global table and set the nested table for the function
                            (yyvsp[(1) - (4)].symbol)->nestedTable = currentTable;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
    break;

  case 147:
#line 1351 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("type_qualifier_list_opt => type_qualifier_list"); 
                            }
    break;

  case 148:
#line 1355 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("type_qualifier_list_opt => epsilon"); 
                            }
    break;

  case 149:
#line 1391 "ass5_19CS30031_19CS10070.y"
    { 
                yyinfo("pointer => * type_qualifier_list_opt"); 
                // fresh pointer
                (yyval.SymType) = new SymType(POINTER);
            }
    break;

  case 150:
#line 1397 "ass5_19CS30031_19CS10070.y"
    { 
                yyinfo("pointer => * type_qualifier_list_opt pointer"); 
                // nested pointer
                (yyval.SymType) = new SymType(POINTER, (yyvsp[(3) - (3)].SymType));
            }
    break;

  case 151:
#line 1406 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("type_qualifier_list => type_qualifier"); 
                        }
    break;

  case 152:
#line 1410 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("type_qualifier_list => type_qualifier_list type_qualifier"); 
                        }
    break;

  case 153:
#line 1417 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("parameter_type_list => parameter_list"); 
                        }
    break;

  case 154:
#line 1421 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("parameter_type_list => parameter_list , ..."); 
                        }
    break;

  case 155:
#line 1428 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("parameter_list => parameter_declaration"); 
                    }
    break;

  case 156:
#line 1432 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("parameter_list => parameter_list , parameter_declaration"); 
                    }
    break;

  case 157:
#line 1439 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("parameter_declaration => declaration_specifiers declarator"); 
                            }
    break;

  case 158:
#line 1443 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("parameter_declaration => declaration_specifiers"); 
                            }
    break;

  case 159:
#line 1450 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_list => IDENTIFIER"); 
                    }
    break;

  case 160:
#line 1454 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_list => identifier_list , IDENTIFIER"); 
                    }
    break;

  case 161:
#line 1461 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("type_name => specifier_qualifier_list"); 
                }
    break;

  case 162:
#line 1468 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("initialiser => assignment_expression"); 
                    (yyval.symbol) = (yyvsp[(1) - (1)].expression)->symbol;
                }
    break;

  case 163:
#line 1473 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("initialiser => { initialiser_list }"); 
                }
    break;

  case 164:
#line 1477 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("initialiser => { initialiser_list , }"); 
                }
    break;

  case 165:
#line 1484 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("initialiser_list => designation_opt initialiser"); 
                        }
    break;

  case 166:
#line 1488 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("initialiser_list => initialiser_list , designation_opt initialiser"); 
                        }
    break;

  case 167:
#line 1495 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designation_opt => designation"); 
                    }
    break;

  case 168:
#line 1499 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designation_opt => epsilon"); 
                    }
    break;

  case 169:
#line 1506 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("designation => designator_list ="); 
                }
    break;

  case 170:
#line 1513 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designator_list => designator"); 
                    }
    break;

  case 171:
#line 1517 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designator_list => designator_list designator"); 
                    }
    break;

  case 172:
#line 1524 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("designator => [ constant_expression ]"); 
                }
    break;

  case 173:
#line 1528 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("designator => . IDENTIFIER"); 
                }
    break;

  case 174:
#line 1537 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => labeled_statement"); 
                }
    break;

  case 175:
#line 1541 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => compound_statement");
                    (yyval.statement) = (yyvsp[(1) - (1)].statement); 
                }
    break;

  case 176:
#line 1546 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => expression_statement"); 
                    (yyval.statement) = new Statement();
                    (yyval.statement)->nextList = (yyvsp[(1) - (1)].expression)->nextList;
                }
    break;

  case 177:
#line 1552 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => selection_statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 178:
#line 1557 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => iteration_statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 179:
#line 1562 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => jump_statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 180:
#line 1570 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("labeled_statement => IDENTIFIER : statement"); 
                        }
    break;

  case 181:
#line 1574 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("labeled_statement => case constant_expression : statement"); 
                        }
    break;

  case 182:
#line 1578 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("labeled_statement => default : statement"); 
                        }
    break;

  case 183:
#line 1591 "ass5_19CS30031_19CS10070.y"
    {
                        string name = currentTable->name + "_" + toString(tableCount);
                        tableCount++;
                        Symbol *s = currentTable->lookup(name); // create new entry in symbol table
                        s->nestedTable = new SymTable(name, currentTable);
                        s->type = new SymType(BLOCK);
                        currentSymbol = s;
                    }
    break;

  case 184:
#line 1603 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("compound_statement => { block_item_list_opt }"); 
                            (yyval.statement) = (yyvsp[(4) - (5)].statement);
                            changeTable(currentTable->parent); // block over, move back to the parent table
                        }
    break;

  case 185:
#line 1612 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("block_item_list_opt => block_item_list"); 
                            (yyval.statement) = (yyvsp[(1) - (1)].statement);
                        }
    break;

  case 186:
#line 1617 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("block_item_list_opt => epsilon"); 
                            (yyval.statement) = new Statement();
                        }
    break;

  case 187:
#line 1625 "ass5_19CS30031_19CS10070.y"
    {
                        yyinfo("block_item_list => block_item"); 
                        (yyval.statement) = (yyvsp[(1) - (1)].statement);
                    }
    break;

  case 188:
#line 1630 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("block_item_list => block_item_list block_item"); 
                        (yyval.statement) = (yyvsp[(3) - (3)].statement);
                        // after completion of block_item_list(1) we move to block_item(3)
                        backpatch((yyvsp[(1) - (3)].statement)->nextList,(yyvsp[(2) - (3)].instructionNumber));
                    }
    break;

  case 189:
#line 1640 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("block_item => declaration"); 
                    (yyval.statement) = new Statement();
                }
    break;

  case 190:
#line 1645 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("block_item => statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 191:
#line 1653 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("expression_statement => expression_opt ;"); 
                                (yyval.expression) = (yyvsp[(1) - (2)].expression);
                            }
    break;

  case 192:
#line 1661 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("expression_opt => expression"); 
                        (yyval.expression) = (yyvsp[(1) - (1)].expression);
                    }
    break;

  case 193:
#line 1666 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("expression_opt => epsilon"); 
                        (yyval.expression) = new Expression();
                    }
    break;

  case 194:
#line 1693 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("selection_statement => if ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[(3) - (7)].expression)->toBool();
                            backpatch((yyvsp[(3) - (7)].expression)->trueList, (yyvsp[(5) - (7)].instructionNumber)); // if true go to M
                            (yyval.statement)->nextList = merge((yyvsp[(3) - (7)].expression)->falseList, merge((yyvsp[(6) - (7)].statement)->nextList, (yyvsp[(7) - (7)].statement)->nextList)); // exits
                        }
    break;

  case 195:
#line 1701 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("selection_statement => if ( expression ) statement else statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[(3) - (10)].expression)->toBool();
                            backpatch((yyvsp[(3) - (10)].expression)->trueList, (yyvsp[(5) - (10)].instructionNumber)); // if true go to M
                            backpatch((yyvsp[(3) - (10)].expression)->falseList, (yyvsp[(9) - (10)].instructionNumber)); // if false go to else
                            (yyval.statement)->nextList = merge((yyvsp[(10) - (10)].statement)->nextList, merge((yyvsp[(6) - (10)].statement)->nextList, (yyvsp[(7) - (10)].statement)->nextList)); // exits
                        }
    break;

  case 196:
#line 1710 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("selection_statement => switch ( expression ) statement"); 
                        }
    break;

  case 197:
#line 1741 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("iteration_statement => while ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[(4) - (7)].expression)->toBool();
                            backpatch((yyvsp[(7) - (7)].statement)->nextList, (yyvsp[(2) - (7)].instructionNumber)); // after statement go back to M1
                            backpatch((yyvsp[(4) - (7)].expression)->trueList, (yyvsp[(6) - (7)].instructionNumber)); // if true go to M2
                            (yyval.statement)->nextList = (yyvsp[(4) - (7)].expression)->falseList; // exit if false
                            emit("goto", toString((yyvsp[(2) - (7)].instructionNumber)));
                        }
    break;

  case 198:
#line 1751 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("iteration_statement => do statement while ( expression ) ;"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[(7) - (9)].expression)->toBool();
                            backpatch((yyvsp[(7) - (9)].expression)->trueList, (yyvsp[(2) - (9)].instructionNumber)); // if true go back to M1
                            backpatch((yyvsp[(3) - (9)].statement)->nextList, (yyvsp[(4) - (9)].instructionNumber)); // after statement is executed go to M2
                            (yyval.statement)->nextList = (yyvsp[(7) - (9)].expression)->falseList; // exit if false
                        }
    break;

  case 199:
#line 1760 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[(6) - (13)].expression)->toBool();
                            backpatch((yyvsp[(6) - (13)].expression)->trueList, (yyvsp[(12) - (13)].instructionNumber)); // if true go to M3 (loop body)
                            backpatch((yyvsp[(10) - (13)].statement)->nextList, (yyvsp[(5) - (13)].instructionNumber)); // after N go to M1 (condition check)
                            backpatch((yyvsp[(13) - (13)].statement)->nextList, (yyvsp[(8) - (13)].instructionNumber)); // after S1 (loop body) go to M2 (increment/decrement/any other operation)
                            emit("goto", toString((yyvsp[(8) - (13)].instructionNumber)));
                            (yyval.statement)->nextList = (yyvsp[(6) - (13)].expression)->falseList; // exit if false
                        }
    break;

  case 200:
#line 1771 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement"); 
                        }
    break;

  case 201:
#line 1778 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("jump_statement => goto IDENTIFIER ;"); 
                    }
    break;

  case 202:
#line 1782 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("jump_statement => continue ;"); 
                    }
    break;

  case 203:
#line 1786 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("jump_statement => break ;"); 
                    }
    break;

  case 204:
#line 1790 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("jump_statement => return expression_opt ;"); 
                        (yyval.statement) = new Statement();
                        if((yyvsp[(2) - (3)].expression)->symbol != NULL) {
                            emit("return", (yyvsp[(2) - (3)].expression)->symbol->name); // emit the current symbol name at return if it exists otherwise empty
                        } else {
                            emit("return", "");
                        }
                    }
    break;

  case 205:
#line 1805 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("translation_unit => external_declaration"); 
                        }
    break;

  case 206:
#line 1809 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("translation_unit => translation_unit external_declaration"); 
                        }
    break;

  case 207:
#line 1816 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("external_declaration => function_definition"); 
                            }
    break;

  case 208:
#line 1820 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("external_declaration => declaration"); 
                            }
    break;

  case 209:
#line 1828 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement"); 
                            tableCount = 0;
                            (yyvsp[(2) - (7)].symbol)->isFunction = true;
                            changeTable(globalTable);
                        }
    break;

  case 210:
#line 1838 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("declaration_list_opt => declaration_list"); 
                            }
    break;

  case 211:
#line 1842 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("declaration_list_opt => epsilon"); 
                            }
    break;

  case 212:
#line 1849 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("declaration_list => declaration"); 
                        }
    break;

  case 213:
#line 1853 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("declaration_list => declaration_list declaration"); 
                        }
    break;


/* Line 1267 of yacc.c.  */
#line 3991 "y.tab.c"
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


#line 1858 "ass5_19CS30031_19CS10070.y"


void yyerror(string s) {
    printf("ERROR [Line %d] : %s\n", yylineno, s.c_str());
}

void yyinfo(string s) {
    #ifdef _DEBUG
        printf("INFO [Line %d] : %s\n", yylineno, s.c_str());
    #endif
}

