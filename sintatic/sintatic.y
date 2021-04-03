%define parse.error verbose
%define lr.type canonical-lr
%defines

%precedence THEN
%precedence CMD_ELSE

%{
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>

  #include "tree.h"

  extern int yylex();
  extern int yylex_destroy();
  extern void yyerror(const char *);
  
  extern FILE *yyin;
  int error = 0;
  char tipo[100];

  NodoArvore* raiz;
%}

%union
{
  struct Token {
    int column, line;
    char *body;
  } token;
  char	*sval;

  struct NodoArvore* no;
};

%type <no> program
%type <no> list_declaration
%type <no> main_declaration
%type <no> var_declaration
%type <no> func_declaration
%type <no> list_args
%type <no> blockStmt
%type <no> list_statements
%type <no> stmt
%type <no> input_output_expr
%type <no> iteration_expr
%type <no> condition_expr
%type <no> return_stmt
%type <no> expr_stmt
%type <no> expr
%type <no> func_expr
%type <no> func_in_expr
%type <no> op_or_expr
%type <no> op_and_expr
%type <no> logical_expr
%type <no> arithmetic_expr
%type <no> mult_expr
%type <no> first_term
%type <no> term
%type <no> logical_ops
%type <no> str_expr
%type <no> list_expr
%type <no> var
%type <no> num_tipos
%type <no> tipos


%token <sval> ID
%token <token> MAIN EMPTY
%token <token> TYPE_INT TYPE_FLOAT TYPE_ELEM  TYPE_SET   
%token <token> ADD_OP MULT_OP
%token <token> CMD_IF CMD_FOR CMD_FORALL
%token <token> GT_OP LT_OP LTE_OP GTE_OP NEQ_OP EQUAL_OP
%token <token> ADD_FUNC IS_SET_FUNC REMOVE_FUNC EXIST_FUNC IN_OP 
%token <token> OP_OR OP_AND OP_NEG
%token <token> ATRIBUTION CMD_WRITE CMD_WRITELN
%token <token> CMD_READ CMD_RETURN INT FLOAT STRING SEMICOLON COMMA OPEN_PAREN CLS_PAREN OP_CUR_BRACKET CLS_CUR_BRACKET

%%

program: 
        list_declaration {
            $$ = criarNodo("program");
            $$->filho = $1;
            raiz = $$;
        }
;

list_declaration: 
        list_declaration main_declaration {
            $1->proximo = $2;
        }
        | main_declaration 
;

main_declaration: 
        func_declaration 
        | var_declaration 
        | error {}
;

var_declaration: 
        tipos var SEMICOLON {
            $$ = criarNodo("var_declaration");
            $$->filho = $1; 
            $1->proximo = $2;  
        }
;

func_declaration: 
        tipos var OPEN_PAREN list_args CLS_PAREN blockStmt {
            $$ = criarNodo("func_declaration");   
            $$->filho = $1;
            $1->proximo = $2;
            $2->proximo = $4;
            $4->proximo = $6;
        }
        | tipos MAIN OPEN_PAREN list_args[args] CLS_PAREN blockStmt[block] {
            $$ = criarNodo("func_declaration_main");   
            $$->filho = $tipos;
            $tipos->proximo = $args;
            $args->proximo = $block;
        }
;

list_args:
        tipos var COMMA list_args
        | tipos var
        | %empty 
;

blockStmt: 
        OP_CUR_BRACKET list_statements CLS_CUR_BRACKET {
                $$ = $2;
        }
        | error {}
;

list_statements: 
        stmt list_statements {
               $$ = $1;
               $1->proximo = $2; 
        }
        | stmt
        /* | %empty {printf("empty statement\n");} */
;

stmt:   
        iteration_expr
        | condition_expr  
        | return_stmt
        | input_output_expr 
        | expr_stmt 
        | set_stmt 
        | var_declaration 
        /* | is_set_expr SEMICOLON */
        | assign SEMICOLON
;

input_output_expr: 
        CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON {
                $$ = criarNodo("CMD_WRITE_STR");
        }
        | CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON {
                $$ = criarNodo("CMD_WRITE_EXPR");
        }
        | CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON {
                $$ = criarNodo("CMD_WRITELN_STR");
        }
        | CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON {
                $$ = criarNodo("CMD_WRITELN_EXPR");
        }
        | CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON {
                $$ = criarNodo("CMD_READ_VAR");
        }
;

iteration_expr:
        CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt
;

condition_expr: 
        CMD_IF OPEN_PAREN expr CLS_PAREN  block_cond {
                $$ = $3;
        }
;

block_cond:
        simple_complex_block_stmt %prec THEN
        | simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt
        ;

simple_complex_block_stmt:
        stmt
        | blockStmt
;

return_stmt:
        CMD_RETURN SEMICOLON
        | CMD_RETURN expr SEMICOLON  
;

set_stmt: 
        CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN simple_complex_block_stmt 
        | CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN simple_complex_block_stmt
        | is_set_expr SEMICOLON

expr_stmt:
        expr SEMICOLON
;

expr:
        op_or_expr 
        | func_expr
;

assign:
        var ATRIBUTION expr 
;

func_expr: 
        ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN 
        | REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN 
        | EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN
;

is_set_expr :
        IS_SET_FUNC OPEN_PAREN var CLS_PAREN 
        | IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN 

func_in_expr:
        op_or_expr IN_OP var 
        | op_or_expr IN_OP func_expr 
;

op_or_expr: 
        op_or_expr OP_OR op_and_expr {

        }
        | op_and_expr 
        | func_in_expr
;

op_and_expr:
        op_and_expr OP_AND logical_expr {

        }
        | logical_expr 
;

logical_expr:
       logical_expr logical_ops arithmetic_expr {
             $$ = $2;
             $2->filho = $1; 
             $1->proximo = $3; 
       } 
       | arithmetic_expr
;

arithmetic_expr: 
        arithmetic_expr ADD_OP mult_expr 
        | mult_expr
;

mult_expr:
        mult_expr MULT_OP first_term
        | first_term
;

first_term: 
        term
        | OP_NEG term  
        | ADD_OP term
        | var OPEN_PAREN list_expr CLS_PAREN
        | var OPEN_PAREN CLS_PAREN
; 

term: 
        var 
        | num_tipos
        | OPEN_PAREN expr CLS_PAREN 
        /* | is_set_expr */
;

logical_ops: 
        LT_OP {
                $$ = criarNodo("LT_OP");
        }
        |  LTE_OP {
                $$ = criarNodo("LTE_OP");
        }  
        |  GT_OP {
                $$ = criarNodo("GT_OP");
        } 
        |  GTE_OP {
                $$ = criarNodo("GTE_OP");
        }
        |  NEQ_OP {
                $$ = criarNodo("NEQ_OP");
        }
        |  EQUAL_OP {
                $$ = criarNodo("EQUAL_OP");
        }
;

str_expr:
        STRING
;

list_expr:
        expr COMMA list_expr
        | expr
;

var:
      ID {
              $$ = criarNodo($1);
       } 
;

num_tipos: 
        FLOAT 
        | INT 
        | EMPTY
;

tipos: 
        TYPE_INT {
             $$ = criarNodo("TYPE_INT");
        }    
        | TYPE_FLOAT {
              $$ = criarNodo("TYPE_FLOAT");
        }
        | TYPE_SET  {
              $$ = criarNodo("TYPE_SET");
        } 
        | TYPE_ELEM {
             $$ = criarNodo("TYPE_ELEM");
        }
;
%%


void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.line, yylval.token.column, msg);
  error++;
}
/* int yyerror(char *errormsg)
{
     fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, line, column);
     return 0;
} */

int main(int argc, char ** argv) {
    
    /* escopo.idx = -1;
    escopo.proximo = -1; */
    
    yyparse();


    if(error) return 0;

    /* printTabela(indiceTabela); */
    printArvore(raiz, 0);

    freeArvore(raiz);

    yylex_destroy();
    return 0;
}
