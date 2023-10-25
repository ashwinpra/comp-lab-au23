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
     VOID = 309,
     CHAR = 310,
     SHORT = 311,
     INT = 312,
     LONG = 313,
     FLOAT = 314,
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
#define VOID 309
#define CHAR 310
#define SHORT 311
#define INT 312
#define LONG 313
#define FLOAT 314
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
#line 9 "ass5_21CS10026_21CS30009.y"

    #include <iostream>
    #include "ass5_21CS10026_21CS30009_translator.h"
    void yyerror(const char*); 
    extern int yylex();   
    extern int yylineno;
    extern char* yytext;
    extern TYPE currentType;

    using namespace std;


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
#line 21 "ass5_21CS10026_21CS30009.y"
{
    int ival;
    float fval;
    char *cval;
    char *sval;
    char unary_op;
    int instr_num;
    int num_params;
    Statement *stmt; 
    Array *arr; 
    Expression *expr;
    SymType *sym_type;
    Sym *sym;
}
/* Line 193 of yacc.c.  */
#line 309 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 322 "y.tab.c"

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
#define YYLAST   1034

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNRULES -- Number of states.  */
#define YYNSTATES  363

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
       0,     0,     3,     4,     5,     7,     9,    11,    15,    17,
      19,    21,    23,    28,    33,    37,    41,    44,    47,    54,
      62,    64,    68,    70,    71,    73,    76,    79,    82,    85,
      90,    92,    94,    96,    98,   100,   102,   104,   109,   111,
     115,   119,   123,   125,   129,   133,   135,   139,   143,   145,
     149,   153,   157,   161,   163,   167,   171,   173,   177,   179,
     183,   185,   189,   191,   196,   198,   203,   205,   215,   217,
     221,   223,   225,   227,   229,   231,   233,   235,   237,   239,
     241,   243,   245,   249,   251,   255,   258,   261,   264,   267,
     269,   270,   272,   276,   278,   279,   281,   285,   287,   289,
     291,   293,   295,   297,   299,   301,   303,   305,   307,   309,
     311,   313,   315,   317,   319,   322,   324,   325,   327,   328,
     334,   341,   344,   346,   350,   352,   356,   358,   360,   362,
     364,   367,   369,   371,   375,   381,   386,   391,   395,   402,
     408,   414,   419,   425,   430,   435,   436,   439,   443,   445,
     448,   450,   451,   453,   457,   459,   463,   466,   468,   470,
     474,   476,   478,   482,   487,   490,   495,   498,   500,   501,
     503,   506,   510,   513,   514,   518,   520,   522,   524,   526,
     530,   535,   539,   540,   546,   548,   552,   554,   555,   557,
     559,   562,   564,   565,   576,   584,   590,   598,   608,   622,
     631,   635,   638,   641,   645,   648,   650,   653,   655,   657,
     662,   664,   667,   669
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     166,     0,    -1,    -1,    -1,    88,    -1,    98,    -1,    92,
      -1,     3,   118,     4,    -1,    89,    -1,    90,    -1,    91,
      -1,    97,    -1,    99,     7,   118,     8,    -1,    99,     3,
     101,     4,    -1,    99,    23,    88,    -1,    99,    19,    88,
      -1,    99,     9,    -1,    99,    10,    -1,     3,   146,     4,
       5,   148,     6,    -1,     3,   146,     4,     5,   148,    48,
       6,    -1,   116,    -1,   100,    48,   116,    -1,   100,    -1,
      -1,    99,    -1,     9,   102,    -1,    10,   102,    -1,   103,
     104,    -1,    71,   102,    -1,    71,     3,   146,     4,    -1,
      24,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,   102,    -1,     3,   146,     4,   104,    -1,   104,
      -1,   105,    27,   104,    -1,   105,    32,   104,    -1,   105,
      33,   104,    -1,   105,    -1,   106,    28,   105,    -1,   106,
      29,   105,    -1,   106,    -1,   107,    11,   106,    -1,   107,
      12,   106,    -1,   107,    -1,   108,    20,   107,    -1,   108,
      21,   107,    -1,   108,    15,   107,    -1,   108,    16,   107,
      -1,   108,    -1,   109,    13,   108,    -1,   109,    14,   108,
      -1,   109,    -1,   110,    24,   109,    -1,   110,    -1,   111,
      26,   110,    -1,   111,    -1,   112,    25,   111,    -1,   112,
      -1,   113,    17,    95,   112,    -1,   113,    -1,   114,    18,
      95,   113,    -1,   114,    -1,   114,    96,    47,    95,   118,
      96,    44,    95,   115,    -1,   115,    -1,   102,   117,   116,
      -1,    22,    -1,    36,    -1,    37,    -1,    38,    -1,    34,
      -1,    35,    -1,    39,    -1,    40,    -1,    42,    -1,    43,
      -1,    41,    -1,   116,    -1,   118,    48,   116,    -1,   115,
      -1,   121,   124,    45,    -1,   126,   122,    -1,   127,   122,
      -1,   134,   122,    -1,   135,   122,    -1,   121,    -1,    -1,
     125,    -1,   123,    48,   125,    -1,   123,    -1,    -1,   136,
      -1,   136,    22,   147,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,
      -1,    63,    -1,    64,    -1,    65,    -1,   131,    -1,   127,
     129,    -1,   128,    -1,    -1,    88,    -1,    -1,    69,   130,
       5,   132,     6,    -1,    69,   130,     5,   132,    48,     6,
      -1,    69,    88,    -1,   133,    -1,   132,    48,   133,    -1,
      88,    -1,    88,    22,   119,    -1,    66,    -1,    67,    -1,
      68,    -1,    70,    -1,   139,   137,    -1,   137,    -1,    88,
      -1,     3,   136,     4,    -1,   137,     7,   140,   116,     8,
      -1,   137,     7,   140,     8,    -1,   137,     7,   116,     8,
      -1,   137,     7,     8,    -1,   137,     7,    51,   140,   116,
       8,    -1,   137,     7,    51,   116,     8,    -1,   137,     7,
     140,    27,     8,    -1,   137,     7,    27,     8,    -1,   137,
       3,   138,   142,     4,    -1,   137,     3,   145,     4,    -1,
     137,     3,   138,     4,    -1,    -1,    27,   141,    -1,    27,
     141,   139,    -1,   134,    -1,   140,   134,    -1,   140,    -1,
      -1,   143,    -1,   143,    48,    46,    -1,   144,    -1,   143,
      48,   144,    -1,   121,   136,    -1,   121,    -1,    88,    -1,
     145,    48,    88,    -1,   128,    -1,   116,    -1,     5,   148,
       6,    -1,     5,   148,    48,     6,    -1,   150,   147,    -1,
     148,    48,   150,   147,    -1,   151,    22,    -1,   149,    -1,
      -1,   152,    -1,   151,   152,    -1,     7,   119,     8,    -1,
      23,    88,    -1,    -1,   155,   154,   157,    -1,   161,    -1,
     163,    -1,   164,    -1,   165,    -1,    88,    44,   153,    -1,
      77,   119,    44,   153,    -1,    78,    44,   153,    -1,    -1,
       5,   156,   138,   159,     6,    -1,   160,    -1,   158,    95,
     160,    -1,   158,    -1,    -1,   120,    -1,   153,    -1,   162,
      45,    -1,   118,    -1,    -1,    75,     3,   118,     4,    95,
     153,    96,    76,    95,   153,    -1,    75,     3,   118,     4,
      95,   153,    96,    -1,    86,     3,   118,     4,   153,    -1,
      79,    95,     3,   118,     4,    95,   153,    -1,    81,    95,
     153,    95,    79,     3,   118,     4,    45,    -1,    83,     3,
     162,    45,    95,   162,    45,    95,   162,    96,     4,    95,
     153,    -1,    83,     3,   120,   162,    45,   162,     4,   153,
      -1,    82,    88,    45,    -1,    80,    45,    -1,    85,    45,
      -1,    84,   118,    45,    -1,    84,    45,    -1,   167,    -1,
     166,   167,    -1,   168,    -1,   120,    -1,   121,   136,   170,
     157,    -1,   120,    -1,   169,   120,    -1,   169,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    95,   108,   117,   125,   134,   143,   153,
     163,   174,   185,   210,   221,   226,   231,   241,   252,   257,
     265,   273,   283,   289,   297,   303,   311,   319,   377,   382,
     389,   395,   401,   407,   413,   419,   427,   433,   443,   468,
     498,   527,   557,   563,   577,   593,   599,   613,   632,   638,
     656,   673,   690,   709,   715,   736,   760,   766,   787,   793,
     814,   820,   843,   849,   866,   872,   889,   896,   925,   931,
     954,   960,   965,   970,   975,   980,   985,   990,   995,  1000,
    1005,  1012,  1019,  1026,  1036,  1044,  1049,  1054,  1059,  1066,
    1072,  1078,  1083,  1090,  1096,  1102,  1108,  1119,  1124,  1129,
    1134,  1142,  1148,  1154,  1159,  1165,  1170,  1176,  1181,  1186,
    1191,  1196,  1201,  1206,  1213,  1220,  1225,  1232,  1238,  1245,
    1250,  1255,  1261,  1266,  1273,  1278,  1285,  1290,  1295,  1302,
    1309,  1324,  1337,  1345,  1351,  1356,  1361,  1385,  1407,  1412,
    1417,  1422,  1428,  1445,  1450,  1469,  1481,  1487,  1496,  1501,
    1508,  1513,  1519,  1524,  1531,  1536,  1543,  1548,  1556,  1561,
    1569,  1576,  1582,  1587,  1594,  1599,  1606,  1613,  1618,  1624,
    1629,  1636,  1641,  1653,  1652,  1662,  1670,  1676,  1682,  1691,
    1696,  1701,  1708,  1719,  1728,  1734,  1744,  1750,  1757,  1763,
    1771,  1779,  1785,  1797,  1813,  1828,  1836,  1854,  1869,  1888,
    1898,  1903,  1908,  1913,  1922,  1935,  1940,  1947,  1952,  1959,
    1969,  1974,  1981,  1986
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
  "EXTERN", "STATIC", "AUTO", "REGISTER", "VOID", "CHAR", "SHORT", "INT",
  "LONG", "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED", "BOOL", "COMPLEX",
  "IMAGINARY", "CONST", "RESTRICT", "VOLATILE", "ENUM", "INLINE", "SIZEOF",
  "STRUCT", "TYPEDEF", "UNION", "IF", "ELSE", "CASE", "DEFAULT", "WHILE",
  "CONTINUE", "DO", "GOTO", "FOR", "RETURN", "BREAK", "SWITCH",
  "UNEXPECTED_TOKEN", "IDENTIFIER", "INTEGER_CONST", "FLOAT_CONST",
  "CHAR_CONST", "STRING_LITERAL", "THEN", "$accept", "M", "N",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "argument_expression_list_opt",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list", "init_declarator_list_opt", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "identifier_opt", "enum_specifier",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "CT", "pointer",
  "type_qualifier_list", "type_qualifier_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation",
  "designation_opt", "designator_list", "designator", "statement", "@1",
  "labeled_statement", "CB", "compound_statement", "block_item_list",
  "block_item_list_opt", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", "declaration_list_opt", 0
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
       0,    94,    95,    96,    97,    97,    97,    97,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   107,   108,   108,
     108,   108,   108,   109,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   120,   121,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   135,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   154,   153,   153,   153,   153,   153,   155,
     155,   155,   156,   157,   158,   158,   159,   159,   160,   160,
     161,   162,   162,   163,   163,   163,   164,   164,   164,   164,
     165,   165,   165,   165,   165,   166,   166,   167,   167,   168,
     169,   169,   170,   170
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     2,     2,     1,
       0,     1,     3,     1,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     0,     1,     0,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     5,     4,     4,     3,     6,     5,
       5,     4,     5,     4,     4,     0,     2,     3,     1,     2,
       1,     0,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     2,     1,     0,     1,
       2,     3,     2,     0,     3,     1,     1,     1,     1,     3,
       4,     3,     0,     5,     1,     3,     1,     0,     1,     1,
       2,     1,     0,    10,     7,     5,     7,     9,    13,     8,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     4,
       1,     2,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   126,   127,   128,
     118,   129,   208,    94,    90,    90,   113,    90,    90,     0,
     205,   207,   121,     0,     0,   151,   132,    93,     0,    91,
      95,   131,     0,    89,    85,    86,    87,    88,     1,   206,
       0,     0,   148,   150,   146,     0,    84,     0,   210,    94,
     212,     0,   145,     0,   130,   124,     0,   122,   133,   149,
     147,    92,    95,     0,   168,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     4,     8,     9,    10,     6,    11,
       5,    24,    36,     0,    38,    42,    45,    48,    53,    56,
      58,    60,    62,    64,    66,    68,   161,    96,   211,   182,
     209,   158,     0,     0,   137,    31,     0,     0,     0,     0,
     119,     0,    81,     0,   116,   160,     0,     0,     0,     0,
     167,     0,     0,   169,     0,    25,    26,     0,    28,    23,
       0,    16,    17,     0,     0,    70,    74,    75,    71,    72,
      73,    76,    77,    80,    78,    79,     0,    36,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     2,     0,   145,   144,
     157,     0,   152,   154,   143,     0,   141,     0,     0,   136,
     135,    31,     0,    83,   125,   120,   123,     7,     0,   115,
     114,     0,     0,   172,   162,   168,   164,   166,   170,     0,
       0,    22,     0,    20,     0,    15,    14,    69,    39,    40,
      41,    43,    44,    46,    47,    51,    52,    49,    50,    54,
      55,    57,    59,    61,     0,     0,     2,   187,   156,   142,
       0,   159,   139,     0,   140,   134,    82,   168,    37,   171,
     163,     0,     0,    29,     0,    13,    12,    63,    65,     0,
       0,     0,     0,     2,     0,     2,     0,     0,     0,     0,
       0,     4,   191,   188,   189,   173,     2,     0,   184,   175,
       0,   176,   177,   178,   153,   155,   138,     0,   165,    21,
       3,     0,     0,   192,     0,   201,   192,     0,   192,   204,
       0,   202,     0,   192,     0,   192,   183,   190,    18,   168,
       0,     0,   192,   181,     0,     2,   200,   192,     0,   203,
       0,   179,   174,   185,    19,     2,     2,   180,     0,     0,
       0,     2,   192,     0,   192,     2,     0,   192,   192,   195,
      67,     3,   192,     0,     0,     0,   194,   196,     0,   192,
       2,     2,     0,   199,   192,   192,   197,     3,   193,     0,
       2,   192,   198
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   234,   177,    89,    90,    91,   211,   212,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   122,   156,   272,   194,    22,    59,    44,    37,
      38,    39,    24,    25,   125,   200,    33,    26,    66,    67,
      27,    28,    72,    41,   112,    42,    53,    54,   181,   182,
     183,   113,   126,   107,   129,   130,   131,   132,   133,   274,
     304,   275,   178,   110,   276,   277,   278,   279,   280,   281,
     282,   283,    29,    30,    31,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -284
static const yytype_int16 yypact[] =
{
     964,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     -65,  -284,  -284,    32,   964,   964,  -284,   964,   964,   806,
    -284,  -284,    48,    63,    32,   121,  -284,    -3,    -8,  -284,
     918,    40,    25,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
      16,    73,  -284,   121,    53,    32,  -284,   634,  -284,    32,
     964,    82,    47,   564,    40,    87,    10,  -284,  -284,  -284,
    -284,  -284,   101,   459,   111,   708,   708,  -284,  -284,  -284,
    -284,  -284,  -284,   740,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   119,   304,   763,  -284,   114,   115,   164,   139,   148,
     113,   123,   132,   122,    -1,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   896,    14,  -284,   157,   406,   159,   618,   763,
    -284,    27,  -284,    21,   150,  -284,   181,   763,   103,    30,
    -284,   634,   129,  -284,   459,  -284,  -284,   459,  -284,   763,
     763,  -284,  -284,   112,   128,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,   763,  -284,  -284,   763,
     763,   763,   763,   763,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,   763,  -284,  -284,   152,  -284,  -284,
      32,   197,   154,  -284,  -284,   134,  -284,   215,   406,  -284,
    -284,   216,   218,  -284,  -284,  -284,  -284,  -284,   763,  -284,
    -284,   663,   219,  -284,  -284,    43,  -284,  -284,  -284,   224,
     226,   185,   230,  -284,    24,  -284,  -284,  -284,  -284,  -284,
    -284,   114,   114,   115,   115,   164,   164,   164,   164,   139,
     139,   148,   113,   123,   763,   763,  -284,   222,  -284,  -284,
     943,  -284,  -284,   227,  -284,  -284,  -284,   111,  -284,  -284,
    -284,   634,   231,   231,   763,  -284,  -284,   132,   122,   763,
     234,   763,   194,  -284,   195,  -284,   151,   240,   671,   199,
     244,   210,   207,  -284,  -284,  -284,   250,   251,  -284,  -284,
     213,  -284,  -284,  -284,  -284,  -284,  -284,    38,  -284,  -284,
     207,   763,   217,   528,   257,  -284,   528,   220,   390,  -284,
     108,  -284,   763,   528,    82,   306,  -284,  -284,  -284,   125,
     225,    34,   528,  -284,   763,  -284,  -284,   763,   223,  -284,
      35,  -284,  -284,  -284,  -284,  -284,  -284,  -284,    36,   184,
     249,  -284,   528,   763,   528,  -284,   261,   763,   763,  -284,
    -284,  -284,   528,   763,   267,   253,   241,  -284,    37,   528,
    -284,  -284,   273,  -284,   763,   528,  -284,  -284,  -284,   291,
    -284,   528,  -284
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -157,  -276,  -284,  -284,  -284,  -284,  -284,   -71,  -284,
     -85,    17,    56,     4,    26,   124,   146,   147,    86,    88,
    -284,  -116,    -6,  -284,   -73,  -121,   -39,     2,   156,  -284,
    -284,   269,  -284,   -13,   198,  -284,  -284,  -284,  -284,   204,
     -11,  -284,   -14,   285,   153,   274,   -53,  -284,  -284,  -284,
      89,  -284,   -64,  -124,    85,  -284,  -192,  -284,   221,   584,
    -284,  -284,  -284,    44,  -284,  -284,    45,  -284,  -283,  -284,
    -284,  -284,  -284,   320,  -284,  -284,  -284
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -214
static const yytype_int16 yytable[] =
{
     123,    58,    23,   193,   135,   136,   202,   206,   158,    40,
     118,   193,   138,   251,   310,   318,   120,   176,   184,   235,
      51,   108,   157,    32,    52,   197,    43,    43,    34,    43,
      43,    23,   256,   195,   330,    34,   204,    56,   326,   332,
     335,   352,    69,    62,   308,    55,    -3,    63,   157,   250,
     127,   106,    52,  -117,   344,   345,   157,   117,   121,    35,
     124,   123,   185,   188,   123,   346,   128,   214,    50,   198,
     209,   357,   198,   210,   218,   219,   220,    68,   205,   259,
      35,   359,   198,   198,   198,   198,   309,   109,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,    65,    52,   294,    69,   296,   119,
     187,   124,   192,    36,   180,    65,   248,   251,   127,   305,
      36,   124,   139,    57,   124,   106,   140,   288,   141,   142,
     157,   324,   127,   213,   128,   111,   127,   172,   143,   175,
     292,   159,   144,   162,   163,   193,   160,   161,   128,   173,
     217,   207,   128,   319,   166,   167,   198,   174,   329,   168,
     169,   170,   171,   157,   157,   186,   238,   189,   333,   334,
     225,   226,   227,   228,   338,   164,   165,    69,   342,   221,
     222,    45,   243,    46,    47,   201,   290,    17,    18,    19,
     157,   203,   246,   354,   355,   300,   229,   230,   273,   236,
     215,   239,   240,   361,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   216,   340,   311,    20,
     223,   224,   241,   242,   244,    73,   245,   249,   252,   320,
     253,    75,    76,   254,   255,   286,   247,   291,   293,   297,
     295,   328,   180,   298,   301,   106,    77,   302,   289,    78,
      79,    80,    81,    82,   303,   198,  -186,   306,   307,   317,
     314,   312,   157,   336,   343,   316,   273,  -192,   331,   325,
     348,   349,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    83,   337,   360,   231,   260,   350,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,    73,
     271,    85,    86,    87,    88,    75,    76,   351,   356,   232,
     257,   233,   199,   258,    71,   196,   145,    64,    70,   285,
      77,   237,   287,    78,    79,    80,    81,    82,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   322,    49,
     323,     0,     0,   208,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    83,     0,     0,
       0,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,    73,   271,    85,    86,    87,    88,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,    77,    75,    76,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,    78,    79,    80,    81,    82,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    83,    73,     0,     0,     0,     0,     0,    75,    76,
       0,     0,    17,    18,    19,     0,     0,    83,    84,    85,
      86,    87,    88,    77,     0,     0,    78,    79,    80,    81,
      82,     0,     0,     0,    84,    85,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,     0,     0,    20,     0,
      83,    73,     0,     0,     0,     0,     0,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    77,     0,     0,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   114,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,   115,    79,    80,    81,    82,     0,     0,     0,    83,
       0,     0,     0,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   116,   271,    85,    86,    87,
      88,    73,     0,     0,     0,     0,   190,    75,    76,     0,
      17,    18,    19,     0,     0,    83,     0,    73,     0,    74,
       0,     0,    77,    75,    76,   191,    79,    80,    81,    82,
       0,     0,    84,    85,    86,    87,    88,     0,    77,     0,
       0,    78,    79,    80,    81,    82,    73,     0,   247,     0,
       0,     0,    75,    76,    73,     0,     0,     0,     0,     0,
      75,    76,     0,     0,    17,    18,    19,    77,     0,    83,
      78,    79,    80,    81,    82,    77,     0,     0,    78,    79,
      80,    81,    82,     0,     0,    83,    84,    85,    86,    87,
      88,   134,     0,     0,     0,     0,   299,    75,    76,     0,
       0,     0,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,    77,     0,    83,    78,    79,    80,    81,    82,
       0,     0,    83,   137,     0,     0,     0,     0,     0,    75,
      76,    84,    85,    86,    87,    88,     0,     0,     0,    84,
      85,    86,    87,    88,    77,     0,    73,    78,    79,    80,
      81,    82,    75,    76,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
      78,    79,    80,    81,    82,     0,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   313,     0,     0,
     315,     0,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,     0,     0,     0,     0,   327,     0,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   339,     0,   341,     0,
       0,     0,     0,  -213,     0,     0,   347,     0,     0,     0,
       0,     0,     0,   353,     0,     0,     0,     0,     0,   358,
      57,     0,     0,     0,     0,   362,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   284,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      73,    40,     0,   119,    75,    76,   127,   131,    93,    23,
      63,   127,    83,   205,   290,   298,     6,    18,     4,   176,
      34,    60,    93,    88,    35,     4,    24,    25,     3,    27,
      28,    29,     8,     6,   317,     3,     6,    45,     4,     4,
       4,     4,    53,     3,     6,    48,    47,     7,   119,     6,
       7,    57,    63,     5,   337,   338,   127,    63,    48,    27,
      73,   134,    48,   116,   137,   341,    23,   140,     5,    48,
     134,   354,    48,   137,   159,   160,   161,     4,    48,   236,
      27,   357,    48,    48,    48,    48,    48,     5,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    88,   116,   263,   118,   265,    22,
     116,   124,   118,    88,   112,    88,   201,   309,     7,   276,
      88,   134,     3,    22,   137,   131,     7,   251,     9,    10,
     201,     6,     7,   139,    23,    88,     7,    24,    19,    17,
     261,    27,    23,    28,    29,   261,    32,    33,    23,    26,
     156,    22,    23,    45,    15,    16,    48,    25,   315,    20,
      21,    13,    14,   234,   235,     8,   180,     8,   325,   326,
     166,   167,   168,   169,   331,    11,    12,   188,   335,   162,
     163,    25,   188,    27,    28,     4,   259,    66,    67,    68,
     261,    88,   198,   350,   351,   268,   170,   171,   237,    47,
      88,     4,    48,   360,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    88,   333,   291,    69,
     164,   165,    88,     8,     8,     3,     8,     8,     4,   302,
       4,     9,    10,    48,     4,     8,     5,     3,    44,    88,
      45,   314,   240,     3,    45,   251,    24,     3,   254,    27,
      28,    29,    30,    31,    44,    48,     6,     6,    45,   298,
       3,    44,   333,    79,     3,    45,   305,    45,    45,    44,
     343,     4,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    45,     4,   172,    75,    45,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,     3,
      88,    89,    90,    91,    92,     9,    10,    76,    45,   173,
     234,   174,   124,   235,    55,   121,    22,    42,    54,   240,
      24,   178,   247,    27,    28,    29,    30,    31,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   304,    29,
     305,    -1,    -1,   132,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,     3,    88,    89,    90,    91,    92,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    24,     9,    10,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    28,    29,    30,    31,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,
      -1,    -1,    66,    67,    68,    -1,    -1,    71,    88,    89,
      90,    91,    92,    24,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    -1,
      71,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    24,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    51,    88,    89,    90,    91,
      92,     3,    -1,    -1,    -1,    -1,     8,     9,    10,    -1,
      66,    67,    68,    -1,    -1,    71,    -1,     3,    -1,     5,
      -1,    -1,    24,     9,    10,    27,    28,    29,    30,    31,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    24,    -1,
      -1,    27,    28,    29,    30,    31,     3,    -1,     5,    -1,
      -1,    -1,     9,    10,     3,    -1,    -1,    -1,    -1,    -1,
       9,    10,    -1,    -1,    66,    67,    68,    24,    -1,    71,
      27,    28,    29,    30,    31,    24,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    71,    88,    89,    90,    91,
      92,     3,    -1,    -1,    -1,    -1,    45,     9,    10,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    71,    27,    28,    29,    30,    31,
      -1,    -1,    71,     3,    -1,    -1,    -1,    -1,    -1,     9,
      10,    88,    89,    90,    91,    92,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    24,    -1,     3,    27,    28,    29,
      30,    31,     9,    10,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   293,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,   334,    -1,
      -1,    -1,    -1,     5,    -1,    -1,   342,    -1,    -1,    -1,
      -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,   355,
      22,    -1,    -1,    -1,    -1,   361,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   120,   121,   126,   127,   131,   134,   135,   166,
     167,   168,    88,   130,     3,    27,    88,   123,   124,   125,
     136,   137,   139,   121,   122,   122,   122,   122,     0,   167,
       5,   136,   134,   140,   141,    48,    45,    22,   120,   121,
     169,   170,     3,     7,   137,    88,   132,   133,     4,   134,
     139,   125,   136,     3,     5,     9,    10,    24,    27,    28,
      29,    30,    31,    71,    88,    89,    90,    91,    92,    97,
      98,    99,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   147,   120,     5,
     157,    88,   138,   145,     8,    27,    51,   116,   140,    22,
       6,    48,   116,   118,   127,   128,   146,     7,    23,   148,
     149,   150,   151,   152,     3,   102,   102,     3,   102,     3,
       7,     9,    10,    19,    23,    22,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,   117,   102,   104,    27,
      32,    33,    28,    29,    11,    12,    15,    16,    20,    21,
      13,    14,    24,    26,    25,    17,    18,    96,   156,     4,
     121,   142,   143,   144,     4,    48,     8,   116,   140,     8,
       8,    27,   116,   115,   119,     6,   133,     4,    48,   128,
     129,     4,   119,    88,     6,    48,   147,    22,   152,   146,
     146,   100,   101,   116,   118,    88,    88,   116,   104,   104,
     104,   105,   105,   106,   106,   107,   107,   107,   107,   108,
     108,   109,   110,   111,    95,    95,    47,   138,   136,     4,
      48,    88,     8,   116,     8,     8,   116,     5,   104,     8,
       6,   150,     4,     4,    48,     4,     8,   112,   113,    95,
      75,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    88,   118,   120,   153,   155,   158,   159,   160,   161,
     162,   163,   164,   165,    46,   144,     8,   148,   147,   116,
     118,     3,   119,    44,    95,    45,    95,    88,     3,    45,
     118,    45,     3,    44,   154,    95,     6,    45,     6,    48,
      96,   118,    44,   153,     3,   153,    45,   120,   162,    45,
     118,   153,   157,   160,     6,    44,     4,   153,   118,    95,
     162,    45,     4,    95,    95,     4,    79,    45,    95,   153,
     115,   153,    95,     3,   162,   162,    96,   153,   118,     4,
      45,    76,     4,   153,    95,    95,    45,   162,   153,    96,
       4,    95,   153
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
#line 88 "ass5_21CS10026_21CS30009.y"
    { 
        printf("M -> epsilon\n");
        (yyval.instr_num) = nextinstr(); 
    }
    break;

  case 3:
#line 95 "ass5_21CS10026_21CS30009.y"
    { 
        printf("N -> epsilon\n");

        (yyval.stmt) = new Statement();
        (yyval.stmt)->nextlist = makelist(nextinstr());
        emit("goto", " ");
    }
    break;

  case 4:
#line 109 "ass5_21CS10026_21CS30009.y"
    { 
            (yyval.expr) = new Expression(); // making a new expression and storing pointer to symbol table entry 
            (yyval.expr)->symbol = (yyvsp[(1) - (1)].sym); 
            (yyval.expr)->type = Expression::TYPE_NBOOL;

            printf("primary_expression -> identifier\n"); 
        }
    break;

  case 5:
#line 118 "ass5_21CS10026_21CS30009.y"
    { 
            (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on which type of constant

            printf("primary_expression -> constant\n"); 
        
        }
    break;

  case 6:
#line 126 "ass5_21CS10026_21CS30009.y"
    { 
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(TYPE_POINTER, (yyvsp[(1) - (1)].sval));
            (yyval.expr)->symbol->type->arr_type = new SymType(TYPE_CHAR);
            
            printf("primary_expression -> string_literal\n"); 
        }
    break;

  case 7:
#line 135 "ass5_21CS10026_21CS30009.y"
    { 
            (yyval.expr) = (yyvsp[(2) - (3)].expr); // depends on expression

            printf("primary_expression -> ( expression )\n"); 
        }
    break;

  case 8:
#line 144 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = new Expression(); 
        string n = to_string((yyvsp[(1) - (1)].ival));
        (yyval.expr)->symbol = gentemp(TYPE_INT, n);
        emit("=", (yyval.expr)->symbol->name, n);

        printf("constant -> integer_constant\n"); 
    }
    break;

  case 9:
#line 154 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.expr) = new Expression();
        string f = to_string((yyvsp[(1) - (1)].fval));
        (yyval.expr)->symbol = gentemp(TYPE_FLOAT, f);
        emit("=", (yyval.expr)->symbol->name, f);

        printf("constant -> float_constant\n"); 
    }
    break;

  case 10:
#line 164 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.expr) = new Expression();
        (yyval.expr)->symbol = gentemp(TYPE_CHAR, (yyvsp[(1) - (1)].cval));
        emit("=", (yyval.expr)->symbol->name, (yyvsp[(1) - (1)].cval));

        printf("constant -> char_constant\n"); 
    }
    break;

  case 11:
#line 175 "ass5_21CS10026_21CS30009.y"
    { 
        // create new array and append location of primary expression
        (yyval.arr) = new Array();
        (yyval.arr)->symbol = (yyvsp[(1) - (1)].expr)->symbol;
        (yyval.arr)->loc = (yyval.arr)->symbol;
        (yyval.arr)->subarr_type = (yyvsp[(1) - (1)].expr)->symbol->type;

        printf("postfix_expression -> primary_expression\n"); 
    }
    break;

  case 12:
#line 186 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.arr) = new Array();
        (yyval.arr)->symbol = (yyvsp[(1) - (4)].arr)->symbol;
        (yyval.arr)->subarr_type = (yyvsp[(1) - (4)].arr)->subarr_type->arr_type;
        (yyval.arr)->loc = gentemp(TYPE_INT);
        (yyval.arr)->type = TYPE_ARRAY;

        // checking if array is 1D or multi-dimensional
        if((yyvsp[(1) - (4)].arr)->type == TYPE_ARRAY) {
            // multi-dimensional array - so need to multiply size and add offset
            Sym* temp = gentemp(TYPE_INT);
            int size = computeSize((yyval.arr)->subarr_type);
            emit("*", temp->name, (yyvsp[(3) - (4)].expr)->symbol->name, to_string(size));
            emit("+", (yyval.arr)->loc->name, (yyvsp[(1) - (4)].arr)->loc->name, temp->name);
        }
        else {
            // 1D array, just calculate size
            int size = computeSize((yyval.arr)->subarr_type);
            emit("*", (yyval.arr)->loc->name, (yyvsp[(3) - (4)].expr)->symbol->name, to_string(size));
        }

        printf("postfix_expression -> postfix_expression [ expression ]\n"); 
    }
    break;

  case 13:
#line 211 "ass5_21CS10026_21CS30009.y"
    {
        // function call
        (yyval.arr) = new Array();
        (yyval.arr)->symbol = gentemp((yyvsp[(1) - (4)].arr)->symbol->type->type); 
        emit("call", (yyval.arr)->symbol->name, (yyvsp[(1) - (4)].arr)->symbol->name, to_string((yyvsp[(3) - (4)].num_params)));

        printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); 
    }
    break;

  case 14:
#line 222 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("postfix_expression -> postfix_expression . identifier\n"); 
    }
    break;

  case 15:
#line 227 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("postfix_expression -> postfix_expression -> identifier\n"); 
    }
    break;

  case 16:
#line 232 "ass5_21CS10026_21CS30009.y"
    {
        (yyval.arr) = new Array();
        (yyval.arr)->symbol = gentemp((yyvsp[(1) - (2)].arr)->symbol->type->type); 
        emit("=", (yyval.arr)->symbol->name, (yyvsp[(1) - (2)].arr)->symbol->name);
        emit("+", (yyvsp[(1) - (2)].arr)->symbol->name, (yyvsp[(1) - (2)].arr)->symbol->name, "1");

        printf("postfix_expression -> postfix_expression ++\n"); 
    }
    break;

  case 17:
#line 242 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.arr) = new Array();
        cout<<"gentemp called by postfix_expression DEC_OP"<<endl;
        (yyval.arr)->symbol = gentemp((yyvsp[(1) - (2)].arr)->symbol->type->type); 
        emit("=", (yyval.arr)->symbol->name, (yyvsp[(1) - (2)].arr)->symbol->name);
        emit("-", (yyvsp[(1) - (2)].arr)->symbol->name, (yyvsp[(1) - (2)].arr)->symbol->name, "1");

        printf("postfix_expression -> postfix_expression --\n"); 
    }
    break;

  case 18:
#line 253 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("postfix_expression -> ( type_name ) { initializer_list }\n"); 
    }
    break;

  case 19:
#line 258 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); 
    }
    break;

  case 20:
#line 266 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.num_params) = 1; // 1 argument
        emit("param", (yyvsp[(1) - (1)].expr)->symbol->name);

        printf("argument_expression_list -> assignment_expression\n"); 
    }
    break;

  case 21:
#line 274 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.num_params) = (yyvsp[(1) - (3)].num_params) + 1; // one more argument added
        emit("param", (yyvsp[(3) - (3)].expr)->symbol->name);

        printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); 
    }
    break;

  case 22:
#line 284 "ass5_21CS10026_21CS30009.y"
    {
        (yyval.num_params) = (yyvsp[(1) - (1)].num_params); // depends on argument expression list 
        printf("argument_expression_list_opt -> argument_expression_list\n"); 
    }
    break;

  case 23:
#line 289 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.num_params) = 0; // no arguments
        printf("argument_expression_list_opt -> epsilon\n");
    }
    break;

  case 24:
#line 298 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.arr) = (yyvsp[(1) - (1)].arr); // depends on postfix expression
        printf("unary_expression -> postfix_expression\n"); 
    }
    break;

  case 25:
#line 304 "ass5_21CS10026_21CS30009.y"
    { 
        emit("+", (yyvsp[(2) - (2)].arr)->symbol->name, (yyvsp[(2) - (2)].arr)->symbol->name, "1");
        (yyval.arr) = (yyvsp[(2) - (2)].arr); // depends on unary expression

        printf("unary_expression -> ++ unary_expression\n"); 
    }
    break;

  case 26:
#line 312 "ass5_21CS10026_21CS30009.y"
    { 
        emit("-", (yyvsp[(2) - (2)].arr)->symbol->name, (yyvsp[(2) - (2)].arr)->symbol->name, "1");
        (yyval.arr) = (yyvsp[(2) - (2)].arr); // depends on unary expression

        printf("unary_expression -> -- unary_expression\n"); 
    }
    break;

  case 27:
#line 320 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.arr) = new Array();

        // operation depends on unary operator
        switch((yyvsp[(1) - (2)].unary_op)) {
            case '+':
                // unary plus
                (yyval.arr)=(yyvsp[(2) - (2)].arr);
                break;
            
            case '-':
                // unary minus - negation of cast expression
                cout<<"gentemp called by unary_expression -"<<endl;
                (yyval.arr)->symbol = gentemp((yyvsp[(2) - (2)].arr)->symbol->type->type);

                emit("=-", (yyval.arr)->symbol->name, (yyvsp[(2) - (2)].arr)->symbol->name); 
                break;

            case '~':
                // bitwise not
                cout<<"gentemp called by unary_expression ~"<<endl;
                (yyval.arr)->symbol = gentemp((yyvsp[(2) - (2)].arr)->symbol->type->type);

                emit("~", (yyval.arr)->symbol->name, (yyvsp[(2) - (2)].arr)->symbol->name);
                break;

            case '!':
                // logical not
                cout<<"gentemp called by unary_expression !"<<endl;
                (yyval.arr)->symbol = gentemp((yyvsp[(2) - (2)].arr)->symbol->type->type);

                emit("!", (yyval.arr)->symbol->name, (yyvsp[(2) - (2)].arr)->symbol->name);
                break;

            case '&':
                // address of -> generate new pointer type
                (yyval.arr)->symbol = gentemp(TYPE_POINTER);
                (yyval.arr)->symbol->type->arr_type = (yyvsp[(2) - (2)].arr)->symbol->type;

                emit("=&", (yyval.arr)->symbol->name, (yyvsp[(2) - (2)].arr)->symbol->name);
                break;

            case '*':
                // dereference 
                (yyval.arr)->symbol = (yyvsp[(2) - (2)].arr)->symbol;
                (yyval.arr)->loc = gentemp((yyvsp[(2) - (2)].arr)->loc->type->arr_type->type);
                (yyval.arr)->loc->type->arr_type = (yyvsp[(2) - (2)].arr)->loc->type->arr_type->arr_type;
                (yyval.arr)->type = TYPE_POINTER;

                emit("=*", (yyval.arr)->loc->name, (yyvsp[(2) - (2)].arr)->loc->name);
                break;
        }

        printf("unary_expression -> unary_operator cast_expression\n"); 
    }
    break;

  case 28:
#line 378 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("unary_expression -> sizeof unary_expression\n");     
    }
    break;

  case 29:
#line 383 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("unary_expression -> sizeof ( type_name )\n"); 
    }
    break;

  case 30:
#line 390 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.unary_op) = '&';
        printf("unary_operator -> &\n"); 
    }
    break;

  case 31:
#line 396 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.unary_op) = '*';
        printf("unary_operator -> *\n"); 
    }
    break;

  case 32:
#line 402 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.unary_op) = '+';
        printf("unary_operator -> +\n"); 
    }
    break;

  case 33:
#line 408 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.unary_op) = '-';
        printf("unary_operator -> -\n"); 
    }
    break;

  case 34:
#line 414 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.unary_op) = '~';
        printf("unary_operator -> ~\n"); 
    }
    break;

  case 35:
#line 420 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.unary_op) = '!';
        printf("unary_operator -> !\n"); 
    }
    break;

  case 36:
#line 428 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.arr) = (yyvsp[(1) - (1)].arr); // depends on unary expression
        printf("cast_expression -> unary_expression\n"); 
    }
    break;

  case 37:
#line 434 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.arr) = new Array();
        (yyval.arr)->symbol = convertType((yyvsp[(4) - (4)].arr)->symbol, currentType); // convert type of cast expression to type name
        printf("cast_expression -> ( type_name ) cast_expression\n"); 
    }
    break;

  case 38:
#line 444 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = new Expression();

        // we have to obtain the base type of the expression 
        SymType* bType = (yyvsp[(1) - (1)].arr)->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        // now depending on the type, we have to generate a temporary variable

        if ((yyvsp[(1) - (1)].arr)->type == TYPE_ARRAY) {
            (yyval.expr)->symbol = gentemp(bType->type);
            emit("=[]",(yyval.expr)->symbol->name, (yyvsp[(1) - (1)].arr)->symbol->name, (yyvsp[(1) - (1)].arr)->loc->name);
        }

        else if ((yyvsp[(1) - (1)].arr)->type == TYPE_POINTER)
            (yyval.expr)->symbol = (yyvsp[(1) - (1)].arr)->loc;

        else
            (yyval.expr)->symbol = (yyvsp[(1) - (1)].arr)->symbol;

        printf("multiplicative_expression -> cast_expression\n"); 
    }
    break;

  case 39:
#line 469 "ass5_21CS10026_21CS30009.y"
    {   
        // similar to above, we obtain base type and create temp symbol
        SymType* bType = (yyvsp[(3) - (3)].arr)->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 
        if((yyvsp[(3) - (3)].arr)->type == TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, (yyvsp[(3) - (3)].arr)->symbol->name, (yyvsp[(3) - (3)].arr)->loc->name);
        }
        else if ((yyvsp[(3) - (3)].arr)->type == TYPE_POINTER)
            temp = (yyvsp[(3) - (3)].arr)->loc; 
        else 
            temp = (yyvsp[(3) - (3)].arr)->symbol;

        // now we execute the required operation (here, multiplication)
        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, temp)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type); 
            emit("*", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, temp->name);
        }

        printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); 
    }
    break;

  case 40:
#line 499 "ass5_21CS10026_21CS30009.y"
    { 
        // similar to above again
        SymType* bType = (yyvsp[(3) - (3)].arr)->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 
        if((yyvsp[(3) - (3)].arr)->type == TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, (yyvsp[(3) - (3)].arr)->symbol->name, (yyvsp[(3) - (3)].arr)->loc->name);
        }
        else if ((yyvsp[(3) - (3)].arr)->type == TYPE_POINTER)
            temp = (yyvsp[(3) - (3)].arr)->loc; 
        else 
            temp = (yyvsp[(3) - (3)].arr)->symbol;

        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, temp)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type); 
            emit("/", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, temp->name);
        }

        printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); 
    }
    break;

  case 41:
#line 528 "ass5_21CS10026_21CS30009.y"
    { 
        SymType* bType = (yyvsp[(3) - (3)].arr)->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 
        if((yyvsp[(3) - (3)].arr)->type == TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, (yyvsp[(3) - (3)].arr)->symbol->name, (yyvsp[(3) - (3)].arr)->loc->name);
        }
        else if ((yyvsp[(3) - (3)].arr)->type == TYPE_POINTER)
            temp = (yyvsp[(3) - (3)].arr)->loc; 
        else 
            temp = (yyvsp[(3) - (3)].arr)->symbol;

        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, temp)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type); 
            emit("%", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, temp->name);
        }

        printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); 
    }
    break;

  case 42:
#line 558 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on multiplicative expression
        printf("additive_expression -> multiplicative_expression\n"); 
    }
    break;

  case 43:
#line 564 "ass5_21CS10026_21CS30009.y"
    {   
        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type); 
            emit("+", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        printf("additive_expression -> additive_expression + multiplicative_expression\n"); 
    }
    break;

  case 44:
#line 578 "ass5_21CS10026_21CS30009.y"
    { 
        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp((yyvsp[(1) - (3)].expr)->symbol->type->type); 
            emit("-", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        printf("additive_expression -> additive_expression - multiplicative_expression\n"); 
    }
    break;

  case 45:
#line 594 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on additive expression
        printf("shift_expression -> additive_expression\n"); 
    }
    break;

  case 46:
#line 600 "ass5_21CS10026_21CS30009.y"
    { 
        if((yyvsp[(1) - (3)].expr)->symbol->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(TYPE_INT); 
            emit("<<", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        printf("shift_expression -> shift_expression << additive_expression\n"); 
    }
    break;

  case 47:
#line 614 "ass5_21CS10026_21CS30009.y"
    { 
        if((yyvsp[(1) - (3)].expr)->symbol->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            cout<<"gentemp called by shift_expression RIGHTOP"<<endl;
            (yyval.expr)->symbol = gentemp(TYPE_INT); // check
            emit(">>", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        printf("shift_expression -> shift_expression >> additive_expression\n"); 
    }
    break;

  case 48:
#line 633 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on shift expression
        printf("relational_expression -> shift_expression\n"); 
    }
    break;

  case 49:
#line 639 "ass5_21CS10026_21CS30009.y"
    { 
        if (!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        // check - add comments
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::TYPE_BOOL;
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit("<", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            emit("goto", "");
        }

        printf("relational_expression -> relational_expression < shift_expression\n"); 
    }
    break;

  case 50:
#line 657 "ass5_21CS10026_21CS30009.y"
    { 
        if (!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::TYPE_BOOL;
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit(">", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            emit("goto", "");
        }

        printf("relational_expression -> relational_expression > shift_expression\n"); 
    }
    break;

  case 51:
#line 674 "ass5_21CS10026_21CS30009.y"
    { 
        if (!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::TYPE_BOOL;
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit("<=", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            emit("goto", "");
        }

        printf("relational_expression -> relational_expression <= shift_expression\n"); 
    }
    break;

  case 52:
#line 691 "ass5_21CS10026_21CS30009.y"
    { 
        if (!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::TYPE_BOOL;
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit(">=", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            emit("goto", "");
        }

        printf("relational_expression -> relational_expression >= shift_expression\n"); 
    }
    break;

  case 53:
#line 710 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on relational expression
        printf("equality_expression -> relational_expression\n"); 
    }
    break;

  case 54:
#line 716 "ass5_21CS10026_21CS30009.y"
    { 
        if (!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression(); 
            (yyval.expr)->type = Expression::TYPE_BOOL;
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);

            convBool2Int((yyvsp[(1) - (3)].expr)); // check
            convBool2Int((yyvsp[(3) - (3)].expr));

            emit("==", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            emit("goto", "");
        }

        printf("equality_expression -> equality_expression == relational_expression\n"); 
    }
    break;

  case 55:
#line 737 "ass5_21CS10026_21CS30009.y"
    {   
        if (!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression(); 
            (yyval.expr)->type = Expression::TYPE_BOOL;
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);

            convBool2Int((yyvsp[(1) - (3)].expr)); // check
            convBool2Int((yyvsp[(3) - (3)].expr));

            emit("!=", "", (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
            emit("goto", "");
        }

        printf("equality_expression -> equality_expression != relational_expression\n"); 
    }
    break;

  case 56:
#line 761 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on equality expression
        printf("and_expression -> equality_expression\n"); 
    }
    break;

  case 57:
#line 767 "ass5_21CS10026_21CS30009.y"
    { 
        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::TYPE_NBOOL;
            (yyval.expr)->symbol = gentemp(TYPE_INT);

            convBool2Int((yyvsp[(1) - (3)].expr));
            convBool2Int((yyvsp[(3) - (3)].expr));

            emit("&", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        printf("and_expression -> and_expression & equality_expression\n"); 
    }
    break;

  case 58:
#line 788 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on and expression
        printf("exclusive_or_expression -> and_expression\n"); 
    }
    break;

  case 59:
#line 794 "ass5_21CS10026_21CS30009.y"
    { 
        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::TYPE_NBOOL;
            (yyval.expr)->symbol = gentemp(TYPE_INT);

            convBool2Int((yyvsp[(1) - (3)].expr));
            convBool2Int((yyvsp[(3) - (3)].expr));

            emit("^", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); 
    }
    break;

  case 60:
#line 815 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on exclusive or expression
        printf("inclusive_or_expression -> exclusive_or_expression\n"); 
    }
    break;

  case 61:
#line 821 "ass5_21CS10026_21CS30009.y"
    { 
        if(!typecheck((yyvsp[(1) - (3)].expr)->symbol, (yyvsp[(3) - (3)].expr)->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::TYPE_NBOOL;
            (yyval.expr)->symbol = gentemp(TYPE_INT);

            convBool2Int((yyvsp[(1) - (3)].expr));
            convBool2Int((yyvsp[(3) - (3)].expr));

            emit("|", (yyval.expr)->symbol->name, (yyvsp[(1) - (3)].expr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); 
    }
    break;

  case 62:
#line 844 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on inclusive or expression
        printf("logical_and_expression -> inclusive_or_expression\n"); 
    }
    break;

  case 63:
#line 850 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = new Expression();
        (yyval.expr)->type = Expression::TYPE_BOOL;

        convInt2Bool((yyvsp[(1) - (4)].expr));
        convInt2Bool((yyvsp[(4) - (4)].expr));

        backpatch((yyvsp[(1) - (4)].expr)->truelist, (yyvsp[(3) - (4)].instr_num));    // backpatching
        (yyval.expr)->truelist = (yyvsp[(4) - (4)].expr)->truelist;    // B.truelist = B2.truelist
        (yyval.expr)->falselist = merge((yyvsp[(1) - (4)].expr)->falselist, (yyvsp[(4) - (4)].expr)->falselist); // B.falselist = merge(B1.falselist, B2.falselist)

        printf("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); 
    }
    break;

  case 64:
#line 867 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on logical and expression
        printf("logical_or_expression -> logical_and_expression\n"); 
    }
    break;

  case 65:
#line 873 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = new Expression();
        (yyval.expr)->type = Expression::TYPE_BOOL;

        convInt2Bool((yyvsp[(1) - (4)].expr));
        convInt2Bool((yyvsp[(4) - (4)].expr));

        backpatch((yyvsp[(1) - (4)].expr)->falselist, (yyvsp[(3) - (4)].instr_num));    // backpatching
        (yyval.expr)->truelist = merge((yyvsp[(1) - (4)].expr)->truelist, (yyvsp[(4) - (4)].expr)->truelist); // B.truelist = merge(B1.truelist, B2.truelist)
        (yyval.expr)->falselist = (yyvsp[(4) - (4)].expr)->falselist;    // B.falselist = B2.falselist

        printf("logical_or_expression -> logical_or_expression || logical_and_expression\n"); 
    }
    break;

  case 66:
#line 890 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on logical or expression
        printf("conditional_expression -> logical_or_expression\n"); 
    }
    break;

  case 67:
#line 898 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.expr)->symbol = gentemp((yyvsp[(5) - (9)].expr)->symbol->type->type); 
        // $$->entry->update($5->entry->type); // check
        emit("=", (yyval.expr)->symbol->name, (yyvsp[(9) - (9)].expr)->symbol->name);

        list<int> li = makelist(nextinstr());
        emit("goto", "");

        backpatch((yyvsp[(6) - (9)].stmt)->nextlist, nextinstr());
        emit("=", (yyval.expr)->symbol->name, (yyvsp[(5) - (9)].expr)->symbol->name);

        list<int> li2 = makelist(nextinstr());
        li = merge(li, li2);
        emit("goto", "");

        convInt2Bool((yyvsp[(1) - (9)].expr));

        backpatch((yyvsp[(2) - (9)].stmt)->nextlist, nextinstr());
        backpatch((yyvsp[(1) - (9)].expr)->truelist, (yyvsp[(4) - (9)].instr_num));
        backpatch((yyvsp[(1) - (9)].expr)->falselist, (yyvsp[(8) - (9)].instr_num));
        backpatch(li, nextinstr());

        printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); 
    }
    break;

  case 68:
#line 926 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on conditional expression
        printf("assignment_expression -> conditional_expression\n"); 
    }
    break;

  case 69:
#line 932 "ass5_21CS10026_21CS30009.y"
    { 
        if((yyvsp[(1) - (3)].arr)->type == TYPE_ARRAY) {
            (yyvsp[(3) - (3)].expr)->symbol = convertType((yyvsp[(3) - (3)].expr)->symbol, (yyvsp[(1) - (3)].arr)->subarr_type->type); 
            emit("[]=", (yyvsp[(1) - (3)].arr)->symbol->name, (yyvsp[(1) - (3)].arr)->loc->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }
        else if ((yyvsp[(1) - (3)].arr)->type == TYPE_POINTER) {    
            (yyvsp[(3) - (3)].expr)->symbol = convertType((yyvsp[(3) - (3)].expr)->symbol, (yyvsp[(1) - (3)].arr)->loc->type->type); 
            emit("*=", (yyvsp[(1) - (3)].arr)->loc->name, (yyvsp[(3) - (3)].expr)->symbol->name); 
        }
        else {
            (yyvsp[(3) - (3)].expr)->symbol = convertType((yyvsp[(3) - (3)].expr)->symbol, (yyvsp[(1) - (3)].arr)->symbol->type->type); 
            emit("=", (yyvsp[(1) - (3)].arr)->symbol->name, (yyvsp[(3) - (3)].expr)->symbol->name);
        }

        (yyval.expr) = (yyvsp[(3) - (3)].expr); 

        printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); 
    }
    break;

  case 70:
#line 955 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> =\n"); 
    }
    break;

  case 71:
#line 961 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> *=\n"); 
    }
    break;

  case 72:
#line 966 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> /=\n"); 
    }
    break;

  case 73:
#line 971 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> %%=\n"); 
    }
    break;

  case 74:
#line 976 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> +=\n"); 
    }
    break;

  case 75:
#line 981 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> -=\n"); 
    }
    break;

  case 76:
#line 986 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> <<=\n"); 
    }
    break;

  case 77:
#line 991 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> >>=\n"); 
    }
    break;

  case 78:
#line 996 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> &=\n"); 
    }
    break;

  case 79:
#line 1001 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> ^=\n"); 
    }
    break;

  case 80:
#line 1006 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("assignment_operator -> |=\n"); 
    }
    break;

  case 81:
#line 1013 "ass5_21CS10026_21CS30009.y"
    {
        (yyval.expr) = (yyvsp[(1) - (1)].expr); // depends on assignment expression 
        printf("expression -> assignment_expression\n"); 
    }
    break;

  case 82:
#line 1020 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("expression -> expression , assignment_expression\n");
    }
    break;

  case 83:
#line 1027 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("constant_expression -> conditional_expression\n"); 
    }
    break;

  case 84:
#line 1037 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); 
    }
    break;

  case 85:
#line 1045 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); 
    }
    break;

  case 86:
#line 1050 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); 
    }
    break;

  case 87:
#line 1055 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); 
    }
    break;

  case 88:
#line 1060 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); 
    }
    break;

  case 89:
#line 1067 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_specifiers_opt -> declaration_specifiers\n");
    }
    break;

  case 90:
#line 1072 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_specifiers_opt -> epsilon\n"); 
    }
    break;

  case 91:
#line 1079 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("init_declarator_list -> init_declarator\n"); 
    }
    break;

  case 92:
#line 1084 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("init_declarator_list -> init_declarator_list , init_declarator\n"); 
    }
    break;

  case 93:
#line 1091 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("init_declarator_list_opt -> init_declarator_list\n");
    }
    break;

  case 94:
#line 1096 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("init_declarator_list_opt -> epsilon\n"); 
    }
    break;

  case 95:
#line 1103 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.sym) = (yyvsp[(1) - (1)].sym); // depends on declarator
        printf("init_declarator -> declarator\n"); 
    }
    break;

  case 96:
#line 1109 "ass5_21CS10026_21CS30009.y"
    {
        if((yyvsp[(3) - (3)].sym)->init_val != " ") (yyvsp[(1) - (3)].sym)->init_val = (yyvsp[(3) - (3)].sym)->init_val;
        emit("=", (yyvsp[(1) - (3)].sym)->name, (yyvsp[(3) - (3)].sym)->name);

        printf("init_declarator -> declarator = initializer\n"); 
    }
    break;

  case 97:
#line 1120 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("storage_class_specifier -> extern\n"); 
    }
    break;

  case 98:
#line 1125 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("storage_class_specifier -> static\n"); 
    }
    break;

  case 99:
#line 1130 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("storage_class_specifier -> auto\n"); 
    }
    break;

  case 100:
#line 1135 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("storage_class_specifier -> register\n"); 
    }
    break;

  case 101:
#line 1143 "ass5_21CS10026_21CS30009.y"
    { 
        currentType = TYPE_VOID;
        printf("type_specifier -> void\n"); 
    }
    break;

  case 102:
#line 1149 "ass5_21CS10026_21CS30009.y"
    {   
        currentType = TYPE_CHAR;
        printf("type_specifier -> char\n"); 
    }
    break;

  case 103:
#line 1155 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> short\n"); 
    }
    break;

  case 104:
#line 1160 "ass5_21CS10026_21CS30009.y"
    { 
        currentType = TYPE_INT;
        printf("type_specifier -> int\n"); 
    }
    break;

  case 105:
#line 1166 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> long\n"); 
    }
    break;

  case 106:
#line 1171 "ass5_21CS10026_21CS30009.y"
    { 
        currentType = TYPE_FLOAT;
        printf("type_specifier -> float\n"); 
    }
    break;

  case 107:
#line 1177 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> double\n"); 
    }
    break;

  case 108:
#line 1182 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> signed\n"); 
    }
    break;

  case 109:
#line 1187 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> unsigned\n"); 
    }
    break;

  case 110:
#line 1192 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> _Bool\n"); 
    }
    break;

  case 111:
#line 1197 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> _Complex\n"); 
    }
    break;

  case 112:
#line 1202 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> _Imaginary\n"); 
    }
    break;

  case 113:
#line 1207 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_specifier -> enum_specifier\n"); 
    }
    break;

  case 114:
#line 1214 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); 
    }
    break;

  case 115:
#line 1221 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); 
    }
    break;

  case 116:
#line 1225 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("specifier_qualifier_list_opt -> epsilon\n");
    }
    break;

  case 117:
#line 1233 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("identifier_opt -> identifier\n"); 
    }
    break;

  case 118:
#line 1238 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("identifier_opt -> epsilon\n");
    }
    break;

  case 119:
#line 1246 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); 
    }
    break;

  case 120:
#line 1251 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); 
    }
    break;

  case 121:
#line 1256 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("enum_specifier -> enum identifier\n"); 
    }
    break;

  case 122:
#line 1262 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("enumerator_list -> enumerator\n"); 
    }
    break;

  case 123:
#line 1267 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("enumerator_list -> enumerator_list , enumerator\n"); 
    }
    break;

  case 124:
#line 1274 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("enumerator -> enumeration_constant\n"); 
    }
    break;

  case 125:
#line 1279 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("enumerator -> enumeration_constant = constant_expression\n"); 
    }
    break;

  case 126:
#line 1286 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_qualifier -> const\n"); 
    }
    break;

  case 127:
#line 1291 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_qualifier -> restrict\n"); 
    }
    break;

  case 128:
#line 1296 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_qualifier -> volatile\n"); 
    }
    break;

  case 129:
#line 1303 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("function_specifier -> inline\n"); 
    }
    break;

  case 130:
#line 1310 "ass5_21CS10026_21CS30009.y"
    { 
        // check - add comments
        SymType *temp = (yyvsp[(1) - (2)].sym_type); 
        // for multi-dimensional arrays -> moving deeper until base type is obtained
        while(temp->arr_type != NULL) {
            temp = temp->arr_type;
        } 
        temp->arr_type = (yyvsp[(2) - (2)].sym)->type; 
        (yyval.sym) = (yyvsp[(2) - (2)].sym)->update((yyvsp[(1) - (2)].sym_type));


        printf("declarator -> pointer_opt direct_declarator\n"); 
    }
    break;

  case 131:
#line 1325 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declarator -> direct_declarator\n"); 
    }
    break;

  case 132:
#line 1338 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.sym) = (yyvsp[(1) - (1)].sym)->update(new SymType(currentType));
        currentSymbol = (yyval.sym);

        printf("direct_declarator -> identifier\n"); 
    }
    break;

  case 133:
#line 1346 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.sym) = (yyvsp[(2) - (3)].sym); // depends on declarator
        printf("direct_declarator -> ( declarator )\n"); 
    }
    break;

  case 134:
#line 1352 "ass5_21CS10026_21CS30009.y"
    {
        // printf("direct_declarator -> direct_declarator [ type_qualifier_list assignment_expression ]\n");
    }
    break;

  case 135:
#line 1357 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("direct_declarator -> direct_declarator [ type_qualifier_list ]\n"); 
    }
    break;

  case 136:
#line 1362 "ass5_21CS10026_21CS30009.y"
    { 
        // check - add comments
        SymType *temp = (yyvsp[(1) - (4)].sym)->type;
        SymType *prev = NULL;
        while(temp->type == TYPE_ARRAY) {
            prev = temp;
            temp = temp->arr_type;
        }

        if(prev) {
            // case of multi-dimensional array
            prev->arr_type = new SymType(TYPE_ARRAY, atoi((yyvsp[(3) - (4)].expr)->symbol->init_val.c_str()), temp);
            (yyval.sym) = (yyvsp[(1) - (4)].sym)->update((yyvsp[(1) - (4)].sym)->type);
        }
        else {
            // just 1D array
            SymType* new_type = new SymType(TYPE_ARRAY, atoi((yyvsp[(3) - (4)].expr)->symbol->init_val.c_str()), (yyvsp[(1) - (4)].sym)->type); 
            (yyval.sym) = (yyvsp[(1) - (4)].sym)->update(new_type);
        }
        
        printf("direct_declarator -> direct_declarator [ assignment_expression ]\n"); 
    }
    break;

  case 137:
#line 1386 "ass5_21CS10026_21CS30009.y"
    {   
        // similar to previous one, but initial value is kept as 0
        SymType *temp = (yyvsp[(1) - (3)].sym)->type;
        SymType *prev = NULL;
        while(temp->type == TYPE_ARRAY) {
            prev = temp;
            temp = temp->arr_type;
        }

        if(prev) {
            prev->arr_type = new SymType(TYPE_ARRAY, 0, temp);
            (yyval.sym) = (yyvsp[(1) - (3)].sym)->update((yyvsp[(1) - (3)].sym)->type);
        }
        else {
            SymType* new_type = new SymType(TYPE_ARRAY, 0, (yyvsp[(1) - (3)].sym)->type); 
            (yyval.sym) = (yyvsp[(1) - (3)].sym)->update(new_type);
        }

        printf("direct_declarator -> direct_declarator [ ]\n"); 
    }
    break;

  case 138:
#line 1408 "ass5_21CS10026_21CS30009.y"
    {
        // printf("direct_declarator -> direct_declarator [ static type_qualifier_list assignment_expression ]\n");
    }
    break;

  case 139:
#line 1413 "ass5_21CS10026_21CS30009.y"
    {
        // printf("direct_declarator -> direct_declarator [ static assignment_expression ]\n");
    }
    break;

  case 140:
#line 1418 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("direct_declarator -> direct_declarator [ type_qualifier_list * ]\n"); 
    }
    break;

  case 141:
#line 1423 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("direct_declarator -> direct_declarator [ * ]\n"); 
    }
    break;

  case 142:
#line 1430 "ass5_21CS10026_21CS30009.y"
    { 
        currentST->name = (yyvsp[(1) - (5)].sym)->name; 

        if((yyvsp[(1) - (5)].sym)->type->type != TYPE_VOID){
            Sym* S = currentST->lookup("return");
            S->update((yyvsp[(1) - (5)].sym)->type);
        }
        (yyvsp[(1) - (5)].sym)->parent_table = currentST; 
        currentST->parent = globalST; 
        changeTable(globalST); // return to global ST
        currentSymbol = (yyval.sym); 

        printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); 
    }
    break;

  case 143:
#line 1446 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("direct_declarator -> direct_declarator ( identifier_list )\n"); 
    }
    break;

  case 144:
#line 1451 "ass5_21CS10026_21CS30009.y"
    {   
        // same as previous one
        currentST->name = (yyvsp[(1) - (4)].sym)->name;
        if((yyvsp[(1) - (4)].sym)->type->type != TYPE_VOID){
            Sym* S = currentST->lookup("return");
            S->update((yyvsp[(1) - (4)].sym)->type);
        }
        (yyvsp[(1) - (4)].sym)->parent_table = currentST;
        currentST->parent = globalST;
        changeTable(globalST); // return to global ST
        currentSymbol = (yyval.sym);

        printf("direct_declarator -> direct_declarator (  )\n"); 
    }
    break;

  case 145:
#line 1469 "ass5_21CS10026_21CS30009.y"
    {
        // checking whether function ST already exists
        if(currentSymbol->parent_table == NULL) changeTable(new SymTable());
        else {
            changeTable(currentSymbol->parent_table); 
            emit("label", currentST->name);
        }

        printf("Ct -> epsilon\n");
    }
    break;

  case 146:
#line 1482 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.sym_type) = new SymType(TYPE_POINTER);
        printf("pointer -> *\n"); 
    }
    break;

  case 147:
#line 1488 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.sym_type) = new SymType(TYPE_POINTER, 0, (yyvsp[(3) - (3)].sym_type)); // check 
        printf("pointer -> * pointer\n"); 
    }
    break;

  case 148:
#line 1497 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_qualifier_list -> type_qualifier\n"); 
    }
    break;

  case 149:
#line 1502 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); 
    }
    break;

  case 150:
#line 1509 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_qualifier_list_opt -> type_qualifier_list\n");
    }
    break;

  case 151:
#line 1513 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_qualifier_list_opt -> epsilon\n");
    }
    break;

  case 152:
#line 1520 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("parameter_type_list -> parameter_list\n"); 
    }
    break;

  case 153:
#line 1525 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("parameter_type_list -> parameter_list , ...\n");
    }
    break;

  case 154:
#line 1532 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("parameter_list -> parameter_declaration\n"); 
    }
    break;

  case 155:
#line 1537 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("parameter_list -> parameter_list , parameter_declaration\n"); 
    }
    break;

  case 156:
#line 1544 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("parameter_declaration -> declaration_specifiers declarator\n"); 
    }
    break;

  case 157:
#line 1549 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("parameter_declaration -> declaration_specifiers\n"); 
    }
    break;

  case 158:
#line 1557 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("identifier_list -> identifier\n"); 
    }
    break;

  case 159:
#line 1562 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("identifier_list -> identifier_list , identifier\n"); 
    }
    break;

  case 160:
#line 1570 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("type_name -> specifier_qualifier_list\n"); 
    }
    break;

  case 161:
#line 1577 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.sym) = (yyvsp[(1) - (1)].expr)->symbol; // depends on assignment expression
        printf("initializer -> assignment_expression\n"); 
    }
    break;

  case 162:
#line 1583 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("initializer -> { initializer_list }\n"); 
    }
    break;

  case 163:
#line 1588 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("initializer -> { initializer_list , }\n"); 
    }
    break;

  case 164:
#line 1595 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("initializer_list -> designation_opt initializer\n"); 
    }
    break;

  case 165:
#line 1600 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("initializer_list -> initializer_list , designation_opt initializer\n"); 
    }
    break;

  case 166:
#line 1607 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("designation -> designator_list =\n"); 
    }
    break;

  case 167:
#line 1614 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("designation_opt -> designation\n");
    }
    break;

  case 168:
#line 1618 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("designation_opt -> epsilon\n");
    }
    break;

  case 169:
#line 1625 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("designator_list -> designator\n"); 
    }
    break;

  case 170:
#line 1630 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("designator_list -> designator_list designator\n"); 
    }
    break;

  case 171:
#line 1637 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("designator -> [ constant_expression ]\n"); 
    }
    break;

  case 172:
#line 1642 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("designator -> . identifier\n"); 
    }
    break;

  case 173:
#line 1653 "ass5_21CS10026_21CS30009.y"
    {
        // printf("statement -> labeled_statement\n");
    }
    break;

  case 174:
#line 1657 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = (yyvsp[(1) - (3)].stmt); 
        printf("statement -> compound_statement\n"); 
    }
    break;

  case 175:
#line 1663 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = new Statement();
        (yyval.stmt)->nextlist = (yyvsp[(1) - (1)].expr)->nextlist;

        printf("statement -> expression_statement\n"); 
    }
    break;

  case 176:
#line 1671 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = (yyvsp[(1) - (1)].stmt); 
        printf("statement -> selection_statement\n"); 
    }
    break;

  case 177:
#line 1677 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = (yyvsp[(1) - (1)].stmt); 
        printf("statement -> iteration_statement\n"); 
    }
    break;

  case 178:
#line 1683 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        printf("statement -> jump_statement\n"); 
    }
    break;

  case 179:
#line 1692 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("labeled_statement -> identifier : statement\n"); 
    }
    break;

  case 180:
#line 1697 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("labeled_statement -> case constant_expression : statement\n"); 
    }
    break;

  case 181:
#line 1702 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("labeled_statement -> default : statement\n"); 
    }
    break;

  case 182:
#line 1708 "ass5_21CS10026_21CS30009.y"
    {
        // changes symbol table when new block is encountered
        string name = currentST->name + "_" + to_string(block_count++);
        Sym* S = currentST->lookup(name);
        S->parent_table = new SymTable(name, currentST);
        S->type = new SymType(TYPE_BLOCK);
        currentSymbol = S;
    }
    break;

  case 183:
#line 1720 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = (yyvsp[(4) - (5)].stmt); 
        changeTable(currentST->parent); // return to parent ST
        printf("compound_statement -> { block_item_list_opt }\n"); 
    }
    break;

  case 184:
#line 1729 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.stmt) = (yyvsp[(1) - (1)].stmt); 
        printf("block_item_list -> block_item\n"); 
    }
    break;

  case 185:
#line 1735 "ass5_21CS10026_21CS30009.y"
    { 
        // check - add comments
        (yyval.stmt) = (yyvsp[(3) - (3)].stmt); 
        backpatch((yyvsp[(1) - (3)].stmt)->nextlist, (yyvsp[(2) - (3)].instr_num));
        printf("block_item_list -> block_item_list block_item\n"); 
    }
    break;

  case 186:
#line 1745 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        printf("block_item_list_opt -> block_item_list\n"); 
    }
    break;

  case 187:
#line 1750 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = new Statement();
        printf("block_item_list_opt -> epsilon\n"); 
    }
    break;

  case 188:
#line 1758 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = new Statement();
        printf("block_item -> declaration\n"); 
    }
    break;

  case 189:
#line 1764 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
        printf("block_item -> statement\n"); 
    }
    break;

  case 190:
#line 1772 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.expr) = (yyvsp[(1) - (2)].expr); 
        printf("expression_statement -> expression_opt ;\n"); 
    }
    break;

  case 191:
#line 1780 "ass5_21CS10026_21CS30009.y"
    {
        (yyval.expr) = (yyvsp[(1) - (1)].expr); 
        printf("expression_opt -> expression\n"); 
    }
    break;

  case 192:
#line 1785 "ass5_21CS10026_21CS30009.y"
    {
        (yyval.expr) = new Expression();
        printf("expression_opt -> epsilon\n"); 
    }
    break;

  case 193:
#line 1798 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.stmt) = new Statement();

        convInt2Bool((yyvsp[(3) - (10)].expr));

        backpatch((yyvsp[(3) - (10)].expr)->truelist, (yyvsp[(5) - (10)].instr_num)); // if true, go to M1 (if-statement)
        backpatch((yyvsp[(3) - (10)].expr)->falselist, (yyvsp[(9) - (10)].instr_num)); // if false, go to M2 (else-statement)

        list <int> li = merge((yyvsp[(6) - (10)].stmt)->nextlist, (yyvsp[(7) - (10)].stmt)->nextlist);
        (yyval.stmt)->nextlist = merge((yyvsp[(10) - (10)].stmt)->nextlist, li); // to go out of if-else

        printf("selection_statement -> if ( expression ) statement else statement\n"); 
    }
    break;

  case 194:
#line 1814 "ass5_21CS10026_21CS30009.y"
    { 
        // check - add comments
        (yyval.stmt) = new Statement();

        convInt2Bool((yyvsp[(3) - (7)].expr));

        backpatch((yyvsp[(3) - (7)].expr)->truelist, (yyvsp[(5) - (7)].instr_num));  // if true, go to M1 (if-statement)

        list <int> li = merge((yyvsp[(6) - (7)].stmt)->nextlist, (yyvsp[(7) - (7)].stmt)->nextlist);
        (yyval.stmt)->nextlist = merge((yyvsp[(3) - (7)].expr)->falselist,li); // to go out of if-statement

        printf("selection_statement -> if ( expression ) statement\n"); 
    }
    break;

  case 195:
#line 1829 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("selection_statement -> switch ( expression ) statement\n"); 
    }
    break;

  case 196:
#line 1837 "ass5_21CS10026_21CS30009.y"
    {   
        (yyval.stmt) = new Statement();

        convInt2Bool((yyvsp[(4) - (7)].expr));

        backpatch((yyvsp[(7) - (7)].stmt)->nextlist, (yyvsp[(2) - (7)].instr_num)); // M1 -> to go back to start of loop
        backpatch((yyvsp[(4) - (7)].expr)->truelist, (yyvsp[(6) - (7)].instr_num)); // M2 -> to go to statement if expression is true

        (yyval.stmt)->nextlist = (yyvsp[(4) - (7)].expr)->falselist; // to go out of loop if expression is false

        emit("goto", to_string((yyvsp[(2) - (7)].instr_num))); 

        printf("iteration_statement -> while ( expression ) statement\n"); 
    }
    break;

  case 197:
#line 1855 "ass5_21CS10026_21CS30009.y"
    {
        (yyval.stmt) = new Statement();

        convInt2Bool((yyvsp[(7) - (9)].expr));

        backpatch((yyvsp[(7) - (9)].expr)->truelist, (yyvsp[(2) - (9)].instr_num)); // M1 -> to go back to statement if expression is true
        backpatch((yyvsp[(3) - (9)].stmt)->nextlist, (yyvsp[(4) - (9)].instr_num)); // M2 -> to go to check expression once statement is executed

        (yyval.stmt)->nextlist = (yyvsp[(7) - (9)].expr)->falselist; // to go out of loop if expression is false

        printf("iteration_statement -> do statement while ( expression ) ;\n"); 
    }
    break;

  case 198:
#line 1870 "ass5_21CS10026_21CS30009.y"
    {   

        (yyval.stmt) = new Statement();

        convInt2Bool((yyvsp[(6) - (13)].expr)); 

        backpatch((yyvsp[(6) - (13)].expr)->truelist, (yyvsp[(12) - (13)].instr_num)); // M3 -> to go to loop body if true
        backpatch((yyvsp[(10) - (13)].stmt)->nextlist, (yyvsp[(5) - (13)].instr_num)); // go to M1 after N1 (for checking condition)
        backpatch((yyvsp[(13) - (13)].stmt)->nextlist, (yyvsp[(8) - (13)].instr_num)); // go to M2 after S1 (loop body)

        emit("goto", to_string((yyvsp[(8) - (13)].instr_num)));

        (yyval.stmt)->nextlist = (yyvsp[(6) - (13)].expr)->falselist; // to go out of loop if expression is false

        printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); 
    }
    break;

  case 199:
#line 1889 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); 
    }
    break;

  case 200:
#line 1899 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("jump_statement -> goto identifier ;\n"); 
    }
    break;

  case 201:
#line 1904 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("jump_statement -> continue ;\n"); 
    }
    break;

  case 202:
#line 1909 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("jump_statement -> break ;\n"); 
    }
    break;

  case 203:
#line 1914 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = new Statement(); 
        
        emit("return", ((yyvsp[(2) - (3)].expr)->symbol==NULL)? " ": (yyvsp[(2) - (3)].expr)->symbol->name);

        printf("jump_statement -> return expression ;\n"); 
    }
    break;

  case 204:
#line 1923 "ass5_21CS10026_21CS30009.y"
    { 
        (yyval.stmt) = new Statement();
        emit("return", "");

        printf("jump_statement -> return ;\n"); 
    }
    break;

  case 205:
#line 1936 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("translation_unit -> external_declaration\n"); 
    }
    break;

  case 206:
#line 1941 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("translation_unit -> translation_unit external_declaration\n"); 
    }
    break;

  case 207:
#line 1948 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("external_declaration -> function_definition\n"); 
    }
    break;

  case 208:
#line 1953 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("external_declaration -> declaration\n"); 
    }
    break;

  case 209:
#line 1960 "ass5_21CS10026_21CS30009.y"
    { 
        currentST->parent = globalST;
        changeTable(globalST); // return to global ST

        printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); 
    }
    break;

  case 210:
#line 1970 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_list -> declaration\n"); 
    }
    break;

  case 211:
#line 1975 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_list -> declaration_list declaration\n"); 
    }
    break;

  case 212:
#line 1982 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_list_opt -> declaration_list\n"); 
    }
    break;

  case 213:
#line 1986 "ass5_21CS10026_21CS30009.y"
    { 
        // printf("declaration_list_opt -> epsilon\n"); 
    }
    break;


/* Line 1267 of yacc.c.  */
#line 4167 "y.tab.c"
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


#line 1992 "ass5_21CS10026_21CS30009.y"


void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}   
