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
     INC_OP = 258,
     DEC_OP = 259,
     PTR_OP = 260,
     EQ = 261,
     PARENTHESIS_OPEN = 262,
     PARENTHESIS_CLOSE = 263,
     CURLY_BRACE_OPEN = 264,
     CURLY_BRACE_CLOSE = 265,
     SQR_BRACE_OPEN = 266,
     SQR_BRACE_CLOSE = 267,
     COLON = 268,
     SEMI_COLON = 269,
     ELLIPSIS = 270,
     QUESTION_MARK = 271,
     SIZEOF = 272,
     LEFT_OP = 273,
     RIGHT_OP = 274,
     EQ_OP = 275,
     NE_OP = 276,
     LTE_OP = 277,
     GTE_OP = 278,
     AND_OP = 279,
     OR_OP = 280,
     ADD_ASSIGN = 281,
     SUB_ASSIGN = 282,
     MUL_ASSIGN = 283,
     DIV_ASSIGN = 284,
     MOD_ASSIGN = 285,
     RIGHT_ASSIGN = 286,
     LEFT_ASSIGN = 287,
     OR_ASSIGN = 288,
     AND_ASSIGN = 289,
     XOR_ASSIGN = 290,
     LESS_THAN = 291,
     GREATER_THAN = 292,
     DOT = 293,
     BITWISEAND = 294,
     BITWISEOR = 295,
     BITWISEXOR = 296,
     STAR = 297,
     PLUS = 298,
     MINUS = 299,
     NOT = 300,
     EXCLAMATION = 301,
     DIVIDE = 302,
     PERCENTAGE = 303,
     COMMA = 304,
     HASH = 305,
     EXTERN = 306,
     STATIC = 307,
     AUTO = 308,
     REGISTER = 309,
     VOID = 310,
     CHAR = 311,
     SHORT = 312,
     INT = 313,
     LONG = 314,
     FLOAT = 315,
     DOUBLE = 316,
     SIGNED = 317,
     UNSIGNED = 318,
     BOOL = 319,
     COMPLEX = 320,
     IMAGINARY = 321,
     CONST = 322,
     ENUM = 323,
     INLINE = 324,
     RESTRICT = 325,
     VOLATILE = 326,
     IF = 327,
     ELSE = 328,
     SWITCH = 329,
     CASE = 330,
     DEFAULT = 331,
     WHILE = 332,
     CONTINUE = 333,
     DO = 334,
     GOTO = 335,
     FOR = 336,
     RETURN = 337,
     BREAK = 338,
     STRUCT = 339,
     TYPEDEF = 340,
     UNION = 341,
     UNEXPECTED_TOKEN = 342,
     IDENTIFIER = 343,
     INTEGER_CONST = 344,
     FLOAT_CONST = 345,
     CHAR_CONST = 346,
     STRING_LITERAL = 347
   };
#endif
/* Tokens.  */
#define INC_OP 258
#define DEC_OP 259
#define PTR_OP 260
#define EQ 261
#define PARENTHESIS_OPEN 262
#define PARENTHESIS_CLOSE 263
#define CURLY_BRACE_OPEN 264
#define CURLY_BRACE_CLOSE 265
#define SQR_BRACE_OPEN 266
#define SQR_BRACE_CLOSE 267
#define COLON 268
#define SEMI_COLON 269
#define ELLIPSIS 270
#define QUESTION_MARK 271
#define SIZEOF 272
#define LEFT_OP 273
#define RIGHT_OP 274
#define EQ_OP 275
#define NE_OP 276
#define LTE_OP 277
#define GTE_OP 278
#define AND_OP 279
#define OR_OP 280
#define ADD_ASSIGN 281
#define SUB_ASSIGN 282
#define MUL_ASSIGN 283
#define DIV_ASSIGN 284
#define MOD_ASSIGN 285
#define RIGHT_ASSIGN 286
#define LEFT_ASSIGN 287
#define OR_ASSIGN 288
#define AND_ASSIGN 289
#define XOR_ASSIGN 290
#define LESS_THAN 291
#define GREATER_THAN 292
#define DOT 293
#define BITWISEAND 294
#define BITWISEOR 295
#define BITWISEXOR 296
#define STAR 297
#define PLUS 298
#define MINUS 299
#define NOT 300
#define EXCLAMATION 301
#define DIVIDE 302
#define PERCENTAGE 303
#define COMMA 304
#define HASH 305
#define EXTERN 306
#define STATIC 307
#define AUTO 308
#define REGISTER 309
#define VOID 310
#define CHAR 311
#define SHORT 312
#define INT 313
#define LONG 314
#define FLOAT 315
#define DOUBLE 316
#define SIGNED 317
#define UNSIGNED 318
#define BOOL 319
#define COMPLEX 320
#define IMAGINARY 321
#define CONST 322
#define ENUM 323
#define INLINE 324
#define RESTRICT 325
#define VOLATILE 326
#define IF 327
#define ELSE 328
#define SWITCH 329
#define CASE 330
#define DEFAULT 331
#define WHILE 332
#define CONTINUE 333
#define DO 334
#define GOTO 335
#define FOR 336
#define RETURN 337
#define BREAK 338
#define STRUCT 339
#define TYPEDEF 340
#define UNION 341
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
    void yyinfo(const char*);
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
#line 18 "asgn4_21CS10026_21CS30009.y"
{
    int ival;
    float fval;
    char cval;
    char *sval;
}
/* Line 193 of yacc.c.  */
#line 296 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 309 "y.tab.c"

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
#define YYLAST   820

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
     163,     0,    -1,    88,    -1,    95,    -1,    92,    -1,     7,
     115,     8,    -1,    89,    -1,    90,    -1,    91,    -1,    94,
      -1,    96,    11,   115,    12,    -1,    96,     7,    98,     8,
      -1,    96,    38,    88,    -1,    96,     5,    88,    -1,    96,
       3,    -1,    96,     4,    -1,     7,   145,     8,     9,   147,
      10,    -1,     7,   145,     8,     9,   147,    49,    10,    -1,
     113,    -1,    97,    49,   113,    -1,    97,    -1,    -1,    96,
      -1,     3,    99,    -1,     4,    99,    -1,   100,   101,    -1,
      17,    99,    -1,    17,     7,   145,     8,    -1,    39,    -1,
      42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,
      99,    -1,     7,   145,     8,   101,    -1,   101,    -1,   102,
      42,   101,    -1,   102,    47,   101,    -1,   102,    48,   101,
      -1,   102,    -1,   103,    43,   102,    -1,   103,    44,   102,
      -1,   103,    -1,   104,    18,   103,    -1,   104,    19,   103,
      -1,   104,    -1,   105,    36,   104,    -1,   105,    37,   104,
      -1,   105,    22,   104,    -1,   105,    23,   104,    -1,   105,
      -1,   106,    20,   105,    -1,   106,    21,   105,    -1,   106,
      -1,   107,    39,   106,    -1,   107,    -1,   108,    41,   107,
      -1,   108,    -1,   109,    40,   108,    -1,   109,    -1,   110,
      24,   109,    -1,   110,    -1,   111,    25,   110,    -1,   111,
      -1,   111,    16,   115,    13,   112,    -1,   112,    -1,    99,
     114,   113,    -1,     6,    -1,    28,    -1,    29,    -1,    30,
      -1,    26,    -1,    27,    -1,    32,    -1,    31,    -1,    34,
      -1,    35,    -1,    33,    -1,   113,    -1,   115,    49,   113,
      -1,   112,    -1,   118,   121,    14,    -1,   123,   119,    -1,
     124,   119,    -1,   131,   119,    -1,   132,   119,    -1,   118,
      -1,    -1,   122,    -1,   120,    49,   122,    -1,   120,    -1,
      -1,   133,    -1,   133,     6,   146,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,
      -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,   128,
      -1,   124,   126,    -1,   131,   126,    -1,   125,    -1,    -1,
      88,    -1,    -1,    68,   127,     9,   129,    10,    -1,    68,
     127,     9,   129,    49,    10,    -1,    68,    88,    -1,   130,
      -1,   129,    49,   130,    -1,    88,    -1,    88,     6,   116,
      -1,    67,    -1,    70,    -1,    71,    -1,    69,    -1,   137,
     135,    -1,   113,    -1,    -1,    88,    -1,     7,   133,     8,
      -1,   135,    11,   139,   134,    12,    -1,   135,    11,    52,
     139,   113,    12,    -1,   135,    11,   138,    52,   113,    12,
      -1,   135,    11,   139,    42,    12,    -1,   135,     7,   140,
       8,    -1,   135,     7,   144,     8,    -1,    42,   139,    -1,
      42,   139,   136,    -1,   136,    -1,    -1,   131,    -1,   138,
     131,    -1,   138,    -1,    -1,   141,    -1,   141,    49,    15,
      -1,   142,    -1,   141,    49,   142,    -1,   118,   133,    -1,
     118,    -1,    88,    -1,   143,    49,    88,    -1,   143,    -1,
      -1,   125,    -1,   113,    -1,     9,   147,    10,    -1,     9,
     147,    49,    10,    -1,   149,   146,    -1,   147,    49,   149,
     146,    -1,   150,     6,    -1,   148,    -1,    -1,   151,    -1,
     150,   151,    -1,    11,   116,    12,    -1,    38,    88,    -1,
     153,    -1,   154,    -1,   158,    -1,   160,    -1,   161,    -1,
     162,    -1,    88,    13,   152,    -1,    75,   116,    13,   152,
      -1,    76,    13,   152,    -1,     9,   156,    10,    -1,   157,
      -1,   155,   157,    -1,   155,    -1,    -1,   117,    -1,   152,
      -1,   159,    14,    -1,   115,    -1,    -1,    72,     7,   115,
       8,   152,    73,   152,    -1,    72,     7,   115,     8,   152,
      -1,    74,     7,   115,     8,   152,    -1,    77,     7,   115,
       8,   152,    -1,    79,   152,    77,     7,   115,     8,    14,
      -1,    81,     7,   159,    14,   159,    14,   159,     8,   152,
      -1,    81,     7,   117,   159,    14,   159,     8,   152,    -1,
      80,    88,    14,    -1,    78,    14,    -1,    83,    14,    -1,
      82,   159,    14,    -1,   164,    -1,   163,   164,    -1,   165,
      -1,   117,    -1,   118,   133,   167,   154,    -1,   133,   167,
     154,    -1,   117,    -1,   166,   117,    -1,   166,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    57,    60,    63,    68,    69,    70,    74,
      77,    80,    83,    86,    89,    92,    95,    98,   103,   106,
     112,   115,   119,   122,   125,   128,   131,   134,   139,   142,
     145,   148,   151,   154,   159,   162,   167,   170,   173,   176,
     181,   184,   187,   192,   195,   198,   203,   206,   209,   212,
     215,   220,   223,   226,   231,   234,   239,   242,   247,   250,
     255,   258,   263,   266,   271,   274,   279,   282,   287,   290,
     293,   296,   299,   302,   305,   308,   311,   314,   317,   322,
     325,   330,   336,   341,   344,   347,   350,   355,   358,   362,
     365,   370,   373,   377,   380,   385,   388,   391,   394,   399,
     402,   405,   408,   411,   414,   417,   420,   423,   426,   429,
     432,   435,   440,   443,   448,   451,   455,   458,   462,   465,
     468,   472,   475,   480,   483,   488,   491,   494,   499,   504,
     509,   512,   516,   519,   522,   525,   528,   531,   534,   537,
     542,   545,   550,   553,   557,   560,   565,   568,   572,   575,
     580,   583,   588,   591,   597,   600,   605,   608,   612,   617,
     620,   623,   628,   631,   636,   641,   644,   648,   651,   656,
     659,   665,   668,   671,   674,   677,   680,   685,   688,   691,
     696,   701,   704,   709,   710,   714,   717,   722,   727,   728,
     732,   735,   738,   743,   746,   749,   752,   757,   760,   763,
     766,   772,   775,   780,   783,   788,   791,   796,   799,   804,
     805
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INC_OP", "DEC_OP", "PTR_OP", "EQ",
  "PARENTHESIS_OPEN", "PARENTHESIS_CLOSE", "CURLY_BRACE_OPEN",
  "CURLY_BRACE_CLOSE", "SQR_BRACE_OPEN", "SQR_BRACE_CLOSE", "COLON",
  "SEMI_COLON", "ELLIPSIS", "QUESTION_MARK", "SIZEOF", "LEFT_OP",
  "RIGHT_OP", "EQ_OP", "NE_OP", "LTE_OP", "GTE_OP", "AND_OP", "OR_OP",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "RIGHT_ASSIGN", "LEFT_ASSIGN", "OR_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "LESS_THAN", "GREATER_THAN", "DOT", "BITWISEAND", "BITWISEOR",
  "BITWISEXOR", "STAR", "PLUS", "MINUS", "NOT", "EXCLAMATION", "DIVIDE",
  "PERCENTAGE", "COMMA", "HASH", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "VOID", "CHAR", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "SIGNED",
  "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY", "CONST", "ENUM", "INLINE",
  "RESTRICT", "VOLATILE", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT",
  "WHILE", "CONTINUE", "DO", "GOTO", "FOR", "RETURN", "BREAK", "STRUCT",
  "TYPEDEF", "UNION", "UNEXPECTED_TOKEN", "IDENTIFIER", "INTEGER_CONST",
  "FLOAT_CONST", "CHAR_CONST", "STRING_LITERAL", "$accept",
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
     103,   104,   105,   106,   107,   108,   109,   110,   125,   117,
     128,   126,   127,   204,   143,    88,    88,   111,    88,    88,
     210,   142,     0,   143,   201,   203,   144,   146,   140,   120,
       0,    91,     0,    89,    93,    87,    83,    84,    85,    86,
     207,   143,   209,     0,   143,   132,   129,     1,   202,   145,
     141,     0,   143,    82,     0,     0,    93,   208,   184,   206,
       0,   157,   147,   123,     0,   121,    90,     0,     0,     0,
     166,     0,    28,    29,    30,    31,    32,    33,     2,     6,
       7,     8,     4,     9,     3,    22,    34,     0,    36,    40,
      43,    46,    51,    54,    56,    58,    60,    62,    64,    66,
     159,    94,   205,     0,     0,     0,     0,     0,     0,   189,
       0,     0,   189,     0,     2,    79,   188,   185,   186,   171,
     172,   183,     0,   181,   173,     0,   174,   175,   176,   133,
     154,   143,     0,   148,   150,   156,     0,   147,   146,   131,
       0,   118,     0,     0,    23,    24,     0,   115,   158,   115,
       0,     0,     0,     0,   165,     0,     0,   167,     0,    26,
      14,    15,     0,    21,     0,     0,    68,    72,    73,    69,
      70,    71,    75,    74,    78,    76,    77,     0,    34,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,   189,     0,   198,     0,     0,   189,     0,
     199,   189,     0,   182,   180,   187,   152,   138,     0,     0,
     139,     0,     0,    29,   130,     0,   124,   119,   122,     0,
       5,   114,   112,   113,     0,     0,   170,   160,   166,   162,
     164,   168,     0,    13,    20,     0,    18,     0,    12,    67,
      37,    38,    39,    41,    42,    44,    45,    49,    50,    47,
      48,    52,    53,    55,    57,    59,    61,     0,    63,     0,
       0,   189,   179,     0,     0,   197,   189,     0,   200,   177,
      80,   149,   151,   155,     0,     0,   137,   134,     0,   166,
      35,   169,   161,     0,    27,     0,    11,    10,     0,   189,
     189,   178,   189,     0,     0,   189,   135,   136,     0,   163,
      19,    65,   191,   192,   193,     0,   189,     0,    16,   166,
     189,     0,     0,   189,    17,   190,   194,   189,     0,   196,
     189,   195
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,    95,   254,   255,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     125,   187,   126,   212,    23,    51,    46,    41,    42,    43,
      25,    26,   158,   242,    40,    27,    74,    75,    28,    29,
      30,   235,    56,    31,    32,    37,    38,   142,   143,   144,
     145,   146,   160,   111,   163,   164,   165,   166,   167,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      33,    34,    35,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -237
static const yytype_int16 yypact[] =
{
     274,   102,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,   -36,
    -237,  -237,  -237,  -237,    36,   732,   732,  -237,   732,   732,
     732,  -237,     1,   615,  -237,  -237,  -237,   102,    32,    82,
      86,    63,   116,  -237,   652,  -237,  -237,  -237,  -237,  -237,
    -237,    36,   732,   124,    32,  -237,    38,  -237,  -237,  -237,
    -237,    47,    32,  -237,   454,   124,   165,  -237,   217,  -237,
     169,   694,   122,   182,    22,  -237,  -237,   117,   117,   376,
      26,   544,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,   175,   375,   556,  -237,    69,
     -21,   100,   214,   144,   151,   157,   162,   190,    97,  -237,
    -237,  -237,  -237,   209,   211,   556,   206,   216,   213,   445,
     141,   223,   556,   218,   225,  -237,   191,  -237,  -237,  -237,
    -237,   217,   232,  -237,  -237,   230,  -237,  -237,  -237,  -237,
    -237,     6,   237,   199,  -237,   200,   244,   102,   176,   564,
     556,  -237,    -8,   376,  -237,  -237,     7,   749,  -237,   749,
     245,   556,   166,    30,  -237,   454,    35,  -237,   376,  -237,
    -237,  -237,   170,   556,   556,   202,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,   556,  -237,  -237,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,  -237,   288,   445,   556,  -237,   180,   289,   307,   290,
    -237,   445,   556,  -237,  -237,  -237,  -237,  -237,   673,   224,
    -237,   556,   556,   301,  -237,   303,  -237,  -237,  -237,   294,
    -237,  -237,  -237,  -237,   466,   305,  -237,  -237,    56,  -237,
    -237,  -237,   310,  -237,   270,   312,  -237,    14,  -237,  -237,
    -237,  -237,  -237,    69,    69,   -21,   -21,   100,   100,   100,
     100,   214,   214,   144,   151,   157,   162,     8,   190,     9,
      10,   445,  -237,    11,   314,  -237,   556,   308,  -237,  -237,
    -237,  -237,  -237,  -237,   311,   335,  -237,  -237,   339,    26,
    -237,  -237,  -237,   454,   339,   556,  -237,  -237,   556,   445,
     445,  -237,   445,   556,   340,   556,  -237,  -237,    33,  -237,
    -237,  -237,   282,  -237,  -237,    12,   556,   342,  -237,    77,
     445,   343,   374,   556,  -237,  -237,  -237,   445,   377,  -237,
     445,  -237
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,  -237,  -237,  -237,  -237,   -53,  -237,   -87,   -10,
      16,    67,     2,   181,   183,   184,   185,   178,  -237,  -108,
     -64,  -237,   -78,   -51,   -17,     5,    99,  -237,  -237,   326,
    -237,   -76,   -89,   231,  -237,  -237,  -237,   240,    28,  -237,
     -15,  -237,  -237,   356,  -237,   328,   -61,  -237,  -237,   186,
    -237,  -237,   -99,  -149,   112,  -237,  -236,  -237,   246,  -115,
    -237,    19,  -237,  -237,   285,  -237,  -116,  -237,  -237,  -237,
    -237,   380,  -237,  -237,   373
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -211
static const yytype_int16 yytable[] =
{
     110,   156,   237,   157,   216,    24,   219,   211,    54,    44,
     189,   149,   303,    50,  -153,   240,   249,   309,   310,   312,
     331,   308,   193,   194,   154,   155,   307,    50,   169,    36,
      45,    45,   151,    45,    45,    67,    66,   161,    24,    70,
     247,   250,   211,   328,   188,    71,   161,    66,     1,    72,
     -92,   127,    39,   211,   239,  -153,   222,   222,   222,   222,
     222,   222,   188,   222,   162,    59,   302,   161,   241,   252,
     241,   152,    69,   162,     1,   156,   141,   157,     1,   248,
      73,   157,   329,   157,   112,   234,   231,   334,   161,    55,
     156,  -116,   157,   303,   162,    61,   257,   188,   282,   236,
      36,   110,   287,   260,   261,   262,   289,   159,   188,   256,
     245,   190,    62,   207,   127,   162,   191,   192,   195,   196,
      77,    78,   208,   259,   153,    47,   226,    48,    49,   277,
      63,   279,   280,    68,    81,    73,   283,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   319,   188,    82,   300,   290,    83,
      84,    85,    86,    87,   201,   202,   311,   294,   295,    18,
     314,    64,    21,    22,   147,    36,    59,   139,   170,   171,
     172,   159,   173,   263,   264,   159,   174,   159,   150,    18,
     203,   188,    21,    22,   322,   323,   159,   324,   204,   327,
     321,   286,   205,   271,   272,    88,    89,    90,    91,    92,
     332,   265,   266,   175,   206,   335,   209,   338,   210,   213,
      77,    78,   339,   214,    79,   341,    68,   215,   232,   217,
     218,  -189,   220,   141,    81,   325,   197,   198,   221,   110,
     222,   320,   224,    18,   225,   227,    21,    22,   228,   229,
     199,   200,   230,   244,   246,   188,    82,   284,   253,    83,
      84,    85,    86,    87,   267,   268,   269,   270,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   113,
     258,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   281,   298,   285,   288,   124,    89,    90,    91,    92,
      77,    78,   293,   296,    79,   297,     1,   301,   304,   305,
     306,   313,   315,   316,    81,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    82,   317,   299,    83,
      84,    85,    86,    87,   326,   330,   333,   336,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    77,
      78,   176,   337,    79,   273,   340,   278,   274,    76,   275,
     243,   276,   238,    81,    60,    88,    89,    90,    91,    92,
     148,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   318,   251,    58,   292,    82,   223,    65,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,    21,    22,    77,    78,
       0,     0,    79,     0,    68,     0,     0,    77,    78,     0,
       0,    79,    81,    80,    88,    89,    90,    91,    92,    77,
      78,    81,     0,    79,     0,   299,     0,     0,     0,     0,
       0,     0,     0,    81,    82,     0,     0,    83,    84,    85,
      86,    87,     0,    82,     0,     0,    83,    84,    85,    86,
      87,     0,     0,     0,     0,    82,     0,     0,    83,    84,
      85,    86,    87,     0,     0,     0,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
       0,     0,     0,   124,    89,    90,    91,    92,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    77,    78,     0,
       0,   168,     0,     0,    88,    89,    90,    91,    92,    77,
      78,    81,     0,    79,     0,     0,     0,    77,    78,     0,
       0,    79,     0,    81,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    82,     0,     0,    83,    84,    85,    86,
      87,     0,     0,     0,     0,    82,     0,     0,    83,    84,
      85,    86,    87,    82,     0,     0,   233,    84,    85,    86,
      87,     0,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,    88,    89,    90,    91,    92,     1,    64,     0,
       0,  -210,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,   291,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   140,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,    21,
      22
};

static const yytype_int16 yycheck[] =
{
      64,    79,    10,    79,   119,     0,   122,   115,     7,    24,
      97,    72,   248,    30,     8,     8,   165,     8,     8,     8,
       8,    13,    43,    44,    77,    78,    12,    44,    81,     1,
      25,    26,    10,    28,    29,    52,    51,    11,    33,    54,
      10,     6,   150,    10,    97,     7,    11,    62,    42,    11,
      14,    68,    88,   161,   153,    49,    49,    49,    49,    49,
      49,    49,   115,    49,    38,    37,    10,    11,   157,   168,
     159,    49,    53,    38,    42,   153,    71,   153,    42,    49,
      88,   157,    49,   159,    65,   149,   147,    10,    11,    88,
     168,     9,   168,   329,    38,     9,   174,   150,   213,   150,
      72,   165,   218,   190,   191,   192,   221,    79,   161,   173,
     161,    42,    49,    16,   131,    38,    47,    48,    18,    19,
       3,     4,    25,   187,     7,    26,   141,    28,    29,   207,
      14,   209,   210,     9,    17,    88,   214,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   303,   208,    39,   244,   222,    42,
      43,    44,    45,    46,    20,    21,   281,   231,   232,    67,
     286,     6,    70,    71,    52,   147,   148,     8,     3,     4,
       5,   153,     7,   193,   194,   157,    11,   159,     6,    67,
      39,   244,    70,    71,   309,   310,   168,   312,    41,   315,
     308,   218,    40,   201,   202,    88,    89,    90,    91,    92,
     326,   195,   196,    38,    24,   330,     7,   333,     7,    13,
       3,     4,   337,     7,     7,   340,     9,    14,    52,    88,
       7,    14,    14,   228,    17,   313,    22,    23,    13,   303,
      49,   305,    10,    67,    14,     8,    70,    71,    49,    49,
      36,    37,     8,     8,    88,   308,    39,    77,    88,    42,
      43,    44,    45,    46,   197,   198,   199,   200,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      88,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    13,     8,    14,    14,    88,    89,    90,    91,    92,
       3,     4,    88,    12,     7,    12,    42,    12,     8,    49,
       8,     7,    14,    12,    17,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    39,    12,     9,    42,
      43,    44,    45,    46,    14,    73,    14,    14,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     3,
       4,     6,     8,     7,   203,     8,   208,   204,    62,   205,
     159,   206,   152,    17,    38,    88,    89,    90,    91,    92,
      72,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   299,   166,    33,   228,    39,   131,    44,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,     3,     4,
      -1,    -1,     7,    -1,     9,    -1,    -1,     3,     4,    -1,
      -1,     7,    17,     9,    88,    89,    90,    91,    92,     3,
       4,    17,    -1,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    39,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    39,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,     3,     4,    -1,
      -1,     7,    -1,    -1,    88,    89,    90,    91,    92,     3,
       4,    17,    -1,     7,    -1,    -1,    -1,     3,     4,    -1,
      -1,     7,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    39,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    39,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    42,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,   117,   118,   123,   124,   128,   131,   132,
     133,   136,   137,   163,   164,   165,   131,   138,   139,    88,
     127,   120,   121,   122,   133,   118,   119,   119,   119,   119,
     117,   118,   166,   167,     7,    88,   135,     0,   164,   131,
     136,     9,    49,    14,     6,   167,   133,   117,     9,   154,
     133,     7,    11,    88,   129,   130,   122,     3,     4,     7,
       9,    17,    39,    42,    43,    44,    45,    46,    88,    89,
      90,    91,    92,    94,    95,    96,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   146,   154,    72,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    88,   113,   115,   117,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,     8,
      88,   118,   140,   141,   142,   143,   144,    52,   138,   139,
       6,    10,    49,     7,    99,    99,   115,   124,   125,   131,
     145,    11,    38,   147,   148,   149,   150,   151,     7,    99,
       3,     4,     5,     7,    11,    38,     6,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   114,    99,   101,
      42,    47,    48,    43,    44,    18,    19,    22,    23,    36,
      37,    20,    21,    39,    41,    40,    24,    16,    25,     7,
       7,   112,   116,    13,     7,    14,   152,    88,     7,   159,
      14,    13,    49,   157,    10,    14,   133,     8,    49,    49,
       8,   139,    52,    42,   113,   134,   116,    10,   130,   145,
       8,   125,   126,   126,     8,   116,    88,    10,    49,   146,
       6,   151,   145,    88,    97,    98,   113,   115,    88,   113,
     101,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   106,   107,   108,   109,   115,   110,   115,
     115,    13,   152,   115,    77,    14,   117,   159,    14,   152,
     113,    15,   142,    88,   113,   113,    12,    12,     8,     9,
     101,    12,    10,   149,     8,    49,     8,    12,    13,     8,
       8,   152,     8,     7,   159,    14,    12,    12,   147,   146,
     113,   112,   152,   152,   152,   115,    14,   159,    10,    49,
      73,     8,   159,    14,    10,   152,    14,     8,   159,   152,
       8,   152
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
#line 55 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("primary_expression -> identifier\n"); }
    break;

  case 3:
#line 58 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("primary_expression -> constant\n"); }
    break;

  case 4:
#line 61 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("primary_expression -> string_literal\n"); }
    break;

  case 5:
#line 64 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("primary_expression -> ( expression )\n"); }
    break;

  case 9:
#line 75 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> primary_expression\n"); }
    break;

  case 10:
#line 78 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> postfix_expression [ expression ]\n"); }
    break;

  case 11:
#line 81 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }
    break;

  case 12:
#line 84 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> postfix_expression . identifier\n"); }
    break;

  case 13:
#line 87 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> postfix_expression -> identifier\n"); }
    break;

  case 14:
#line 90 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> postfix_expression ++\n"); }
    break;

  case 15:
#line 93 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> postfix_expression --\n"); }
    break;

  case 16:
#line 96 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> ( type_name ) { initializer_list }\n"); }
    break;

  case 17:
#line 99 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
    break;

  case 18:
#line 104 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("argument_expression_list -> assignment_expression\n"); }
    break;

  case 19:
#line 107 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
    break;

  case 20:
#line 113 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("argument_expression_list_opt -> argument_expression_list\n"); }
    break;

  case 21:
#line 115 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("argument_expression_list_opt -> epsilon\n");}
    break;

  case 22:
#line 120 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_expression -> postfix_expression\n"); }
    break;

  case 23:
#line 123 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_expression -> ++ unary_expression\n"); }
    break;

  case 24:
#line 126 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_expression -> -- unary_expression\n"); }
    break;

  case 25:
#line 129 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_expression -> unary_operator cast_expression\n"); }
    break;

  case 26:
#line 132 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_expression -> sizeof unary_expression\n"); }
    break;

  case 27:
#line 135 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_expression -> sizeof ( type_name )\n"); }
    break;

  case 28:
#line 140 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_operator -> &\n"); }
    break;

  case 29:
#line 143 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_operator -> *\n"); }
    break;

  case 30:
#line 146 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_operator -> +\n"); }
    break;

  case 31:
#line 149 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_operator -> -\n"); }
    break;

  case 32:
#line 152 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_operator -> ~\n"); }
    break;

  case 33:
#line 155 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("unary_operator -> !\n"); }
    break;

  case 34:
#line 160 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("cast_expression -> unary_expression\n"); }
    break;

  case 35:
#line 163 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("cast_expression -> ( type_name ) cast_expression\n"); }
    break;

  case 36:
#line 168 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("multiplicative_expression -> cast_expression\n"); }
    break;

  case 37:
#line 171 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }
    break;

  case 38:
#line 174 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }
    break;

  case 39:
#line 177 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("multiplicative_expression -> multiplicative_expression % cast_expression\n"); }
    break;

  case 40:
#line 182 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("additive_expression -> multiplicative_expression\n"); }
    break;

  case 41:
#line 185 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("additive_expression -> additive_expression + multiplicative_expression\n"); }
    break;

  case 42:
#line 188 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("additive_expression -> additive_expression - multiplicative_expression\n"); }
    break;

  case 43:
#line 193 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("shift_expression -> additive_expression\n"); }
    break;

  case 44:
#line 196 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("shift_expression -> shift_expression << additive_expression\n"); }
    break;

  case 45:
#line 199 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("shift_expression -> shift_expression >> additive_expression\n"); }
    break;

  case 46:
#line 204 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("relational_expression -> shift_expression\n"); }
    break;

  case 47:
#line 207 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("relational_expression -> relational_expression < shift_expression\n"); }
    break;

  case 48:
#line 210 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("relational_expression -> relational_expression > shift_expression\n"); }
    break;

  case 49:
#line 213 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("relational_expression -> relational_expression <= shift_expression\n"); }
    break;

  case 50:
#line 216 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("relational_expression -> relational_expression >= shift_expression\n"); }
    break;

  case 51:
#line 221 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("equality_expression -> relational_expression\n"); }
    break;

  case 52:
#line 224 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("equality_expression -> equality_expression == relational_expression\n"); }
    break;

  case 53:
#line 227 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("equality_expression -> equality_expression != relational_expression\n"); }
    break;

  case 54:
#line 232 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("and_expression -> equality_expression\n"); }
    break;

  case 55:
#line 235 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("and_expression -> and_expression & equality_expression\n"); }
    break;

  case 56:
#line 240 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("exclusive_or_expression -> and_expression\n"); }
    break;

  case 57:
#line 243 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); }
    break;

  case 58:
#line 248 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("inclusive_or_expression -> exclusive_or_expression\n"); }
    break;

  case 59:
#line 251 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); }
    break;

  case 60:
#line 256 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("logical_and_expression -> inclusive_or_expression\n"); }
    break;

  case 61:
#line 259 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); }
    break;

  case 62:
#line 264 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("logical_or_expression -> logical_and_expression\n"); }
    break;

  case 63:
#line 267 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("logical_or_expression -> logical_or_expression || logical_and_expression\n"); }
    break;

  case 64:
#line 272 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("conditional_expression -> logical_or_expression\n"); }
    break;

  case 65:
#line 275 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); }
    break;

  case 66:
#line 280 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_expression -> conditional_expression\n"); }
    break;

  case 67:
#line 283 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
    break;

  case 68:
#line 288 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> =\n"); }
    break;

  case 69:
#line 291 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> *=\n"); }
    break;

  case 70:
#line 294 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> /=\n"); }
    break;

  case 71:
#line 297 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> %=\n"); }
    break;

  case 72:
#line 300 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> +=\n"); }
    break;

  case 73:
#line 303 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> -=\n"); }
    break;

  case 74:
#line 306 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> <<=\n"); }
    break;

  case 75:
#line 309 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> >>=\n"); }
    break;

  case 76:
#line 312 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> &=\n"); }
    break;

  case 77:
#line 315 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> ^=\n"); }
    break;

  case 78:
#line 318 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_operator -> |=\n"); }
    break;

  case 79:
#line 323 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("expression -> assignment_expression\n"); }
    break;

  case 80:
#line 326 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("expression -> expression , assignment_expression\n"); }
    break;

  case 81:
#line 331 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("constant_expression -> conditional_expression\n"); }
    break;

  case 82:
#line 337 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
    break;

  case 83:
#line 342 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }
    break;

  case 84:
#line 345 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }
    break;

  case 85:
#line 348 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }
    break;

  case 86:
#line 351 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
    break;

  case 87:
#line 356 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_specifiers_opt -> declaration_specifiers\n");}
    break;

  case 88:
#line 358 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_specifiers_opt -> epsilon\n"); }
    break;

  case 89:
#line 363 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("init_declarator_list -> init_declarator\n"); }
    break;

  case 90:
#line 366 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("init_declarator_list -> init_declarator_list , init_declarator\n"); }
    break;

  case 91:
#line 371 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("init_declarator_list_opt -> init_declarator_list\n");}
    break;

  case 92:
#line 373 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("init_declarator_list_opt -> epsilon\n"); }
    break;

  case 93:
#line 378 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("init_declarator -> declarator\n"); }
    break;

  case 94:
#line 381 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("init_declarator -> declarator = initializer\n"); }
    break;

  case 95:
#line 386 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("storage_class_specifier -> extern\n"); }
    break;

  case 96:
#line 389 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("storage_class_specifier -> static\n"); }
    break;

  case 97:
#line 392 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("storage_class_specifier -> auto\n"); }
    break;

  case 98:
#line 395 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("storage_class_specifier -> register\n"); }
    break;

  case 99:
#line 400 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> void\n"); }
    break;

  case 100:
#line 403 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> char\n"); }
    break;

  case 101:
#line 406 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> short\n"); }
    break;

  case 102:
#line 409 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> int\n"); }
    break;

  case 103:
#line 412 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> long\n"); }
    break;

  case 104:
#line 415 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> float\n"); }
    break;

  case 105:
#line 418 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> double\n"); }
    break;

  case 106:
#line 421 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> signed\n"); }
    break;

  case 107:
#line 424 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> unsigned\n"); }
    break;

  case 108:
#line 427 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> _Bool\n"); }
    break;

  case 109:
#line 430 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> _Complex\n"); }
    break;

  case 110:
#line 433 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> _Imaginary\n"); }
    break;

  case 111:
#line 436 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_specifier -> enum_specifier\n"); }
    break;

  case 112:
#line 441 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }
    break;

  case 113:
#line 444 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
    break;

  case 114:
#line 449 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); }
    break;

  case 115:
#line 451 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("specifier_qualifier_list_opt -> epsilon\n");}
    break;

  case 116:
#line 456 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("identifier_opt -> identifier\n"); }
    break;

  case 117:
#line 458 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("identifier_opt -> epsilon\n");}
    break;

  case 118:
#line 463 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }
    break;

  case 119:
#line 466 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }
    break;

  case 120:
#line 469 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("enum_specifier -> enum identifier\n"); }
    break;

  case 121:
#line 473 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("enumerator_list -> enumerator\n"); }
    break;

  case 122:
#line 476 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("enumerator_list -> enumerator_list , enumerator\n"); }
    break;

  case 123:
#line 481 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("enumerator -> enumeration_constant\n"); }
    break;

  case 124:
#line 484 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("enumerator -> enumeration_constant = constant_expression\n"); }
    break;

  case 125:
#line 489 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_qualifier -> const\n"); }
    break;

  case 126:
#line 492 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_qualifier -> restrict\n"); }
    break;

  case 127:
#line 495 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_qualifier -> volatile\n"); }
    break;

  case 128:
#line 500 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("function_specifier -> inline\n"); }
    break;

  case 129:
#line 505 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declarator -> pointer_opt direct_declarator\n"); }
    break;

  case 130:
#line 510 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_expression_opt -> assignment_expression\n"); }
    break;

  case 131:
#line 512 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("assignment_expression_opt -> epsilon\n");}
    break;

  case 132:
#line 517 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> identifier\n"); }
    break;

  case 133:
#line 520 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> ( declarator )\n"); }
    break;

  case 134:
#line 523 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }
    break;

  case 135:
#line 526 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }
    break;

  case 136:
#line 529 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }
    break;

  case 137:
#line 532 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }
    break;

  case 138:
#line 535 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }
    break;

  case 139:
#line 538 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
    break;

  case 140:
#line 543 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("pointer -> * type_qualifier_list_opt\n"); }
    break;

  case 141:
#line 546 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("pointer -> * type_qualifier_list_opt pointer\n"); }
    break;

  case 142:
#line 551 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("pointer_opt -> pointer\n");}
    break;

  case 143:
#line 553 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("pointer_opt -> epsilon\n"); }
    break;

  case 144:
#line 558 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_qualifier_list -> type_qualifier\n"); }
    break;

  case 145:
#line 561 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
    break;

  case 146:
#line 566 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_qualifier_list_opt -> type_qualifier_list\n");}
    break;

  case 147:
#line 568 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_qualifier_list_opt -> epsilon\n");}
    break;

  case 148:
#line 573 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("parameter_type_list -> parameter_list\n"); }
    break;

  case 149:
#line 576 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("parameter_type_list -> parameter_list , ...\n"); }
    break;

  case 150:
#line 581 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("parameter_list -> parameter_declaration\n"); }
    break;

  case 151:
#line 584 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("parameter_list -> parameter_list , parameter_declaration\n"); }
    break;

  case 152:
#line 589 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("parameter_declaration -> declaration_specifiers declarator\n"); }
    break;

  case 153:
#line 592 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("parameter_declaration -> declaration_specifiers\n"); }
    break;

  case 154:
#line 598 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("identifier_list -> identifier\n"); }
    break;

  case 155:
#line 601 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("identifier_list -> identifier_list , identifier\n"); }
    break;

  case 156:
#line 606 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("identifier_list_opt -> identifier_list\n"); }
    break;

  case 157:
#line 608 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("identifier_list_opt -> epsilon\n");}
    break;

  case 158:
#line 613 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("type_name -> specifier_qualifier_list\n"); }
    break;

  case 159:
#line 618 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("initializer -> assignment_expression\n"); }
    break;

  case 160:
#line 621 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("initializer -> { initializer_list }\n"); }
    break;

  case 161:
#line 624 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("initializer -> { initializer_list , }\n"); }
    break;

  case 162:
#line 629 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("initializer_list -> designation_opt initializer\n"); }
    break;

  case 163:
#line 632 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("initializer_list -> initializer_list , designation_opt initializer\n"); }
    break;

  case 164:
#line 637 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("designation -> designator_list =\n"); }
    break;

  case 165:
#line 642 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("designation_opt -> designation\n");}
    break;

  case 166:
#line 644 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("designation_opt -> epsilon\n");}
    break;

  case 167:
#line 649 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("designator_list -> designator\n"); }
    break;

  case 168:
#line 652 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("designator_list -> designator_list designator\n"); }
    break;

  case 169:
#line 657 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("designator -> [ constant_expression ]\n"); }
    break;

  case 170:
#line 660 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("designator -> . identifier\n"); }
    break;

  case 171:
#line 666 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("statement -> labeled_statement\n"); }
    break;

  case 172:
#line 669 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("statement -> compound_statement\n"); }
    break;

  case 173:
#line 672 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("statement -> expression_statement\n"); }
    break;

  case 174:
#line 675 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("statement -> selection_statement\n"); }
    break;

  case 175:
#line 678 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("statement -> iteration_statement\n"); }
    break;

  case 176:
#line 681 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("statement -> jump_statement\n"); }
    break;

  case 177:
#line 686 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("labeled_statement -> identifier : statement\n"); }
    break;

  case 178:
#line 689 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("labeled_statement -> case constant_expression : statement\n"); }
    break;

  case 179:
#line 692 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("labeled_statement -> default : statement\n"); }
    break;

  case 180:
#line 697 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("compound_statement -> { block_item_list_opt }\n"); }
    break;

  case 181:
#line 702 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("block_item_list -> block_item\n"); }
    break;

  case 182:
#line 705 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("block_item_list -> block_item_list block_item\n"); }
    break;

  case 185:
#line 715 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("block_item -> declaration\n"); }
    break;

  case 186:
#line 718 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("block_item -> statement\n"); }
    break;

  case 187:
#line 723 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("expression_opt -> expression ;\n"); }
    break;

  case 190:
#line 733 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("selection_statement -> if ( expression ) statement else statement\n"); }
    break;

  case 191:
#line 736 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("selection_statement -> if ( expression ) statement\n"); }
    break;

  case 192:
#line 739 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("selection_statement -> switch ( expression ) statement\n"); }
    break;

  case 193:
#line 744 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("iteration_statement -> while ( expression ) statement\n"); }
    break;

  case 194:
#line 747 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("iteration_statement -> do statement while ( expression ) ;\n"); }
    break;

  case 195:
#line 750 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
    break;

  case 196:
#line 753 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
    break;

  case 197:
#line 758 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("jump_statement -> goto identifier ;\n"); }
    break;

  case 198:
#line 761 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("jump_statement -> continue ;\n"); }
    break;

  case 199:
#line 764 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("jump_statement -> break ;\n"); }
    break;

  case 200:
#line 767 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("jump_statement -> return expression_opt ;\n"); }
    break;

  case 201:
#line 773 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("translation_unit -> external_declaration\n"); }
    break;

  case 202:
#line 776 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("translation_unit -> translation_unit external_declaration\n"); }
    break;

  case 203:
#line 781 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("external_declaration -> function_definition\n"); }
    break;

  case 204:
#line 784 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("external_declaration -> declaration\n"); }
    break;

  case 205:
#line 789 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }
    break;

  case 206:
#line 792 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("function_definition -> declarator declaration_list_opt compound_statement\n"); }
    break;

  case 207:
#line 797 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_list -> declaration\n"); }
    break;

  case 208:
#line 800 "asgn4_21CS10026_21CS30009.y"
    { yyinfo("declaration_list -> declaration_list declaration\n"); }
    break;


/* Line 1267 of yacc.c.  */
#line 2971 "y.tab.c"
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


#line 809 "asgn4_21CS10026_21CS30009.y"


void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}

void yyinfo(const char* s) {
    printf("%s", s);
}
