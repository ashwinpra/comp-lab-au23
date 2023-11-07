/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ass6_21CS10026_21CS30009.y"

    #include "ass6_21CS10026_21CS30009_translator.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(const char*);

#line 78 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "ass6_21CS10026_21CS30009.y"

    int ival;
    char* fval;
    char* cval;
    char* sval;
    char* unary_op;
    int instr_num;
    int num_params;
    Expression* expr;
    Statement* stmt;
    Array* array;
    SymType* sym_type;
    Symbol* symbol;

#line 331 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   995

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  369

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    93,   102,   115,   132,   138,   144,   154,
     162,   169,   176,   185,   194,   217,   226,   229,   232,   240,
     249,   252,   259,   265,   271,   277,   285,   289,   296,   303,
     342,   345,   352,   356,   360,   364,   368,   372,   380,   385,
     394,   418,   448,   476,   506,   511,   524,   539,   544,   557,
     574,   578,   593,   608,   623,   640,   645,   665,   690,   695,
     709,   713,   727,   731,   747,   752,   768,   773,   788,   794,
     821,   827,   847,   851,   853,   855,   857,   859,   861,   863,
     865,   867,   869,   874,   880,   885,   893,   899,   902,   905,
     908,   913,   917,   921,   924,   929,   933,   937,   941,   951,
     954,   957,   960,   968,   973,   978,   981,   986,   989,   994,
     997,  1000,  1003,  1006,  1009,  1012,  1018,  1020,  1026,  1030,
    1034,  1038,  1043,  1046,  1049,  1056,  1059,  1064,  1067,  1072,
    1075,  1078,  1083,  1088,  1100,  1116,  1123,  1128,  1131,  1134,
    1156,  1177,  1180,  1183,  1186,  1189,  1193,  1212,  1215,  1237,
    1242,  1249,  1252,  1257,  1261,  1265,  1268,  1273,  1276,  1281,
    1289,  1294,  1297,  1302,  1307,  1312,  1315,  1320,  1323,  1328,
    1333,  1337,  1341,  1344,  1349,  1352,  1361,  1364,  1369,  1375,
    1380,  1385,  1393,  1396,  1399,  1406,  1414,  1421,  1429,  1435,
    1442,  1446,  1453,  1460,  1465,  1476,  1491,  1502,  1509,  1525,
    1538,  1553,  1559,  1562,  1565,  1568,  1580,  1583,  1588,  1591,
    1597,  1610,  1613,  1618,  1622
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
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
  "declaration_list_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-215)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2:
#line 87 "ass6_21CS10026_21CS30009.y"
    {
        (yyval.instr_num) = nextinstr();
    }
#line 1934 "y.tab.c"
    break;

  case 3:
#line 93 "ass6_21CS10026_21CS30009.y"
    {
        (yyval.stmt) = new Statement();
        (yyval.stmt)->nextlist = makelist(nextinstr());
        emit("goto", "");
    }
#line 1944 "y.tab.c"
    break;

  case 4:
#line 102 "ass6_21CS10026_21CS30009.y"
    {
        if(current_symbol->nestedST == NULL) {
            changeTable(new SymTable(""));
        }
        else {
            changeTable(current_symbol->nestedST);
            emit("label", currentST->name);
        }
    }
#line 1958 "y.tab.c"
    break;

  case 5:
#line 115 "ass6_21CS10026_21CS30009.y"
    {
        string name = currentST->name + "_" + to_string(block_count++); // name for new ST
        Symbol *s = currentST->lookup(name); 
        s->nestedST = new SymTable(name, currentST);
        s->type = new SymType(BLOCK);
        current_symbol = s;
    }
#line 1970 "y.tab.c"
    break;

  case 6:
#line 133 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = new Expression(); // making a new expression and storing the symbol
            (yyval.expr)->symbol = (yyvsp[0].symbol);
            (yyval.expr)->type = Expression::NONBOOLEAN; 
        }
#line 1980 "y.tab.c"
    break;

  case 7:
#line 139 "ass6_21CS10026_21CS30009.y"
        {
            (yyval.expr) = (yyvsp[0].expr); // depends on which type of constant
        }
#line 1988 "y.tab.c"
    break;

  case 8:
#line 145 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = new Expression(); // making a new expression and storing the symbol
            (yyval.expr)->symbol = gentemp(POINTER, (yyvsp[0].sval));
            (yyval.expr)->symbol->type->arr_type = new SymType(CHAR); // string = char *

            emit("=str", (yyval.expr)->symbol->name, stringList.size());
            stringList.push_back((yyvsp[0].sval));   
        }
#line 2001 "y.tab.c"
    break;

  case 9:
#line 155 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[-1].expr); // simply equate to expression
        }
#line 2009 "y.tab.c"
    break;

  case 10:
#line 163 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = new Expression(); 
            (yyval.expr)->symbol = gentemp(INT, to_string((yyvsp[0].ival)));
            emit("=", (yyval.expr)->symbol->name, (yyvsp[0].ival));
        }
#line 2019 "y.tab.c"
    break;

  case 11:
#line 170 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(FLOAT, (yyvsp[0].fval));
            emit("=", (yyval.expr)->symbol->name, (yyvsp[0].fval));
        }
#line 2029 "y.tab.c"
    break;

  case 12:
#line 177 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = new Expression();
            (yyval.expr)->symbol = gentemp(CHAR, (yyvsp[0].cval));
            emit("=", (yyval.expr)->symbol->name, (yyvsp[0].cval));
        }
#line 2039 "y.tab.c"
    break;

  case 13:
#line 186 "ass6_21CS10026_21CS30009.y"
        { 
            // create a new array and append location of primary_expression
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[0].expr)->symbol;
            (yyval.array)->loc = (yyval.array)->symbol;
            (yyval.array)->subarr_type = (yyvsp[0].expr)->symbol->type;
        }
#line 2051 "y.tab.c"
    break;

  case 14:
#line 195 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[-3].array)->symbol;    
            (yyval.array)->subarr_type = (yyvsp[-3].array)->subarr_type->arr_type; // indexing - going one level deeper
            (yyval.array)->loc = gentemp(INT); 
            (yyval.array)->type = Array::ARRAY;

            // checking if array is 1D or multi-dimensional
            if((yyvsp[-3].array)->type == Array::ARRAY) {
                // multi-dimensional array - so need to multiply size and add offset
                Symbol *sym = gentemp(INT);
                int size = (yyval.array)->subarr_type->computeSize();
                emit("*", sym->name, (yyvsp[-1].expr)->symbol->name, to_string(size));
                emit("+", (yyval.array)->loc->name, (yyvsp[-3].array)->loc->name, sym->name);
            } else {
                // 1D array - just calculate size
                int size = (yyval.array)->subarr_type->computeSize();
                emit("*", (yyval.array)->loc->name, (yyvsp[-1].expr)->symbol->name, to_string(size));
            }

        }
#line 2077 "y.tab.c"
    break;

  case 15:
#line 218 "ass6_21CS10026_21CS30009.y"
        { 
            // function call
            (yyval.array) = new Array();
            (yyval.array)->symbol = gentemp((yyvsp[-3].array)->symbol->type->type);
            emit("call", (yyval.array)->symbol->name, (yyvsp[-3].array)->symbol->name, to_string((yyvsp[-1].num_params)));
        }
#line 2088 "y.tab.c"
    break;

  case 16:
#line 227 "ass6_21CS10026_21CS30009.y"
        { }
#line 2094 "y.tab.c"
    break;

  case 17:
#line 230 "ass6_21CS10026_21CS30009.y"
        { }
#line 2100 "y.tab.c"
    break;

  case 18:
#line 233 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = new Array();
            // temp with old value, then add 1
            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
            emit("+", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, "1"); 
        }
#line 2112 "y.tab.c"
    break;

  case 19:
#line 241 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = new Array();
            // temp with old value, then subtract 1
            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
            emit("-", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, "1");
        }
#line 2124 "y.tab.c"
    break;

  case 20:
#line 250 "ass6_21CS10026_21CS30009.y"
        { }
#line 2130 "y.tab.c"
    break;

  case 21:
#line 253 "ass6_21CS10026_21CS30009.y"
        { }
#line 2136 "y.tab.c"
    break;

  case 22:
#line 260 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.num_params) = (yyvsp[0].num_params); // depends on argument expression list
        }
#line 2144 "y.tab.c"
    break;

  case 23:
#line 265 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.num_params) = 0; // no arguments
        }
#line 2152 "y.tab.c"
    break;

  case 24:
#line 272 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.num_params) = 1; // 1 argument
            emit("param", (yyvsp[0].expr)->symbol->name);
        }
#line 2161 "y.tab.c"
    break;

  case 25:
#line 278 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.num_params) = (yyvsp[-2].num_params) + 1; // one more argument added
            emit("param", (yyvsp[0].expr)->symbol->name);
        }
#line 2170 "y.tab.c"
    break;

  case 26:
#line 286 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = (yyvsp[0].array); // depends on postfix expression
        }
#line 2178 "y.tab.c"
    break;

  case 27:
#line 290 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = (yyvsp[0].array);
            // this is pre increment, so 1 is added directly
            emit("+", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, "1");
        }
#line 2188 "y.tab.c"
    break;

  case 28:
#line 297 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = (yyvsp[0].array);
            // similar to pre increment
            emit("-", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, "1");
        }
#line 2198 "y.tab.c"
    break;

  case 29:
#line 304 "ass6_21CS10026_21CS30009.y"
        { 
            // operation depends on unary operator

            (yyval.array) = new Array();

            if(strcmp((yyvsp[-1].unary_op), "&") == 0) {
                // address of -> generate new pointer type
                (yyval.array)->symbol = gentemp(POINTER);
                (yyval.array)->symbol->type->arr_type = (yyvsp[0].array)->symbol->type;
                emit("=&", (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
            } 
            
            else if(strcmp((yyvsp[-1].unary_op), "*") == 0) {
                // dereferencing
                (yyval.array)->symbol = (yyvsp[0].array)->symbol;
                (yyval.array)->loc = gentemp((yyvsp[0].array)->loc->type->arr_type->type);
                (yyval.array)->loc->type->arr_type = (yyvsp[0].array)->loc->type->arr_type->arr_type;
                (yyval.array)->type = Array::POINTER;
                emit("=*", (yyval.array)->loc->name, (yyvsp[0].array)->loc->name);
            } 

            else if(strcmp((yyvsp[-1].unary_op), "+") == 0) {
                // unary plus
                (yyval.array) = (yyvsp[0].array);
            } 
            else { 
                // for unary minus, bitwise not and logical not
                (yyval.array) = new Array();
                (yyval.array)->symbol = gentemp((yyvsp[0].array)->symbol->type->type);
                
                if (strcmp((yyvsp[-1].unary_op),"-")==0)
                    emit("=-", (yyval.array)->symbol->name, "0", (yyvsp[0].array)->symbol->name); // to differentiate between unary and binary minus
                else
                    emit((yyvsp[-1].unary_op), (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
            }
        }
#line 2239 "y.tab.c"
    break;

  case 30:
#line 343 "ass6_21CS10026_21CS30009.y"
        { }
#line 2245 "y.tab.c"
    break;

  case 31:
#line 346 "ass6_21CS10026_21CS30009.y"
        { }
#line 2251 "y.tab.c"
    break;

  case 32:
#line 353 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.unary_op) = strdup("&"); 
        }
#line 2259 "y.tab.c"
    break;

  case 33:
#line 357 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.unary_op) = strdup("*"); 
        }
#line 2267 "y.tab.c"
    break;

  case 34:
#line 361 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.unary_op) = strdup("+"); 
        }
#line 2275 "y.tab.c"
    break;

  case 35:
#line 365 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.unary_op) = strdup("=-"); 
        }
#line 2283 "y.tab.c"
    break;

  case 36:
#line 369 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.unary_op) = strdup("~"); 
        }
#line 2291 "y.tab.c"
    break;

  case 37:
#line 373 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.unary_op) = strdup("!"); 
        }
#line 2299 "y.tab.c"
    break;

  case 38:
#line 381 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = (yyvsp[0].array); // depends on unary expression
        }
#line 2307 "y.tab.c"
    break;

  case 39:
#line 386 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.array) = new Array();
            (yyval.array)->symbol = (yyvsp[0].array)->symbol->convert(current_type); // convert to required type
        }
#line 2316 "y.tab.c"
    break;

  case 40:
#line 395 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = new Expression();

            // we have to obtain base type of the expression in case of array
            SymType *bType = (yyvsp[0].array)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            // if array, then we create a temp symbol and emit code
            if((yyvsp[0].array)->type == Array::ARRAY) {
                (yyval.expr)->symbol = gentemp(bType->type);
                emit("=[]", (yyval.expr)->symbol->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->loc->name);
            } 
            
            // if pointer, then we simply store the location
            else if((yyvsp[0].array)->type == Array::POINTER)
                (yyval.expr)->symbol = (yyvsp[0].array)->loc;

            // if normal variable, then we simply store the symbol
            else
                (yyval.expr)->symbol = (yyvsp[0].array)->symbol;

        }
#line 2344 "y.tab.c"
    break;

  case 41:
#line 419 "ass6_21CS10026_21CS30009.y"
        { 
            // similar to above, we obtain base type and create temp symbol
            SymType *bType = (yyvsp[-2].expr)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if((yyvsp[0].array)->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->loc->name);
            } 
            else if((yyvsp[0].array)->type == Array::POINTER)
                temp = (yyvsp[0].array)->loc;
            else
                temp = (yyvsp[0].array)->symbol;

            // now we execute the required operation (here, multiplication)
            // type compatibility is also checked
            if(typecheck((yyvsp[-2].expr)->symbol, temp)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[-2].expr)->symbol->type->type);
                emit("*", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2377 "y.tab.c"
    break;

  case 42:
#line 449 "ass6_21CS10026_21CS30009.y"
        { 
            // similar to above agains
            SymType *bType = (yyvsp[-2].expr)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if((yyvsp[0].array)->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->loc->name);
            } 
            else if((yyvsp[0].array)->type == Array::POINTER)
                temp = (yyvsp[0].array)->loc;
            else
                temp = (yyvsp[0].array)->symbol;

            if(typecheck((yyvsp[-2].expr)->symbol, temp)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[-2].expr)->symbol->type->type);
                emit("/", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2408 "y.tab.c"
    break;

  case 43:
#line 477 "ass6_21CS10026_21CS30009.y"
        { 
            // similar to above again
            SymType *bType = (yyvsp[-2].expr)->symbol->type;
            while(bType->arr_type != NULL)
                bType = bType->arr_type;

            Symbol *temp;

            if((yyvsp[0].array)->type == Array::ARRAY) {
                temp = gentemp(bType->type);
                emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->loc->name);
            } 
            else if((yyvsp[0].array)->type == Array::POINTER)
                temp = (yyvsp[0].array)->loc;
            else
                temp = (yyvsp[0].array)->symbol;

            if(typecheck((yyvsp[-2].expr)->symbol, temp)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[-2].expr)->symbol->type->type);
                emit("%", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, temp->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2439 "y.tab.c"
    break;

  case 44:
#line 507 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on multiplicative expression
        }
#line 2447 "y.tab.c"
    break;

  case 45:
#line 512 "ass6_21CS10026_21CS30009.y"
        {   
            // addition operation, but type compatibility is checked
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[-2].expr)->symbol->type->type);
                emit("+", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2463 "y.tab.c"
    break;

  case 46:
#line 525 "ass6_21CS10026_21CS30009.y"
        { 
            // subtraction operation, but type compatibility is checked
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp((yyvsp[-2].expr)->symbol->type->type);
                emit("-", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2479 "y.tab.c"
    break;

  case 47:
#line 540 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on additive expression
        }
#line 2487 "y.tab.c"
    break;

  case 48:
#line 545 "ass6_21CS10026_21CS30009.y"
        { 
            // left shift operation
            if((yyvsp[0].expr)->symbol->type->type == INT) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp(INT);
                emit("<<", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2503 "y.tab.c"
    break;

  case 49:
#line 558 "ass6_21CS10026_21CS30009.y"
        { 
            // right shift operation
            if((yyvsp[0].expr)->symbol->type->type == INT) {
                (yyval.expr) = new Expression();
                (yyval.expr)->symbol = gentemp(INT);
                emit(">>", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2519 "y.tab.c"
    break;

  case 50:
#line 575 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on shift expression
        }
#line 2527 "y.tab.c"
    break;

  case 51:
#line 579 "ass6_21CS10026_21CS30009.y"
        {   
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("<", "", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2545 "y.tab.c"
    break;

  case 52:
#line 594 "ass6_21CS10026_21CS30009.y"
        { 
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit(">", "", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2563 "y.tab.c"
    break;

  case 53:
#line 609 "ass6_21CS10026_21CS30009.y"
        { 
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("<=", "", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2581 "y.tab.c"
    break;

  case 54:
#line 624 "ass6_21CS10026_21CS30009.y"
        { 
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit(">=", "", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
                emit("goto", "");
            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2599 "y.tab.c"
    break;

  case 55:
#line 641 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on relational expression
        }
#line 2607 "y.tab.c"
    break;

  case 56:
#line 646 "ass6_21CS10026_21CS30009.y"
        { 
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyvsp[-2].expr)->conv2Int();
                (yyvsp[0].expr)->conv2Int();

                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);

                emit("==", "", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
                emit("goto", "");

            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2630 "y.tab.c"
    break;

  case 57:
#line 666 "ass6_21CS10026_21CS30009.y"
        { 
            if(typecheck((yyvsp[-2].expr)->symbol, (yyvsp[0].expr)->symbol)) {
                (yyvsp[-2].expr)->conv2Int();
                (yyvsp[0].expr)->conv2Int();

                (yyval.expr) = new Expression();
                (yyval.expr)->type = Expression::BOOLEAN;
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);

                emit("!=", "", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
                emit("goto", "");

            } 
            else {
                yyerror("Type mismatch!");
            }
        }
#line 2653 "y.tab.c"
    break;

  case 58:
#line 691 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on equality expression
        }
#line 2661 "y.tab.c"
    break;

  case 59:
#line 696 "ass6_21CS10026_21CS30009.y"
        { 
            (yyvsp[-2].expr)->conv2Int();
            (yyvsp[0].expr)->conv2Int();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::NONBOOLEAN;
            (yyval.expr)->symbol = gentemp(INT);

            emit("&", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
        }
#line 2676 "y.tab.c"
    break;

  case 60:
#line 710 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on AND expression
        }
#line 2684 "y.tab.c"
    break;

  case 61:
#line 714 "ass6_21CS10026_21CS30009.y"
        { 
            (yyvsp[-2].expr)->conv2Int();
            (yyvsp[0].expr)->conv2Int();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::NONBOOLEAN;
            (yyval.expr)->symbol = gentemp(INT);

            emit("^", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
        }
#line 2699 "y.tab.c"
    break;

  case 62:
#line 728 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on exclusive OR expression
        }
#line 2707 "y.tab.c"
    break;

  case 63:
#line 732 "ass6_21CS10026_21CS30009.y"
        {  
            (yyvsp[-2].expr)->conv2Int();
            (yyvsp[0].expr)->conv2Int();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::NONBOOLEAN;
            (yyval.expr)->symbol = gentemp(INT);

            emit("|", (yyval.expr)->symbol->name, (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name);
        }
#line 2722 "y.tab.c"
    break;

  case 64:
#line 748 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on inclusive OR expression
        }
#line 2730 "y.tab.c"
    break;

  case 65:
#line 753 "ass6_21CS10026_21CS30009.y"
        { 
            (yyvsp[-3].expr)->conv2Bool();
            (yyvsp[0].expr)->conv2Bool();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::BOOLEAN;

            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_num)); // backpatching
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist; // B.truelist = B2.truelist
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist); // B.falselist = merge(B1.falselist, B2.falselist)
        }
#line 2746 "y.tab.c"
    break;

  case 66:
#line 769 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on logical AND expression
        }
#line 2754 "y.tab.c"
    break;

  case 67:
#line 774 "ass6_21CS10026_21CS30009.y"
        {  
            (yyvsp[-3].expr)->conv2Bool();
            (yyvsp[0].expr)->conv2Bool();

            (yyval.expr) = new Expression();
            (yyval.expr)->type = Expression::BOOLEAN;

            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr_num)); // backpatching
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist); // B.truelist = merge(B1.truelist, B2.truelist)
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist; // B.falselist = B2.falselist
        }
#line 2770 "y.tab.c"
    break;

  case 68:
#line 789 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on logical OR expression
        }
#line 2778 "y.tab.c"
    break;

  case 69:
#line 795 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr)->symbol = gentemp((yyvsp[-4].expr)->symbol->type->type);
            emit("=", (yyval.expr)->symbol->name, (yyvsp[0].expr)->symbol->name);

            list<int> l = makelist(nextinstr());
            emit("goto", "");

            backpatch((yyvsp[-3].stmt)->nextlist, nextinstr());
            emit("=", (yyval.expr)->symbol->name, (yyvsp[-4].expr)->symbol->name);

            l = merge(l, makelist(nextinstr()));
            emit("goto", "");

            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());

            (yyvsp[-8].expr)->conv2Bool();

            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_num));
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_num));

            backpatch(l, nextinstr());
        }
#line 2805 "y.tab.c"
    break;

  case 70:
#line 822 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on conditional expression
        }
#line 2813 "y.tab.c"
    break;

  case 71:
#line 828 "ass6_21CS10026_21CS30009.y"
        { 
            if((yyvsp[-2].array)->type == Array::ARRAY) {
                (yyvsp[0].expr)->symbol = (yyvsp[0].expr)->symbol->convert((yyvsp[-2].array)->subarr_type->type);
                emit("[]=", (yyvsp[-2].array)->symbol->name, (yyvsp[-2].array)->loc->name, (yyvsp[0].expr)->symbol->name);
            } 
            else if ((yyvsp[-2].array)->type == Array::POINTER) {
                (yyvsp[0].expr)->symbol = (yyvsp[0].expr)->symbol->convert((yyvsp[-2].array)->loc->type->type);
                emit("*=", (yyvsp[-2].array)->loc->name, (yyvsp[0].expr)->symbol->name);
            } 
            else {
                (yyvsp[0].expr)->symbol = (yyvsp[0].expr)->symbol->convert((yyvsp[-2].array)->symbol->type->type);
                emit("=", (yyvsp[-2].array)->symbol->name, (yyvsp[0].expr)->symbol->name);
            }

            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2834 "y.tab.c"
    break;

  case 72:
#line 848 "ass6_21CS10026_21CS30009.y"
        { }
#line 2840 "y.tab.c"
    break;

  case 73:
#line 852 "ass6_21CS10026_21CS30009.y"
        { }
#line 2846 "y.tab.c"
    break;

  case 74:
#line 854 "ass6_21CS10026_21CS30009.y"
        { }
#line 2852 "y.tab.c"
    break;

  case 75:
#line 856 "ass6_21CS10026_21CS30009.y"
        { }
#line 2858 "y.tab.c"
    break;

  case 76:
#line 858 "ass6_21CS10026_21CS30009.y"
        { }
#line 2864 "y.tab.c"
    break;

  case 77:
#line 860 "ass6_21CS10026_21CS30009.y"
        { }
#line 2870 "y.tab.c"
    break;

  case 78:
#line 862 "ass6_21CS10026_21CS30009.y"
        { }
#line 2876 "y.tab.c"
    break;

  case 79:
#line 864 "ass6_21CS10026_21CS30009.y"
        { }
#line 2882 "y.tab.c"
    break;

  case 80:
#line 866 "ass6_21CS10026_21CS30009.y"
        { }
#line 2888 "y.tab.c"
    break;

  case 81:
#line 868 "ass6_21CS10026_21CS30009.y"
        { }
#line 2894 "y.tab.c"
    break;

  case 82:
#line 870 "ass6_21CS10026_21CS30009.y"
        { }
#line 2900 "y.tab.c"
    break;

  case 83:
#line 875 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on assignment expression
        }
#line 2908 "y.tab.c"
    break;

  case 84:
#line 881 "ass6_21CS10026_21CS30009.y"
        { }
#line 2914 "y.tab.c"
    break;

  case 85:
#line 886 "ass6_21CS10026_21CS30009.y"
        { }
#line 2920 "y.tab.c"
    break;

  case 86:
#line 894 "ass6_21CS10026_21CS30009.y"
        { }
#line 2926 "y.tab.c"
    break;

  case 87:
#line 900 "ass6_21CS10026_21CS30009.y"
        { }
#line 2932 "y.tab.c"
    break;

  case 88:
#line 903 "ass6_21CS10026_21CS30009.y"
        { }
#line 2938 "y.tab.c"
    break;

  case 89:
#line 906 "ass6_21CS10026_21CS30009.y"
        { }
#line 2944 "y.tab.c"
    break;

  case 90:
#line 909 "ass6_21CS10026_21CS30009.y"
        { }
#line 2950 "y.tab.c"
    break;

  case 91:
#line 914 "ass6_21CS10026_21CS30009.y"
        { }
#line 2956 "y.tab.c"
    break;

  case 92:
#line 917 "ass6_21CS10026_21CS30009.y"
        { }
#line 2962 "y.tab.c"
    break;

  case 93:
#line 922 "ass6_21CS10026_21CS30009.y"
        { }
#line 2968 "y.tab.c"
    break;

  case 94:
#line 925 "ass6_21CS10026_21CS30009.y"
        { }
#line 2974 "y.tab.c"
    break;

  case 95:
#line 930 "ass6_21CS10026_21CS30009.y"
        { }
#line 2980 "y.tab.c"
    break;

  case 96:
#line 933 "ass6_21CS10026_21CS30009.y"
        { }
#line 2986 "y.tab.c"
    break;

  case 97:
#line 938 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.symbol) = (yyvsp[0].symbol); // depends on declarator
        }
#line 2994 "y.tab.c"
    break;

  case 98:
#line 942 "ass6_21CS10026_21CS30009.y"
        {   
            // if non-empty, then we assign the initial value
            if((yyvsp[0].symbol)->init_val != "-") (yyvsp[-2].symbol)->init_val = (yyvsp[0].symbol)->init_val;
            emit("=", (yyvsp[-2].symbol)->name, (yyvsp[0].symbol)->name);
        }
#line 3004 "y.tab.c"
    break;

  case 99:
#line 952 "ass6_21CS10026_21CS30009.y"
        { }
#line 3010 "y.tab.c"
    break;

  case 100:
#line 955 "ass6_21CS10026_21CS30009.y"
        { }
#line 3016 "y.tab.c"
    break;

  case 101:
#line 958 "ass6_21CS10026_21CS30009.y"
        { }
#line 3022 "y.tab.c"
    break;

  case 102:
#line 961 "ass6_21CS10026_21CS30009.y"
        { }
#line 3028 "y.tab.c"
    break;

  case 103:
#line 969 "ass6_21CS10026_21CS30009.y"
        { 
            current_type = VOID;
        }
#line 3036 "y.tab.c"
    break;

  case 104:
#line 974 "ass6_21CS10026_21CS30009.y"
        { 
            current_type = CHAR;
        }
#line 3044 "y.tab.c"
    break;

  case 105:
#line 979 "ass6_21CS10026_21CS30009.y"
        { }
#line 3050 "y.tab.c"
    break;

  case 106:
#line 982 "ass6_21CS10026_21CS30009.y"
        { 
            current_type = INT;
        }
#line 3058 "y.tab.c"
    break;

  case 107:
#line 987 "ass6_21CS10026_21CS30009.y"
        { }
#line 3064 "y.tab.c"
    break;

  case 108:
#line 990 "ass6_21CS10026_21CS30009.y"
        { 
            current_type = FLOAT;
        }
#line 3072 "y.tab.c"
    break;

  case 109:
#line 995 "ass6_21CS10026_21CS30009.y"
        { }
#line 3078 "y.tab.c"
    break;

  case 110:
#line 998 "ass6_21CS10026_21CS30009.y"
        { }
#line 3084 "y.tab.c"
    break;

  case 111:
#line 1001 "ass6_21CS10026_21CS30009.y"
        { }
#line 3090 "y.tab.c"
    break;

  case 112:
#line 1004 "ass6_21CS10026_21CS30009.y"
        { }
#line 3096 "y.tab.c"
    break;

  case 113:
#line 1007 "ass6_21CS10026_21CS30009.y"
        { }
#line 3102 "y.tab.c"
    break;

  case 114:
#line 1010 "ass6_21CS10026_21CS30009.y"
        { }
#line 3108 "y.tab.c"
    break;

  case 115:
#line 1013 "ass6_21CS10026_21CS30009.y"
        { }
#line 3114 "y.tab.c"
    break;

  case 116:
#line 1019 "ass6_21CS10026_21CS30009.y"
        { }
#line 3120 "y.tab.c"
    break;

  case 117:
#line 1021 "ass6_21CS10026_21CS30009.y"
        { }
#line 3126 "y.tab.c"
    break;

  case 118:
#line 1027 "ass6_21CS10026_21CS30009.y"
        { }
#line 3132 "y.tab.c"
    break;

  case 119:
#line 1030 "ass6_21CS10026_21CS30009.y"
        { }
#line 3138 "y.tab.c"
    break;

  case 120:
#line 1035 "ass6_21CS10026_21CS30009.y"
        { }
#line 3144 "y.tab.c"
    break;

  case 121:
#line 1038 "ass6_21CS10026_21CS30009.y"
        { }
#line 3150 "y.tab.c"
    break;

  case 122:
#line 1044 "ass6_21CS10026_21CS30009.y"
        { }
#line 3156 "y.tab.c"
    break;

  case 123:
#line 1047 "ass6_21CS10026_21CS30009.y"
        { }
#line 3162 "y.tab.c"
    break;

  case 124:
#line 1050 "ass6_21CS10026_21CS30009.y"
        { }
#line 3168 "y.tab.c"
    break;

  case 125:
#line 1057 "ass6_21CS10026_21CS30009.y"
        { }
#line 3174 "y.tab.c"
    break;

  case 126:
#line 1060 "ass6_21CS10026_21CS30009.y"
        { }
#line 3180 "y.tab.c"
    break;

  case 127:
#line 1065 "ass6_21CS10026_21CS30009.y"
        { }
#line 3186 "y.tab.c"
    break;

  case 128:
#line 1068 "ass6_21CS10026_21CS30009.y"
        { }
#line 3192 "y.tab.c"
    break;

  case 129:
#line 1073 "ass6_21CS10026_21CS30009.y"
        { }
#line 3198 "y.tab.c"
    break;

  case 130:
#line 1076 "ass6_21CS10026_21CS30009.y"
        { }
#line 3204 "y.tab.c"
    break;

  case 131:
#line 1079 "ass6_21CS10026_21CS30009.y"
        { }
#line 3210 "y.tab.c"
    break;

  case 132:
#line 1084 "ass6_21CS10026_21CS30009.y"
        { }
#line 3216 "y.tab.c"
    break;

  case 133:
#line 1089 "ass6_21CS10026_21CS30009.y"
        { 
            // for multi-dimensional arrays -> moving deeper until base type is obtained
            SymType *temp = (yyvsp[-1].sym_type);
            while(temp->arr_type != NULL) 
                temp = temp->arr_type;

            // updating type of declarator
            temp->arr_type = (yyvsp[0].symbol)->type;
            (yyval.symbol) = (yyvsp[0].symbol)->update((yyvsp[-1].sym_type));
        }
#line 3231 "y.tab.c"
    break;

  case 134:
#line 1101 "ass6_21CS10026_21CS30009.y"
        { }
#line 3237 "y.tab.c"
    break;

  case 135:
#line 1117 "ass6_21CS10026_21CS30009.y"
        { 
            // variable declaration
            (yyval.symbol) = (yyvsp[0].symbol)->update(new SymType(current_type)); 
            current_symbol = (yyval.symbol);
        }
#line 3247 "y.tab.c"
    break;

  case 136:
#line 1124 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.symbol) = (yyvsp[-1].symbol); // depends on declarator
        }
#line 3255 "y.tab.c"
    break;

  case 137:
#line 1129 "ass6_21CS10026_21CS30009.y"
        { }
#line 3261 "y.tab.c"
    break;

  case 138:
#line 1132 "ass6_21CS10026_21CS30009.y"
        { }
#line 3267 "y.tab.c"
    break;

  case 139:
#line 1135 "ass6_21CS10026_21CS30009.y"
        { 
            
            // to check whether array is 1D or multi-dimensional
            SymType *temp = (yyvsp[-3].symbol)->type, *prev = NULL;
            while(temp->type == ARRAY) { 
                prev = temp;
                temp = temp->arr_type;
            }

            if(prev != NULL) { 
                // case of multi-dimensional array -> base type is obtained from temp
                prev->arr_type =  new SymType(ARRAY, temp, atoi((yyvsp[-1].expr)->symbol->init_val.c_str()));	
                (yyval.symbol) = (yyvsp[-3].symbol)->update((yyvsp[-3].symbol)->type);
            }
            else { 
                // just 1D array
                SymType* new_type = new SymType(ARRAY, (yyvsp[-3].symbol)->type, atoi((yyvsp[-1].expr)->symbol->init_val.c_str()));
                (yyval.symbol) = (yyvsp[-3].symbol)->update(new_type);
            }
        }
#line 3292 "y.tab.c"
    break;

  case 140:
#line 1157 "ass6_21CS10026_21CS30009.y"
        { 
            // similar to previous one, but initial value is kept as 0 as we don't know the size
            SymType *temp = (yyvsp[-2].symbol)->type, *prev = NULL;
            while(temp->type == ARRAY) { 
                prev = temp;
                temp = temp->arr_type;
            }

            if(prev != NULL) { 
                // case of multi-dimensional array
                prev->arr_type =  new SymType(ARRAY, temp, 0);	
                (yyval.symbol) = (yyvsp[-2].symbol)->update((yyvsp[-2].symbol)->type);
            }
            else { 
                // just 1D array
                SymType* new_type = new SymType(ARRAY, (yyvsp[-2].symbol)->type, 0);
                (yyval.symbol) = (yyvsp[-2].symbol)->update(new_type);
            }
        }
#line 3316 "y.tab.c"
    break;

  case 141:
#line 1178 "ass6_21CS10026_21CS30009.y"
        { }
#line 3322 "y.tab.c"
    break;

  case 142:
#line 1181 "ass6_21CS10026_21CS30009.y"
        { }
#line 3328 "y.tab.c"
    break;

  case 143:
#line 1184 "ass6_21CS10026_21CS30009.y"
        { }
#line 3334 "y.tab.c"
    break;

  case 144:
#line 1187 "ass6_21CS10026_21CS30009.y"
        { }
#line 3340 "y.tab.c"
    break;

  case 145:
#line 1190 "ass6_21CS10026_21CS30009.y"
        { }
#line 3346 "y.tab.c"
    break;

  case 146:
#line 1194 "ass6_21CS10026_21CS30009.y"
        { 
            // function declaration
            currentST->name = (yyvsp[-4].symbol)->name;

            if((yyvsp[-4].symbol)->type->type != VOID) {
                // return symbol is updated, for non-void functions
                Symbol* s = currentST->lookup("return");
                s->update((yyvsp[-4].symbol)->type);
            }

            // set nested table for function
            (yyvsp[-4].symbol)->nestedST = currentST;
            currentST->parent = globalST;

            changeTable(globalST); // change to global table
            current_symbol = (yyval.symbol);
        }
#line 3368 "y.tab.c"
    break;

  case 147:
#line 1213 "ass6_21CS10026_21CS30009.y"
        { }
#line 3374 "y.tab.c"
    break;

  case 148:
#line 1216 "ass6_21CS10026_21CS30009.y"
        { 
            // same as previous one
            currentST->name = (yyvsp[-3].symbol)->name;

            if((yyvsp[-3].symbol)->type->type != VOID) {
                Symbol* s = currentST->lookup("return");
                s->update((yyvsp[-3].symbol)->type);
            }

            // set nested table for function
            (yyvsp[-3].symbol)->nestedST = currentST;
            currentST->parent = globalST;

            changeTable(globalST); // change to global table
            current_symbol = (yyval.symbol);
        }
#line 3395 "y.tab.c"
    break;

  case 149:
#line 1238 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.sym_type) = new SymType(POINTER); // new pointer
        }
#line 3403 "y.tab.c"
    break;

  case 150:
#line 1243 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.sym_type) = new SymType(POINTER, (yyvsp[0].sym_type)); // nested pointer
        }
#line 3411 "y.tab.c"
    break;

  case 151:
#line 1250 "ass6_21CS10026_21CS30009.y"
        { }
#line 3417 "y.tab.c"
    break;

  case 152:
#line 1253 "ass6_21CS10026_21CS30009.y"
        { }
#line 3423 "y.tab.c"
    break;

  case 153:
#line 1258 "ass6_21CS10026_21CS30009.y"
        { }
#line 3429 "y.tab.c"
    break;

  case 154:
#line 1261 "ass6_21CS10026_21CS30009.y"
        { }
#line 3435 "y.tab.c"
    break;

  case 155:
#line 1266 "ass6_21CS10026_21CS30009.y"
        { }
#line 3441 "y.tab.c"
    break;

  case 156:
#line 1269 "ass6_21CS10026_21CS30009.y"
        { }
#line 3447 "y.tab.c"
    break;

  case 157:
#line 1274 "ass6_21CS10026_21CS30009.y"
        { }
#line 3453 "y.tab.c"
    break;

  case 158:
#line 1277 "ass6_21CS10026_21CS30009.y"
        { }
#line 3459 "y.tab.c"
    break;

  case 159:
#line 1282 "ass6_21CS10026_21CS30009.y"
        {
            /*
                $2->category = Symbol::PARAMETER; 
                currentTable->parameters.push_back($2->name);
            */
        }
#line 3470 "y.tab.c"
    break;

  case 160:
#line 1290 "ass6_21CS10026_21CS30009.y"
        { }
#line 3476 "y.tab.c"
    break;

  case 161:
#line 1295 "ass6_21CS10026_21CS30009.y"
        { }
#line 3482 "y.tab.c"
    break;

  case 162:
#line 1298 "ass6_21CS10026_21CS30009.y"
        { }
#line 3488 "y.tab.c"
    break;

  case 163:
#line 1303 "ass6_21CS10026_21CS30009.y"
        { }
#line 3494 "y.tab.c"
    break;

  case 164:
#line 1308 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.symbol) = (yyvsp[0].expr)->symbol; // depends on assignment expression
        }
#line 3502 "y.tab.c"
    break;

  case 165:
#line 1313 "ass6_21CS10026_21CS30009.y"
        { }
#line 3508 "y.tab.c"
    break;

  case 166:
#line 1316 "ass6_21CS10026_21CS30009.y"
        { }
#line 3514 "y.tab.c"
    break;

  case 167:
#line 1321 "ass6_21CS10026_21CS30009.y"
        { }
#line 3520 "y.tab.c"
    break;

  case 168:
#line 1324 "ass6_21CS10026_21CS30009.y"
        { }
#line 3526 "y.tab.c"
    break;

  case 169:
#line 1329 "ass6_21CS10026_21CS30009.y"
        { }
#line 3532 "y.tab.c"
    break;

  case 170:
#line 1334 "ass6_21CS10026_21CS30009.y"
        { }
#line 3538 "y.tab.c"
    break;

  case 171:
#line 1337 "ass6_21CS10026_21CS30009.y"
        { }
#line 3544 "y.tab.c"
    break;

  case 172:
#line 1342 "ass6_21CS10026_21CS30009.y"
        { }
#line 3550 "y.tab.c"
    break;

  case 173:
#line 1345 "ass6_21CS10026_21CS30009.y"
        { }
#line 3556 "y.tab.c"
    break;

  case 174:
#line 1350 "ass6_21CS10026_21CS30009.y"
        { }
#line 3562 "y.tab.c"
    break;

  case 175:
#line 1353 "ass6_21CS10026_21CS30009.y"
        { }
#line 3568 "y.tab.c"
    break;

  case 176:
#line 1362 "ass6_21CS10026_21CS30009.y"
        { }
#line 3574 "y.tab.c"
    break;

  case 177:
#line 1365 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[0].stmt); 
        }
#line 3582 "y.tab.c"
    break;

  case 178:
#line 1370 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 3591 "y.tab.c"
    break;

  case 179:
#line 1376 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3599 "y.tab.c"
    break;

  case 180:
#line 1381 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3607 "y.tab.c"
    break;

  case 181:
#line 1386 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3615 "y.tab.c"
    break;

  case 182:
#line 1394 "ass6_21CS10026_21CS30009.y"
        { }
#line 3621 "y.tab.c"
    break;

  case 183:
#line 1397 "ass6_21CS10026_21CS30009.y"
        { }
#line 3627 "y.tab.c"
    break;

  case 184:
#line 1400 "ass6_21CS10026_21CS30009.y"
        { }
#line 3633 "y.tab.c"
    break;

  case 185:
#line 1407 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[-1].stmt);
            changeTable(currentST->parent); // return to parent ST
        }
#line 3642 "y.tab.c"
    break;

  case 186:
#line 1415 "ass6_21CS10026_21CS30009.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3650 "y.tab.c"
    break;

  case 187:
#line 1422 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist,(yyvsp[-1].instr_num));
        }
#line 3659 "y.tab.c"
    break;

  case 188:
#line 1430 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[0].stmt); // depends on block item list
        }
#line 3667 "y.tab.c"
    break;

  case 189:
#line 1435 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement(); // new statement
        }
#line 3675 "y.tab.c"
    break;

  case 190:
#line 1443 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement(); // new statement
        }
#line 3683 "y.tab.c"
    break;

  case 191:
#line 1447 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = (yyvsp[0].stmt); // depends on statement
        }
#line 3691 "y.tab.c"
    break;

  case 192:
#line 1454 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[-1].expr); // depends on expression
        }
#line 3699 "y.tab.c"
    break;

  case 193:
#line 1461 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = (yyvsp[0].expr); // depends on expression
        }
#line 3707 "y.tab.c"
    break;

  case 194:
#line 1465 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.expr) = new Expression(); // new expression
        }
#line 3715 "y.tab.c"
    break;

  case 195:
#line 1477 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement();

            (yyvsp[-7].expr)->conv2Bool();

            backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-5].instr_num)); // if true, go to M1 (if-statement)
            backpatch((yyvsp[-7].expr)->falselist, (yyvsp[-1].instr_num)); // if false, go to M2 (else-statement)

            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, merge((yyvsp[-4].stmt)->nextlist, (yyvsp[-3].stmt)->nextlist)); // to go out of if-else after it's done
        }
#line 3730 "y.tab.c"
    break;

  case 196:
#line 1492 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement();

            (yyvsp[-4].expr)->conv2Bool();

            backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-2].instr_num)); // // if true, go to M1 (if-statement)

            (yyval.stmt)->nextlist = merge((yyvsp[-4].expr)->falselist, merge((yyvsp[-1].stmt)->nextlist, (yyvsp[0].stmt)->nextlist)); // to go out of if when expression is false
        }
#line 3744 "y.tab.c"
    break;

  case 197:
#line 1503 "ass6_21CS10026_21CS30009.y"
        { }
#line 3750 "y.tab.c"
    break;

  case 198:
#line 1510 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement();

            (yyvsp[-3].expr)->conv2Bool();

            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr_num)); // M1 -> to go back to start of loop
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_num)); // if true, go to M2 (statement)

            (yyval.stmt)->nextlist = (yyvsp[-3].expr)->falselist; // to go out of while when expression is false

            emit("goto", to_string((yyvsp[-5].instr_num)));
        }
#line 3767 "y.tab.c"
    break;

  case 199:
#line 1526 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement();

            (yyvsp[-2].expr)->conv2Bool();

            backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_num)); // if true, go to M1 (statement)
            backpatch((yyvsp[-6].stmt)->nextlist, (yyvsp[-5].instr_num)); // M2 -> to go to check expression once statement is executed

            (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist; // to go out of do-while when expression is false
        }
#line 3782 "y.tab.c"
    break;

  case 200:
#line 1539 "ass6_21CS10026_21CS30009.y"
        { 
            (yyval.stmt) = new Statement();

            (yyvsp[-7].expr)->conv2Bool();

            backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-1].instr_num)); // if true, go to M3 (statement)
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-8].instr_num)); // go to M1 after N1 (for checking condition)
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr_num)); // go to M2 (3rd part of for loop), after statement is executed

            emit("goto", to_string((yyvsp[-5].instr_num)));

            (yyval.stmt)->nextlist = (yyvsp[-7].expr)->falselist; // to go out of for when expression is false
        }
#line 3800 "y.tab.c"
    break;

  case 201:
#line 1554 "ass6_21CS10026_21CS30009.y"
        { }
#line 3806 "y.tab.c"
    break;

  case 202:
#line 1560 "ass6_21CS10026_21CS30009.y"
        { }
#line 3812 "y.tab.c"
    break;

  case 203:
#line 1563 "ass6_21CS10026_21CS30009.y"
        { }
#line 3818 "y.tab.c"
    break;

  case 204:
#line 1566 "ass6_21CS10026_21CS30009.y"
        { }
#line 3824 "y.tab.c"
    break;

  case 205:
#line 1569 "ass6_21CS10026_21CS30009.y"
        {   
            // depending on whether expression_opt is epsilon or not, return is handled
            (yyval.stmt) = new Statement();
            emit("return",((yyvsp[-1].expr)->symbol == NULL) ? "" : (yyvsp[-1].expr)->symbol->name);
        }
#line 3834 "y.tab.c"
    break;

  case 206:
#line 1581 "ass6_21CS10026_21CS30009.y"
        { }
#line 3840 "y.tab.c"
    break;

  case 207:
#line 1584 "ass6_21CS10026_21CS30009.y"
        { }
#line 3846 "y.tab.c"
    break;

  case 208:
#line 1589 "ass6_21CS10026_21CS30009.y"
        { }
#line 3852 "y.tab.c"
    break;

  case 209:
#line 1592 "ass6_21CS10026_21CS30009.y"
        { }
#line 3858 "y.tab.c"
    break;

  case 210:
#line 1598 "ass6_21CS10026_21CS30009.y"
        { 
            block_count = 0; // reset block count for function
            // $2->type->type = FUNCTION; // check
            emit("labelend", (yyvsp[-5].symbol)->name);
            if((yyvsp[-5].symbol)->type->type != VOID) {
                currentST->lookup("return")->update((yyvsp[-5].symbol)->type); // return value type is updated
            }
            changeTable(globalST); // return to global ST
        }
#line 3872 "y.tab.c"
    break;

  case 211:
#line 1611 "ass6_21CS10026_21CS30009.y"
        { }
#line 3878 "y.tab.c"
    break;

  case 212:
#line 1614 "ass6_21CS10026_21CS30009.y"
        { }
#line 3884 "y.tab.c"
    break;

  case 213:
#line 1619 "ass6_21CS10026_21CS30009.y"
        { }
#line 3890 "y.tab.c"
    break;

  case 214:
#line 1622 "ass6_21CS10026_21CS30009.y"
        { }
#line 3896 "y.tab.c"
    break;


#line 3900 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 1625 "ass6_21CS10026_21CS30009.y"


void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}   
