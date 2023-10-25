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

%type <expr> expression primary_expression constant multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator constant_expression expression_opt expression_statement

%type <stmt> statement labeled_statement compound_statement selection_statement iteration_statement jump_statement block_item block_item_list block_item_list_opt

%type <sym_type> pointer 

%type <sym> initializer declarator direct_declarator init_declarator

%type <arr> postfix_expression cast_expression unary_expression

// non-terminals used for backpatching
%type <instr_num> M; 
%type <stmt> N; 

%%

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
            $$ = new Expression(); // making a new expression and storing pointer to symbol table entry 
            $$->symbol = $1; 
            $$->type = Expression::TYPE_NBOOL;

            printf("primary_expression -> identifier\n"); 
        }

    | constant
        { 
            $$ = $1; // depends on which type of constant

            printf("primary_expression -> constant\n"); 
        
        }

    | STRING_LITERAL
        { 
            $$ = new Expression();
            $$->symbol = gentemp(TYPE_POINTER, $1);
            $$->symbol->type->arr_type = new SymType(TYPE_CHAR);
            
            printf("primary_expression -> string_literal\n"); 
        }

    | PARENTHESIS_OPEN expression PARENTHESIS_CLOSE
        { 
            $$ = $2; // depends on expression

            printf("primary_expression -> ( expression )\n"); 
        }
    ;

constant:
    INTEGER_CONST 
    { 
        $$ = new Expression(); 
        string n = to_string($1);
        $$->symbol = gentemp(TYPE_INT, n);
        emit("=", $$->symbol->name, n);

        printf("constant -> integer_constant\n"); 
    }

    | FLOAT_CONST
    {   
        $$ = new Expression();
        string f = to_string($1);
        $$->symbol = gentemp(TYPE_FLOAT, f);
        emit("=", $$->symbol->name, f);

        printf("constant -> float_constant\n"); 
    }

    | CHAR_CONST
    {   
        $$ = new Expression();
        $$->symbol = gentemp(TYPE_CHAR, $1);
        emit("=", $$->symbol->name, $1);

        printf("constant -> char_constant\n"); 
    }
    ;

postfix_expression:
    primary_expression
    { 
        // create new array and append location of primary expression
        $$ = new Array();
        $$->symbol = $1->symbol;
        $$->loc = $$->symbol;
        $$->subarr_type = $1->symbol->type;

        printf("postfix_expression -> primary_expression\n"); 
    }

    | postfix_expression SQR_BRACE_OPEN expression SQR_BRACE_CLOSE
    { 
        $$ = new Array();
        $$->symbol = $1->symbol;
        $$->subarr_type = $1->subarr_type->arr_type;
        $$->loc = gentemp(TYPE_INT);
        $$->type = TYPE_ARRAY;

        // checking if array is 1D or multi-dimensional
        if($1->type == TYPE_ARRAY) {
            // multi-dimensional array - so need to multiply size and add offset
            Sym* temp = gentemp(TYPE_INT);
            int size = computeSize($$->subarr_type);
            emit("*", temp->name, $3->symbol->name, to_string(size));
            emit("+", $$->loc->name, $1->loc->name, temp->name);
        }
        else {
            // 1D array, just calculate size
            int size = computeSize($$->subarr_type);
            emit("*", $$->loc->name, $3->symbol->name, to_string(size));
        }

        printf("postfix_expression -> postfix_expression [ expression ]\n"); 
    }

    | postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE
    {
        // function call
        $$ = new Array();
        $$->symbol = gentemp($1->symbol->type->type); 
        emit("call", $$->symbol->name, $1->symbol->name, to_string($3));

        printf("postfix_expression -> postfix_expression ( argument_expression_list_opt )\n"); 
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
        $$ = new Array();
        $$->symbol = gentemp($1->symbol->type->type); 
        emit("=", $$->symbol->name, $1->symbol->name);
        emit("+", $1->symbol->name, $1->symbol->name, "1");

        printf("postfix_expression -> postfix_expression ++\n"); 
    }

    | postfix_expression DEC_OP
    { 
        $$ = new Array();
        cout<<"gentemp called by postfix_expression DEC_OP"<<endl;
        $$->symbol = gentemp($1->symbol->type->type); 
        emit("=", $$->symbol->name, $1->symbol->name);
        emit("-", $1->symbol->name, $1->symbol->name, "1");

        printf("postfix_expression -> postfix_expression --\n"); 
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
        $$ = 1; // 1 argument
        emit("param", $1->symbol->name);

        printf("argument_expression_list -> assignment_expression\n"); 
    }

    | argument_expression_list COMMA assignment_expression
    {   
        $$ = $1 + 1; // one more argument added
        emit("param", $3->symbol->name);

        printf("argument_expression_list -> argument_expression_list , assignment_expression\n"); 
    }
    ;

argument_expression_list_opt:
    argument_expression_list
    {
        $$ = $1; // depends on argument expression list 
        printf("argument_expression_list_opt -> argument_expression_list\n"); 
    }
    | /* empty */
    { 
        $$ = 0; // no arguments
        printf("argument_expression_list_opt -> epsilon\n");
    }
    ;


unary_expression:
    postfix_expression
    { 
        $$ = $1; // depends on postfix expression
        printf("unary_expression -> postfix_expression\n"); 
    }

    | INC_OP unary_expression
    { 
        emit("+", $2->symbol->name, $2->symbol->name, "1");
        $$ = $2; // depends on unary expression

        printf("unary_expression -> ++ unary_expression\n"); 
    }

    | DEC_OP unary_expression
    { 
        emit("-", $2->symbol->name, $2->symbol->name, "1");
        $$ = $2; // depends on unary expression

        printf("unary_expression -> -- unary_expression\n"); 
    }

    | unary_operator cast_expression
    { 
        $$ = new Array();

        // operation depends on unary operator
        switch($1) {
            case '+':
                // unary plus
                $$=$2;
                break;
            
            case '-':
                // unary minus - negation of cast expression
                cout<<"gentemp called by unary_expression -"<<endl;
                $$->symbol = gentemp($2->symbol->type->type);

                emit("=-", $$->symbol->name, $2->symbol->name); 
                break;

            case '~':
                // bitwise not
                cout<<"gentemp called by unary_expression ~"<<endl;
                $$->symbol = gentemp($2->symbol->type->type);

                emit("~", $$->symbol->name, $2->symbol->name);
                break;

            case '!':
                // logical not
                cout<<"gentemp called by unary_expression !"<<endl;
                $$->symbol = gentemp($2->symbol->type->type);

                emit("!", $$->symbol->name, $2->symbol->name);
                break;

            case '&':
                // address of -> generate new pointer type
                $$->symbol = gentemp(TYPE_POINTER);
                $$->symbol->type->arr_type = $2->symbol->type;

                emit("=&", $$->symbol->name, $2->symbol->name);
                break;

            case '*':
                // dereference 
                $$->symbol = $2->symbol;
                $$->loc = gentemp($2->loc->type->arr_type->type);
                $$->loc->type->arr_type = $2->loc->type->arr_type->arr_type;
                $$->type = TYPE_POINTER;

                emit("=*", $$->loc->name, $2->loc->name);
                break;
        }

        printf("unary_expression -> unary_operator cast_expression\n"); 
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
        $$ = '&';
        printf("unary_operator -> &\n"); 
    }

    | STAR
    { 
        $$ = '*';
        printf("unary_operator -> *\n"); 
    }

    | PLUS
    { 
        $$ = '+';
        printf("unary_operator -> +\n"); 
    }

    | MINUS
    { 
        $$ = '-';
        printf("unary_operator -> -\n"); 
    }

    | NOT
    { 
        $$ = '~';
        printf("unary_operator -> ~\n"); 
    }

    | EXCLAMATION
    { 
        $$ = '!';
        printf("unary_operator -> !\n"); 
    }
    ;

cast_expression:
    unary_expression
    { 
        $$ = $1; // depends on unary expression
        printf("cast_expression -> unary_expression\n"); 
    }

    | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression
    { 
        $$ = new Array();
        $$->symbol = convertType($4->symbol, currentType); // convert type of cast expression to type name
        printf("cast_expression -> ( type_name ) cast_expression\n"); 
    }
    ;


multiplicative_expression:
    cast_expression
    { 
        $$ = new Expression();

        // we have to obtain the base type of the expression 
        SymType* bType = $1->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        // now depending on the type, we have to generate a temporary variable

        if ($1->type == TYPE_ARRAY) {
            $$->symbol = gentemp(bType->type);
            emit("=[]",$$->symbol->name, $1->symbol->name, $1->loc->name);
        }

        else if ($1->type == TYPE_POINTER)
            $$->symbol = $1->loc;

        else
            $$->symbol = $1->symbol;

        printf("multiplicative_expression -> cast_expression\n"); 
    }

    | multiplicative_expression STAR cast_expression
    {   
        // similar to above, we obtain base type and create temp symbol
        SymType* bType = $3->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 
        if($3->type == TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
        }
        else if ($3->type == TYPE_POINTER)
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

        printf("multiplicative_expression -> multiplicative_expression * cast_expression\n"); 
    }

    | multiplicative_expression DIVIDE cast_expression
    { 
        // similar to above again
        SymType* bType = $3->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 
        if($3->type == TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
        }
        else if ($3->type == TYPE_POINTER)
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

        printf("multiplicative_expression -> multiplicative_expression / cast_expression\n"); 
    }

    | multiplicative_expression PERCENTAGE cast_expression
    { 
        SymType* bType = $3->symbol->type;
        while(bType->arr_type != NULL)
            bType = bType->arr_type;

        Sym* temp; 
        if($3->type == TYPE_ARRAY) {
            temp = gentemp(bType->type);
            emit("=[]", temp->name, $3->symbol->name, $3->loc->name);
        }
        else if ($3->type == TYPE_POINTER)
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

        printf("multiplicative_expression -> multiplicative_expression %% cast_expression\n"); 
    }
    ;

additive_expression:
    multiplicative_expression
    { 
        $$ = $1; // depends on multiplicative expression
        printf("additive_expression -> multiplicative_expression\n"); 
    }

    | additive_expression PLUS multiplicative_expression
    {   
        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp($1->symbol->type->type); 
            emit("+", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("additive_expression -> additive_expression + multiplicative_expression\n"); 
    }

    | additive_expression MINUS multiplicative_expression
    { 
        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp($1->symbol->type->type); 
            emit("-", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("additive_expression -> additive_expression - multiplicative_expression\n"); 
    }
    ;

shift_expression:
    additive_expression
    {   
        $$ = $1; // depends on additive expression
        printf("shift_expression -> additive_expression\n"); 
    }

    | shift_expression LEFT_OP additive_expression
    { 
        if($1->symbol->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->symbol = gentemp(TYPE_INT); 
            emit("<<", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("shift_expression -> shift_expression << additive_expression\n"); 
    }

    | shift_expression RIGHT_OP additive_expression
    { 
        if($1->symbol->type->type != TYPE_INT) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            cout<<"gentemp called by shift_expression RIGHTOP"<<endl;
            $$->symbol = gentemp(TYPE_INT); // check
            emit(">>", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("shift_expression -> shift_expression >> additive_expression\n"); 
    }
    ;

// boolean expressions -> truelist and falselist is made as discussed in class, then backpatching will be done later on

relational_expression:
    shift_expression
    { 
        $$ = $1; // depends on shift expression
        printf("relational_expression -> shift_expression\n"); 
    }

    | relational_expression LT_OP shift_expression
    { 
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

        printf("relational_expression -> relational_expression < shift_expression\n"); 
    }

    | relational_expression GT_OP shift_expression
    { 
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

        printf("relational_expression -> relational_expression > shift_expression\n"); 
    }

    | relational_expression LTE_OP shift_expression
    { 
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

        printf("relational_expression -> relational_expression <= shift_expression\n"); 
    }

    | relational_expression GTE_OP shift_expression
    { 
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

        printf("relational_expression -> relational_expression >= shift_expression\n"); 
    }
    ;

equality_expression:
    relational_expression
    { 
        $$ = $1; // depends on relational expression
        printf("equality_expression -> relational_expression\n"); 
    }

    | equality_expression EQ_OP relational_expression
    { 
        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression(); 
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);

            convBool2Int($1); // check
            convBool2Int($3);

            emit("==", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }

        printf("equality_expression -> equality_expression == relational_expression\n"); 
    }

    | equality_expression NE_OP relational_expression
    {   
        if (!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression(); 
            $$->type = Expression::TYPE_BOOL;
            $$->truelist = makelist(nextinstr());
            $$->falselist = makelist(nextinstr()+1);

            convBool2Int($1); // check
            convBool2Int($3);

            emit("!=", "", $1->symbol->name, $3->symbol->name);
            emit("goto", "");
        }

        printf("equality_expression -> equality_expression != relational_expression\n"); 
    }
    ;

// check - add comments
and_expression:
    equality_expression
    { 
        $$ = $1; // depends on equality expression
        printf("and_expression -> equality_expression\n"); 
    }

    | and_expression BITWISEAND equality_expression
    { 
        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = Expression::TYPE_NBOOL;
            $$->symbol = gentemp(TYPE_INT);

            convBool2Int($1);
            convBool2Int($3);

            emit("&", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("and_expression -> and_expression & equality_expression\n"); 
    }
    ;

exclusive_or_expression:
    and_expression
    { 
        $$ = $1; // depends on and expression
        printf("exclusive_or_expression -> and_expression\n"); 
    }

    | exclusive_or_expression BITWISEXOR and_expression
    { 
        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = Expression::TYPE_NBOOL;
            $$->symbol = gentemp(TYPE_INT);

            convBool2Int($1);
            convBool2Int($3);

            emit("^", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n"); 
    }
    ;

inclusive_or_expression:
    exclusive_or_expression
    { 
        $$ = $1; // depends on exclusive or expression
        printf("inclusive_or_expression -> exclusive_or_expression\n"); 
    }

    | inclusive_or_expression BITWISEOR exclusive_or_expression
    { 
        if(!typecheck($1->symbol, $3->symbol)) {
            yyerror("Type mismatch!");
        }
        else {
            $$ = new Expression();
            $$->type = Expression::TYPE_NBOOL;
            $$->symbol = gentemp(TYPE_INT);

            convBool2Int($1);
            convBool2Int($3);

            emit("|", $$->symbol->name, $1->symbol->name, $3->symbol->name);
        }

        printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n"); 
    }
    ;

// in these cases, backpatching needs to be done (as discussed in class), so M and N are used 

logical_and_expression:
    inclusive_or_expression
    { 
        $$ = $1; // depends on inclusive or expression
        printf("logical_and_expression -> inclusive_or_expression\n"); 
    }

    | logical_and_expression AND_OP M inclusive_or_expression
    { 
        $$ = new Expression();
        $$->type = Expression::TYPE_BOOL;

        convInt2Bool($1);
        convInt2Bool($4);

        backpatch($1->truelist, $3);    // backpatching
        $$->truelist = $4->truelist;    // B.truelist = B2.truelist
        $$->falselist = merge($1->falselist, $4->falselist); // B.falselist = merge(B1.falselist, B2.falselist)

        printf("logical_and_expression -> logical_and_expression && inclusive_or_expression\n"); 
    }
    ;

logical_or_expression:
    logical_and_expression
    { 
        $$ = $1; // depends on logical and expression
        printf("logical_or_expression -> logical_and_expression\n"); 
    }

    | logical_or_expression OR_OP M logical_and_expression
    { 
        $$ = new Expression();
        $$->type = Expression::TYPE_BOOL;

        convInt2Bool($1);
        convInt2Bool($4);

        backpatch($1->falselist, $3);    // backpatching
        $$->truelist = merge($1->truelist, $4->truelist); // B.truelist = merge(B1.truelist, B2.truelist)
        $$->falselist = $4->falselist;    // B.falselist = B2.falselist

        printf("logical_or_expression -> logical_or_expression || logical_and_expression\n"); 
    }
    ;

conditional_expression:
    logical_or_expression
    { 
        $$ = $1; // depends on logical or expression
        printf("conditional_expression -> logical_or_expression\n"); 
    }

    // this is like "if (logical_or_expression) { expression } else { conditional_expression }"
    | logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression
    // check - add comments
    {   
        $$->symbol = gentemp($5->symbol->type->type); 
        // $$->entry->update($5->entry->type); // check
        emit("=", $$->symbol->name, $9->symbol->name);

        list<int> li = makelist(nextinstr());
        emit("goto", "");

        backpatch($6->nextlist, nextinstr());
        emit("=", $$->symbol->name, $5->symbol->name);

        list<int> li2 = makelist(nextinstr());
        li = merge(li, li2);
        emit("goto", "");

        convInt2Bool($1);

        backpatch($2->nextlist, nextinstr());
        backpatch($1->truelist, $4);
        backpatch($1->falselist, $8);
        backpatch(li, nextinstr());

        printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n"); 
    }
    ;

assignment_expression:
    conditional_expression
    { 
        $$ = $1; // depends on conditional expression
        printf("assignment_expression -> conditional_expression\n"); 
    }

    | unary_expression assignment_operator assignment_expression
    { 
        if($1->type == TYPE_ARRAY) {
            $3->symbol = convertType($3->symbol, $1->subarr_type->type); 
            emit("[]=", $1->symbol->name, $1->loc->name, $3->symbol->name);
        }
        else if ($1->type == TYPE_POINTER) {    
            $3->symbol = convertType($3->symbol, $1->loc->type->type); 
            emit("*=", $1->loc->name, $3->symbol->name); 
        }
        else {
            $3->symbol = convertType($3->symbol, $1->symbol->type->type); 
            emit("=", $1->symbol->name, $3->symbol->name);
        }

        $$ = $3; 

        printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n"); 
    }
    ;


assignment_operator:
    EQ
    { 
        // printf("assignment_operator -> =\n"); 
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
        // printf("constant_expression -> conditional_expression\n"); 
    }
    ;



// ----------2. Declarations----------
declaration: 
    declaration_specifiers init_declarator_list_opt SEMI_COLON
    { 
        // printf("declaration -> declaration_specifiers init_declarator_list_opt ;\n"); 
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
        // printf("declaration_specifiers -> type_specifier declaration_specifiers_opt\n"); 
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
        // printf("declaration_specifiers_opt -> declaration_specifiers\n");
    }

    | /* empty */
    { 
        // printf("declaration_specifiers_opt -> epsilon\n"); 
    }
    ;

init_declarator_list:
    init_declarator
    { 
        // printf("init_declarator_list -> init_declarator\n"); 
    }

    | init_declarator_list COMMA init_declarator
    { 
        // printf("init_declarator_list -> init_declarator_list , init_declarator\n"); 
    }
    ;

init_declarator_list_opt:
    init_declarator_list
    { 
        // printf("init_declarator_list_opt -> init_declarator_list\n");
    }

    | /* empty */
    { 
        // printf("init_declarator_list_opt -> epsilon\n"); 
    }
    ;

init_declarator:
    declarator
    {   
        $$ = $1; // depends on declarator
        printf("init_declarator -> declarator\n"); 
    }

    | declarator EQ initializer
    {
        if($3->init_val != " ") $1->init_val = $3->init_val;
        emit("=", $1->name, $3->name);

        printf("init_declarator -> declarator = initializer\n"); 
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
        currentType = TYPE_VOID;
        printf("type_specifier -> void\n"); 
    }

    | CHAR
    {   
        currentType = TYPE_CHAR;
        printf("type_specifier -> char\n"); 
    }

    | SHORT
    { 
        // printf("type_specifier -> short\n"); 
    }

    | INT
    { 
        currentType = TYPE_INT;
        printf("type_specifier -> int\n"); 
    }

    | LONG
    { 
        // printf("type_specifier -> long\n"); 
    }

    | FLOAT
    { 
        currentType = TYPE_FLOAT;
        printf("type_specifier -> float\n"); 
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
/* rules involving type_qualifier removed */
specifier_qualifier_list: 
    type_specifier specifier_qualifier_list_opt
    { 
        // printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n"); 
    }
    ;

specifier_qualifier_list_opt: 
    specifier_qualifier_list
    { 
        // printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n"); 
    }
    | /* empty */
    { 
        // printf("specifier_qualifier_list_opt -> epsilon\n");
    }
    ;


identifier_opt:
    IDENTIFIER
    { 
        // printf("identifier_opt -> identifier\n"); 
    }

    | /* empty */
    { 
        // printf("identifier_opt -> epsilon\n");
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
        // check - add comments
        SymType *temp = $1; 
        // for multi-dimensional arrays -> moving deeper until base type is obtained
        while(temp->arr_type != NULL) {
            temp = temp->arr_type;
        } 
        temp->arr_type = $2->type; 
        $$ = $2->update($1);


        printf("declarator -> pointer_opt direct_declarator\n"); 
    }

    | direct_declarator
    { 
        // printf("declarator -> direct_declarator\n"); 
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
        $$ = $1->update(new SymType(currentType));
        currentSymbol = $$;

        printf("direct_declarator -> identifier\n"); 
    }

    | PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE
    { 
        $$ = $2; // depends on declarator
        printf("direct_declarator -> ( declarator )\n"); 
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
        
        printf("direct_declarator -> direct_declarator [ assignment_expression ]\n"); 
    }

    | direct_declarator SQR_BRACE_OPEN SQR_BRACE_CLOSE
    {   
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

        printf("direct_declarator -> direct_declarator [ ]\n"); 
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
        // printf("direct_declarator -> direct_declarator [ * ]\n"); 
    }

    /* additional non-terminal used to trigger changing of symbol table in case of function  */
    | direct_declarator PARENTHESIS_OPEN CT parameter_type_list PARENTHESIS_CLOSE
    // check - add comments
    { 
        currentST->name = $1->name; 

        if($1->type->type != TYPE_VOID){
            Sym* S = currentST->lookup("return");
            S->update($1->type);
        }
        $1->parent_table = currentST; 
        currentST->parent = globalST; 
        changeTable(globalST); // return to global ST
        currentSymbol = $$; 

        printf("direct_declarator -> direct_declarator ( parameter_type_list )\n"); 
    }

    | direct_declarator PARENTHESIS_OPEN identifier_list PARENTHESIS_CLOSE
    { 
        // printf("direct_declarator -> direct_declarator ( identifier_list )\n"); 
    }

    | direct_declarator PARENTHESIS_OPEN CT PARENTHESIS_CLOSE
    {   
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

        printf("direct_declarator -> direct_declarator (  )\n"); 
    }
    ;


CT: 
    {
        // checking whether function ST already exists
        if(currentSymbol->parent_table == NULL) changeTable(new SymTable());
        else {
            changeTable(currentSymbol->parent_table); 
            emit("label", currentST->name);
        }

        printf("Ct -> epsilon\n");
    }

pointer: 
    STAR type_qualifier_list_opt 
    { 
        $$ = new SymType(TYPE_POINTER);
        printf("pointer -> *\n"); 
    }

    | STAR type_qualifier_list_opt pointer
    { 
        $$ = new SymType(TYPE_POINTER, 0, $3); // check 
        printf("pointer -> * pointer\n"); 
    }
    ;


type_qualifier_list:
    type_qualifier
    { 
        // printf("type_qualifier_list -> type_qualifier\n"); 
    }

    | type_qualifier_list type_qualifier
    { 
        // printf("type_qualifier_list -> type_qualifier_list type_qualifier\n"); 
    }
    ;

type_qualifier_list_opt:
    type_qualifier_list
    { 
        // printf("type_qualifier_list_opt -> type_qualifier_list\n");
    }
    | /* empty */
    { 
        // printf("type_qualifier_list_opt -> epsilon\n");
    }
    ;

parameter_type_list:
    parameter_list
    { 
        // printf("parameter_type_list -> parameter_list\n"); 
    }

    | parameter_list COMMA ELLIPSIS
    { 
        // printf("parameter_type_list -> parameter_list , ...\n");
    }
    ;

parameter_list:
    parameter_declaration
    { 
        // printf("parameter_list -> parameter_declaration\n"); 
    }

    | parameter_list COMMA parameter_declaration
    { 
        // printf("parameter_list -> parameter_list , parameter_declaration\n"); 
    }
    ;

parameter_declaration:
    declaration_specifiers declarator
    { 
        // printf("parameter_declaration -> declaration_specifiers declarator\n"); 
    }

    | declaration_specifiers 
    { 
        // printf("parameter_declaration -> declaration_specifiers\n"); 
    }
    ;


identifier_list:
    IDENTIFIER
    { 
        // printf("identifier_list -> identifier\n"); 
    }

    | identifier_list COMMA IDENTIFIER
    { 
        // printf("identifier_list -> identifier_list , identifier\n"); 
    }
    ;


type_name:
    specifier_qualifier_list 
    { 
        // printf("type_name -> specifier_qualifier_list\n"); 
    }
    ;

initializer: 
    assignment_expression
    { 
        $$ = $1->symbol; // depends on assignment expression
        printf("initializer -> assignment_expression\n"); 
    }

    | CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
    { 
        // printf("initializer -> { initializer_list }\n"); 
    }

    | CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
    { 
        // printf("initializer -> { initializer_list , }\n"); 
    }
    ;

initializer_list:
    designation_opt initializer
    { 
        // printf("initializer_list -> designation_opt initializer\n"); 
    }

    | initializer_list COMMA designation_opt initializer
    { 
        // printf("initializer_list -> initializer_list , designation_opt initializer\n"); 
    }
    ;

designation:
    designator_list EQ
    { 
        // printf("designation -> designator_list =\n"); 
    }
    ;

designation_opt:
    designation
    { 
        // printf("designation_opt -> designation\n");
    }
    | /* empty */
    { 
        // printf("designation_opt -> epsilon\n");
    }
    ;

designator_list:
    designator
    { 
        // printf("designator_list -> designator\n"); 
    }

    | designator_list designator
    { 
        // printf("designator_list -> designator_list designator\n"); 
    }
    ;

designator:
    SQR_BRACE_OPEN constant_expression SQR_BRACE_CLOSE
    { 
        // printf("designator -> [ constant_expression ]\n"); 
    }

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
        $$ = $1; 
        printf("statement -> compound_statement\n"); 
    }

    | expression_statement
    { 
        $$ = new Statement();
        $$->nextlist = $1->nextlist;

        printf("statement -> expression_statement\n"); 
    }

    | selection_statement
    { 
        $$ = $1; 
        printf("statement -> selection_statement\n"); 
    }

    | iteration_statement
    { 
        $$ = $1; 
        printf("statement -> iteration_statement\n"); 
    }

    | jump_statement
    { 
        $$ = $1;
        printf("statement -> jump_statement\n"); 
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

CB:
    {
        // changes symbol table when new block is encountered
        string name = currentST->name + "_" + to_string(block_count++);
        Sym* S = currentST->lookup(name);
        S->parent_table = new SymTable(name, currentST);
        S->type = new SymType(TYPE_BLOCK);
        currentSymbol = S;
    }

/* check - change block? */
compound_statement:
    CURLY_BRACE_OPEN CB CT block_item_list_opt CURLY_BRACE_CLOSE
    { 
        $$ = $4; 
        changeTable(currentST->parent); // return to parent ST
        printf("compound_statement -> { block_item_list_opt }\n"); 
    }
    ;

block_item_list:
    block_item
    {   
        $$ = $1; 
        printf("block_item_list -> block_item\n"); 
    }

    | block_item_list M block_item
    { 
        // check - add comments
        $$ = $3; 
        backpatch($1->nextlist, $2);
        printf("block_item_list -> block_item_list block_item\n"); 
    }
    ;

block_item_list_opt:
    block_item_list
    {   
        $$ = $1;
        printf("block_item_list_opt -> block_item_list\n"); 
    }
    | /* empty */
    { 
        $$ = new Statement();
        printf("block_item_list_opt -> epsilon\n"); 
    }
    ;

block_item:
    declaration
    { 
        $$ = new Statement();
        printf("block_item -> declaration\n"); 
    }

    | statement
    { 
        $$ = $1;
        printf("block_item -> statement\n"); 
    }
    ;

expression_statement:
    expression_opt SEMI_COLON
    { 
        $$ = $1; 
        printf("expression_statement -> expression_opt ;\n"); 
    }
    ;

expression_opt:
    expression
    {
        $$ = $1; 
        printf("expression_opt -> expression\n"); 
    }
    | /* empty */
    {
        $$ = new Expression();
        printf("expression_opt -> epsilon\n"); 
    }
    ;


/* switch ignored */
/* for with declaration inside ignored */

/* in IF, WHILE, DO and FOR: backpatching needs to be done (as discussed in class) */
selection_statement:
    IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement N ELSE M statement
    {   
        $$ = new Statement();

        convInt2Bool($3);

        backpatch($3->truelist, $5); // if true, go to M1 (if-statement)
        backpatch($3->falselist, $9); // if false, go to M2 (else-statement)

        list <int> li = merge($6->nextlist, $7->nextlist);
        $$->nextlist = merge($10->nextlist, li); // to go out of if-else

        printf("selection_statement -> if ( expression ) statement else statement\n"); 
    }

    /* %prec THEN added to remove translation conflicts */
    | IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE M statement N %prec THEN
    { 
        // check - add comments
        $$ = new Statement();

        convInt2Bool($3);

        backpatch($3->truelist, $5);  // if true, go to M1 (if-statement)

        list <int> li = merge($6->nextlist, $7->nextlist);
        $$->nextlist = merge($3->falselist,li); // to go out of if-statement

        printf("selection_statement -> if ( expression ) statement\n"); 
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
        $$ = new Statement();

        convInt2Bool($4);

        backpatch($7->nextlist, $2); // M1 -> to go back to start of loop
        backpatch($4->truelist, $6); // M2 -> to go to statement if expression is true

        $$->nextlist = $4->falselist; // to go out of loop if expression is false

        emit("goto", to_string($2)); 

        printf("iteration_statement -> while ( expression ) statement\n"); 
    }

    // similar to while .. 
    // do M1 statement M2 while (expression) ;
    | DO M statement M WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMI_COLON
    {
        $$ = new Statement();

        convInt2Bool($7);

        backpatch($7->truelist, $2); // M1 -> to go back to statement if expression is true
        backpatch($3->nextlist, $4); // M2 -> to go to check expression once statement is executed

        $$->nextlist = $7->falselist; // to go out of loop if expression is false

        printf("iteration_statement -> do statement while ( expression ) ;\n"); 
    }

    // again similar to while ...
    | FOR PARENTHESIS_OPEN expression_opt SEMI_COLON M expression_opt SEMI_COLON M expression_opt N PARENTHESIS_CLOSE M statement
    {   

        $$ = new Statement();

        convInt2Bool($6); 

        backpatch($6->truelist, $12); // M3 -> to go to loop body if true
        backpatch($10->nextlist, $5); // go to M1 after N1 (for checking condition)
        backpatch($13->nextlist, $8); // go to M2 after S1 (loop body)

        emit("goto", to_string($8));

        $$->nextlist = $6->falselist; // to go out of loop if expression is false

        printf("iteration_statement -> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); 
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
        $$ = new Statement(); 
        
        emit("return", ($2->symbol==NULL)? " ": $2->symbol->name);

        printf("jump_statement -> return expression ;\n"); 
    }

    | RETURN SEMI_COLON
    { 
        $$ = new Statement();
        emit("return", "");

        printf("jump_statement -> return ;\n"); 
    }
    ;

// ----------4. External definitions----------

/* external_declaration ignored */
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
        // printf("declaration_list -> declaration\n"); 
    }

    | declaration_list declaration
    { 
        // printf("declaration_list -> declaration_list declaration\n"); 
    }
    ;

declaration_list_opt:
    declaration_list
    { 
        // printf("declaration_list_opt -> declaration_list\n"); 
    }
    | /* empty */
    { 
        // printf("declaration_list_opt -> epsilon\n"); 
    }
    ;


%%

void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}   