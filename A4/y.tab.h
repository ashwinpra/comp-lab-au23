/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "asgn4_21CS10026_21CS30009.y"
{
    int ival;
    float fval;
    char cval;
    char *sval;
}
/* Line 1529 of yacc.c.  */
#line 240 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

