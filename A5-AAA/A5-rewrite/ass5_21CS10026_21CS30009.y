/*
    Compilers Lab Assignment 4
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Parser specification for tinyC
*/

%{
    #include <iostream>
    #include "ass5_21CS10026_21CS30009_translator.h"
    void yyerror(const char*); 
    extern int yylex();   
    extern int yylineno;
    extern char* yytext;
    extern TYPE currentType;

    using namespace std;
%}

%union {
    int ival;
    float fval; // not changing
    char *cval;
    char *sval;
    char *unary_op;
    int instr_num;
    int num_params;
    Statement *stmt; 
    Array *arr; 
    Expression *expr;
    SymType *sym_type;
    Sym *sym;
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
%token IF ELSE CASE DEFAULT WHILE CONTINUE DO GOTO FOR RETURN BREAK SWITCH

// default case - unexpected token
%token UNEXPECTED_TOKEN

%token <sym> IDENTIFIER
%token <ival> INTEGER_CONST
%token <fval> FLOAT_CONST
%token <cval> CHAR_CONST
%token <sval> STRING_LITERAL

%start translation_unit

%right THEN ELSE

%type <unary_op> unary_operator // unary operators
%type <num_params> argument_expression_list_opt argument_expression_list // number of parameters, in case of function call

// not changing for now
%type <expr> expression primary_expression constant multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator constant_expression expression_opt expression_statement

// not changing for now
%type <stmt> statement labeled_statement compound_statement selection_statement iteration_statement jump_statement block_item block_item_list block_item_list_opt

%type <sym_type> pointer 

%type <sym> initializer declarator direct_declarator init_declarator

%type <arr> postfix_expression cast_expression unary_expression

// non-terminals used for backpatching
%type <instr_num> M; 
%type <stmt> N; 

%%

// helper non-terminals 

M: 
    { 
        printf("M -> epsilon\n");
        $$ = nextinstr(); 
    }
    ;

N: 
    { 
        printf("N -> epsilon\n");

        $$ = new Statement();
        $$->nextlist = makelist(nextinstr());
        emit("goto", " ");
    }
    ;


// ----------1. Expressions----------

primary_expression:
    IDENTIFIER
        { 
            printf("primary_expression -> identifier\n"); 

            $$ = new Expression(); // making a new expression and storing pointer to symbol table entry 
            $$->symbol = $1; 
            $$->type = Expression::TYPE_NBOOL;
        }

    | constant
        { 
            printf("primary_expression -> constant\n"); 

            $$ = $1; // depends on which type of constant
        }

    | STRING_LITERAL
        { 
            printf("primary_expression -> string_literal\n"); 

            $$ = new Expression();
            $$->symbol = gentemp(TYPE_POINTER, $1);
            $$->symbol->type->arr_type = new SymType(TYPE_CHAR);
        }

    | PARENTHESIS_OPEN expression PARENTHESIS_CLOSE
        { 
            printf("primary_expression -> ( expression )\n"); 

            $$ = $2; // depends on expression
        }
    ;

// not changing these
constant:
    INTEGER_CONST 
    { 
        printf("constant -> integer_constant\n"); 

        $$ = new Expression(); 
        string n = to_string($1);
        $$->symbol = gentemp(TYPE_INT, n);
        emit("=", $$->symbol->name, n);
    }

    | FLOAT_CONST
    {   
        printf("constant -> float_constant\n"); 

        $$ = new Expression();
        string f = to_string($1);
        $$->symbol = gentemp(TYPE_FLOAT, f);
        emit("=", $$->symbol->name, f);
    }

    | CHAR_CONST
    {   
        printf("constant -> char_constant\n"); 

        $$ = new Expression();
        $$->symbol = gentemp(TYPE_CHAR, $1);
        emit("=", $$->symbol->name, $1);
    }
    ;

postfix_expression:
    primary_expression
    { 
        printf("postfix_expression -> primary_expression\n"); 

        // create new array and append location of primary expression
        $$ = new Array();
        $$->symbol = $1->symbol;
        $$->loc = $$->symbol;
        $$->subarr_type = $1->symbol->type;
    }

    | postfix_expression SQR_BRACE_OPEN expression SQR_BRACE_CLOSE
    { 
        printf("postfix_expression -> postfix_expression [ expression ]\n"); 

        $$ = new Array();
        $$->symbol = $1->symbol;
        $$->subarr_type = $1->subarr_type->arr_type;
        $$->loc = gentemp(TYPE_INT);
        $$->type = Array::TYPE_ARRAY;

        // checking if array is 1D or multi-dimensional
        if($1->type == Array::TYPE_ARRAY) {
            // multi-dimensional array - so need to multiply size and add offset
            Sym* temp = gentemp(TYPE_INT);
            int size = $$->subarr_type->computeSize();
            emit("*", temp->name, $3->symbol->name, to_string(size));
            emit("+", $$->loc->name, $1->loc->name, temp->name);
        }
        else {
            // 1D array, just calculate size
            int size = $$->subarr_type->computeSize();
            emit("*", $$->loc->name, $3->symbol->name, to_string(size));
        }
    }

    | postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE
    {
        printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); 
        
        // function call
        $$ = new Array();
        $$->symbol = gentemp($1->symbol->type->type); 
        emit("call", $$->symbol->name, $1->symbol->name, to_string($3));
    }

    /* below 2 rules are struct-related -> ignored */
    | postfix_expression DOT IDENTIFIER
    { 
        // printf("postfix_expression -> postfix_expression . identifier\n"); 
    }

    | postfix_expression PTR_OP IDENTIFIER
    { 
        // printf("postfix_expression -> postfix_expression -> identifier\n"); 
    }

    | postfix_expression INC_OP 
    {
        printf("postfix_expression -> postfix_expression ++\n"); 

        $$ = new Array();
        $$->symbol = gentemp($1->symbol->type->type); 
        emit("=", $$->symbol->name, $1->symbol->name);
        emit("+", $1->symbol->name, $1->symbol->name, "1");
    }

    | postfix_expression DEC_OP
    { 
        printf("postfix_expression -> postfix_expression --\n"); 

        $$ = new Array();
        $$->symbol = gentemp($1->symbol->type->type); 
        emit("=", $$->symbol->name, $1->symbol->name);
        emit("-", $1->symbol->name, $1->symbol->name, "1");
    }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
    { 
        // printf("postfix_expression -> ( type_name ) { initializer_list }\n"); 
    }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE     
    { 
        // printf("postfix_expression -> ( type_name ) { initializer_list , }\n"); 
    }
    ;  

// number of arguments/parameters is computed here
argument_expression_list:
    assignment_expression
    { 
        printf("argument_expression_list -> assignment_expression\n"); 
        
        $$ = 1; // 1 argument
        emit("param", $1->symbol->name);
    }

    | argument_expression_list COMMA assignment_expression
    {   
        printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); 

        $$ = $1 + 1; // one more argument added
        emit("param", $3->symbol->name);
    }
    ;

argument_expression_list_opt:
    argument_expression_list
    {
        printf("argument_expression_list_opt -> argument_expression_list\n"); 
        $$ = $1; // depends on argument expression list 
    }
    | /* empty */
    { 
        printf("argument_expression_list_opt -> epsilon\n");
        $$ = 0; // no arguments
    }
    ;


unary_expression:
    postfix_expression
    { 
        printf("unary_expression -> postfix_expression\n"); 
        $$ = $1; // depends on postfix expression
    }

    | INC_OP unary_expression
    { 
        printf("unary_expression -> ++ unary_expression\n");
         
        emit("+", $2->symbol->name, $2->symbol->name, "1");
        $$ = $2; 
    }

    | DEC_OP unary_expression
    { 
        printf("unary_expression -> -- unary_expression\n"); 

        emit("-", $2->symbol->name, $2->symbol->name, "1");
        $$ = $2; 
    }

    | unary_operator cast_expression
    { 
        printf("unary_expression -> unary_operator cast_expression\n"); 

        $$ = new Array();

        // operation depends on unary operator
        if(!strcmp($1,"+")){
            // unary plus
            $$=$2;
        }
            
        else if(!strcmp($1,"-")){
            // unary minus - negation of cast expression
            $$->symbol = gentemp($2->symbol->type->type);
            emit("=-", $$->symbol->name, $2->symbol->name); 
        }

        else if(!strcmp($1,"~")){
            // bitwise not
            $$->symbol = gentemp($2->symbol->type->type);
            emit("~", $$->symbol->name, $2->symbol->name);
        }
        
        else if(!strcmp($1,"!")){
            // logical not
            $$->symbol = gentemp($2->symbol->type->type);
            emit("!", $$->symbol->name, $2->symbol->name);
        }

        else if(!strcmp($1,"&")){
            // address of -> generate new pointer type
            $$->symbol = gentemp(TYPE_POINTER);
            $$->symbol->type->arr_type = $2->symbol->type;
            emit("=&", $$->symbol->name, $2->symbol->name);
        }

        else if(!strcmp($1,"*")){
            // dereference 
            $$->symbol = $2->symbol;
            $$->loc = gentemp($2->loc->type->arr_type->type);
            $$->loc->type->arr_type = $2->loc->type->arr_type->arr_type;
            $$->type = Array::TYPE_POINTER;
            emit("=*", $$->loc->name, $2->loc->name);
        }
    }

    /* below 2 rules involve SIZEOF -> ignored */
    | SIZEOF unary_expression
    { 
        // printf("unary_expression -> sizeof unary_expression\n");     
    }

    | SIZEOF PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE
    { 
        // printf("unary_expression -> sizeof ( type_name )\n"); 
    }
    ;

unary_operator:
    BITWISEAND
    { 
        $$ = "&";
        printf("unary_operator -> &\n"); 
    }

    | STAR
    { 
        $$ = "*";
        printf("unary_operator -> *\n"); 
    }

    | PLUS
    { 
        $$ = "+";
        printf("unary_operator -> +\n"); 
    }

    | MINUS
    { 
        $$ = "-";
        printf("unary_operator -> -\n"); 
    }

    | NOT
    { 
        $$ = "~";
        printf("unary_operator -> ~\n"); 
    }

    | EXCLAMATION
    { 
        $$ = "!";
        printf("unary_operator -> !\n"); 
    }
    ;

cast_expression:
    unary_expression
    { 
        printf("cast_expression -> unary_expression\n"); 
        $$ = $1; // depends on unary expression
    }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression
    { 
        printf("cast_expression -> ( type_name ) cast_expression\n"); 

        $$ = new Array();
        $$->symbol = convertType($4->symbol, currentType); // convert type of cast expression to type name
    }
    ;


multiplicative_expression:
    cast_expression
    { 
        printf("multiplicative_expression -> cast_expression\n"); 

        $$ = new Expression();

        // we have to obtain the base type of the expression 
        SymType* bType = $1->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        // now depending on the type, we have to generate a temporary variable

        if ($1->type == Array::TYPE_ARRAY) {
            $$->symbol = gentemp(bType->type);
            // check if any of them are NULL 
            emit("=[]",$$->symbol->name, $1->symbol->name, $1->loc->name);
        }

        else if ($1->type == Array::TYPE_POINTER)
            $$->symbol = $1->loc;

        else
            $$->symbol = $1->symbol;
    }

    | multiplicative_expression STAR cast_expression
    {   
        printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); 

        // similar to above, we obtain base type and create temp symbol
        SymType* bType = $3->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 

        if($3->type == Array::TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
        }
        else if ($3->type == Array::TYPE_POINTER)
            temp = $3->loc; 
        else 
            temp = $3->symbol;

        // now we execute the required operation (here, multiplication)
        if(!typecheck($1->symbol, temp)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp($1->symbol->type->type); 
            emit("*", $$->symbol->name, $1->symbol->name, temp->name);
        }
    }

    | multiplicative_expression DIVIDE cast_expression
    { 
        printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); 

        // similar to above again
        SymType* bType = $3->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 

        if($3->type == Array::TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
        }
        else if ($3->type == Array::TYPE_POINTER)
            temp = $3->loc; 
        else 
            temp = $3->symbol;

        if(!typecheck($1->symbol, temp)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp($1->symbol->type->type); 
            emit("/", $$->symbol->name, $1->symbol->name, temp->name);
        }
    }

    | multiplicative_expression PERCENTAGE cast_expression
    { 
        printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); 

        SymType* bType = $3->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 

        if($3->type == Array::TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
        }
        else if ($3->type == Array::TYPE_POINTER)
            temp = $3->loc; 
        else 
            temp = $3->symbol;

        if(!typecheck($1->symbol, temp)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp($1->symbol->type->type); 
            emit("%", $$->symbol->name, $1->symbol->name, temp->name);
        }
    }
    ;

additive_expression:
    multiplicative_expression
    { 
        printf("additive_expression -> multiplicative_expression\n"); 
        $$ = $1; // depends on multiplicative expression
    }

    | additive_expression PLUS multiplicative_expression
    {   
        printf("additive_expression -> additive_expression + multiplicative_expression\n"); 

        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp($1->symbol->type->type); 
            emit("+", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    }

    | additive_expression MINUS multiplicative_expression
    { 
        printf("additive_expression -> additive_expression - multiplicative_expression\n"); 

        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp($1->symbol->type->type); 
            emit("-", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    }
    ;

shift_expression:
    additive_expression
    {   
        printf("shift_expression -> additive_expression\n"); 
        $$ = $1; // depends on additive expression
    }

    | shift_expression LEFT_OP additive_expression
    { 
        printf("shift_expression -> shift_expression << additive_expression\n"); 

        if($1->symbol->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp(TYPE_INT); 
            emit("<<", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    }

    | shift_expression RIGHT_OP additive_expression
    { 
        printf("shift_expression -> shift_expression >> additive_expression\n"); 

        if($1->symbol->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp(TYPE_INT); 
            emit(">>", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    }
    ;

// boolean expressions -> truelist and falselist is made as discussed in class, then backpatching will be done later on

relational_expression:
    shift_expression
    { 
        printf("relational_expression -> shift_expression\n"); 
        $$ = $1; // depends on shift expression
    }

    | relational_expression LT_OP shift_expression
    { 
        printf("relational_expression -> relational_expression < shift_expression\n"); 

        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }

        // check - add comments
        else {
            $$ = new Expression();
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit("<", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }
    }

    | relational_expression GT_OP shift_expression
    { 
        printf("relational_expression -> relational_expression > shift_expression\n"); 

        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit(">", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }
    }

    | relational_expression LTE_OP shift_expression
    { 
        printf("relational_expression -> relational_expression <= shift_expression\n"); 

        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit("<=", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }
    }

    | relational_expression GTE_OP shift_expression
    { 
        printf("relational_expression -> relational_expression >= shift_expression\n"); 

        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);
            emit(">=", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }
    }
    ;

equality_expression:
    relational_expression
    { 
        printf("equality_expression -> relational_expression\n"); 
        $$ = $1; // depends on relational expression
    }

    | equality_expression EQ_OP relational_expression
    { 
        printf("equality_expression -> equality_expression == relational_expression\n"); 

        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            convBool2Int($1); // check
            convBool2Int($3);

            $$ = new Expression(); 
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);

            emit("==", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }
    }

    | equality_expression NE_OP relational_expression
    {   
        printf("equality_expression -> equality_expression != relational_expression\n"); 

        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            convBool2Int($1); // check
            convBool2Int($3);

            $$ = new Expression(); 
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);

            emit("!=", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }
    }
    ;

// check - add comments
and_expression:
    equality_expression
    { 
        printf("and_expression -> equality_expression\n"); 
        $$ = $1; // depends on equality expression
    }

    | and_expression BITWISEAND equality_expression
    { 
        printf("and_expression -> and_expression & equality_expression\n"); 

        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            convBool2Int($1);
            convBool2Int($3);

            $$ = new Expression();
            $$->type = Expression::TYPE_NBOOL;
            $$->symbol = gentemp(TYPE_INT);

            emit("&", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    }
    ;

exclusive_or_expression:
    and_expression
    { 
        printf("exclusive_or_expression -> and_expression\n"); 
        $$ = $1; // depends on and expression
    }

    | exclusive_or_expression BITWISEXOR and_expression
    { 
        printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); 

        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            convBool2Int($1);
            convBool2Int($3);

            $$ = new Expression();
            $$->type = Expression::TYPE_NBOOL;
            $$->symbol = gentemp(TYPE_INT);

            emit("^", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }
    }
    ;

inclusive_or_expression:
    exclusive_or_expression
    { 
        printf("inclusive_or_expression -> exclusive_or_expression\n"); 
        $$ = $1; // depends on exclusive or expression
    }

    | inclusive_or_expression BITWISEOR exclusive_or_expression
    { 
        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            convBool2Int($1);
            convBool2Int($3);

            $$ = new Expression();
            $$->type = Expression::TYPE_NBOOL;
            $$->symbol = gentemp(TYPE_INT);

            emit("|", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); 
    }
    ;

// in these cases, backpatching needs to be done (as discussed in class), so M and N are used 

logical_and_expression:
    inclusive_or_expression
    { 
        printf("logical_and_expression -> inclusive_or_expression\n"); 
        $$ = $1; // depends on inclusive or expression
    }

    | logical_and_expression AND_OP M inclusive_or_expression
    { 
        printf("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); 

        convInt2Bool($1);
        convInt2Bool($4);

        $$ = new Expression();
        $$->type = Expression::TYPE_BOOL;

        backpatch($1->truelist, $3);    // backpatching
        $$->truelist = $4->truelist;    // B.truelist = B2.truelist
        $$->falselist = merge($1->falselist, $4->falselist); // B.falselist = merge(B1.falselist, B2.falselist)
    }
    ;

logical_or_expression:
    logical_and_expression
    { 
        printf("logical_or_expression -> logical_and_expression\n"); 
        $$ = $1; // depends on logical and expression
    }

    | logical_or_expression OR_OP M logical_and_expression
    { 
        printf("logical_or_expression -> logical_or_expression || logical_and_expression\n"); 

        convInt2Bool($1);
        convInt2Bool($4);

        $$ = new Expression();
        $$->type = Expression::TYPE_BOOL;

        backpatch($1->falselist, $3);    // backpatching
        $$->truelist = merge($1->truelist, $4->truelist); // B.truelist = merge(B1.truelist, B2.truelist)
        $$->falselist = $4->falselist;    // B.falselist = B2.falselist
    }
    ;

conditional_expression:
    logical_or_expression
    { 
        printf("conditional_expression -> logical_or_expression\n"); 
        $$ = $1; // depends on logical or expression
    }

    // this is like "if (logical_or_expression) { expression } else { conditional_expression }"
    | logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression
    // check - add comments
    {   
        printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); 

        $$->symbol = gentemp($5->symbol->type->type); 
        emit("=", $$->symbol->name, $9->symbol->name);

        list<int> li = makelist(nextinstr());
        emit("goto", "");

        backpatch($6->nextlist, nextinstr());
        emit("=", $$->symbol->name, $5->symbol->name);

        list<int> li2 = makelist(nextinstr());
        li = merge(li, li2);
        emit("goto", "");

        backpatch($2->nextlist, nextinstr());

        convInt2Bool($1);

        backpatch($1->truelist, $4);
        backpatch($1->falselist, $8);

        backpatch(li, nextinstr());
    }
    ;

assignment_expression:
    conditional_expression
    { 
        printf("assignment_expression -> conditional_expression\n"); 
        $$ = $1; // depends on conditional expression
    }

    | unary_expression assignment_operator assignment_expression
    { 
        printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); 

        if($1->type == Array::TYPE_ARRAY) {
            $3->symbol = convertType($3->symbol, $1->subarr_type->type); 
            emit("[]=", $1->symbol->name, $1->loc->name, $3->symbol->name);
        }
        else if ($1->type == Array::TYPE_POINTER) {    
            $3->symbol = convertType($3->symbol, $1->loc->type->type); 
            emit("*=", $1->loc->name, $3->symbol->name); 
        }
        else {
            $3->symbol = convertType($3->symbol, $1->symbol->type->type); 
            emit("=", $1->symbol->name, $3->symbol->name);
        }

        $$ = $3; 
    }
    ;


assignment_operator:
    EQ
    { 
        printf("assignment_operator -> =\n"); 
    }

    /* all below rules are ignored as per assignment instructions */
    | MUL_ASSIGN
    { 
        // printf("assignment_operator -> *=\n"); 
    }

    | DIV_ASSIGN
    { 
        // printf("assignment_operator -> /=\n"); 
    }

    | MOD_ASSIGN
    { 
        // printf("assignment_operator -> %%=\n"); 
    }

    | ADD_ASSIGN
    { 
        // printf("assignment_operator -> +=\n"); 
    }

    | SUB_ASSIGN
    { 
        // printf("assignment_operator -> -=\n"); 
    }

    | LEFT_ASSIGN
    { 
        // printf("assignment_operator -> <<=\n"); 
    }

    | RIGHT_ASSIGN
    { 
        // printf("assignment_operator -> >>=\n"); 
    }

    | AND_ASSIGN
    { 
        // printf("assignment_operator -> &=\n"); 
    }

    | XOR_ASSIGN
    { 
        // printf("assignment_operator -> ^=\n"); 
    }

    | OR_ASSIGN
    { 
        // printf("assignment_operator -> |=\n"); 
    }
    ;

expression:
    assignment_expression
    {
        $$ = $1; // depends on assignment expression 
        printf("expression -> assignment_expression\n"); 
    }

    /* expression involving COMMA operator -> ignored */
    | expression COMMA assignment_expression
    { 
        // printf("expression -> expression , assignment_expression\n");
    }
    ;

constant_expression:
    conditional_expression
    { 
        printf("constant_expression -> conditional_expression\n"); 
    }
    ;



// ----------2. Declarations----------
declaration: 
    declaration_specifiers init_declarator_list_opt SEMI_COLON
    { 
        printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); 
    }
    ;

// rules involving storage_class_specifier, enum_specifier, type_qualifier, function_specifier ignored
declaration_specifiers:
    storage_class_specifier declaration_specifiers_opt
    { 
        // printf("declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n"); 
    }

    | type_specifier declaration_specifiers_opt
    { 
        printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); 
    }

    | type_qualifier declaration_specifiers_opt
    { 
        // printf("declaration_specifiers -> type_qualifier declaration_specifiers_opt\n"); 
    }

    | function_specifier declaration_specifiers_opt
    { 
        // printf("declaration_specifiers -> function_specifier declaration_specifiers_opt\n"); 
    }
    ;

declaration_specifiers_opt:
    declaration_specifiers
    { 
        printf("declaration_specifiers_opt -> declaration_specifiers\n");
    }

    | /* empty */
    { 
        printf("declaration_specifiers_opt -> epsilon\n"); 
    }
    ;

init_declarator_list:
    init_declarator
    { 
        printf("init_declarator_list -> init_declarator\n"); 
    }

    | init_declarator_list COMMA init_declarator
    { 
        printf("init_declarator_list -> init_declarator_list , init_declarator\n"); 
    }
    ;

init_declarator_list_opt:
    init_declarator_list
    { 
        printf("init_declarator_list_opt -> init_declarator_list\n");
    }

    | /* empty */
    { 
        printf("init_declarator_list_opt -> epsilon\n"); 
    }
    ;

init_declarator:
    declarator
    {   
        printf("init_declarator -> declarator\n"); 
        $$ = $1; // depends on declarator
    }

    | declarator EQ initializer
    {
        printf("init_declarator -> declarator = initializer\n"); 

        if($3->init_val != "") $1->init_val = $3->init_val;
        emit("=", $1->name, $3->name);
    }
    ;

/* storage_class_specifier ignored */
storage_class_specifier:
    EXTERN
    { 
        // printf("storage_class_specifier -> extern\n"); 
    }

    | STATIC
    { 
        // printf("storage_class_specifier -> static\n"); 
    }

    | AUTO
    { 
        // printf("storage_class_specifier -> auto\n"); 
    }

    | REGISTER
    { 
        // printf("storage_class_specifier -> register\n"); 
    }
    ;

/* only void, char, int, float kept  */
type_specifier:
    VOID
    { 
        printf("type_specifier -> void\n"); 
        currentType = TYPE_VOID;
    }

    | CHAR
    {   
        printf("type_specifier -> char\n"); 
        currentType = TYPE_CHAR;
    }

    | SHORT
    { 
        // printf("type_specifier -> short\n"); 
    }

    | INT
    { 
        printf("type_specifier -> int\n"); 
        currentType = TYPE_INT;
    }

    | LONG
    { 
        // printf("type_specifier -> long\n"); 
    }

    | FLOAT
    { 
        printf("type_specifier -> float\n"); 
        currentType = TYPE_FLOAT;
    }

    | DOUBLE
    { 
        // printf("type_specifier -> double\n"); 
    }

    | SIGNED
    { 
        // printf("type_specifier -> signed\n"); 
    }

    | UNSIGNED
    { 
        // printf("type_specifier -> unsigned\n"); 
    }

    | BOOL
    { 
        // printf("type_specifier -> _Bool\n"); 
    }

    | COMPLEX
    { 
        // printf("type_specifier -> _Complex\n"); 
    }

    | IMAGINARY
    { 
        // printf("type_specifier -> _Imaginary\n"); 
    }

    | enum_specifier
    { 
        // printf("type_specifier -> enum_specifier\n"); 
    }
    ; 

/* rules involving type_qualifier -> ignored */
specifier_qualifier_list: 
    type_specifier specifier_qualifier_list_opt
    { 
        printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); 
    }
    |  type_qualifier specifier_qualifier_list_opt
    { 
        // printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n"); 
    }
    ;

specifier_qualifier_list_opt: 
    specifier_qualifier_list
    { 
        printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); 
    }
    | /* empty */
    { 
        printf("specifier_qualifier_list_opt -> epsilon\n");
    }
    ;


identifier_opt:
    IDENTIFIER
    { 
        printf("identifier_opt -> identifier\n"); 
    }

    | /* empty */
    { 
        printf("identifier_opt -> epsilon\n");
    }
    ;

/* enum_specifier, enumerator_list, enumerator, type_qualifier, function_specifier -> all ignored */
enum_specifier: 
    ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE
    { 
        // printf("enum_specifier -> enum identifier_opt { enumerator_list }\n"); 
    }

    | ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list COMMA CURLY_BRACE_CLOSE
    { 
        // printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n"); 
    }

    | ENUM IDENTIFIER
    { 
        // printf("enum_specifier -> enum identifier\n"); 
    }

enumerator_list: 
    enumerator
    { 
        // printf("enumerator_list -> enumerator\n"); 
    }

    | enumerator_list COMMA enumerator
    { 
        // printf("enumerator_list -> enumerator_list , enumerator\n"); 
    }
    ;

enumerator:
    IDENTIFIER
    { 
        // printf("enumerator -> enumeration_constant\n"); 
    }

    | IDENTIFIER EQ constant_expression
    { 
        // printf("enumerator -> enumeration_constant = constant_expression\n"); 
    }
    ;

type_qualifier: 
    CONST
    { 
        // printf("type_qualifier -> const\n"); 
    }

    | RESTRICT
    { 
        // printf("type_qualifier -> restrict\n"); 
    }

    | VOLATILE
    { 
        // printf("type_qualifier -> volatile\n"); 
    }
    ;

function_specifier:
    INLINE
    { 
        // printf("function_specifier -> inline\n"); 
    }
    ;

declarator:
    pointer direct_declarator
    { 
        printf("declarator -> pointer_opt direct_declarator\n"); 

        // for multi-dimensional arrays -> moving deeper until base type is obtained
        SymType *temp = $1; 
        while(temp->arr_type != NULL) {
            temp = temp->arr_type;
        } 
        temp->arr_type = $2->type; 
        $$ = $2->update($1);
    }

    | direct_declarator
    { 
        printf("declarator -> direct_declarator\n"); 
    }
    ;


/* rules involving type_qualifier ignored */
/* rules involving static ignored */
/* type_qualifier_list_opt replaced with type_qualifier_list and epsilon */
/* assignment_expression_opt replaced with assignment_expression and epsilon */
/* identifier_list_opt replaced  with identifier_list and epsilon */
direct_declarator:
    IDENTIFIER
    { 
        printf("direct_declarator -> identifier\n"); 

        $$ = $1->update(new SymType(currentType));
        currentSymbol = $$;
    }

    | PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE
    { 
        printf("direct_declarator -> ( declarator )\n"); 
        $$ = $2; // depends on declarator
    }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list assignment_expression SQR_BRACE_CLOSE 
    {
        // printf("direct_declarator -> direct_declarator [ type_qualifier_list assignment_expression ]\n");
    }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list SQR_BRACE_CLOSE
    { 
        // printf("direct_declarator -> direct_declarator [ type_qualifier_list ]\n"); 
    }

    | direct_declarator SQR_BRACE_OPEN assignment_expression SQR_BRACE_CLOSE
    { 
        printf("direct_declarator -> direct_declarator [ assignment_expression ]\n"); 

        // check - add comments
        SymType *temp = $1->type;
        SymType *prev = NULL;
        while(temp->type == TYPE_ARRAY) {
            prev = temp;
            temp = temp->arr_type;
        }

        if(prev) {
            // case of multi-dimensional array
            prev->arr_type = new SymType(TYPE_ARRAY, atoi($3->symbol->init_val.c_str()), temp);
            $$ = $1->update($1->type);
        }
        else {
            // just 1D array
            SymType* new_type = new SymType(TYPE_ARRAY, atoi($3->symbol->init_val.c_str()), $1->type); 
            $$ = $1->update(new_type);
        }        
    }

    | direct_declarator SQR_BRACE_OPEN SQR_BRACE_CLOSE
    {   
        printf("direct_declarator -> direct_declarator [ ]\n"); 

        // similar to previous one, but initial value is kept as 0
        SymType *temp = $1->type;
        SymType *prev = NULL;
        while(temp->type == TYPE_ARRAY) {
            prev = temp;
            temp = temp->arr_type;
        }

        if(prev) {
            prev->arr_type = new SymType(TYPE_ARRAY, 0, temp);
            $$ = $1->update($1->type);
        }
        else {
            SymType* new_type = new SymType(TYPE_ARRAY, 0, $1->type); 
            $$ = $1->update(new_type);
        }
    }

    | direct_declarator SQR_BRACE_OPEN STATIC type_qualifier_list assignment_expression SQR_BRACE_CLOSE
    {
        // printf("direct_declarator -> direct_declarator [ static type_qualifier_list assignment_expression ]\n");
    }

    | direct_declarator SQR_BRACE_OPEN STATIC assignment_expression SQR_BRACE_CLOSE
    {
        // printf("direct_declarator -> direct_declarator [ static assignment_expression ]\n");
    }

    | direct_declarator SQR_BRACE_OPEN type_qualifier_list STAR SQR_BRACE_CLOSE
    { 
        // printf("direct_declarator -> direct_declarator [ type_qualifier_list * ]\n"); 
    }

    | direct_declarator SQR_BRACE_OPEN STAR SQR_BRACE_CLOSE
    { 
        printf("direct_declarator -> direct_declarator [ * ]\n"); 
    }

    /* additional non-terminal used to trigger changing of symbol table in case of function  */
    | direct_declarator PARENTHESIS_OPEN CT parameter_type_list PARENTHESIS_CLOSE
    // check - add comments
    { 
        printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); 

        currentST->name = $1->name; 

        if($1->type->type != TYPE_VOID){
            Sym* S = currentST->lookup("return");
            S->update($1->type);
        }
        $1->parent_table = currentST; 
        currentST->parent = globalST; 
        changeTable(globalST); // return to global ST
        currentSymbol = $$; 
    }

    | direct_declarator PARENTHESIS_OPEN identifier_list PARENTHESIS_CLOSE
    { 
        printf("direct_declarator -> direct_declarator ( identifier_list )\n"); 
    }

    | direct_declarator PARENTHESIS_OPEN CT PARENTHESIS_CLOSE
    {   
        printf("direct_declarator -> direct_declarator (  )\n"); 

        // same as previous one
        currentST->name = $1->name;
        if($1->type->type != TYPE_VOID){
            Sym* S = currentST->lookup("return");
            S->update($1->type);
        }
        $1->parent_table = currentST;
        currentST->parent = globalST;
        changeTable(globalST); // return to global ST
        currentSymbol = $$;
    }
    ;

// auxiliary non-terminal
CT: 
    {
        printf("CT -> epsilon\n");

        // checking whether function ST already exists
        if(currentSymbol->parent_table == NULL) changeTable(new SymTable());
        else {
            changeTable(currentSymbol->parent_table); 
            emit("label", currentST->name);
        }
    }

pointer: 
    STAR type_qualifier_list_opt 
    { 
        printf("pointer -> *\n"); 
        $$ = new SymType(TYPE_POINTER);
    }

    | STAR type_qualifier_list_opt pointer
    { 
        printf("pointer -> * pointer\n"); 
        $$ = new SymType(TYPE_POINTER, 0, $3); 
    }
    ;


type_qualifier_list:
    type_qualifier
    { 
        printf("type_qualifier_list -> type_qualifier\n"); 
    }

    | type_qualifier_list type_qualifier
    { 
        printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); 
    }
    ;

type_qualifier_list_opt:
    type_qualifier_list
    { 
        printf("type_qualifier_list_opt -> type_qualifier_list\n");
    }
    | /* empty */
    { 
        printf("type_qualifier_list_opt -> epsilon\n");
    }
    ;

parameter_type_list:
    parameter_list
    { 
        printf("parameter_type_list -> parameter_list\n"); 
    }

    | parameter_list COMMA ELLIPSIS
    { 
        printf("parameter_type_list -> parameter_list , ...\n");
    }
    ;

parameter_list:
    parameter_declaration
    { 
        printf("parameter_list -> parameter_declaration\n"); 
    }

    | parameter_list COMMA parameter_declaration
    { 
        printf("parameter_list -> parameter_list , parameter_declaration\n"); 
    }
    ;

parameter_declaration:
    declaration_specifiers declarator
    { 
        printf("parameter_declaration -> declaration_specifiers declarator\n"); 
    }

    | declaration_specifiers 
    { 
        printf("parameter_declaration -> declaration_specifiers\n"); 
    }
    ;


identifier_list:
    IDENTIFIER
    { 
        printf("identifier_list -> identifier\n"); 
    }

    | identifier_list COMMA IDENTIFIER
    { 
        printf("identifier_list -> identifier_list , identifier\n"); 
    }
    ;


type_name:
    specifier_qualifier_list 
    { 
        printf("type_name -> specifier_qualifier_list\n"); 
    }
    ;

initializer: 
    assignment_expression
    { 
        printf("initializer -> assignment_expression\n"); 
        $$ = $1->symbol; // depends on assignment expression
    }

    | CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
    { 
        printf("initializer -> { initializer_list }\n"); 
    }

    | CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
    { 
        printf("initializer -> { initializer_list , }\n"); 
    }
    ;

initializer_list:
    designation_opt initializer
    { 
        printf("initializer_list -> designation_opt initializer\n"); 
    }

    | initializer_list COMMA designation_opt initializer
    { 
        printf("initializer_list -> initializer_list , designation_opt initializer\n"); 
    }
    ;

designation:
    designator_list EQ
    { 
        printf("designation -> designator_list =\n"); 
    }
    ;

designation_opt:
    designation
    { 
        printf("designation_opt -> designation\n");
    }
    | /* empty */
    { 
        printf("designation_opt -> epsilon\n");
    }
    ;

designator_list:
    designator
    { 
        printf("designator_list -> designator\n"); 
    }

    | designator_list designator
    { 
        printf("designator_list -> designator_list designator\n"); 
    }
    ;

designator:
    SQR_BRACE_OPEN constant_expression SQR_BRACE_CLOSE
    { 
        printf("designator -> [ constant_expression ]\n"); 
    }

    /* dot operator involved -> ignored */
    | DOT IDENTIFIER
    { 
        // printf("designator -> . identifier\n"); 
    }
    ;

// ----------3. Statements----------


/* labeled_statement -> ignored */
statement: 
    labeled_statement 
    {
        // printf("statement -> labeled_statement\n");
    }
    compound_statement
    { 
        printf("statement -> compound_statement\n"); 
        $$ = $1; 
    }

    | expression_statement
    { 
        printf("statement -> expression_statement\n"); 

        $$ = new Statement();
        $$->nextlist = $1->nextlist;
    }

    | selection_statement
    { 
        printf("statement -> selection_statement\n"); 
        $$ = $1; 
    }

    | iteration_statement
    { 
        printf("statement -> iteration_statement\n"); 
        $$ = $1; 
    }

    | jump_statement
    { 
        printf("statement -> jump_statement\n"); 
        $$ = $1;
    }
    ;

/* labeled_statement -> ignored */
labeled_statement:
    IDENTIFIER COLON statement
    { 
        // printf("labeled_statement -> identifier : statement\n"); 
    }

    | CASE constant_expression COLON statement
    { 
        // printf("labeled_statement -> case constant_expression : statement\n"); 
    }

    | DEFAULT COLON statement
    { 
        // printf("labeled_statement -> default : statement\n"); 
    }
    ;

/* auxiliary non-terminal to change the ST on a new block */
CB:
    {   
        // changes symbol table when new block is encountered
        string name = currentST->name + "_" + to_string(block_count++);
        Sym* S = currentST->lookup(name);
        S->parent_table = new SymTable(name, currentST);
        S->type = new SymType(TYPE_BLOCK);
        currentSymbol = S;
    }
    ;


compound_statement:
    CURLY_BRACE_OPEN CB CT block_item_list_opt CURLY_BRACE_CLOSE
    { 
        printf("compound_statement -> { block_item_list_opt }\n"); 

        $$ = $4; 
        changeTable(currentST->parent); // return to parent ST
    }
    ;

block_item_list:
    block_item
    {   
        printf("block_item_list -> block_item\n"); 
        $$ = $1; 
    }

    | block_item_list M block_item
    { 
        printf("block_item_list -> block_item_list block_item\n"); 

        // check - add comments
        $$ = $3; 
        backpatch($1->nextlist, $2);
    }
    ;

block_item_list_opt:
    block_item_list
    {   
        printf("block_item_list_opt -> block_item_list\n"); 
        $$ = $1;
    }
    | /* empty */
    { 
        printf("block_item_list_opt -> epsilon\n"); 
        $$ = new Statement();
    }
    ;

block_item:
    declaration
    { 
        printf("block_item -> declaration\n"); 
        $$ = new Statement();
    }

    | statement
    { 
        printf("block_item -> statement\n"); 
        $$ = $1;
    }
    ;

expression_statement:
    expression_opt SEMI_COLON
    { 
        printf("expression_statement -> expression_opt ;\n"); 
        $$ = $1; 
    }
    ;

expression_opt:
    expression
    {
        printf("expression_opt -> expression\n"); 
        $$ = $1; 
    }
    | /* empty */
    {
        printf("expression_opt -> epsilon\n"); 
        $$ = new Expression();
    }
    ;


/* switch ignored */
/* for with declaration inside ignored */

/* in IF, WHILE, DO and FOR: backpatching needs to be done (as discussed in class) */
selection_statement:
    IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement N ELSE M statement
    {   
        printf("selection_statement -> if ( expression ) statement else statement\n"); 

        $$ = new Statement();

        convInt2Bool($3);

        backpatch($3->truelist, $5); // if true, go to M1 (if-statement)
        backpatch($3->falselist, $9); // if false, go to M2 (else-statement)

        list <int> li = merge($6->nextlist, $7->nextlist);
        $$->nextlist = merge($10->nextlist, li); // to go out of if-else
    }

    /* %prec THEN added to remove translation conflicts */
    | IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement N %prec THEN
    { 
        printf("selection_statement -> if ( expression ) statement\n"); 

        // check - add comments
        $$ = new Statement();

        convInt2Bool($3);

        backpatch($3->truelist, $5);  // if true, go to M1 (if-statement)

        list <int> li = merge($6->nextlist, $7->nextlist);
        $$->nextlist = merge($3->falselist,li); // to go out of if-statement
    }

    | SWITCH PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
    { 
        // printf("selection_statement -> switch ( expression ) statement\n"); 
    }
    ;

iteration_statement:
    // while M1 (expression) M2 statement
    WHILE M PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement
    {   
        printf("iteration_statement -> while ( expression ) statement\n"); 

        $$ = new Statement();

        convInt2Bool($4);

        backpatch($7->nextlist, $2); // M1 -> to go back to start of loop
        backpatch($4->truelist, $6); // M2 -> to go to statement if expression is true

        $$->nextlist = $4->falselist; // to go out of loop if expression is false

        emit("goto", to_string($2)); 
    }

    // similar to while .. 
    // do M1 statement M2 while (expression) ;
    | DO M statement M WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMI_COLON
    {
        printf("iteration_statement -> do statement while ( expression ) ;\n"); 

        $$ = new Statement();

        convInt2Bool($7);

        backpatch($7->truelist, $2); // M1 -> to go back to statement if expression is true
        backpatch($3->nextlist, $4); // M2 -> to go to check expression once statement is executed

        $$->nextlist = $7->falselist; // to go out of loop if expression is false
    }

    // again similar to while ...
    | FOR PARENTHESIS_OPEN expression_opt SEMI_COLON M expression_opt SEMI_COLON M expression_opt N PARENTHESIS_CLOSE M statement
    {   
        printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); 

        $$ = new Statement();

        convInt2Bool($6); 

        backpatch($6->truelist, $12); // M3 -> to go to loop body if true
        backpatch($10->nextlist, $5); // go to M1 after N1 (for checking condition)
        backpatch($13->nextlist, $8); // go to M2 after S1 (loop body)

        emit("goto", to_string($8));

        $$->nextlist = $6->falselist; // to go out of loop if expression is false
    }

    /* for loop with declaration -> ignored */
    | FOR PARENTHESIS_OPEN declaration expression_opt SEMI_COLON expression_opt PARENTHESIS_CLOSE statement
    { 
        // printf("iteration_statement -> for ( declaration expression_opt ; expression_opt ) statement\n"); 
    }
    ;


/* only return is considered */
/* expression_opt replaced with expression and epsilon */
jump_statement:
    GOTO IDENTIFIER SEMI_COLON
    { 
        // printf("jump_statement -> goto identifier ;\n"); 
    }

    | CONTINUE SEMI_COLON
    { 
        // printf("jump_statement -> continue ;\n"); 
    }

    | BREAK SEMI_COLON
    { 
        // printf("jump_statement -> break ;\n"); 
    }

    | RETURN expression SEMI_COLON
    { 
        printf("jump_statement -> return expression ;\n"); 

        $$ = new Statement(); 
        emit("return", $2->symbol->name);
    }

    | RETURN SEMI_COLON
    { 
        printf("jump_statement -> return ;\n"); 

        $$ = new Statement();
        emit("return", "");
    }
    ;

// ----------4. External definitions----------

/* external_declaration and translation_unit -> ignored */
translation_unit:
    external_declaration
    { 
        // printf("translation_unit -> external_declaration\n"); 
    }

    | translation_unit external_declaration
    { 
        // printf("translation_unit -> translation_unit external_declaration\n"); 
    }
    ;

external_declaration:
    function_definition
    { 
        // printf("external_declaration -> function_definition\n"); 
    }

    | declaration
    { 
        // printf("external_declaration -> declaration\n"); 
    }
    ;

// check this
function_definition:
    declaration_specifiers declarator declaration_list_opt compound_statement
    { 
        currentST->parent = globalST;
        changeTable(globalST); // return to global ST

        printf("function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n"); 
    }
    ;


declaration_list:
    declaration
    { 
        printf("declaration_list -> declaration\n"); 
    }

    | declaration_list declaration
    { 
        printf("declaration_list -> declaration_list declaration\n"); 
    }
    ;

declaration_list_opt:
    declaration_list
    { 
        printf("declaration_list_opt -> declaration_list\n"); 
    }
    | /* empty */
    { 
        printf("declaration_list_opt -> epsilon\n"); 
    }
    ;


%%

void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}   