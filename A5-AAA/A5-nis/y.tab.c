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
     AUTO = 258,
     BREAK = 259,
     CASE = 260,
     CHARTYPE = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     DO = 265,
     DOUBLE = 266,
     ELSE = 267,
     ENUM = 268,
     EXTERN = 269,
     FLOATTYPE = 270,
     FOR = 271,
     GOTO = 272,
     IF = 273,
     INLINE = 274,
     INTTYPE = 275,
     LONG = 276,
     REGISTER = 277,
     RESTRICT = 278,
     RETURN = 279,
     SHORT = 280,
     SIGNED = 281,
     SIZEOF = 282,
     STATIC = 283,
     STRUCT = 284,
     SWITCH = 285,
     TYPEDEF = 286,
     UNION = 287,
     UNSIGNED = 288,
     VOIDTYPE = 289,
     VOLATILE = 290,
     WHILE = 291,
     _BOOL = 292,
     _COMPLEX = 293,
     _IMAGINARY = 294,
     IDENTIFIER = 295,
     INTEGER_CONSTANT = 296,
     FLOATING_CONSTANT = 297,
     CHARACTER_CONSTANT = 298,
     STRING_LITERAL = 299,
     LEFT_SQUARE_BRACKET = 300,
     INCREMENT = 301,
     SLASH = 302,
     QUESTION_MARK = 303,
     ASSIGNMENT = 304,
     COMMA = 305,
     RIGHT_SQUARE_BRACKET = 306,
     LEFT_PARENTHESES = 307,
     LEFT_CURLY_BRACKET = 308,
     RIGHT_CURLY_BRACKET = 309,
     DOT = 310,
     ARROW = 311,
     ASTERISK = 312,
     PLUS = 313,
     MINUS = 314,
     TILDE = 315,
     EXCLAMATION = 316,
     MODULO = 317,
     LEFT_SHIFT = 318,
     RIGHT_SHIFT = 319,
     LESS_THAN = 320,
     GREATER_THAN = 321,
     LESS_EQUAL_THAN = 322,
     GREATER_EQUAL_THAN = 323,
     COLON = 324,
     SEMI_COLON = 325,
     ELLIPSIS = 326,
     ASTERISK_ASSIGNMENT = 327,
     SLASH_ASSIGNMENT = 328,
     MODULO_ASSIGNMENT = 329,
     PLUS_ASSIGNMENT = 330,
     MINUS_ASSIGNMENT = 331,
     LEFT_SHIFT_ASSIGNMENT = 332,
     HASH = 333,
     DECREMENT = 334,
     RIGHT_PARENTHESES = 335,
     BITWISE_AND = 336,
     EQUALS = 337,
     BITWISE_XOR = 338,
     BITWISE_OR = 339,
     LOGICAL_AND = 340,
     LOGICAL_OR = 341,
     RIGHT_SHIFT_ASSIGNMENT = 342,
     NOT_EQUALS = 343,
     BITWISE_AND_ASSIGNMENT = 344,
     BITWISE_OR_ASSIGNMENT = 345,
     BITWISE_XOR_ASSIGNMENT = 346,
     INVALID_TOKEN = 347,
     THEN = 348
   };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHARTYPE 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOATTYPE 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INTTYPE 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOIDTYPE 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define CHARACTER_CONSTANT 298
#define STRING_LITERAL 299
#define LEFT_SQUARE_BRACKET 300
#define INCREMENT 301
#define SLASH 302
#define QUESTION_MARK 303
#define ASSIGNMENT 304
#define COMMA 305
#define RIGHT_SQUARE_BRACKET 306
#define LEFT_PARENTHESES 307
#define LEFT_CURLY_BRACKET 308
#define RIGHT_CURLY_BRACKET 309
#define DOT 310
#define ARROW 311
#define ASTERISK 312
#define PLUS 313
#define MINUS 314
#define TILDE 315
#define EXCLAMATION 316
#define MODULO 317
#define LEFT_SHIFT 318
#define RIGHT_SHIFT 319
#define LESS_THAN 320
#define GREATER_THAN 321
#define LESS_EQUAL_THAN 322
#define GREATER_EQUAL_THAN 323
#define COLON 324
#define SEMI_COLON 325
#define ELLIPSIS 326
#define ASTERISK_ASSIGNMENT 327
#define SLASH_ASSIGNMENT 328
#define MODULO_ASSIGNMENT 329
#define PLUS_ASSIGNMENT 330
#define MINUS_ASSIGNMENT 331
#define LEFT_SHIFT_ASSIGNMENT 332
#define HASH 333
#define DECREMENT 334
#define RIGHT_PARENTHESES 335
#define BITWISE_AND 336
#define EQUALS 337
#define BITWISE_XOR 338
#define BITWISE_OR 339
#define LOGICAL_AND 340
#define LOGICAL_OR 341
#define RIGHT_SHIFT_ASSIGNMENT 342
#define NOT_EQUALS 343
#define BITWISE_AND_ASSIGNMENT 344
#define BITWISE_OR_ASSIGNMENT 345
#define BITWISE_XOR_ASSIGNMENT 346
#define INVALID_TOKEN 347
#define THEN 348




/* Copy the first part of user declarations.  */
#line 1 "ass5_19CS30031_19CS10070.y"

    #include "ass5_19CS30031_19CS10070_translator.h"
    extern int yylex();
    extern int lineCount;
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
#define YYLAST   1098

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
     164,     0,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    52,   117,    80,    -1,    95,    -1,    96,
      45,   117,    51,    -1,    96,    52,    97,    80,    -1,    96,
      55,    40,    -1,    96,    56,    40,    -1,    96,    46,    -1,
      96,    79,    -1,    52,   145,    80,    53,   147,    54,    -1,
      52,   145,    80,    53,   147,    50,    54,    -1,    98,    -1,
      -1,   115,    -1,    98,    50,   115,    -1,    96,    -1,    46,
      99,    -1,    79,    99,    -1,   100,   101,    -1,    27,    99,
      -1,    27,    52,   145,    80,    -1,    81,    -1,    57,    -1,
      58,    -1,    59,    -1,    60,    -1,    61,    -1,    99,    -1,
      52,   145,    80,   101,    -1,   101,    -1,   102,    57,   101,
      -1,   102,    47,   101,    -1,   102,    62,   101,    -1,   102,
      -1,   103,    58,   102,    -1,   103,    59,   102,    -1,   103,
      -1,   104,    63,   103,    -1,   104,    64,   103,    -1,   104,
      -1,   105,    65,   104,    -1,   105,    66,   104,    -1,   105,
      67,   104,    -1,   105,    68,   104,    -1,   105,    -1,   106,
      82,   105,    -1,   106,    88,   105,    -1,   106,    -1,   107,
      81,   106,    -1,   107,    -1,   108,    83,   107,    -1,   108,
      -1,   109,    84,   108,    -1,    -1,    -1,   109,    -1,   112,
      85,   110,   109,    -1,   112,    -1,   113,    86,   110,   112,
      -1,   113,    -1,   113,   111,    48,   110,   117,   111,    69,
     110,   114,    -1,   114,    -1,    99,   116,   115,    -1,    49,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    87,    -1,    89,    -1,    91,    -1,    90,
      -1,   115,    -1,   117,    50,   115,    -1,   114,    -1,   121,
     120,    70,    -1,   123,    -1,    -1,   125,   122,    -1,   126,
     122,    -1,   133,   122,    -1,   134,   122,    -1,   121,    -1,
      -1,   124,    -1,   123,    50,   124,    -1,   135,    -1,   135,
      49,   146,    -1,    14,    -1,    28,    -1,     3,    -1,    22,
      -1,    34,    -1,     6,    -1,    25,    -1,    20,    -1,    21,
      -1,    15,    -1,    11,    -1,    26,    -1,    33,    -1,    37,
      -1,    38,    -1,    39,    -1,   129,    -1,   126,   128,    -1,
     133,   128,    -1,   127,    -1,    -1,    13,   130,    53,   131,
      54,    -1,    13,   130,    53,   131,    50,    54,    -1,    13,
      40,    -1,    40,    -1,    -1,   132,    -1,   131,    50,   132,
      -1,    40,    -1,    40,    49,   118,    -1,     7,    -1,    23,
      -1,    35,    -1,    19,    -1,   139,   137,    -1,   137,    -1,
      -1,    40,    -1,    52,   135,    80,    -1,   137,    45,   140,
     115,    51,    -1,   137,    45,   140,    51,    -1,   137,    45,
     115,    51,    -1,   137,    45,    51,    -1,   137,    45,    28,
     140,   115,    51,    -1,   137,    45,    28,   115,    51,    -1,
     137,    45,   140,    28,   115,    51,    -1,   137,    45,   140,
      57,    51,    -1,   137,    45,    57,    51,    -1,   137,    52,
     136,   141,    80,    -1,   137,    52,   144,    80,    -1,   137,
      52,   136,    80,    -1,   140,    -1,    -1,    57,   138,    -1,
      57,   138,   139,    -1,   133,    -1,   140,   133,    -1,   142,
      -1,   142,    50,    71,    -1,   143,    -1,   142,    50,   143,
      -1,   121,   135,    -1,   121,    -1,    40,    -1,   144,    50,
      40,    -1,   127,    -1,   115,    -1,    53,   147,    54,    -1,
      53,   147,    50,    54,    -1,   148,   146,    -1,   147,    50,
     148,   146,    -1,   149,    -1,    -1,   150,    49,    -1,   151,
      -1,   150,   151,    -1,    45,   118,    51,    -1,    55,    40,
      -1,   153,    -1,   155,    -1,   159,    -1,   161,    -1,   162,
      -1,   163,    -1,    40,    69,   152,    -1,     5,   118,    69,
     152,    -1,     9,    69,   152,    -1,    -1,    53,   154,   136,
     156,    54,    -1,   157,    -1,    -1,   158,    -1,   157,   110,
     158,    -1,   119,    -1,   152,    -1,   160,    70,    -1,   117,
      -1,    -1,    18,    52,   117,    80,   110,   152,   111,    -1,
      18,    52,   117,    80,   110,   152,   111,    12,   110,   152,
      -1,    30,    52,   117,    80,   152,    -1,    36,   110,    52,
     117,    80,   110,   152,    -1,    10,   110,   152,   110,    36,
      52,   117,    80,    70,    -1,    16,    52,   160,    70,   110,
     160,    70,   110,   160,   111,    80,   110,   152,    -1,    16,
      52,   119,   160,    70,   160,    80,   152,    -1,    17,    40,
      70,    -1,     8,    70,    -1,     4,    70,    -1,    24,   160,
      70,    -1,   165,    -1,   164,   165,    -1,   166,    -1,   119,
      -1,   121,   135,   167,   136,    53,   156,    54,    -1,   168,
      -1,    -1,   119,    -1,   168,   119,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   209,   209,   216,   223,   230,   237,   244,   252,   261,
     281,   289,   293,   297,   306,   315,   319,   328,   334,   342,
     349,   359,   364,   371,   378,   405,   409,   420,   425,   430,
     435,   440,   445,   453,   458,   480,   497,   520,   543,   569,
     574,   585,   599,   604,   615,   638,   643,   657,   671,   685,
     702,   707,   723,   753,   758,   771,   776,   789,   794,   817,
     824,   866,   871,   885,   890,   904,   909,   929,   934,   955,
     959,   963,   967,   971,   975,   979,   983,   987,   991,   995,
    1002,  1007,  1014,  1023,  1030,  1035,  1041,  1045,  1049,  1053,
    1060,  1065,  1071,  1075,  1082,  1087,  1099,  1103,  1107,  1111,
    1118,  1123,  1128,  1132,  1137,  1141,  1146,  1150,  1154,  1158,
    1162,  1166,  1170,  1177,  1181,  1188,  1193,  1199,  1203,  1207,
    1214,  1219,  1225,  1229,  1236,  1240,  1247,  1251,  1255,  1262,
    1269,  1278,  1285,  1303,  1309,  1314,  1318,  1322,  1340,  1359,
    1363,  1367,  1371,  1375,  1379,  1394,  1398,  1416,  1421,  1456,
    1462,  1471,  1475,  1482,  1486,  1493,  1497,  1504,  1508,  1515,
    1519,  1526,  1533,  1538,  1542,  1549,  1553,  1560,  1565,  1571,
    1578,  1582,  1589,  1593,  1602,  1606,  1611,  1617,  1622,  1627,
    1635,  1639,  1643,  1657,  1668,  1677,  1683,  1690,  1695,  1705,
    1710,  1718,  1726,  1732,  1758,  1766,  1775,  1806,  1816,  1825,
    1836,  1843,  1847,  1851,  1855,  1870,  1874,  1881,  1885,  1893,
    1903,  1908,  1914,  1918
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHARTYPE",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOATTYPE", "FOR", "GOTO", "IF", "INLINE", "INTTYPE", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOIDTYPE",
  "VOLATILE", "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "LEFT_SQUARE_BRACKET", "INCREMENT", "SLASH",
  "QUESTION_MARK", "ASSIGNMENT", "COMMA", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT",
  "ARROW", "ASTERISK", "PLUS", "MINUS", "TILDE", "EXCLAMATION", "MODULO",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_EQUAL_THAN", "GREATER_EQUAL_THAN", "COLON", "SEMI_COLON",
  "ELLIPSIS", "ASTERISK_ASSIGNMENT", "SLASH_ASSIGNMENT",
  "MODULO_ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT",
  "LEFT_SHIFT_ASSIGNMENT", "HASH", "DECREMENT", "RIGHT_PARENTHESES",
  "BITWISE_AND", "EQUALS", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND",
  "LOGICAL_OR", "RIGHT_SHIFT_ASSIGNMENT", "NOT_EQUALS",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_OR_ASSIGNMENT",
  "BITWISE_XOR_ASSIGNMENT", "INVALID_TOKEN", "THEN", "$accept",
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
       0,    98,   101,   126,   106,   121,    96,   105,   129,   103,
     104,    99,   127,   102,   107,    97,   108,   100,   128,   109,
     110,   111,   208,    85,    91,    91,   112,    91,    91,     0,
     205,   207,   119,     0,   133,     0,   148,     0,    84,    92,
      94,   131,     0,    90,    86,    87,    88,    89,     1,   206,
       0,     0,   151,   149,   147,    83,     0,     0,   212,    85,
     132,   210,     0,   132,   130,   124,     0,   122,   134,   150,
     152,    93,    94,     0,     2,     3,     4,     5,     6,     0,
       0,   168,    28,    29,    30,    31,    32,     0,    27,     8,
      21,    33,     0,    35,    39,    42,    45,    50,    53,    55,
      57,    61,    63,    65,    67,   162,    95,     0,   213,     0,
     138,    28,     0,     0,   159,     0,     0,     0,     0,   117,
       0,    25,     0,    22,    80,     0,   116,   161,   116,     0,
       0,     0,     0,     0,   167,     0,   170,    23,     0,    13,
      18,     0,     0,    14,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    79,    78,     0,    33,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    59,     0,   186,     0,     0,
     143,   137,     0,   136,    28,     0,   146,   158,     0,   153,
     155,     0,   145,    82,   125,   118,   123,     0,     0,     0,
       7,   115,   113,   114,     0,     0,   173,   168,   163,   165,
     169,   171,     0,     0,    17,    19,    11,    12,    68,    37,
      36,    38,    40,    41,    43,    44,    46,    47,    48,    49,
      51,    52,    54,    56,    58,     0,     0,    59,     0,     0,
       0,     0,    59,     0,     0,     0,   193,     0,    59,     2,
     183,   192,   189,   190,   174,   175,     0,    59,   187,   176,
       0,   177,   178,   179,   140,     0,     0,   142,   135,   157,
     144,     0,   160,    26,     0,    81,   168,    34,   172,   164,
       0,     9,    10,     0,    62,    64,     0,   203,     0,   202,
     193,   193,   193,     0,     0,     0,     0,     0,   193,   132,
     209,   193,   191,   139,   141,   154,   156,     0,   166,    20,
      60,   193,   182,    59,   193,     0,   201,     0,   204,     0,
       0,   180,   186,   188,   168,    15,     0,   181,     0,     0,
      59,    59,   193,     0,     0,    16,    59,     0,   193,   193,
     193,   196,    59,   184,     0,     0,     0,     0,    60,   193,
      66,     0,   193,    59,   194,   197,     0,   200,   193,    59,
     198,    60,   193,     0,   195,    59,   193,   199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    89,    90,   213,   214,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   235,   176,   102,   103,
     104,   124,   155,   251,   194,   252,    37,    59,    44,    38,
      39,    24,    25,   127,   202,    26,    33,    66,    67,    27,
      28,    72,   107,    41,    53,    42,    54,   188,   189,   190,
     116,   129,   106,   132,   133,   134,   135,   136,   253,   254,
     299,   255,   256,   257,   258,   259,   260,   261,   262,   263,
      29,    30,    31,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -298
static const yytype_int16 yypact[] =
{
    1025,  -298,  -298,  -298,  -298,    39,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,    94,  1025,  1025,  -298,  1025,  1025,   988,
    -298,  -298,    78,    96,  -298,    94,   115,   -37,    65,  -298,
     947,    -4,    -6,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
      72,    82,  -298,   108,   115,  -298,    94,   757,  -298,    94,
    -298,  1025,   608,   148,    -4,   142,   -38,  -298,  -298,  -298,
    -298,  -298,   147,   828,  -298,  -298,  -298,  -298,  -298,   856,
     566,   -20,  -298,  -298,  -298,  -298,  -298,   856,  -298,  -298,
      25,   175,   884,  -298,    95,    26,    76,    93,   -10,   109,
     122,   125,   121,   -34,  -298,  -298,  -298,   159,  -298,   692,
    -298,   162,   163,   650,  -298,   531,   -27,   884,   -18,  -298,
     566,  -298,   566,  -298,  -298,   -26,  1059,  -298,  1059,   135,
     884,   177,    59,   757,  -298,    62,  -298,  -298,   884,  -298,
     884,   179,   180,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,   884,  -298,  -298,   884,   884,
     884,   884,   884,   884,   884,   884,   884,   884,   884,   884,
     884,   884,   884,   884,  -298,  -298,   174,   280,   172,   692,
    -298,  -298,   884,  -298,   178,   183,  -298,    94,   145,   176,
    -298,   188,  -298,  -298,  -298,  -298,  -298,   150,   151,   884,
    -298,  -298,  -298,  -298,   800,   184,  -298,    28,  -298,  -298,
    -298,  -298,   120,   156,   187,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,    95,    95,    26,    26,    76,    76,    76,    76,
      93,    93,   -10,   109,   122,   884,   884,  -298,   168,   884,
     169,   185,  -298,   189,   203,   192,   884,   193,  -298,   186,
    -298,   206,  -298,  -298,  -298,  -298,   199,   204,  -298,  -298,
     190,  -298,  -298,  -298,  -298,   208,   210,  -298,  -298,  -298,
    -298,   755,  -298,   215,   215,  -298,   -20,  -298,  -298,  -298,
     757,  -298,  -298,   884,   125,   121,   884,  -298,   194,  -298,
     468,   468,   422,   200,   884,   201,   884,   205,   468,  -298,
    -298,   359,  -298,  -298,  -298,  -298,  -298,    87,  -298,  -298,
     206,   468,  -298,  -298,   884,   207,  -298,   -24,  -298,   -13,
     884,  -298,   280,  -298,    69,  -298,   209,  -298,   233,   211,
    -298,  -298,   468,   -12,   221,  -298,  -298,   227,   884,   884,
     468,  -298,  -298,  -298,   884,   884,   202,   239,  -298,   468,
    -298,   -11,   468,  -298,   268,  -298,   241,  -298,   884,  -298,
    -298,  -298,   468,   232,  -298,  -298,   468,  -298
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -298,  -298,  -298,  -298,  -298,   -72,  -298,   -84,   -17,    15,
      35,    13,   154,   155,   157,    99,  -132,  -297,    92,  -298,
    -112,    -7,  -298,   -78,  -120,     0,  -298,     3,   141,  -298,
     273,  -298,   -63,   -79,   214,  -298,  -298,  -298,   213,    67,
    -298,   -14,   -59,   293,  -298,   283,   -43,  -298,  -298,    73,
    -298,    64,  -127,    70,  -196,  -298,  -298,   212,  -155,  -298,
    -298,  -298,    21,  -298,    44,  -298,  -184,  -298,  -298,  -298,
    -298,   319,  -298,  -298,  -298
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -212
static const yytype_int16 yytable[] =
{
      22,   121,   125,    23,   115,   193,   209,   123,   157,    40,
     205,   280,   118,   326,   -60,   137,   119,   126,   193,   113,
     156,    51,    65,   191,   199,   130,   199,    43,    43,    22,
      43,    43,    23,    55,    34,   131,   195,   199,   199,   199,
      58,    62,   125,   236,   125,   156,    35,   201,    63,   201,
     105,   354,   175,   192,   200,   112,   331,   126,   156,   126,
     212,   108,   295,   126,   363,   126,   179,   332,   342,   356,
     138,   139,   169,   130,   219,   220,   221,   140,   170,    32,
     141,   142,   279,   131,   161,   162,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   178,    52,   143,   286,   185,   130,   315,   207,
     291,   210,    65,   208,   130,    56,   297,   131,   187,   288,
     277,    70,     3,   335,   131,   301,   105,   193,   280,    52,
     329,  -120,   156,   215,    34,   312,   313,   324,    12,   163,
     164,   325,   158,   321,   222,   223,    35,   128,   218,    50,
      18,    36,   159,   308,   346,   347,   327,   160,   165,   166,
     167,   168,    68,   156,   156,    36,    45,   156,    46,    47,
     199,   281,   265,   269,   361,   266,    52,   341,   224,   225,
      70,   328,   230,   231,   197,   348,   198,   128,   114,   128,
     171,   117,   275,   128,   355,   128,    57,   357,   339,   340,
     226,   227,   228,   229,   344,   172,   174,   364,   310,   173,
     349,   367,   177,   180,   181,   204,   317,   206,   319,   216,
     217,   358,   237,   264,   144,   270,   271,   362,   272,   267,
     273,   274,   350,   366,   268,   278,   282,   283,   287,   289,
     322,   292,   333,   293,   294,   296,    70,   145,   146,   147,
     148,   149,   150,   300,   290,   298,   199,   320,  -185,   303,
     302,   304,   151,   311,   152,   153,   154,   351,   276,   337,
     316,   318,   156,   105,   187,   343,   309,   330,   336,   345,
     359,   338,   352,     1,   238,   239,     2,     3,   240,   241,
     242,     4,   314,     5,     6,     7,   243,   244,   245,     8,
       9,    10,    11,    12,   246,    13,    14,    73,    15,   353,
     247,   360,   365,    16,    17,    18,   248,    19,    20,    21,
     249,    75,    76,    77,    78,   232,    79,   233,   285,    71,
     234,   196,    80,   250,   284,    64,    69,    82,    83,    84,
      85,    86,   203,   334,   306,   323,   307,   211,    49,     0,
    -193,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     1,   238,   239,     2,     3,   240,   241,   242,
       4,     0,     5,     6,     7,   243,   244,   245,     8,     9,
      10,    11,    12,   246,    13,    14,    73,    15,     0,   247,
       0,     0,    16,    17,    18,   248,    19,    20,    21,   249,
      75,    76,    77,    78,     0,    79,     0,     0,     0,     0,
       0,    80,   250,     0,     0,     0,    82,    83,    84,    85,
      86,     0,     0,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,    87,     0,
      88,     8,     9,    10,    11,    12,     0,    13,    14,    73,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,    74,    75,    76,    77,    78,     0,    79,     0,
       0,     0,   238,   239,    80,     0,   240,   241,   242,    82,
      83,    84,    85,    86,   243,   244,   245,     0,     0,     0,
       0,     0,   246,     0,     0,    73,     0,     0,   247,     0,
       0,    87,     0,    88,   248,     0,     0,     0,   249,    75,
      76,    77,    78,     0,    79,     0,     0,     0,     0,     0,
      80,   250,     0,     0,     0,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,    87,     0,    88,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,    73,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,    74,    75,    76,    77,
      78,   186,    79,     0,     0,     3,     0,     0,    80,     0,
       0,     0,     0,    82,    83,    84,    85,    86,     0,     0,
       0,    12,     0,     0,     0,    73,   109,     0,     0,     0,
       0,     0,     0,    18,     0,    87,     0,    88,    74,    75,
      76,    77,    78,     0,    79,     0,     0,     3,     0,   110,
      80,     0,     0,     0,     0,   111,    83,    84,    85,    86,
       0,     0,     0,    12,     0,     0,     0,    73,   182,     0,
       0,     0,     0,     0,     0,    18,     0,    87,     0,    88,
      74,    75,    76,    77,    78,     0,    79,     0,     0,     3,
       0,   183,    80,     0,     0,     0,     0,   184,    83,    84,
      85,    86,     0,     0,     0,    12,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,    18,     0,    87,
       0,    88,    74,    75,    76,    77,    78,     0,    79,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,    87,     0,    88,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    73,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,    74,    75,    76,
      77,    78,     0,    79,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,   305,    73,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
      74,    75,    76,    77,    78,     0,    79,     0,     0,     0,
       0,     0,    80,   276,     0,    73,     0,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,     0,    79,     0,     0,     0,     0,    87,
     120,    88,     0,    73,     0,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,     0,    79,     0,     0,     0,     0,    87,   122,    88,
       0,    73,     0,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,     0,
      79,     0,     0,     0,     0,    87,    80,    88,     0,     0,
       0,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,    87,     0,    88,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,    48,     0,
       0,     1,     0,     0,     2,     3,    57,     0,     0,     4,
    -211,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,     0,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    80,     0,    63,   117,   133,    79,    92,    23,
     130,   207,    50,   310,    48,    87,    54,    80,   130,    62,
      92,    35,    40,    50,    50,    45,    50,    24,    25,    29,
      27,    28,    29,    70,    40,    55,    54,    50,    50,    50,
      40,    45,   120,   175,   122,   117,    52,   126,    52,   128,
      57,   348,    86,    80,    80,    62,    80,   120,   130,   122,
     138,    61,   246,   126,   361,   128,   109,    80,    80,    80,
      45,    46,    82,    45,   158,   159,   160,    52,    88,    40,
      55,    56,    54,    55,    58,    59,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   109,    36,    79,   237,   113,    45,   292,    50,
     242,    49,    40,    54,    45,    50,   248,    55,   115,   239,
     204,    54,     7,    54,    55,   257,   133,   239,   324,    62,
     314,    53,   204,   140,    40,   290,   291,    50,    23,    63,
      64,    54,    47,   298,   161,   162,    52,    80,   155,    53,
      35,    57,    57,   280,   338,   339,   311,    62,    65,    66,
      67,    68,    80,   235,   236,    57,    25,   239,    27,    28,
      50,    51,   179,   187,   358,   182,   109,   332,   163,   164,
     113,   313,   169,   170,   120,   340,   122,   120,    40,   122,
      81,    49,   199,   126,   349,   128,    49,   352,   330,   331,
     165,   166,   167,   168,   336,    83,    85,   362,   286,    84,
     342,   366,    53,    51,    51,    80,   294,    40,   296,    40,
      40,   353,    48,    51,    49,    80,    50,   359,    40,    51,
      80,    80,   344,   365,    51,    51,    80,    50,    70,    70,
     299,    52,   320,    40,    52,    52,   179,    72,    73,    74,
      75,    76,    77,    54,    69,    69,    50,    52,    54,    51,
      70,    51,    87,    69,    89,    90,    91,   345,    53,    36,
      70,    70,   344,   280,   271,    54,   283,    70,    69,    52,
      12,    70,    80,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   292,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    70,
      30,    70,    80,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   171,    46,   172,   236,    56,
     173,   118,    52,    53,   235,    42,    53,    57,    58,    59,
      60,    61,   128,   322,   271,   301,   276,   135,    29,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    79,    -1,
      81,    19,    20,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,     4,     5,    52,    -1,     8,     9,    10,    57,
      58,    59,    60,    61,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    30,    -1,
      -1,    79,    -1,    81,    36,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    79,    -1,    81,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    80,    46,    -1,    -1,     7,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    79,    -1,    81,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,     7,    -1,    51,
      52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    79,    -1,    81,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,     7,
      -1,    51,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    79,
      -1,    81,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    79,    -1,    81,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    27,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    27,    -1,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    79,
      52,    81,    -1,    27,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    79,    52,    81,
      -1,    27,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    79,    52,    81,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    79,    -1,    81,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,     0,    -1,
      -1,     3,    -1,    -1,     6,     7,    49,    -1,    -1,    11,
      53,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   119,   121,   125,   126,   129,   133,   134,   164,
     165,   166,    40,   130,    40,    52,    57,   120,   123,   124,
     135,   137,   139,   121,   122,   122,   122,   122,     0,   165,
      53,   135,   133,   138,   140,    70,    50,    49,   119,   121,
     167,   168,    45,    52,   137,    40,   131,   132,    80,   139,
     133,   124,   135,    27,    40,    41,    42,    43,    44,    46,
      52,    53,    57,    58,    59,    60,    61,    79,    81,    95,
      96,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   112,   113,   114,   115,   146,   136,   119,    28,
      51,    57,   115,   140,    40,   136,   144,    49,    50,    54,
      52,    99,    52,    99,   115,   117,   126,   127,   133,   145,
      45,    55,   147,   148,   149,   150,   151,    99,    45,    46,
      52,    55,    56,    79,    49,    72,    73,    74,    75,    76,
      77,    87,    89,    90,    91,   116,    99,   101,    47,    57,
      62,    58,    59,    63,    64,    65,    66,    67,    68,    82,
      88,    81,    83,    84,    85,    86,   111,    53,   115,   140,
      51,    51,    28,    51,    57,   115,    80,   121,   141,   142,
     143,    50,    80,   114,   118,    54,   132,   145,   145,    50,
      80,   127,   128,   128,    80,   118,    40,    50,    54,   146,
      49,   151,   117,    97,    98,   115,    40,    40,   115,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   110,   110,    48,     4,     5,
       8,     9,    10,    16,    17,    18,    24,    30,    36,    40,
      53,   117,   119,   152,   153,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    51,   115,   115,    51,    51,   135,
      80,    50,    40,    80,    80,   115,    53,   101,    51,    54,
     148,    51,    80,    50,   109,   112,   110,    70,   118,    70,
      69,   110,    52,    40,    52,   160,    52,   110,    69,   154,
      54,   110,    70,    51,    51,    71,   143,   147,   146,   115,
     117,    69,   152,   152,   119,   160,    70,   117,    70,   117,
      52,   152,   136,   158,    50,    54,   111,   152,   110,   160,
      70,    80,    80,   117,   156,    54,    69,    36,    70,   110,
     110,   152,    80,    54,   110,    52,   160,   160,   152,   110,
     114,   117,    80,    70,   111,   152,    80,   152,   110,    12,
      70,   160,   110,   111,   152,    80,   110,   152
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
#line 210 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => IDENTIFIER");
                            (yyval.expression) = new Expression(); // create new non boolean expression and symbol is the identifier
                            (yyval.expression)->symbol = (yyvsp[(1) - (1)].symbol);
                            (yyval.expression)->type = Expression::NONBOOLEAN; 
                        }
    break;

  case 3:
#line 217 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => INTEGER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(INT, toString((yyvsp[(1) - (1)].intVal)));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[(1) - (1)].intVal));
                        }
    break;

  case 4:
#line 224 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => FLOATING_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(FLOAT, (yyvsp[(1) - (1)].floatVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[(1) - (1)].floatVal));
                        }
    break;

  case 5:
#line 231 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => CHARACTER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(CHAR, (yyvsp[(1) - (1)].charVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[(1) - (1)].charVal));
                        }
    break;

  case 6:
#line 238 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => STRING_LITERAL"); 
                            (yyval.expression) = new Expression();
		                    (yyval.expression)->symbol = gentemp(POINTER, (yyvsp[(1) - (1)].stringVal));
		                    (yyval.expression)->symbol->type->arr_type = new SymType(CHAR);
                        }
    break;

  case 7:
#line 245 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("primary_expression => ( expression )"); 
                            (yyval.expression) = (yyvsp[(2) - (3)].expression);
                        }
    break;

  case 8:
#line 253 "ass5_19CS30031_19CS10070.y"
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
#line 262 "ass5_19CS30031_19CS10070.y"
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
#line 282 "ass5_19CS30031_19CS10070.y"
    { 
                            // function call, number of parameters stored in argument_expression_list_opt
                            yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[(1) - (4)].array)->symbol->type->type);
                            emit("call", (yyval.array)->symbol->name, (yyvsp[(1) - (4)].array)->symbol->name, toString((yyvsp[(3) - (4)].parameterCount)));
                        }
    break;

  case 11:
#line 290 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => postfix_expression . IDENTIFIER"); 
                        }
    break;

  case 12:
#line 294 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => postfix_expression -> IDENTIFIER"); 
                        }
    break;

  case 13:
#line 298 "ass5_19CS30031_19CS10070.y"
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
#line 307 "ass5_19CS30031_19CS10070.y"
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
#line 316 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list }"); 
                        }
    break;

  case 16:
#line 320 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list , }"); 
                        }
    break;

  case 17:
#line 329 "ass5_19CS30031_19CS10070.y"
    { 
                                        yyinfo("argument_expression_list_opt => argument_expression_list"); 
                                        (yyval.parameterCount) = (yyvsp[(1) - (1)].parameterCount);
                                    }
    break;

  case 18:
#line 334 "ass5_19CS30031_19CS10070.y"
    { 
                                        // empty so 0 params
                                        yyinfo("argument_expression_list_opt => epsilon");
                                        (yyval.parameterCount) = 0;
                                    }
    break;

  case 19:
#line 343 "ass5_19CS30031_19CS10070.y"
    { 
                                    // first param, initialise param count to 1
                                    yyinfo("argument_expression_list => assignment_expression"); 
                                    emit("param", (yyvsp[(1) - (1)].expression)->symbol->name);
                                    (yyval.parameterCount) = 1;
                                }
    break;

  case 20:
#line 350 "ass5_19CS30031_19CS10070.y"
    { 
                                    // one new param, add 1 to param count
                                    yyinfo("argument_expression_list => argument_expression_list , assignment_expression");
                                    emit("param", (yyvsp[(3) - (3)].expression)->symbol->name);
                                    (yyval.parameterCount) = (yyvsp[(1) - (3)].parameterCount) + 1; 
                                }
    break;

  case 21:
#line 360 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("unary_expression => postfix_expression"); 
                            (yyval.array) = (yyvsp[(1) - (1)].array);
                        }
    break;

  case 22:
#line 365 "ass5_19CS30031_19CS10070.y"
    { 
                            // pre increment, no new temporary simply add 1
                            yyinfo("unary_expression => ++ unary_expression"); 
                            (yyval.array) = (yyvsp[(2) - (2)].array);
                            emit("+", (yyvsp[(2) - (2)].array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name, toString(1));
                        }
    break;

  case 23:
#line 372 "ass5_19CS30031_19CS10070.y"
    { 
                            // pre decrement, no new temporary simply subtract 1
                            yyinfo("unary_expression => -- unary_expression"); 
                            (yyval.array) = (yyvsp[(2) - (2)].array);
                            emit("-", (yyvsp[(2) - (2)].array)->symbol->name, (yyvsp[(2) - (2)].array)->symbol->name, toString(1));
                        }
    break;

  case 24:
#line 379 "ass5_19CS30031_19CS10070.y"
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
#line 406 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("unary_expression => sizeof unary_expression"); 
                        }
    break;

  case 26:
#line 410 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("unary_expression => sizeof ( type_name )"); 
                        }
    break;

  case 27:
#line 421 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => &"); 
                        (yyval.unaryOperator) = strdup("&"); 
                    }
    break;

  case 28:
#line 426 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => *"); 
                        (yyval.unaryOperator) = strdup("*"); 
                    }
    break;

  case 29:
#line 431 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => +"); 
                        (yyval.unaryOperator) = strdup("+"); 
                    }
    break;

  case 30:
#line 436 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => -"); 
                        (yyval.unaryOperator) = strdup("=-"); 
                    }
    break;

  case 31:
#line 441 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => ~"); 
                        (yyval.unaryOperator) = strdup("~"); 
                    }
    break;

  case 32:
#line 446 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("unary_operator => !"); 
                        (yyval.unaryOperator) = strdup("!"); 
                    }
    break;

  case 33:
#line 454 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("cast_expression => unary_expression"); 
                        (yyval.array) = (yyvsp[(1) - (1)].array);
                    }
    break;

  case 34:
#line 459 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("cast_expression => ( type_name ) cast_expression"); 
                        (yyval.array) = new Array();
                        (yyval.array)->symbol = (yyvsp[(4) - (4)].array)->symbol->convert(currentType);
                    }
    break;

  case 35:
#line 481 "ass5_19CS30031_19CS10070.y"
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
#line 498 "ass5_19CS30031_19CS10070.y"
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
#line 521 "ass5_19CS30031_19CS10070.y"
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
#line 544 "ass5_19CS30031_19CS10070.y"
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
#line 570 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("additive_expression => multiplicative_expression"); 
                            (yyval.expression) = (yyvsp[(1) - (1)].expression);
                        }
    break;

  case 40:
#line 575 "ass5_19CS30031_19CS10070.y"
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
#line 586 "ass5_19CS30031_19CS10070.y"
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
#line 600 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("shift_expression => additive_expression");
                            (yyval.expression) = (yyvsp[(1) - (1)].expression);
                        }
    break;

  case 43:
#line 605 "ass5_19CS30031_19CS10070.y"
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
#line 616 "ass5_19CS30031_19CS10070.y"
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
#line 639 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("relational_expression => shift_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 46:
#line 644 "ass5_19CS30031_19CS10070.y"
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
#line 658 "ass5_19CS30031_19CS10070.y"
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
#line 672 "ass5_19CS30031_19CS10070.y"
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
#line 686 "ass5_19CS30031_19CS10070.y"
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
#line 703 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("equality_expression => relational_expression"); 
                            (yyval.expression) = (yyvsp[(1) - (1)].expression);
                        }
    break;

  case 51:
#line 708 "ass5_19CS30031_19CS10070.y"
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
#line 724 "ass5_19CS30031_19CS10070.y"
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
#line 754 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("AND_expression => equality_expression"); 
                        (yyval.expression) = (yyvsp[(1) - (1)].expression);
                    }
    break;

  case 54:
#line 759 "ass5_19CS30031_19CS10070.y"
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
#line 772 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("exclusive_OR_expression => AND_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 56:
#line 777 "ass5_19CS30031_19CS10070.y"
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
#line 790 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("inclusive_OR_expression => exclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 58:
#line 795 "ass5_19CS30031_19CS10070.y"
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
#line 817 "ass5_19CS30031_19CS10070.y"
    {
            yyinfo("M => epsilon");
            (yyval.instructionNumber) = nextinstr();
        }
    break;

  case 60:
#line 824 "ass5_19CS30031_19CS10070.y"
    {
            yyinfo("N => epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makelist(nextinstr());
            emit("goto", "");
        }
    break;

  case 61:
#line 867 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("logical_AND_expression => inclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 62:
#line 872 "ass5_19CS30031_19CS10070.y"
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
#line 886 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("logical_OR_expression => logical_AND_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 64:
#line 891 "ass5_19CS30031_19CS10070.y"
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
#line 905 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("conditional_expression => logical_OR_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 66:
#line 910 "ass5_19CS30031_19CS10070.y"
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
#line 930 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("assignment_expression => conditional_expression"); 
                                (yyval.expression) = (yyvsp[(1) - (1)].expression);
                            }
    break;

  case 68:
#line 935 "ass5_19CS30031_19CS10070.y"
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
#line 956 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => ="); 
                        }
    break;

  case 70:
#line 960 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => *="); 
                        }
    break;

  case 71:
#line 964 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => /="); 
                        }
    break;

  case 72:
#line 968 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => %="); 
                        }
    break;

  case 73:
#line 972 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => += "); 
                        }
    break;

  case 74:
#line 976 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => -= "); 
                        }
    break;

  case 75:
#line 980 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => <<="); 
                        }
    break;

  case 76:
#line 984 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => >>="); 
                        }
    break;

  case 77:
#line 988 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => &="); 
                        }
    break;

  case 78:
#line 992 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => ^="); 
                        }
    break;

  case 79:
#line 996 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("assignment_operator => |="); 
                        }
    break;

  case 80:
#line 1003 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("expression => assignment_expression"); 
                    (yyval.expression) = (yyvsp[(1) - (1)].expression);
                }
    break;

  case 81:
#line 1008 "ass5_19CS30031_19CS10070.y"
    {
                     yyinfo("expression => expression , assignment_expression"); 
                }
    break;

  case 82:
#line 1015 "ass5_19CS30031_19CS10070.y"
    {
                             yyinfo("constant_expression => conditional_expression"); 
                        }
    break;

  case 83:
#line 1024 "ass5_19CS30031_19CS10070.y"
    {
                     yyinfo("declaration => declaration_specifiers init_declarator_list_opt ;"); 
                }
    break;

  case 84:
#line 1031 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("init_declarator_list_opt => init_declarator_list"); 
                                }
    break;

  case 85:
#line 1035 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("init_declarator_list_opt => epsilon"); 
                                }
    break;

  case 86:
#line 1042 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => storage_class_specifier declaration_specifiers_opt"); 
                            }
    break;

  case 87:
#line 1046 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => type_specifier declaration_specifiers_opt"); 
                            }
    break;

  case 88:
#line 1050 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => type_qualifier declaration_specifiers_opt"); 
                            }
    break;

  case 89:
#line 1054 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("declaration_specifiers => function_specifier declaration_specifiers_opt"); 
                            }
    break;

  case 90:
#line 1061 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("declaration_specifiers_opt => declaration_specifiers"); 
                                }
    break;

  case 91:
#line 1065 "ass5_19CS30031_19CS10070.y"
    {
                                     yyinfo("declaration_specifiers_opt => epsilon "); 
                                }
    break;

  case 92:
#line 1072 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("init_declarator_list => init_declarator"); 
                            }
    break;

  case 93:
#line 1076 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("init_declarator_list => init_declarator_list , init_declarator"); 
                            }
    break;

  case 94:
#line 1083 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("init_declarator => declarator"); 
                        (yyval.symbol) = (yyvsp[(1) - (1)].symbol);
                    }
    break;

  case 95:
#line 1088 "ass5_19CS30031_19CS10070.y"
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
#line 1100 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => extern"); 
                            }
    break;

  case 97:
#line 1104 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => static"); 
                            }
    break;

  case 98:
#line 1108 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => auto"); 
                            }
    break;

  case 99:
#line 1112 "ass5_19CS30031_19CS10070.y"
    {
                                 yyinfo("storage_class_specifier => register"); 
                            }
    break;

  case 100:
#line 1119 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => void");
                        currentType = VOID;
                    }
    break;

  case 101:
#line 1124 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => char"); 
                        currentType = CHAR;
                    }
    break;

  case 102:
#line 1129 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => short"); 
                    }
    break;

  case 103:
#line 1133 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => int"); 
                        currentType = INT;
                    }
    break;

  case 104:
#line 1138 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => long"); 
                    }
    break;

  case 105:
#line 1142 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_specifier => float"); 
                        currentType = FLOAT;
                    }
    break;

  case 106:
#line 1147 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => double"); 
                    }
    break;

  case 107:
#line 1151 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => signed"); 
                    }
    break;

  case 108:
#line 1155 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => unsigned"); 
                    }
    break;

  case 109:
#line 1159 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => _Bool"); 
                    }
    break;

  case 110:
#line 1163 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => _Complex"); 
                    }
    break;

  case 111:
#line 1167 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => _Imaginary"); 
                    }
    break;

  case 112:
#line 1171 "ass5_19CS30031_19CS10070.y"
    {
                         yyinfo("type_specifier => enum_specifier"); 
                    }
    break;

  case 113:
#line 1178 "ass5_19CS30031_19CS10070.y"
    { 
                                    yyinfo("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt"); 
                                }
    break;

  case 114:
#line 1182 "ass5_19CS30031_19CS10070.y"
    { 
                                    yyinfo("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt"); 
                                }
    break;

  case 115:
#line 1189 "ass5_19CS30031_19CS10070.y"
    { 
                                        yyinfo("specifier_qualifier_list_opt => specifier_qualifier_list"); 
                                    }
    break;

  case 116:
#line 1193 "ass5_19CS30031_19CS10070.y"
    { 
                                        yyinfo("specifier_qualifier_list_opt => epsilon"); 
                                    }
    break;

  case 117:
#line 1200 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list }"); 
                    }
    break;

  case 118:
#line 1204 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list , }"); 
                    }
    break;

  case 119:
#line 1208 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enum_specifier => enum IDENTIFIER"); 
                    }
    break;

  case 120:
#line 1215 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_opt => IDENTIFIER"); 
                    }
    break;

  case 121:
#line 1219 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_opt => epsilon"); 
                    }
    break;

  case 122:
#line 1226 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enumerator_list => enumerator"); 
                    }
    break;

  case 123:
#line 1230 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("enumerator_list => enumerator_list , enumerator"); 
                    }
    break;

  case 124:
#line 1237 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT"); 
                }
    break;

  case 125:
#line 1241 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT = constant_expression"); 
                }
    break;

  case 126:
#line 1248 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_qualifier => const"); 
                    }
    break;

  case 127:
#line 1252 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_qualifier => restrict"); 
                    }
    break;

  case 128:
#line 1256 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("type_qualifier => volatile"); 
                    }
    break;

  case 129:
#line 1263 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("function_specifier => inline"); 
                        }
    break;

  case 130:
#line 1270 "ass5_19CS30031_19CS10070.y"
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
#line 1279 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("declarator => direct_declarator"); 
                }
    break;

  case 132:
#line 1285 "ass5_19CS30031_19CS10070.y"
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
#line 1304 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => IDENTIFIER"); 
                            (yyval.symbol) = (yyvsp[(1) - (1)].symbol)->update(new SymType(currentType)); // update type to the last type seen
                            currentSymbol = (yyval.symbol);
                        }
    break;

  case 134:
#line 1310 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => ( declarator )"); 
                            (yyval.symbol) = (yyvsp[(2) - (3)].symbol);
                        }
    break;

  case 135:
#line 1315 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
                        }
    break;

  case 136:
#line 1319 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
                        }
    break;

  case 137:
#line 1323 "ass5_19CS30031_19CS10070.y"
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
#line 1341 "ass5_19CS30031_19CS10070.y"
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
#line 1360 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
                        }
    break;

  case 140:
#line 1364 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
                        }
    break;

  case 141:
#line 1368 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
                        }
    break;

  case 142:
#line 1372 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
                        }
    break;

  case 143:
#line 1376 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator [ * ]"); 
                        }
    break;

  case 144:
#line 1380 "ass5_19CS30031_19CS10070.y"
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
#line 1395 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("direct_declarator => direct_declarator ( identifier_list )"); 
                        }
    break;

  case 146:
#line 1399 "ass5_19CS30031_19CS10070.y"
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
#line 1417 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("type_qualifier_list_opt => type_qualifier_list"); 
                            }
    break;

  case 148:
#line 1421 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("type_qualifier_list_opt => epsilon"); 
                            }
    break;

  case 149:
#line 1457 "ass5_19CS30031_19CS10070.y"
    { 
                yyinfo("pointer => * type_qualifier_list_opt"); 
                // fresh pointer
                (yyval.SymType) = new SymType(POINTER);
            }
    break;

  case 150:
#line 1463 "ass5_19CS30031_19CS10070.y"
    { 
                yyinfo("pointer => * type_qualifier_list_opt pointer"); 
                // nested pointer
                (yyval.SymType) = new SymType(POINTER, (yyvsp[(3) - (3)].SymType));
            }
    break;

  case 151:
#line 1472 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("type_qualifier_list => type_qualifier"); 
                        }
    break;

  case 152:
#line 1476 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("type_qualifier_list => type_qualifier_list type_qualifier"); 
                        }
    break;

  case 153:
#line 1483 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("parameter_type_list => parameter_list"); 
                        }
    break;

  case 154:
#line 1487 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("parameter_type_list => parameter_list , ..."); 
                        }
    break;

  case 155:
#line 1494 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("parameter_list => parameter_declaration"); 
                    }
    break;

  case 156:
#line 1498 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("parameter_list => parameter_list , parameter_declaration"); 
                    }
    break;

  case 157:
#line 1505 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("parameter_declaration => declaration_specifiers declarator"); 
                            }
    break;

  case 158:
#line 1509 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("parameter_declaration => declaration_specifiers"); 
                            }
    break;

  case 159:
#line 1516 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_list => IDENTIFIER"); 
                    }
    break;

  case 160:
#line 1520 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("identifier_list => identifier_list , IDENTIFIER"); 
                    }
    break;

  case 161:
#line 1527 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("type_name => specifier_qualifier_list"); 
                }
    break;

  case 162:
#line 1534 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("initialiser => assignment_expression"); 
                    (yyval.symbol) = (yyvsp[(1) - (1)].expression)->symbol;
                }
    break;

  case 163:
#line 1539 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("initialiser => { initialiser_list }"); 
                }
    break;

  case 164:
#line 1543 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("initialiser => { initialiser_list , }"); 
                }
    break;

  case 165:
#line 1550 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("initialiser_list => designation_opt initialiser"); 
                        }
    break;

  case 166:
#line 1554 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("initialiser_list => initialiser_list , designation_opt initialiser"); 
                        }
    break;

  case 167:
#line 1561 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designation_opt => designation"); 
                    }
    break;

  case 168:
#line 1565 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designation_opt => epsilon"); 
                    }
    break;

  case 169:
#line 1572 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("designation => designator_list ="); 
                }
    break;

  case 170:
#line 1579 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designator_list => designator"); 
                    }
    break;

  case 171:
#line 1583 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("designator_list => designator_list designator"); 
                    }
    break;

  case 172:
#line 1590 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("designator => [ constant_expression ]"); 
                }
    break;

  case 173:
#line 1594 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("designator => . IDENTIFIER"); 
                }
    break;

  case 174:
#line 1603 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => labeled_statement"); 
                }
    break;

  case 175:
#line 1607 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => compound_statement");
                    (yyval.statement) = (yyvsp[(1) - (1)].statement); 
                }
    break;

  case 176:
#line 1612 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => expression_statement"); 
                    (yyval.statement) = new Statement();
                    (yyval.statement)->nextList = (yyvsp[(1) - (1)].expression)->nextList;
                }
    break;

  case 177:
#line 1618 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => selection_statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 178:
#line 1623 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => iteration_statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 179:
#line 1628 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("statement => jump_statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 180:
#line 1636 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("labeled_statement => IDENTIFIER : statement"); 
                        }
    break;

  case 181:
#line 1640 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("labeled_statement => case constant_expression : statement"); 
                        }
    break;

  case 182:
#line 1644 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("labeled_statement => default : statement"); 
                        }
    break;

  case 183:
#line 1657 "ass5_19CS30031_19CS10070.y"
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
#line 1669 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("compound_statement => { block_item_list_opt }"); 
                            (yyval.statement) = (yyvsp[(4) - (5)].statement);
                            changeTable(currentTable->parent); // block over, move back to the parent table
                        }
    break;

  case 185:
#line 1678 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("block_item_list_opt => block_item_list"); 
                            (yyval.statement) = (yyvsp[(1) - (1)].statement);
                        }
    break;

  case 186:
#line 1683 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("block_item_list_opt => epsilon"); 
                            (yyval.statement) = new Statement();
                        }
    break;

  case 187:
#line 1691 "ass5_19CS30031_19CS10070.y"
    {
                        yyinfo("block_item_list => block_item"); 
                        (yyval.statement) = (yyvsp[(1) - (1)].statement);
                    }
    break;

  case 188:
#line 1696 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("block_item_list => block_item_list block_item"); 
                        (yyval.statement) = (yyvsp[(3) - (3)].statement);
                        // after completion of block_item_list(1) we move to block_item(3)
                        backpatch((yyvsp[(1) - (3)].statement)->nextList,(yyvsp[(2) - (3)].instructionNumber));
                    }
    break;

  case 189:
#line 1706 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("block_item => declaration"); 
                    (yyval.statement) = new Statement();
                }
    break;

  case 190:
#line 1711 "ass5_19CS30031_19CS10070.y"
    { 
                    yyinfo("block_item => statement"); 
                    (yyval.statement) = (yyvsp[(1) - (1)].statement);
                }
    break;

  case 191:
#line 1719 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("expression_statement => expression_opt ;"); 
                                (yyval.expression) = (yyvsp[(1) - (2)].expression);
                            }
    break;

  case 192:
#line 1727 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("expression_opt => expression"); 
                        (yyval.expression) = (yyvsp[(1) - (1)].expression);
                    }
    break;

  case 193:
#line 1732 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("expression_opt => epsilon"); 
                        (yyval.expression) = new Expression();
                    }
    break;

  case 194:
#line 1759 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("selection_statement => if ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[(3) - (7)].expression)->toBool();
                            backpatch((yyvsp[(3) - (7)].expression)->trueList, (yyvsp[(5) - (7)].instructionNumber)); // if true go to M
                            (yyval.statement)->nextList = merge((yyvsp[(3) - (7)].expression)->falseList, merge((yyvsp[(6) - (7)].statement)->nextList, (yyvsp[(7) - (7)].statement)->nextList)); // exits
                        }
    break;

  case 195:
#line 1767 "ass5_19CS30031_19CS10070.y"
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
#line 1776 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("selection_statement => switch ( expression ) statement"); 
                        }
    break;

  case 197:
#line 1807 "ass5_19CS30031_19CS10070.y"
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
#line 1817 "ass5_19CS30031_19CS10070.y"
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
#line 1826 "ass5_19CS30031_19CS10070.y"
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
#line 1837 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement"); 
                        }
    break;

  case 201:
#line 1844 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("jump_statement => goto IDENTIFIER ;"); 
                    }
    break;

  case 202:
#line 1848 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("jump_statement => continue ;"); 
                    }
    break;

  case 203:
#line 1852 "ass5_19CS30031_19CS10070.y"
    { 
                        yyinfo("jump_statement => break ;"); 
                    }
    break;

  case 204:
#line 1856 "ass5_19CS30031_19CS10070.y"
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
#line 1871 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("translation_unit => external_declaration"); 
                        }
    break;

  case 206:
#line 1875 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("translation_unit => translation_unit external_declaration"); 
                        }
    break;

  case 207:
#line 1882 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("external_declaration => function_definition"); 
                            }
    break;

  case 208:
#line 1886 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("external_declaration => declaration"); 
                            }
    break;

  case 209:
#line 1894 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement"); 
                            tableCount = 0;
                            (yyvsp[(2) - (7)].symbol)->isFunction = true;
                            changeTable(globalTable);
                        }
    break;

  case 210:
#line 1904 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("declaration_list_opt => declaration_list"); 
                            }
    break;

  case 211:
#line 1908 "ass5_19CS30031_19CS10070.y"
    { 
                                yyinfo("declaration_list_opt => epsilon"); 
                            }
    break;

  case 212:
#line 1915 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("declaration_list => declaration"); 
                        }
    break;

  case 213:
#line 1919 "ass5_19CS30031_19CS10070.y"
    { 
                            yyinfo("declaration_list => declaration_list declaration"); 
                        }
    break;


/* Line 1267 of yacc.c.  */
#line 4009 "y.tab.c"
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


#line 1924 "ass5_19CS30031_19CS10070.y"


void yyerror(string s) {
    printf("ERROR [Line %d] : %s\n", lineCount, s.c_str());
}

void yyinfo(string s) {
    #ifdef _DEBUG
        printf("INFO [Line %d] : %s\n", lineCount, s.c_str());
    #endif
}

