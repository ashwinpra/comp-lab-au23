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
     SWITCH = 332,
     CASE = 333,
     DEFAULT = 334,
     WHILE = 335,
     CONTINUE = 336,
     DO = 337,
     GOTO = 338,
     FOR = 339,
     RETURN = 340,
     BREAK = 341,
     UNEXPECTED_TOKEN = 342,
     IDENTIFIER = 343,
     INTEGER_CONST = 344,
     FLOAT_CONST = 345,
     CHAR_CONST = 346,
     STRING_LITERAL = 347
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
#define SWITCH 332
#define CASE 333
#define DEFAULT 334
#define WHILE 335
#define CONTINUE 336
#define DO 337
#define GOTO 338
#define FOR 339
#define RETURN 340
#define BREAK 341
#define UNEXPECTED_TOKEN 342
#define IDENTIFIER 343
#define INTEGER_CONST 344
#define FLOAT_CONST 345
#define CHAR_CONST 346
#define STRING_LITERAL 347




/* Copy the first part of user declarations.  */
#line 9 "asgn4_21CS10026_21CS30009.y"

    #include <stdio.h>
    void yyerror(const char*); 
    extern int yylex();   
    extern int yylineno;
    extern char* yytext;


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
#line 17 "asgn4_21CS10026_21CS30009.y"
{
    int ival;
    float fval;
    char cval;
    char *sval;
}
/* Line 193 of yacc.c.  */
#line 295 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 308 "y.tab.c"

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   817

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNRULES -- Number of states.  */
#define YYNSTATES  342

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

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
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    26,    31,    35,    39,    42,    45,    52,    60,    62,
      66,    68,    69,    71,    74,    77,    80,    83,    88,    90,
      92,    94,    96,    98,   100,   102,   107,   109,   113,   117,
     121,   123,   127,   131,   133,   137,   141,   143,   147,   151,
     155,   159,   161,   165,   169,   171,   175,   177,   181,   183,
     187,   189,   193,   195,   199,   201,   207,   209,   213,   215,
     217,   219,   221,   223,   225,   227,   229,   231,   233,   235,
     237,   241,   243,   247,   250,   253,   256,   259,   261,   262,
     264,   268,   270,   271,   273,   277,   279,   281,   283,   285,
     287,   289,   291,   293,   295,   297,   299,   301,   303,   305,
     307,   309,   311,   314,   317,   319,   320,   322,   323,   329,
     336,   339,   341,   345,   347,   351,   353,   355,   357,   359,
     362,   364,   365,   367,   371,   377,   384,   391,   397,   402,
     407,   410,   414,   416,   417,   419,   422,   424,   425,   427,
     431,   433,   437,   440,   442,   444,   448,   450,   451,   453,
     455,   459,   464,   467,   472,   475,   477,   478,   480,   483,
     487,   490,   492,   494,   496,   498,   500,   502,   506,   511,
     515,   519,   521,   524,   526,   527,   529,   531,   534,   536,
     537,   545,   551,   557,   563,   571,   581,   590,   594,   597,
     600,   604,   606,   609,   611,   613,   618,   622,   624,   627,
     629
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     163,     0,    -1,    88,    -1,    95,    -1,    92,    -1,     3,
     115,     4,    -1,    89,    -1,    90,    -1,    91,    -1,    94,
      -1,    96,     7,   115,     8,    -1,    96,     3,    98,     4,
      -1,    96,    23,    88,    -1,    96,    19,    88,    -1,    96,
       9,    -1,    96,    10,    -1,     3,   145,     4,     5,   147,
       6,    -1,     3,   145,     4,     5,   147,    48,     6,    -1,
     113,    -1,    97,    48,   113,    -1,    97,    -1,    -1,    96,
      -1,     9,    99,    -1,    10,    99,    -1,   100,   101,    -1,
      71,    99,    -1,    71,     3,   145,     4,    -1,    24,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,    -1,
      99,    -1,     3,   145,     4,   101,    -1,   101,    -1,   102,
      27,   101,    -1,   102,    32,   101,    -1,   102,    33,   101,
      -1,   102,    -1,   103,    28,   102,    -1,   103,    29,   102,
      -1,   103,    -1,   104,    11,   103,    -1,   104,    12,   103,
      -1,   104,    -1,   105,    20,   104,    -1,   105,    21,   104,
      -1,   105,    15,   104,    -1,   105,    16,   104,    -1,   105,
      -1,   106,    13,   105,    -1,   106,    14,   105,    -1,   106,
      -1,   107,    24,   106,    -1,   107,    -1,   108,    26,   107,
      -1,   108,    -1,   109,    25,   108,    -1,   109,    -1,   110,
      17,   109,    -1,   110,    -1,   111,    18,   110,    -1,   111,
      -1,   111,    47,   115,    44,   112,    -1,   112,    -1,    99,
     114,   113,    -1,    22,    -1,    36,    -1,    37,    -1,    38,
      -1,    34,    -1,    35,    -1,    39,    -1,    40,    -1,    42,
      -1,    43,    -1,    41,    -1,   113,    -1,   115,    48,   113,
      -1,   112,    -1,   118,   121,    45,    -1,   123,   119,    -1,
     124,   119,    -1,   131,   119,    -1,   132,   119,    -1,   118,
      -1,    -1,   122,    -1,   120,    48,   122,    -1,   120,    -1,
      -1,   133,    -1,   133,    22,   146,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,   128,
      -1,   124,   126,    -1,   131,   126,    -1,   125,    -1,    -1,
      88,    -1,    -1,    69,   127,     5,   129,     6,    -1,    69,
     127,     5,   129,    48,     6,    -1,    69,    88,    -1,   130,
      -1,   129,    48,   130,    -1,    88,    -1,    88,    22,   116,
      -1,    66,    -1,    67,    -1,    68,    -1,    70,    -1,   137,
     135,    -1,   113,    -1,    -1,    88,    -1,     3,   133,     4,
      -1,   135,     7,   139,   134,     8,    -1,   135,     7,    51,
     139,   113,     8,    -1,   135,     7,   138,    51,   113,     8,
      -1,   135,     7,   139,    27,     8,    -1,   135,     3,   140,
       4,    -1,   135,     3,   144,     4,    -1,    27,   139,    -1,
      27,   139,   136,    -1,   136,    -1,    -1,   131,    -1,   138,
     131,    -1,   138,    -1,    -1,   141,    -1,   141,    48,    46,
      -1,   142,    -1,   141,    48,   142,    -1,   118,   133,    -1,
     118,    -1,    88,    -1,   143,    48,    88,    -1,   143,    -1,
      -1,   125,    -1,   113,    -1,     5,   147,     6,    -1,     5,
     147,    48,     6,    -1,   149,   146,    -1,   147,    48,   149,
     146,    -1,   150,    22,    -1,   148,    -1,    -1,   151,    -1,
     150,   151,    -1,     7,   116,     8,    -1,    23,    88,    -1,
     153,    -1,   154,    -1,   158,    -1,   160,    -1,   161,    -1,
     162,    -1,    88,    44,   152,    -1,    78,   116,    44,   152,
      -1,    79,    44,   152,    -1,     5,   156,     6,    -1,   157,
      -1,   155,   157,    -1,   155,    -1,    -1,   117,    -1,   152,
      -1,   159,    45,    -1,   115,    -1,    -1,    75,     3,   115,
       4,   152,    76,   152,    -1,    75,     3,   115,     4,   152,
      -1,    77,     3,   115,     4,   152,    -1,    80,     3,   115,
       4,   152,    -1,    82,   152,    80,     3,   115,     4,    45,
      -1,    84,     3,   159,    45,   159,    45,   159,     4,   152,
      -1,    84,     3,   117,   159,    45,   159,     4,   152,    -1,
      83,    88,    45,    -1,    81,    45,    -1,    86,    45,    -1,
      85,   159,    45,    -1,   164,    -1,   163,   164,    -1,   165,
      -1,   117,    -1,   118,   133,   167,   154,    -1,   133,   167,
     154,    -1,   117,    -1,   166,   117,    -1,   166,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    62,    65,    68,    73,    75,    77,    82,
      85,    88,    91,    94,    97,   100,   103,   106,   111,   114,
     120,   123,   127,   130,   133,   136,   139,   142,   147,   150,
     153,   156,   159,   162,   167,   170,   175,   178,   181,   184,
     189,   192,   195,   200,   203,   206,   211,   214,   217,   220,
     223,   228,   231,   234,   239,   242,   247,   250,   255,   258,
     263,   266,   271,   274,   279,   282,   287,   290,   295,   298,
     301,   304,   307,   310,   313,   316,   319,   322,   325,   330,
     333,   338,   344,   349,   352,   355,   358,   363,   366,   370,
     373,   378,   381,   385,   388,   393,   396,   399,   402,   407,
     410,   413,   416,   419,   422,   425,   428,   431,   434,   437,
     440,   443,   448,   451,   456,   459,   463,   466,   470,   473,
     476,   480,   483,   488,   491,   496,   499,   502,   507,   512,
     517,   520,   524,   527,   530,   533,   536,   539,   542,   545,
     550,   553,   558,   561,   565,   568,   573,   576,   580,   583,
     588,   591,   596,   599,   605,   608,   613,   616,   620,   625,
     628,   631,   636,   639,   644,   649,   653,   657,   660,   665,
     668,   674,   677,   680,   683,   686,   689,   694,   697,   700,
     705,   710,   713,   718,   721,   725,   728,   733,   738,   741,
     745,   748,   751,   756,   759,   762,   765,   770,   773,   776,
     779,   785,   788,   793,   796,   801,   804,   809,   812,   817,
     820
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
  "STRUCT", "TYPEDEF", "UNION", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT",
  "WHILE", "CONTINUE", "DO", "GOTO", "FOR", "RETURN", "BREAK",
  "UNEXPECTED_TOKEN", "IDENTIFIER", "INTEGER_CONST", "FLOAT_CONST",
  "CHAR_CONST", "STRING_LITERAL", "$accept", "primary_expression",
  "constant", "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list", "init_declarator_list_opt", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "identifier_opt", "enum_specifier",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "assignment_expression_opt", "direct_declarator",
  "pointer", "pointer_opt", "type_qualifier_list",
  "type_qualifier_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "identifier_list_opt",
  "type_name", "initializer", "initializer_list", "designation",
  "designation_opt", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
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
     345,   346,   347
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   117,   118,   118,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   132,   133,
     134,   134,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   146,
     146,   146,   147,   147,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   162,   162,   162,
     162,   163,   163,   164,   164,   165,   165,   166,   166,   167,
     167
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     2,     2,     1,     0,     1,
       3,     1,     0,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     0,     1,     0,     5,     6,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     0,     1,     3,     5,     6,     6,     5,     4,     4,
       2,     3,     1,     0,     1,     2,     1,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     0,     1,     1,
       3,     4,     2,     4,     2,     1,     0,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     1,     2,     1,     0,     1,     1,     2,     1,     0,
       7,     5,     5,     5,     7,     9,     8,     3,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     1,     2,     1,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     143,   147,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   125,   126,
     127,   117,   128,   204,   143,    88,    88,   111,    88,    88,
     210,   142,     0,   143,   201,   203,   144,   146,   140,   120,
       0,    91,     0,    89,    93,    87,    83,    84,    85,    86,
     207,   143,   209,     0,   143,   132,   129,     1,   202,   145,
     141,     0,   143,    82,     0,     0,    93,   208,   184,   206,
       0,   157,   147,   123,     0,   121,    90,     0,   166,     0,
       0,    28,    29,    30,    31,    32,    33,     0,     2,     6,
       7,     8,     4,     9,     3,    22,    34,     0,    36,    40,
      43,    46,    51,    54,    56,    58,    60,    62,    64,    66,
     159,    94,   205,     0,     0,     0,     0,     0,     0,   189,
       0,     0,   189,     0,     2,    79,   188,   185,   186,   171,
     172,   183,     0,   181,   173,     0,   174,   175,   176,   133,
     154,   143,     0,   148,   150,   156,     0,   147,   146,   131,
       0,   118,     0,     0,   115,   158,   115,     0,     0,     0,
       0,   165,     0,     0,   167,     0,    23,    24,     0,    26,
      21,     0,    14,    15,     0,     0,    68,    72,    73,    69,
      70,    71,    74,    75,    78,    76,    77,     0,    34,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,   189,     0,   198,     0,     0,   189,     0,
     199,   189,     0,   182,   180,   187,   152,   138,     0,     0,
     139,     0,     0,    29,   130,     0,   124,   119,   122,     5,
     114,   112,   113,     0,     0,   170,   160,   166,   162,   164,
     168,     0,     0,    20,     0,    18,     0,    13,    12,    67,
      37,    38,    39,    41,    42,    44,    45,    49,    50,    47,
      48,    52,    53,    55,    57,    59,    61,    63,     0,     0,
       0,   189,   179,     0,     0,   197,   189,     0,   200,   177,
      80,   149,   151,   155,     0,     0,   137,   134,   166,    35,
     169,   161,     0,     0,    27,     0,    11,    10,     0,   189,
     189,   178,   189,     0,     0,   189,   135,   136,     0,   163,
      19,    65,   191,   192,   193,     0,   189,     0,    16,   166,
     189,     0,     0,   189,    17,   190,   194,   189,     0,   196,
     189,   195
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,    95,   253,   254,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     125,   187,   126,   212,    23,    51,    46,    41,    42,    43,
      25,    26,   155,   241,    40,    27,    74,    75,    28,    29,
      30,   235,    56,    31,    32,    37,    38,   142,   143,   144,
     145,   146,   157,   111,   160,   161,   162,   163,   164,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      33,    34,    35,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -240
static const yytype_int16 yypact[] =
{
     687,   112,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,   -27,  -240,  -240,    -5,   665,   665,  -240,   665,   665,
     665,  -240,     3,   622,  -240,  -240,  -240,   112,    67,   107,
     110,   114,   121,  -240,   643,  -240,  -240,  -240,  -240,  -240,
    -240,    -5,   665,   152,    67,  -240,    44,  -240,  -240,  -240,
    -240,    81,    67,  -240,   317,   152,   175,  -240,   220,  -240,
     195,   708,    69,   190,    20,  -240,  -240,   373,    36,   479,
     479,  -240,  -240,  -240,  -240,  -240,  -240,   548,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,    64,   167,   571,  -240,    92,
     145,   171,   106,   172,   189,   191,   197,   198,     2,  -240,
    -240,  -240,  -240,   213,   223,   571,   183,   225,   186,   442,
     144,   231,   571,   194,   192,  -240,   187,  -240,  -240,  -240,
    -240,   220,   234,  -240,  -240,   200,  -240,  -240,  -240,  -240,
    -240,    14,   238,   208,  -240,   210,   239,   112,   109,   579,
     571,  -240,    -2,     7,   356,  -240,   356,   242,   571,   173,
      21,  -240,   317,    59,  -240,   373,  -240,  -240,   373,  -240,
     571,   571,  -240,  -240,   174,   176,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,   571,  -240,  -240,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,  -240,   215,   442,   571,  -240,   180,   218,   304,   221,
    -240,   442,   571,  -240,  -240,  -240,  -240,  -240,   747,   179,
    -240,   571,   571,   260,  -240,   261,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,   471,   284,  -240,  -240,    73,  -240,  -240,
    -240,   289,   290,   248,   311,  -240,    15,  -240,  -240,  -240,
    -240,  -240,  -240,    92,    92,   145,   145,   171,   171,   171,
     171,   106,   106,   172,   189,   191,   197,   198,    70,     9,
      10,   442,  -240,    12,   313,  -240,   571,   272,  -240,  -240,
    -240,  -240,  -240,  -240,   310,   315,  -240,  -240,    36,  -240,
    -240,  -240,   317,   314,   314,   571,  -240,  -240,   571,   442,
     442,  -240,   442,   571,   276,   571,  -240,  -240,    29,  -240,
    -240,  -240,   249,  -240,  -240,    17,   571,   279,  -240,    94,
     442,   285,   325,   571,  -240,  -240,  -240,   442,   332,  -240,
     442,  -240
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,  -240,  -240,  -240,  -240,  -240,   -51,  -240,   -82,    -6,
      24,    55,   -11,   134,   135,   133,   136,   142,  -240,  -113,
     -64,  -240,   -76,   -80,   -20,     5,   102,  -240,  -240,   278,
    -240,   -52,  -102,   196,  -240,  -240,  -240,   199,    16,  -240,
     -12,  -240,  -240,   305,  -240,   281,   -63,  -240,  -240,   122,
    -240,  -240,   -93,  -143,    79,  -240,  -239,  -240,   216,  -116,
    -240,    -9,  -240,  -240,   247,  -240,  -115,  -240,  -240,  -240,
    -240,   347,  -240,  -240,   337
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -211
static const yytype_int16 yytable[] =
{
     110,   153,   211,   216,   237,    24,    54,   219,   302,   149,
      50,   239,    44,   309,   310,   189,   312,    36,  -153,   248,
     207,   331,     1,   307,    50,   154,   151,   246,   166,   167,
      45,    45,    67,    45,    45,   328,   169,   211,    24,    66,
     -92,     1,    70,   158,    69,   211,   188,    71,   127,   208,
      66,    72,   240,    59,   240,   222,   112,   222,   222,   159,
     222,    39,  -153,   222,   188,   222,   158,   170,   152,   247,
     236,   171,   251,   172,   173,   252,   141,   329,   244,   301,
     158,   249,   159,   174,   231,   234,    73,   175,    36,   153,
     302,    55,   153,   156,     1,   256,   159,   282,   110,   188,
     334,   158,   154,   287,   154,   289,   255,   188,   260,   261,
     262,   127,  -116,   154,   308,    61,   154,   159,   222,   190,
     147,   197,   198,   259,   191,   192,   199,   200,    47,   226,
      48,    49,   278,   279,   280,    18,    19,    20,   283,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,    68,   290,   319,
     232,   299,    62,    36,    59,   311,    63,   294,   295,    73,
     156,   314,   156,   193,   194,    18,    19,    20,    18,    19,
      20,   156,   195,   196,   156,   201,   202,   263,   264,   176,
     271,   272,   188,   322,   323,   321,   324,    64,   286,   139,
     327,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   332,   150,   203,   335,   206,   209,   204,   338,   265,
     266,   339,   205,    77,   341,    68,   210,   213,   214,    79,
      80,   215,   217,   141,   218,   222,   221,   325,   110,   220,
     224,   320,   227,   230,    81,   225,   243,    82,    83,    84,
      85,    86,   267,   268,   269,   270,   228,   188,   229,   281,
     284,   245,   257,   285,   258,  -189,   288,   293,   296,   297,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    87,   300,   303,   304,   113,   305,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    77,   124,    89,
      90,    91,    92,    79,    80,   306,   313,   315,   316,   298,
      77,   326,    78,   317,   333,   330,    79,    80,    81,   337,
     336,    82,    83,    84,    85,    86,   340,   273,   275,   274,
      76,    81,   276,    60,    82,    83,    84,    85,    86,   277,
     292,   238,   242,   148,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    87,    77,   318,   223,   250,
      58,    65,    79,    80,     0,     0,     0,     0,    87,     0,
       0,     0,    88,    89,    90,    91,    92,    81,     0,     0,
      82,    83,    84,    85,    86,    88,    89,    90,    91,    92,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    87,    77,     0,    68,     0,     0,
       0,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    81,     0,     0,    82,
      83,    84,    85,    86,    77,     0,   298,     0,     0,     0,
      79,    80,   165,     0,     0,     0,     0,     0,    79,    80,
       0,     0,     0,     0,     0,    81,     0,     0,    82,    83,
      84,    85,    86,    81,     0,     0,    82,    83,    84,    85,
      86,     0,     0,    87,     0,     0,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
     124,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      87,   168,     0,     0,     0,     0,     0,    79,    80,    88,
      89,    90,    91,    92,     0,     0,     0,    88,    89,    90,
      91,    92,    81,     0,    77,    82,    83,    84,    85,    86,
      79,    80,    77,     0,     0,     0,     0,     0,    79,    80,
       0,     0,     0,     0,     0,    81,     0,     0,    82,    83,
      84,    85,    86,    81,     0,     0,   233,    83,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,    87,     0,     0,     0,     0,     0,  -210,     1,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,    64,     0,    88,    89,    90,
      91,    92,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   291,     0,     0,   140,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      64,    77,   115,   119,     6,     0,     3,   122,   247,    72,
      30,     4,    24,     4,     4,    97,     4,     1,     4,   162,
      18,     4,    27,     8,    44,    77,     6,     6,    79,    80,
      25,    26,    52,    28,    29,     6,    87,   150,    33,    51,
      45,    27,    54,     7,    53,   158,    97,     3,    68,    47,
      62,     7,   154,    37,   156,    48,    65,    48,    48,    23,
      48,    88,    48,    48,   115,    48,     7,     3,    48,    48,
     150,     7,   165,     9,    10,   168,    71,    48,   158,     6,
       7,    22,    23,    19,   147,   149,    88,    23,    72,   165,
     329,    88,   168,    77,    27,   171,    23,   213,   162,   150,
       6,     7,   154,   218,   156,   221,   170,   158,   190,   191,
     192,   131,     5,   165,    44,     5,   168,    23,    48,    27,
      51,    15,    16,   187,    32,    33,    20,    21,    26,   141,
      28,    29,   208,   209,   210,    66,    67,    68,   214,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     5,   222,   302,
      51,   243,    48,   147,   148,   281,    45,   231,   232,    88,
     154,   286,   156,    28,    29,    66,    67,    68,    66,    67,
      68,   165,    11,    12,   168,    13,    14,   193,   194,    22,
     201,   202,   243,   309,   310,   308,   312,    22,   218,     4,
     315,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   326,    22,    24,   330,    17,     3,    26,   333,   195,
     196,   337,    25,     3,   340,     5,     3,    44,     3,     9,
      10,    45,    88,   228,     3,    48,    44,   313,   302,    45,
       6,   305,     4,     4,    24,    45,     4,    27,    28,    29,
      30,    31,   197,   198,   199,   200,    48,   308,    48,    44,
      80,    88,    88,    45,    88,    45,    45,    88,     8,     8,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     8,     4,     4,    75,    48,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,     3,    88,    89,
      90,    91,    92,     9,    10,     4,     3,    45,     8,     5,
       3,    45,     5,     8,    45,    76,     9,    10,    24,     4,
      45,    27,    28,    29,    30,    31,     4,   203,   205,   204,
      62,    24,   206,    38,    27,    28,    29,    30,    31,   207,
     228,   152,   156,    72,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     3,   298,   131,   163,
      33,    44,     9,    10,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    24,    -1,    -1,
      27,    28,    29,    30,    31,    88,    89,    90,    91,    92,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,     3,    -1,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    24,    -1,    -1,    27,
      28,    29,    30,    31,     3,    -1,     5,    -1,    -1,    -1,
       9,    10,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      29,    30,    31,    24,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    24,    -1,     3,    27,    28,    29,    30,    31,
       9,    10,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      29,    30,    31,    24,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    71,    -1,    -1,    -1,    -1,    -1,     5,    27,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    22,    -1,    88,    89,    90,
      91,    92,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    27,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    88,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   117,   118,   123,   124,   128,   131,   132,
     133,   136,   137,   163,   164,   165,   131,   138,   139,    88,
     127,   120,   121,   122,   133,   118,   119,   119,   119,   119,
     117,   118,   166,   167,     3,    88,   135,     0,   164,   131,
     136,     5,    48,    45,    22,   167,   133,   117,     5,   154,
     133,     3,     7,    88,   129,   130,   122,     3,     5,     9,
      10,    24,    27,    28,    29,    30,    31,    71,    88,    89,
      90,    91,    92,    94,    95,    96,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   146,   154,    75,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    88,   113,   115,   117,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,     4,
      88,   118,   140,   141,   142,   143,   144,    51,   138,   139,
      22,     6,    48,   115,   124,   125,   131,   145,     7,    23,
     147,   148,   149,   150,   151,     3,    99,    99,     3,    99,
       3,     7,     9,    10,    19,    23,    22,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,   114,    99,   101,
      27,    32,    33,    28,    29,    11,    12,    15,    16,    20,
      21,    13,    14,    24,    26,    25,    17,    18,    47,     3,
       3,   112,   116,    44,     3,    45,   152,    88,     3,   159,
      45,    44,    48,   157,     6,    45,   133,     4,    48,    48,
       4,   139,    51,    27,   113,   134,   116,     6,   130,     4,
     125,   126,   126,     4,   116,    88,     6,    48,   146,    22,
     151,   145,   145,    97,    98,   113,   115,    88,    88,   113,
     101,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   106,   107,   108,   109,   110,   115,   115,
     115,    44,   152,   115,    80,    45,   117,   159,    45,   152,
     113,    46,   142,    88,   113,   113,     8,     8,     5,   101,
       8,     6,   149,     4,     4,    48,     4,     8,    44,     4,
       4,   152,     4,     3,   159,    45,     8,     8,   147,   146,
     113,   112,   152,   152,   152,   115,    45,   159,     6,    48,
      76,     4,   159,    45,     6,   152,    45,     4,   159,   152,
       4,   152
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
#line 60 "asgn4_21CS10026_21CS30009.y"
    { printf("primary_expression -> identifier\n"); }
    break;

  case 3:
#line 63 "asgn4_21CS10026_21CS30009.y"
    { printf("primary_expression -> constant\n"); }
    break;

  case 4:
#line 66 "asgn4_21CS10026_21CS30009.y"
    { printf("primary_expression -> string_literal\n"); }
    break;

  case 5:
#line 69 "asgn4_21CS10026_21CS30009.y"
    { printf("primary_expression -> ( expression )\n"); }
    break;

  case 6:
#line 74 "asgn4_21CS10026_21CS30009.y"
    { printf("constant -> integer_constant\n"); }
    break;

  case 7:
#line 76 "asgn4_21CS10026_21CS30009.y"
    { printf("constant -> float_constant\n"); }
    break;

  case 8:
#line 78 "asgn4_21CS10026_21CS30009.y"
    { printf("constant -> char_constant\n"); }
    break;

  case 9:
#line 83 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> primary_expression\n"); }
    break;

  case 10:
#line 86 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> postfix_expression [ expression ]\n"); }
    break;

  case 11:
#line 89 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
    break;

  case 12:
#line 92 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> postfix_expression . identifier\n"); }
    break;

  case 13:
#line 95 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> postfix_expression -> identifier\n"); }
    break;

  case 14:
#line 98 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> postfix_expression ++\n"); }
    break;

  case 15:
#line 101 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> postfix_expression --\n"); }
    break;

  case 16:
#line 104 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }
    break;

  case 17:
#line 107 "asgn4_21CS10026_21CS30009.y"
    { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
    break;

  case 18:
#line 112 "asgn4_21CS10026_21CS30009.y"
    { printf("argument_expression_list -> assignment_expression\n"); }
    break;

  case 19:
#line 115 "asgn4_21CS10026_21CS30009.y"
    { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
    break;

  case 20:
#line 121 "asgn4_21CS10026_21CS30009.y"
    { printf("argument_expression_list_opt -> argument_expression_list\n"); }
    break;

  case 21:
#line 123 "asgn4_21CS10026_21CS30009.y"
    { printf("argument_expression_list_opt -> epsilon\n");}
    break;

  case 22:
#line 128 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_expression -> postfix_expression\n"); }
    break;

  case 23:
#line 131 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_expression -> ++ unary_expression\n"); }
    break;

  case 24:
#line 134 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_expression -> -- unary_expression\n"); }
    break;

  case 25:
#line 137 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_expression -> unary_operator cast_expression\n"); }
    break;

  case 26:
#line 140 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_expression -> sizeof unary_expression\n"); }
    break;

  case 27:
#line 143 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_expression -> sizeof ( type_name )\n"); }
    break;

  case 28:
#line 148 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_operator -> &\n"); }
    break;

  case 29:
#line 151 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_operator -> *\n"); }
    break;

  case 30:
#line 154 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_operator -> +\n"); }
    break;

  case 31:
#line 157 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_operator -> -\n"); }
    break;

  case 32:
#line 160 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_operator -> ~\n"); }
    break;

  case 33:
#line 163 "asgn4_21CS10026_21CS30009.y"
    { printf("unary_operator -> !\n"); }
    break;

  case 34:
#line 168 "asgn4_21CS10026_21CS30009.y"
    { printf("cast_expression -> unary_expression\n"); }
    break;

  case 35:
#line 171 "asgn4_21CS10026_21CS30009.y"
    { printf("cast_expression -> ( type_name ) cast_expression\n"); }
    break;

  case 36:
#line 176 "asgn4_21CS10026_21CS30009.y"
    { printf("multiplicative_expression -> cast_expression\n"); }
    break;

  case 37:
#line 179 "asgn4_21CS10026_21CS30009.y"
    { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
    break;

  case 38:
#line 182 "asgn4_21CS10026_21CS30009.y"
    { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
    break;

  case 39:
#line 185 "asgn4_21CS10026_21CS30009.y"
    { printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); }
    break;

  case 40:
#line 190 "asgn4_21CS10026_21CS30009.y"
    { printf("additive_expression -> multiplicative_expression\n"); }
    break;

  case 41:
#line 193 "asgn4_21CS10026_21CS30009.y"
    { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }
    break;

  case 42:
#line 196 "asgn4_21CS10026_21CS30009.y"
    { printf("additive_expression -> additive_expression - multiplicative_expression\n"); }
    break;

  case 43:
#line 201 "asgn4_21CS10026_21CS30009.y"
    { printf("shift_expression -> additive_expression\n"); }
    break;

  case 44:
#line 204 "asgn4_21CS10026_21CS30009.y"
    { printf("shift_expression -> shift_expression << additive_expression\n"); }
    break;

  case 45:
#line 207 "asgn4_21CS10026_21CS30009.y"
    { printf("shift_expression -> shift_expression >> additive_expression\n"); }
    break;

  case 46:
#line 212 "asgn4_21CS10026_21CS30009.y"
    { printf("relational_expression -> shift_expression\n"); }
    break;

  case 47:
#line 215 "asgn4_21CS10026_21CS30009.y"
    { printf("relational_expression -> relational_expression < shift_expression\n"); }
    break;

  case 48:
#line 218 "asgn4_21CS10026_21CS30009.y"
    { printf("relational_expression -> relational_expression > shift_expression\n"); }
    break;

  case 49:
#line 221 "asgn4_21CS10026_21CS30009.y"
    { printf("relational_expression -> relational_expression <= shift_expression\n"); }
    break;

  case 50:
#line 224 "asgn4_21CS10026_21CS30009.y"
    { printf("relational_expression -> relational_expression >= shift_expression\n"); }
    break;

  case 51:
#line 229 "asgn4_21CS10026_21CS30009.y"
    { printf("equality_expression -> relational_expression\n"); }
    break;

  case 52:
#line 232 "asgn4_21CS10026_21CS30009.y"
    { printf("equality_expression -> equality_expression == relational_expression\n"); }
    break;

  case 53:
#line 235 "asgn4_21CS10026_21CS30009.y"
    { printf("equality_expression -> equality_expression != relational_expression\n"); }
    break;

  case 54:
#line 240 "asgn4_21CS10026_21CS30009.y"
    { printf("and_expression -> equality_expression\n"); }
    break;

  case 55:
#line 243 "asgn4_21CS10026_21CS30009.y"
    { printf("and_expression -> and_expression & equality_expression\n"); }
    break;

  case 56:
#line 248 "asgn4_21CS10026_21CS30009.y"
    { printf("exclusive_or_expression -> and_expression\n"); }
    break;

  case 57:
#line 251 "asgn4_21CS10026_21CS30009.y"
    { printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); }
    break;

  case 58:
#line 256 "asgn4_21CS10026_21CS30009.y"
    { printf("inclusive_or_expression -> exclusive_or_expression\n"); }
    break;

  case 59:
#line 259 "asgn4_21CS10026_21CS30009.y"
    { printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); }
    break;

  case 60:
#line 264 "asgn4_21CS10026_21CS30009.y"
    { printf("logical_and_expression -> inclusive_or_expression\n"); }
    break;

  case 61:
#line 267 "asgn4_21CS10026_21CS30009.y"
    { printf("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); }
    break;

  case 62:
#line 272 "asgn4_21CS10026_21CS30009.y"
    { printf("logical_or_expression -> logical_and_expression\n"); }
    break;

  case 63:
#line 275 "asgn4_21CS10026_21CS30009.y"
    { printf("logical_or_expression -> logical_or_expression || logical_and_expression\n"); }
    break;

  case 64:
#line 280 "asgn4_21CS10026_21CS30009.y"
    { printf("conditional_expression -> logical_or_expression\n"); }
    break;

  case 65:
#line 283 "asgn4_21CS10026_21CS30009.y"
    { printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); }
    break;

  case 66:
#line 288 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_expression -> conditional_expression\n"); }
    break;

  case 67:
#line 291 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
    break;

  case 68:
#line 296 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> =\n"); }
    break;

  case 69:
#line 299 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> *=\n"); }
    break;

  case 70:
#line 302 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> /=\n"); }
    break;

  case 71:
#line 305 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> %%=\n"); }
    break;

  case 72:
#line 308 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> +=\n"); }
    break;

  case 73:
#line 311 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> -=\n"); }
    break;

  case 74:
#line 314 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> <<=\n"); }
    break;

  case 75:
#line 317 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> >>=\n"); }
    break;

  case 76:
#line 320 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> &=\n"); }
    break;

  case 77:
#line 323 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> ^=\n"); }
    break;

  case 78:
#line 326 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_operator -> |=\n"); }
    break;

  case 79:
#line 331 "asgn4_21CS10026_21CS30009.y"
    { printf("expression -> assignment_expression\n"); }
    break;

  case 80:
#line 334 "asgn4_21CS10026_21CS30009.y"
    { printf("expression -> expression , assignment_expression\n"); }
    break;

  case 81:
#line 339 "asgn4_21CS10026_21CS30009.y"
    { printf("constant_expression -> conditional_expression\n"); }
    break;

  case 82:
#line 345 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
    break;

  case 83:
#line 350 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
    break;

  case 84:
#line 353 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
    break;

  case 85:
#line 356 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
    break;

  case 86:
#line 359 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
    break;

  case 87:
#line 364 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_specifiers_opt -> declaration_specifiers\n");}
    break;

  case 88:
#line 366 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_specifiers_opt -> epsilon\n"); }
    break;

  case 89:
#line 371 "asgn4_21CS10026_21CS30009.y"
    { printf("init_declarator_list -> init_declarator\n"); }
    break;

  case 90:
#line 374 "asgn4_21CS10026_21CS30009.y"
    { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
    break;

  case 91:
#line 379 "asgn4_21CS10026_21CS30009.y"
    { printf("init_declarator_list_opt -> init_declarator_list\n");}
    break;

  case 92:
#line 381 "asgn4_21CS10026_21CS30009.y"
    { printf("init_declarator_list_opt -> epsilon\n"); }
    break;

  case 93:
#line 386 "asgn4_21CS10026_21CS30009.y"
    { printf("init_declarator -> declarator\n"); }
    break;

  case 94:
#line 389 "asgn4_21CS10026_21CS30009.y"
    { printf("init_declarator -> declarator = initializer\n"); }
    break;

  case 95:
#line 394 "asgn4_21CS10026_21CS30009.y"
    { printf("storage_class_specifier -> extern\n"); }
    break;

  case 96:
#line 397 "asgn4_21CS10026_21CS30009.y"
    { printf("storage_class_specifier -> static\n"); }
    break;

  case 97:
#line 400 "asgn4_21CS10026_21CS30009.y"
    { printf("storage_class_specifier -> auto\n"); }
    break;

  case 98:
#line 403 "asgn4_21CS10026_21CS30009.y"
    { printf("storage_class_specifier -> register\n"); }
    break;

  case 99:
#line 408 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> void\n"); }
    break;

  case 100:
#line 411 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> char\n"); }
    break;

  case 101:
#line 414 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> short\n"); }
    break;

  case 102:
#line 417 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> int\n"); }
    break;

  case 103:
#line 420 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> long\n"); }
    break;

  case 104:
#line 423 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> float\n"); }
    break;

  case 105:
#line 426 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> double\n"); }
    break;

  case 106:
#line 429 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> signed\n"); }
    break;

  case 107:
#line 432 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> unsigned\n"); }
    break;

  case 108:
#line 435 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> _Bool\n"); }
    break;

  case 109:
#line 438 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> _Complex\n"); }
    break;

  case 110:
#line 441 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> _Imaginary\n"); }
    break;

  case 111:
#line 444 "asgn4_21CS10026_21CS30009.y"
    { printf("type_specifier -> enum_specifier\n"); }
    break;

  case 112:
#line 449 "asgn4_21CS10026_21CS30009.y"
    { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
    break;

  case 113:
#line 452 "asgn4_21CS10026_21CS30009.y"
    { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
    break;

  case 114:
#line 457 "asgn4_21CS10026_21CS30009.y"
    { printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); }
    break;

  case 115:
#line 459 "asgn4_21CS10026_21CS30009.y"
    { printf("specifier_qualifier_list_opt -> epsilon\n");}
    break;

  case 116:
#line 464 "asgn4_21CS10026_21CS30009.y"
    { printf("identifier_opt -> identifier\n"); }
    break;

  case 117:
#line 466 "asgn4_21CS10026_21CS30009.y"
    { printf("identifier_opt -> epsilon\n");}
    break;

  case 118:
#line 471 "asgn4_21CS10026_21CS30009.y"
    { printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }
    break;

  case 119:
#line 474 "asgn4_21CS10026_21CS30009.y"
    { printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }
    break;

  case 120:
#line 477 "asgn4_21CS10026_21CS30009.y"
    { printf("enum_specifier -> enum identifier\n"); }
    break;

  case 121:
#line 481 "asgn4_21CS10026_21CS30009.y"
    { printf("enumerator_list -> enumerator\n"); }
    break;

  case 122:
#line 484 "asgn4_21CS10026_21CS30009.y"
    { printf("enumerator_list -> enumerator_list , enumerator\n"); }
    break;

  case 123:
#line 489 "asgn4_21CS10026_21CS30009.y"
    { printf("enumerator -> enumeration_constant\n"); }
    break;

  case 124:
#line 492 "asgn4_21CS10026_21CS30009.y"
    { printf("enumerator -> enumeration_constant = constant_expression\n"); }
    break;

  case 125:
#line 497 "asgn4_21CS10026_21CS30009.y"
    { printf("type_qualifier -> const\n"); }
    break;

  case 126:
#line 500 "asgn4_21CS10026_21CS30009.y"
    { printf("type_qualifier -> restrict\n"); }
    break;

  case 127:
#line 503 "asgn4_21CS10026_21CS30009.y"
    { printf("type_qualifier -> volatile\n"); }
    break;

  case 128:
#line 508 "asgn4_21CS10026_21CS30009.y"
    { printf("function_specifier -> inline\n"); }
    break;

  case 129:
#line 513 "asgn4_21CS10026_21CS30009.y"
    { printf("declarator -> pointer_opt direct_declarator\n"); }
    break;

  case 130:
#line 518 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_expression_opt -> assignment_expression\n"); }
    break;

  case 131:
#line 520 "asgn4_21CS10026_21CS30009.y"
    { printf("assignment_expression_opt -> epsilon\n");}
    break;

  case 132:
#line 525 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> identifier\n"); }
    break;

  case 133:
#line 528 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> ( declarator )\n"); }
    break;

  case 134:
#line 531 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
    break;

  case 135:
#line 534 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }
    break;

  case 136:
#line 537 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }
    break;

  case 137:
#line 540 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
    break;

  case 138:
#line 543 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
    break;

  case 139:
#line 546 "asgn4_21CS10026_21CS30009.y"
    { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
    break;

  case 140:
#line 551 "asgn4_21CS10026_21CS30009.y"
    { printf("pointer -> * type_qualifier_list_opt\n"); }
    break;

  case 141:
#line 554 "asgn4_21CS10026_21CS30009.y"
    { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
    break;

  case 142:
#line 559 "asgn4_21CS10026_21CS30009.y"
    { printf("pointer_opt -> pointer\n");}
    break;

  case 143:
#line 561 "asgn4_21CS10026_21CS30009.y"
    { printf("pointer_opt -> epsilon\n"); }
    break;

  case 144:
#line 566 "asgn4_21CS10026_21CS30009.y"
    { printf("type_qualifier_list -> type_qualifier\n"); }
    break;

  case 145:
#line 569 "asgn4_21CS10026_21CS30009.y"
    { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
    break;

  case 146:
#line 574 "asgn4_21CS10026_21CS30009.y"
    { printf("type_qualifier_list_opt -> type_qualifier_list\n");}
    break;

  case 147:
#line 576 "asgn4_21CS10026_21CS30009.y"
    { printf("type_qualifier_list_opt -> epsilon\n");}
    break;

  case 148:
#line 581 "asgn4_21CS10026_21CS30009.y"
    { printf("parameter_type_list -> parameter_list\n"); }
    break;

  case 149:
#line 584 "asgn4_21CS10026_21CS30009.y"
    { printf("parameter_type_list -> parameter_list , ...\n"); }
    break;

  case 150:
#line 589 "asgn4_21CS10026_21CS30009.y"
    { printf("parameter_list -> parameter_declaration\n"); }
    break;

  case 151:
#line 592 "asgn4_21CS10026_21CS30009.y"
    { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
    break;

  case 152:
#line 597 "asgn4_21CS10026_21CS30009.y"
    { printf("parameter_declaration -> declaration_specifiers declarator\n"); }
    break;

  case 153:
#line 600 "asgn4_21CS10026_21CS30009.y"
    { printf("parameter_declaration -> declaration_specifiers\n"); }
    break;

  case 154:
#line 606 "asgn4_21CS10026_21CS30009.y"
    { printf("identifier_list -> identifier\n"); }
    break;

  case 155:
#line 609 "asgn4_21CS10026_21CS30009.y"
    { printf("identifier_list -> identifier_list , identifier\n"); }
    break;

  case 156:
#line 614 "asgn4_21CS10026_21CS30009.y"
    { printf("identifier_list_opt -> identifier_list\n"); }
    break;

  case 157:
#line 616 "asgn4_21CS10026_21CS30009.y"
    { printf("identifier_list_opt -> epsilon\n");}
    break;

  case 158:
#line 621 "asgn4_21CS10026_21CS30009.y"
    { printf("type_name -> specifier_qualifier_list\n"); }
    break;

  case 159:
#line 626 "asgn4_21CS10026_21CS30009.y"
    { printf("initializer -> assignment_expression\n"); }
    break;

  case 160:
#line 629 "asgn4_21CS10026_21CS30009.y"
    { printf("initializer -> { initializer_list }\n"); }
    break;

  case 161:
#line 632 "asgn4_21CS10026_21CS30009.y"
    { printf("initializer -> { initializer_list , }\n"); }
    break;

  case 162:
#line 637 "asgn4_21CS10026_21CS30009.y"
    { printf("initializer_list -> designation_opt initializer\n"); }
    break;

  case 163:
#line 640 "asgn4_21CS10026_21CS30009.y"
    { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
    break;

  case 164:
#line 645 "asgn4_21CS10026_21CS30009.y"
    { printf("designation -> designator_list =\n"); }
    break;

  case 165:
#line 650 "asgn4_21CS10026_21CS30009.y"
    { printf("designation_opt -> designation\n");}
    break;

  case 166:
#line 653 "asgn4_21CS10026_21CS30009.y"
    { printf("designation_opt -> epsilon\n");}
    break;

  case 167:
#line 658 "asgn4_21CS10026_21CS30009.y"
    { printf("designator_list -> designator\n"); }
    break;

  case 168:
#line 661 "asgn4_21CS10026_21CS30009.y"
    { printf("designator_list -> designator_list designator\n"); }
    break;

  case 169:
#line 666 "asgn4_21CS10026_21CS30009.y"
    { printf("designator -> [ constant_expression ]\n"); }
    break;

  case 170:
#line 669 "asgn4_21CS10026_21CS30009.y"
    { printf("designator -> . identifier\n"); }
    break;

  case 171:
#line 675 "asgn4_21CS10026_21CS30009.y"
    { printf("statement -> labeled_statement\n"); }
    break;

  case 172:
#line 678 "asgn4_21CS10026_21CS30009.y"
    { printf("statement -> compound_statement\n"); }
    break;

  case 173:
#line 681 "asgn4_21CS10026_21CS30009.y"
    { printf("statement -> expression_statement\n"); }
    break;

  case 174:
#line 684 "asgn4_21CS10026_21CS30009.y"
    { printf("statement -> selection_statement\n"); }
    break;

  case 175:
#line 687 "asgn4_21CS10026_21CS30009.y"
    { printf("statement -> iteration_statement\n"); }
    break;

  case 176:
#line 690 "asgn4_21CS10026_21CS30009.y"
    { printf("statement -> jump_statement\n"); }
    break;

  case 177:
#line 695 "asgn4_21CS10026_21CS30009.y"
    { printf("labeled_statement -> identifier : statement\n"); }
    break;

  case 178:
#line 698 "asgn4_21CS10026_21CS30009.y"
    { printf("labeled_statement -> case constant_expression : statement\n"); }
    break;

  case 179:
#line 701 "asgn4_21CS10026_21CS30009.y"
    { printf("labeled_statement -> default : statement\n"); }
    break;

  case 180:
#line 706 "asgn4_21CS10026_21CS30009.y"
    { printf("compound_statement -> { block_item_list_opt }\n"); }
    break;

  case 181:
#line 711 "asgn4_21CS10026_21CS30009.y"
    { printf("block_item_list -> block_item\n"); }
    break;

  case 182:
#line 714 "asgn4_21CS10026_21CS30009.y"
    { printf("block_item_list -> block_item_list block_item\n"); }
    break;

  case 183:
#line 719 "asgn4_21CS10026_21CS30009.y"
    { printf("block_item_list_opt -> block_item_list\n"); }
    break;

  case 184:
#line 721 "asgn4_21CS10026_21CS30009.y"
    { printf("block_item_list_opt -> epsilon\n"); }
    break;

  case 185:
#line 726 "asgn4_21CS10026_21CS30009.y"
    { printf("block_item -> declaration\n"); }
    break;

  case 186:
#line 729 "asgn4_21CS10026_21CS30009.y"
    { printf("block_item -> statement\n"); }
    break;

  case 187:
#line 734 "asgn4_21CS10026_21CS30009.y"
    { printf("expression_opt -> expression ;\n"); }
    break;

  case 188:
#line 739 "asgn4_21CS10026_21CS30009.y"
    { printf("expression_opt -> expression\n"); }
    break;

  case 189:
#line 741 "asgn4_21CS10026_21CS30009.y"
    { printf("expression_opt -> epsilon\n"); }
    break;

  case 190:
#line 746 "asgn4_21CS10026_21CS30009.y"
    { printf("selection_statement -> if ( expression ) statement else statement\n"); }
    break;

  case 191:
#line 749 "asgn4_21CS10026_21CS30009.y"
    { printf("selection_statement -> if ( expression ) statement\n"); }
    break;

  case 192:
#line 752 "asgn4_21CS10026_21CS30009.y"
    { printf("selection_statement -> switch ( expression ) statement\n"); }
    break;

  case 193:
#line 757 "asgn4_21CS10026_21CS30009.y"
    { printf("iteration_statement -> while ( expression ) statement\n"); }
    break;

  case 194:
#line 760 "asgn4_21CS10026_21CS30009.y"
    { printf("iteration_statement -> do statement while ( expression ) ;\n"); }
    break;

  case 195:
#line 763 "asgn4_21CS10026_21CS30009.y"
    { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
    break;

  case 196:
#line 766 "asgn4_21CS10026_21CS30009.y"
    { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
    break;

  case 197:
#line 771 "asgn4_21CS10026_21CS30009.y"
    { printf("jump_statement -> goto identifier ;\n"); }
    break;

  case 198:
#line 774 "asgn4_21CS10026_21CS30009.y"
    { printf("jump_statement -> continue ;\n"); }
    break;

  case 199:
#line 777 "asgn4_21CS10026_21CS30009.y"
    { printf("jump_statement -> break ;\n"); }
    break;

  case 200:
#line 780 "asgn4_21CS10026_21CS30009.y"
    { printf("jump_statement -> return expression_opt ;\n"); }
    break;

  case 201:
#line 786 "asgn4_21CS10026_21CS30009.y"
    { printf("translation_unit -> external_declaration\n"); }
    break;

  case 202:
#line 789 "asgn4_21CS10026_21CS30009.y"
    { printf("translation_unit -> translation_unit external_declaration\n"); }
    break;

  case 203:
#line 794 "asgn4_21CS10026_21CS30009.y"
    { printf("external_declaration -> function_definition\n"); }
    break;

  case 204:
#line 797 "asgn4_21CS10026_21CS30009.y"
    { printf("external_declaration -> declaration\n"); }
    break;

  case 205:
#line 802 "asgn4_21CS10026_21CS30009.y"
    { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
    break;

  case 206:
#line 805 "asgn4_21CS10026_21CS30009.y"
    { printf("function_definition -> declarator declaration_list_opt compound_statement\n"); }
    break;

  case 207:
#line 810 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_list -> declaration\n"); }
    break;

  case 208:
#line 813 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_list -> declaration_list declaration\n"); }
    break;

  case 209:
#line 818 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_list_opt -> declaration_list\n"); }
    break;

  case 210:
#line 820 "asgn4_21CS10026_21CS30009.y"
    { printf("declaration_list_opt -> epsilon\n"); }
    break;


/* Line 1267 of yacc.c.  */
#line 3012 "y.tab.c"
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


#line 824 "asgn4_21CS10026_21CS30009.y"


void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}
