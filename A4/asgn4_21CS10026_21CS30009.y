%{
    #include <stdio.h>
    #include "defs.h"
    void yyerror(const char*); 
    extern int yylex();   
%}

%union {
        int ival;
        float fval;
        char cval;
        char *sval;
} 

%token INC_OP DEC_OP PTR_OP EQ
%token CURLY_BRACE_OPEN CURLY_BRACE_CLOSE SQR_BRACE_OPEN SQR_BRACE_CLOSE
%token COLON SEMI_COLON ELLIPSIS QUESTION_MARK
%token SIZEOF
%token LEFT_OP RIGHT_OP EQ_OP NE_OP LTE_OP GTE_OP
%token AND_OP OR_OP 
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN RIGHT_ASSIGN LEFT_ASSIGN OR_ASSIGN AND_ASSIGN XOR_ASSIGN
%token LESS_THAN GREATER_THAN DOT BITWISEAND BITWISEOR BITWISEXOR STAR PLUS MINUS NOT EXCLAMATION DIVIDE PERCENTAGE COMMA HASH

%token EXTERN STATIC AUTO REGISTER
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token CONST ENUM INLINE RESTRICT VOLATILE
%token IF ELSE SWITCH  CASE DEFAULT WHILE CONTINUE DO GOTO FOR RETURN BREAK
%token STRUCT TYPEDEF UNION

%token <sval> IDENTIFIER
%token <ival> INTEGER_CONSTANT
%token <fval> FLOATING_CONSTANT
%token <cval> CHARACTER_CONSTANT
%token <sval> STRING_LITERAL

%token INVALID_TOKEN

%nonassoc THEN
%nonassoc ELSE

%start translation_unit

%%

// 1. Expressions
primary_expression:
    IDENTIFIER
        { yyinfo("primary-expression: identifier"); }

    | CONSTANT
        { yyinfo("primary-expression: constant"); }

    | STRING_LITERAL
        { yyinfo("primary-expression: string-literal"); }

    | '(' expression ')'
        { yyinfo("primary-expression: ( expression )"); }
    ;

postfix_expression:
    primary_expression
    { yyinfo("postfix_expression -> primary_expression\n"); }

    | postfix_expression '[' expression ']'
    { yyinfo("postfix_expression -> postfix_expression [ expression ]\n"); }

    | postfix_expression '(' argument_expression_list_opt ')'
    { yyinfo("postfix_expression -> postfix_expression ( ]argument_expression_list_opt )\n"); }

    | postfix_expression '.' IDENTIFIER
    { yyinfo("postfix_expression -> postfix_expression . identifier\n"); }

    | postfix_expression PTR_OP IDENTIFIER
    { yyinfo("postfix_expression -> postfix_expression -> identifier\n"); }

    | postfix_expression INC_OP
    { yyinfo("postfix_expression -> postfix_expression ++\n"); }

    | postfix_expression DEC_OP
    { yyinfo("postfix_expression -> postfix_expression --\n"); }

    | '(' type_name ')' '{' initializer_list '}'
    { yyinfo("postfix_expression -> ( type_name ) { initializer_list }\n"); }

    | '(' type_name ')' '{' initializer_list ',' '}'     
    { yyinfo("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
    ;  


argument_expression_list_opt:
    argument_expression_list
    | /* empty */
    ;

argument_expression_list:
    assignment_expression
    { yyinfo("argument_expression_list -> assignment_expression\n"); }

    | argument_expression_list ',' assignment_expression
    { yyinfo("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
    ;

unary_expression:
    postfix_expression
    { yyinfo("unary_expression -> postfix_expression\n"); }

    | INC_OP unary_expression
    { yyinfo("unary_expression -> ++ unary_expression\n"); }

    | DEC_OP unary_expression
    { yyinfo("unary_expression -> -- unary_expression\n"); }

    | unary_operator cast_expression
    { yyinfo("unary_expression -> unary_operator cast_expression\n"); }

    | SIZEOF unary_expression
    { yyinfo("unary_expression -> sizeof unary_expression\n"); }

    | SIZEOF '(' type_name ')'
    { yyinfo("unary_expression -> sizeof ( type_name )\n"); }
    ;

unary_operator:
    BITWISEAND
    { yyinfo("unary_operator -> &\n"); }

    | STAR
    { yyinfo("unary_operator -> *\n"); }

    | PLUS
    { yyinfo("unary_operator -> +\n"); }

    | MINUS
    { yyinfo("unary_operator -> -\n"); }

    | NOT
    { yyinfo("unary_operator -> ~\n"); }

    | EXCLAMATION
    { yyinfo("unary_operator -> !\n"); }
    ;

cast_expression:
    unary_expression
    { yyinfo("cast_expression -> unary_expression\n"); }

    | '(' type_name ')' cast_expression
    { yyinfo("cast_expression -> ( type_name ) cast_expression\n"); }
    ;

multiplicative_expression:
    cast_expression
    { yyinfo("multiplicative_expression -> cast_expression\n"); }

    | multiplicative_expression STAR cast_expression
    { yyinfo("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }

    | multiplicative_expression DIVIDE cast_expression
    { yyinfo("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }

    | multiplicative_expression PERCENTAGE cast_expression
    { yyinfo("multiplicative_expression -> multiplicative_expression % cast_expression\n"); }
    ;

additive_expression:
    multiplicative_expression
    { yyinfo("additive_expression -> multiplicative_expression\n"); }

    | additive_expression PLUS multiplicative_expression
    { yyinfo("additive_expression -> additive_expression + multiplicative_expression\n"); }

    | additive_expression MINUS multiplicative_expression
    { yyinfo("additive_expression -> additive_expression - multiplicative_expression\n"); }
    ;

shift_expression:
    additive_expression
    { yyinfo("shift_expression -> additive_expression\n"); }

    | shift_expression LEFT_OP additive_expression
    { yyinfo("shift_expression -> shift_expression << additive_expression\n"); }

    | shift_expression RIGHT_OP additive_expression
    { yyinfo("shift_expression -> shift_expression >> additive_expression\n"); }
    ;

relational_expression:
    shift_expression
    { yyinfo("relational_expression -> shift_expression\n"); }

    | relational_expression LESS_THAN shift_expression
    { yyinfo("relational_expression -> relational_expression < shift_expression\n"); }

    | relational_expression GREATER_THAN shift_expression
    { yyinfo("relational_expression -> relational_expression > shift_expression\n"); }

    | relational_expression LTE_OP shift_expression
    { yyinfo("relational_expression -> relational_expression <= shift_expression\n"); }

    | relational_expression GTE_OP shift_expression
    { yyinfo("relational_expression -> relational_expression >= shift_expression\n"); }
    ;

equality_expression:
    relational_expression
    { yyinfo("equality_expression -> relational_expression\n"); }

    | equality_expression EQ_OP relational_expression
    { yyinfo("equality_expression -> equality_expression == relational_expression\n"); }

    | equality_expression NE_OP relational_expression
    { yyinfo("equality_expression -> equality_expression != relational_expression\n"); }
    ;

and_expression:
    equality_expression
    { yyinfo("and_expression -> equality_expression\n"); }

    | and_expression AND_OP equality_expression
    { yyinfo("and_expression -> and_expression & equality_expression\n"); }
    ;

exclusive_or_expression:
    and_expression
    { yyinfo("exclusive_or_expression -> and_expression\n"); }

    | exclusive_or_expression BITWISEXOR and_expression
    { yyinfo("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); }
    ;

inclusive_or_expression:
    exclusive_or_expression
    { yyinfo("inclusive_or_expression -> exclusive_or_expression\n"); }

    | inclusive_or_expression BITWISEOR exclusive_or_expression
    { yyinfo("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); }
    ;

logical_and_expression:
    inclusive_or_expression
    { yyinfo("logical_and_expression -> inclusive_or_expression\n"); }

    | logical_and_expression AND_OP inclusive_or_expression
    { yyinfo("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); }
    ;

logical_or_expression:
    logical_and_expression
    { yyinfo("logical_or_expression -> logical_and_expression\n"); }

    | logical_or_expression OR_OP logical_and_expression
    { yyinfo("logical_or_expression -> logical_or_expression || logical_and_expression\n"); }
    ;

conditional_expression:
    logical_or_expression
    { yyinfo("conditional_expression -> logical_or_expression\n"); }

    | logical_or_expression '?' expression ':' conditional_expression
    { yyinfo("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); }
    ;

assignment_expression:
    conditional_expression
    { yyinfo("assignment_expression -> conditional_expression\n"); }

    | unary_expression assignment_operator assignment_expression
    { yyinfo("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
    ;

assignment_operator:
    EQ
    { yyinfo("assignment_operator -> =\n"); }

    | MUL_ASSIGN
    { yyinfo("assignment_operator -> *=\n"); }

    | DIV_ASSIGN
    { yyinfo("assignment_operator -> /=\n"); }

    | MOD_ASSIGN
    { yyinfo("assignment_operator -> %=\n"); }

    | ADD_ASSIGN
    { yyinfo("assignment_operator -> +=\n"); }

    | SUB_ASSIGN
    { yyinfo("assignment_operator -> -=\n"); }

    | LEFT_ASSIGN
    { yyinfo("assignment_operator -> <<=\n"); }

    | RIGHT_ASSIGN
    { yyinfo("assignment_operator -> >>=\n"); }

    | AND_ASSIGN
    { yyinfo("assignment_operator -> &=\n"); }

    | XOR_ASSIGN
    { yyinfo("assignment_operator -> ^=\n"); }

    | OR_ASSIGN
    { yyinfo("assignment_operator -> |=\n"); }
    ;

expression:
    assignment_expression
    { yyinfo("expression -> assignment_expression\n"); }

    | expression ',' assignment_expression
    { yyinfo("expression -> expression , assignment_expression\n"); }
    ;

constant_expression:
    conditional_expression
    { yyinfo("constant_expression -> conditional_expression\n"); }
    ;

// 2. Declarations