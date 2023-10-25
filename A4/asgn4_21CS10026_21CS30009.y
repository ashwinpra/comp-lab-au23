/*
    Compilers Lab Assignment 4
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Parser specification for tinyC
*/

%{
    #include <stdio.h>
    void yyerror(const char*); 
    extern int yylex();   
    extern int yylineno;
    extern char* yytext;
%}

%union {
    int ival;
    float fval;
    char cval;
    char *sval;
} 

// parenthesis
%token PARENTHESIS_OPEN PARENTHESIS_CLOSE CURLY_BRACE_OPEN CURLY_BRACE_CLOSE SQR_BRACE_OPEN SQR_BRACE_CLOSE 

// operators
%token INC_OP DEC_OP LEFT_OP RIGHT_OP EQ_OP NE_OP LTE_OP GTE_OP AND_OP OR_OP PTR_OP LT_OP GT_OP EQ DOT BITWISEAND BITWISEOR BITWISEXOR STAR PLUS MINUS NOT EXCLAMATION DIVIDE PERCENTAGE

// assignment operators
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN OR_ASSIGN AND_ASSIGN XOR_ASSIGN

// other tokens
%token COLON SEMI_COLON ELLIPSIS QUESTION_MARK COMMA HASH

// keywords
%token EXTERN STATIC AUTO REGISTER
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token CONST RESTRICT VOLATILE ENUM INLINE
%token SIZEOF STRUCT TYPEDEF UNION
%token IF ELSE SWITCH CASE DEFAULT WHILE CONTINUE DO GOTO FOR RETURN BREAK

// default case - unexpected token
%token UNEXPECTED_TOKEN

%token <sval> IDENTIFIER
%token <ival> INTEGER_CONST
%token <fval> FLOAT_CONST
%token <cval> CHAR_CONST
%token <sval> STRING_LITERAL

%start translation_unit

%%

// ----------1. Expressions----------

primary_expression:
    IDENTIFIER
        { printf("primary_expression -> identifier\n"); }

    | constant
        { printf("primary_expression -> constant\n"); }

    | STRING_LITERAL
        { printf("primary_expression -> string_literal\n"); }

    | PARENTHESIS_OPEN expression PARENTHESIS_CLOSE
        { printf("primary_expression -> ( expression )\n"); }
    ;

constant:
    INTEGER_CONST 
    { printf("constant -> integer_constant\n"); }
    | FLOAT_CONST
    { printf("constant -> float_constant\n"); }
    | CHAR_CONST
    { printf("constant -> char_constant\n"); }


postfix_expression:
    primary_expression
    { printf("postfix_expression -> primary_expression\n"); }

    | postfix_expression SQR_BRACE_OPEN expression SQR_BRACE_CLOSE
    { printf("postfix_expression -> postfix_expression [ expression ]\n"); }

    | postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE
    { printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); }

    | postfix_expression DOT IDENTIFIER
    { printf("postfix_expression -> postfix_expression . identifier\n"); }

    | postfix_expression PTR_OP IDENTIFIER
    { printf("postfix_expression -> postfix_expression -> identifier\n"); }

    | postfix_expression INC_OP 
    { printf("postfix_expression -> postfix_expression ++\n"); }

    | postfix_expression DEC_OP
    { printf("postfix_expression -> postfix_expression --\n"); }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
    { printf("postfix_expression -> ( type_name ) { initializer_list }\n"); }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE     
    { printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); }
    ;  

argument_expression_list:
    assignment_expression
    { printf("argument_expression_list -> assignment_expression\n"); }

    | argument_expression_list COMMA assignment_expression
    { printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); }
    ;

// all non-terminals with "opt" have been replaced with separate non-terminal, which produces either the non-terminal itself or epsilon
argument_expression_list_opt:
    argument_expression_list
    { printf("argument_expression_list_opt -> argument_expression_list\n"); }
    | /* empty */
    { printf("argument_expression_list_opt -> epsilon\n");}
    ;

unary_expression:
    postfix_expression
    { printf("unary_expression -> postfix_expression\n"); }

    | INC_OP unary_expression
    { printf("unary_expression -> ++ unary_expression\n"); }

    | DEC_OP unary_expression
    { printf("unary_expression -> -- unary_expression\n"); }

    | unary_operator cast_expression
    { printf("unary_expression -> unary_operator cast_expression\n"); }

    | SIZEOF unary_expression
    { printf("unary_expression -> sizeof unary_expression\n"); }

    | SIZEOF PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE
    { printf("unary_expression -> sizeof ( type_name )\n"); }
    ;

unary_operator:
    BITWISEAND
    { printf("unary_operator -> &\n"); }

    | STAR
    { printf("unary_operator -> *\n"); }

    | PLUS
    { printf("unary_operator -> +\n"); }

    | MINUS
    { printf("unary_operator -> -\n"); }

    | NOT
    { printf("unary_operator -> ~\n"); }

    | EXCLAMATION
    { printf("unary_operator -> !\n"); }
    ;

cast_expression:
    unary_expression
    { printf("cast_expression -> unary_expression\n"); }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression
    { printf("cast_expression -> ( type_name ) cast_expression\n"); }
    ;

multiplicative_expression:
    cast_expression
    { printf("multiplicative_expression -> cast_expression\n"); }

    | multiplicative_expression STAR cast_expression
    { printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); }

    | multiplicative_expression DIVIDE cast_expression
    { printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); }

    | multiplicative_expression PERCENTAGE cast_expression
    { printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); }
    ;

additive_expression:
    multiplicative_expression
    { printf("additive_expression -> multiplicative_expression\n"); }

    | additive_expression PLUS multiplicative_expression
    { printf("additive_expression -> additive_expression + multiplicative_expression\n"); }

    | additive_expression MINUS multiplicative_expression
    { printf("additive_expression -> additive_expression - multiplicative_expression\n"); }
    ;

shift_expression:
    additive_expression
    { printf("shift_expression -> additive_expression\n"); }

    | shift_expression LEFT_OP additive_expression
    { printf("shift_expression -> shift_expression << additive_expression\n"); }

    | shift_expression RIGHT_OP additive_expression
    { printf("shift_expression -> shift_expression >> additive_expression\n"); }
    ;

relational_expression:
    shift_expression
    { printf("relational_expression -> shift_expression\n"); }

    | relational_expression LT_OP shift_expression
    { printf("relational_expression -> relational_expression < shift_expression\n"); }

    | relational_expression GT_OP shift_expression
    { printf("relational_expression -> relational_expression > shift_expression\n"); }

    | relational_expression LTE_OP shift_expression
    { printf("relational_expression -> relational_expression <= shift_expression\n"); }

    | relational_expression GTE_OP shift_expression
    { printf("relational_expression -> relational_expression >= shift_expression\n"); }
    ;

equality_expression:
    relational_expression
    { printf("equality_expression -> relational_expression\n"); }

    | equality_expression EQ_OP relational_expression
    { printf("equality_expression -> equality_expression == relational_expression\n"); }

    | equality_expression NE_OP relational_expression
    { printf("equality_expression -> equality_expression != relational_expression\n"); }
    ;

and_expression:
    equality_expression
    { printf("and_expression -> equality_expression\n"); }

    | and_expression BITWISEAND equality_expression
    { printf("and_expression -> and_expression & equality_expression\n"); }
    ;

exclusive_or_expression:
    and_expression
    { printf("exclusive_or_expression -> and_expression\n"); }

    | exclusive_or_expression BITWISEXOR and_expression
    { printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); }
    ;

inclusive_or_expression:
    exclusive_or_expression
    { printf("inclusive_or_expression -> exclusive_or_expression\n"); }

    | inclusive_or_expression BITWISEOR exclusive_or_expression
    { printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); }
    ;

logical_and_expression:
    inclusive_or_expression
    { printf("logical_and_expression -> inclusive_or_expression\n"); }

    | logical_and_expression AND_OP inclusive_or_expression
    { printf("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); }
    ;

logical_or_expression:
    logical_and_expression
    { printf("logical_or_expression -> logical_and_expression\n"); }

    | logical_or_expression OR_OP logical_and_expression
    { printf("logical_or_expression -> logical_or_expression || logical_and_expression\n"); }
    ;

conditional_expression:
    logical_or_expression
    { printf("conditional_expression -> logical_or_expression\n"); }

    | logical_or_expression QUESTION_MARK expression COLON conditional_expression
    { printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); }
    ;

assignment_expression:
    conditional_expression
    { printf("assignment_expression -> conditional_expression\n"); }

    | unary_expression assignment_operator assignment_expression
    { printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); }
    ;

assignment_operator:
    EQ
    { printf("assignment_operator -> =\n"); }

    | MUL_ASSIGN
    { printf("assignment_operator -> *=\n"); }

    | DIV_ASSIGN
    { printf("assignment_operator -> /=\n"); }

    | MOD_ASSIGN
    { printf("assignment_operator -> %%=\n"); }

    | ADD_ASSIGN
    { printf("assignment_operator -> +=\n"); }

    | SUB_ASSIGN
    { printf("assignment_operator -> -=\n"); }

    | LEFT_ASSIGN
    { printf("assignment_operator -> <<=\n"); }

    | RIGHT_ASSIGN
    { printf("assignment_operator -> >>=\n"); }

    | AND_ASSIGN
    { printf("assignment_operator -> &=\n"); }

    | XOR_ASSIGN
    { printf("assignment_operator -> ^=\n"); }

    | OR_ASSIGN
    { printf("assignment_operator -> |=\n"); }
    ;

expression:
    assignment_expression
    { printf("expression -> assignment_expression\n"); }

    | expression COMMA assignment_expression
    { printf("expression -> expression , assignment_expression\n"); }
    ;

constant_expression:
    conditional_expression
    { printf("constant_expression -> conditional_expression\n"); }
    ;

// ----------2. Declarations----------
declaration: 
    declaration_specifiers init_declarator_list_opt SEMI_COLON
    { printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); }
    ;

declaration_specifiers:
    storage_class_specifier declaration_specifiers_opt
    { printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); }

    | type_specifier declaration_specifiers_opt
    { printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); }

    | type_qualifier declaration_specifiers_opt
    { printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); }

    | function_specifier declaration_specifiers_opt
    { printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); }
    ;

declaration_specifiers_opt:
    declaration_specifiers
    { printf("declaration_specifiers_opt -> declaration_specifiers\n");}
    | /* empty */
    { printf("declaration_specifiers_opt -> epsilon\n"); }
    ;

init_declarator_list:
    init_declarator
    { printf("init_declarator_list -> init_declarator\n"); }

    | init_declarator_list COMMA init_declarator
    { printf("init_declarator_list -> init_declarator_list , init_declarator\n"); }
    ;

init_declarator_list_opt:
    init_declarator_list
    { printf("init_declarator_list_opt -> init_declarator_list\n");}
    | /* empty */
    { printf("init_declarator_list_opt -> epsilon\n"); }
    ;

init_declarator:
    declarator
    { printf("init_declarator -> declarator\n"); }

    | declarator EQ initializer
    { printf("init_declarator -> declarator = initializer\n"); }
    ;

storage_class_specifier:
    EXTERN
    { printf("storage_class_specifier -> extern\n"); }

    | STATIC
    { printf("storage_class_specifier -> static\n"); }

    | AUTO
    { printf("storage_class_specifier -> auto\n"); }

    | REGISTER
    { printf("storage_class_specifier -> register\n"); }
    ;

type_specifier:
    VOID
    { printf("type_specifier -> void\n"); }

    | CHAR
    { printf("type_specifier -> char\n"); }

    | SHORT
    { printf("type_specifier -> short\n"); }

    | INT
    { printf("type_specifier -> int\n"); }

    | LONG
    { printf("type_specifier -> long\n"); }

    | FLOAT
    { printf("type_specifier -> float\n"); }

    | DOUBLE
    { printf("type_specifier -> double\n"); }

    | SIGNED
    { printf("type_specifier -> signed\n"); }

    | UNSIGNED
    { printf("type_specifier -> unsigned\n"); }

    | BOOL
    { printf("type_specifier -> _Bool\n"); }

    | COMPLEX
    { printf("type_specifier -> _Complex\n"); }

    | IMAGINARY
    { printf("type_specifier -> _Imaginary\n"); }

    | enum_specifier
    { printf("type_specifier -> enum_specifier\n"); }
    ; 

specifier_qualifier_list: 
    type_specifier specifier_qualifier_list_opt
    { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); }

    | type_qualifier specifier_qualifier_list_opt
    { printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); }
    ;

specifier_qualifier_list_opt: 
    specifier_qualifier_list
    { printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); }
    | /* empty */
    { printf("specifier_qualifier_list_opt -> epsilon\n");}
    ;

identifier_opt:
    IDENTIFIER
    { printf("identifier_opt -> identifier\n"); }
    | /* empty */
    { printf("identifier_opt -> epsilon\n");}
    ;

enum_specifier: 
    ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE
    { printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); }

    | ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list COMMA CURLY_BRACE_CLOSE
    { printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); }

    | ENUM IDENTIFIER
    { printf("enum_specifier -> enum identifier\n"); }

enumerator_list: 
    enumerator
    { printf("enumerator_list -> enumerator\n"); }

    | enumerator_list COMMA enumerator
    { printf("enumerator_list -> enumerator_list , enumerator\n"); }
    ;

enumerator:
    IDENTIFIER
    { printf("enumerator -> enumeration_constant\n"); }

    | IDENTIFIER EQ constant_expression
    { printf("enumerator -> enumeration_constant = constant_expression\n"); }
    ;

type_qualifier: 
    CONST
    { printf("type_qualifier -> const\n"); }

    | RESTRICT
    { printf("type_qualifier -> restrict\n"); }

    | VOLATILE
    { printf("type_qualifier -> volatile\n"); }
    ;

function_specifier:
    INLINE
    { printf("function_specifier -> inline\n"); }
    ;

declarator:
    pointer_opt direct_declarator
    { printf("declarator -> pointer_opt direct_declarator\n"); }
    ;

assignment_expression_opt:
    assignment_expression
    { printf("assignment_expression_opt -> assignment_expression\n"); }
    | /* empty */
    { printf("assignment_expression_opt -> epsilon\n");}
    ;

direct_declarator:
    IDENTIFIER
    { printf("direct_declarator -> identifier\n"); }

    | PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE
    { printf("direct_declarator -> ( declarator )\n"); }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list_opt assignment_expression_opt SQR_BRACE_CLOSE
    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]\n"); }

    | direct_declarator SQR_BRACE_OPEN STATIC type_qualifier_list_opt assignment_expression SQR_BRACE_CLOSE
    { printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expression ]\n"); }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list STATIC assignment_expression SQR_BRACE_CLOSE
    { printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expression ]\n"); }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list_opt STAR SQR_BRACE_CLOSE
    { printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]\n"); }

    | direct_declarator PARENTHESIS_OPEN parameter_type_list PARENTHESIS_CLOSE
    { printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); }

    | direct_declarator PARENTHESIS_OPEN identifier_list_opt PARENTHESIS_CLOSE
    { printf("direct_declarator -> direct_declarator ( identifier_list_opt )\n"); }
    ;

pointer: 
    STAR type_qualifier_list_opt
    { printf("pointer -> * type_qualifier_list_opt\n"); }

    | STAR type_qualifier_list_opt pointer
    { printf("pointer -> * type_qualifier_list_opt pointer\n"); }
    ;

pointer_opt:
    pointer
    { printf("pointer_opt -> pointer\n");}
    | /* empty */
    { printf("pointer_opt -> epsilon\n"); }
    ;

type_qualifier_list:
    type_qualifier
    { printf("type_qualifier_list -> type_qualifier\n"); }

    | type_qualifier_list type_qualifier
    { printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); }
    ;

type_qualifier_list_opt:
    type_qualifier_list
    { printf("type_qualifier_list_opt -> type_qualifier_list\n");}
    | /* empty */
    { printf("type_qualifier_list_opt -> epsilon\n");}
    ;

parameter_type_list:
    parameter_list
    { printf("parameter_type_list -> parameter_list\n"); }

    | parameter_list COMMA ELLIPSIS
    { printf("parameter_type_list -> parameter_list , ...\n"); }
    ;

parameter_list:
    parameter_declaration
    { printf("parameter_list -> parameter_declaration\n"); }

    | parameter_list COMMA parameter_declaration
    { printf("parameter_list -> parameter_list , parameter_declaration\n"); }
    ;

parameter_declaration:
    declaration_specifiers declarator
    { printf("parameter_declaration -> declaration_specifiers declarator\n"); }

    | declaration_specifiers 
    { printf("parameter_declaration -> declaration_specifiers\n"); }
    ;


identifier_list:
    IDENTIFIER
    { printf("identifier_list -> identifier\n"); }

    | identifier_list COMMA IDENTIFIER
    { printf("identifier_list -> identifier_list , identifier\n"); }
    ;

identifier_list_opt:
    identifier_list
    { printf("identifier_list_opt -> identifier_list\n"); }
    | /* empty */
    { printf("identifier_list_opt -> epsilon\n");}
    ;

type_name:
    specifier_qualifier_list 
    { printf("type_name -> specifier_qualifier_list\n"); }
    ;

initializer: 
    assignment_expression
    { printf("initializer -> assignment_expression\n"); }

    | CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
    { printf("initializer -> { initializer_list }\n"); }

    | CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
    { printf("initializer -> { initializer_list , }\n"); }
    ;

initializer_list:
    designation_opt initializer
    { printf("initializer_list -> designation_opt initializer\n"); }

    | initializer_list COMMA designation_opt initializer
    { printf("initializer_list -> initializer_list , designation_opt initializer\n"); }
    ;

designation:
    designator_list EQ
    { printf("designation -> designator_list =\n"); }
    ;

designation_opt:
    designation
    { printf("designation_opt -> designation\n");}
    
    | /* empty */
    { printf("designation_opt -> epsilon\n");}
    ;

designator_list:
    designator
    { printf("designator_list -> designator\n"); }

    | designator_list designator
    { printf("designator_list -> designator_list designator\n"); }
    ;

designator:
    SQR_BRACE_OPEN constant_expression SQR_BRACE_CLOSE
    { printf("designator -> [ constant_expression ]\n"); }

    | DOT IDENTIFIER
    { printf("designator -> . identifier\n"); }
    ;

// ----------3. Statements----------
statement: 
    labeled_statement
    { printf("statement -> labeled_statement\n"); }

    | compound_statement
    { printf("statement -> compound_statement\n"); }

    | expression_statement
    { printf("statement -> expression_statement\n"); }

    | selection_statement
    { printf("statement -> selection_statement\n"); }

    | iteration_statement
    { printf("statement -> iteration_statement\n"); }

    | jump_statement
    { printf("statement -> jump_statement\n"); }
    ;

labeled_statement:
    IDENTIFIER COLON statement
    { printf("labeled_statement -> identifier : statement\n"); }

    | CASE constant_expression COLON statement
    { printf("labeled_statement -> case constant_expression : statement\n"); }

    | DEFAULT COLON statement
    { printf("labeled_statement -> default : statement\n"); }
    ;

compound_statement:
    CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE
    { printf("compound_statement -> { block_item_list_opt }\n"); }
    ;

block_item_list:
    block_item
    { printf("block_item_list -> block_item\n"); }

    | block_item_list block_item
    { printf("block_item_list -> block_item_list block_item\n"); }
    ;

block_item_list_opt:
    block_item_list
    { printf("block_item_list_opt -> block_item_list\n"); }
    | /* empty */
    { printf("block_item_list_opt -> epsilon\n"); }
    ;

block_item:
    declaration
    { printf("block_item -> declaration\n"); }

    | statement
    { printf("block_item -> statement\n"); }
    ;

expression_statement:
    expression_opt SEMI_COLON
    { printf("expression_opt -> expression ;\n"); }
    ;

expression_opt:
    expression
    { printf("expression_opt -> expression\n"); }
    | /* empty */
    { printf("expression_opt -> epsilon\n"); }
    ;

selection_statement:
    IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement ELSE statement
    { printf("selection_statement -> if ( expression ) statement else statement\n"); }

    | IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
    { printf("selection_statement -> if ( expression ) statement\n"); }

    | SWITCH PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
    { printf("selection_statement -> switch ( expression ) statement\n"); }
    ;

iteration_statement:
    WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
    { printf("iteration_statement -> while ( expression ) statement\n"); }

    | DO statement WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMI_COLON
    { printf("iteration_statement -> do statement while ( expression ) ;\n"); }

    | FOR PARENTHESIS_OPEN expression_opt SEMI_COLON expression_opt SEMI_COLON expression_opt PARENTHESIS_CLOSE statement
    { printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }

    | FOR PARENTHESIS_OPEN declaration expression_opt SEMI_COLON expression_opt PARENTHESIS_CLOSE statement
    { printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); }
    ;

jump_statement:
    GOTO IDENTIFIER SEMI_COLON
    { printf("jump_statement -> goto identifier ;\n"); }

    | CONTINUE SEMI_COLON
    { printf("jump_statement -> continue ;\n"); }

    | BREAK SEMI_COLON
    { printf("jump_statement -> break ;\n"); }

    | RETURN expression_opt SEMI_COLON
    { printf("jump_statement -> return expression_opt ;\n"); }
    ;

// ----------4. External definitions----------
translation_unit:
    external_declaration
    { printf("translation_unit -> external_declaration\n"); }

    | translation_unit external_declaration
    { printf("translation_unit -> translation_unit external_declaration\n"); }
    ;

external_declaration:
    function_definition
    { printf("external_declaration -> function_definition\n"); }

    | declaration
    { printf("external_declaration -> declaration\n"); }
    ;

function_definition:
    declaration_specifiers declarator declaration_list_opt compound_statement
    { printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); }

    | declarator declaration_list_opt compound_statement
    { printf("function_definition -> declarator declaration_list_opt compound_statement\n"); }
    ;

declaration_list:
    declaration
    { printf("declaration_list -> declaration\n"); }

    | declaration_list declaration
    { printf("declaration_list -> declaration_list declaration\n"); }
    ;

declaration_list_opt:
    declaration_list
    { printf("declaration_list_opt -> declaration_list\n"); }
    | /* empty */
    { printf("declaration_list_opt -> epsilon\n"); }
    ;


%%

void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}