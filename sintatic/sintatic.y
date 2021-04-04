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
  
//   extern FILE *yyin;
  int error = 0;
//   char tipo[100];

  TreeNodes* raiz;
%}

%union
{
  struct Token {
    int column, line;
    char *body;
  } token;
  char	*sval;

  struct TreeNodes* typeNode;
};

%type <typeNode> program
%type <typeNode> list_declaration
%type <typeNode> main_declaration
%type <typeNode> var_declaration
%type <typeNode> func_declaration
%type <typeNode> list_args
%type <typeNode> blockStmt
%type <typeNode> list_statements
%type <typeNode> stmt
%type <typeNode> input_output_expr
%type <typeNode> iteration_expr
%type <typeNode> condition_expr
%type <typeNode> return_stmt
%type <typeNode> expr_stmt
%type <typeNode> expr
%type <typeNode> assign
%type <typeNode> func_expr
%type <typeNode> func_in_expr
%type <typeNode> op_or_expr
%type <typeNode> op_and_expr
%type <typeNode> logical_expr
%type <typeNode> arithmetic_expr
%type <typeNode> mult_expr
%type <typeNode> first_term
%type <typeNode> term
%type <typeNode> logical_ops
%type <typeNode> str_expr
%type <typeNode> list_expr
%type <typeNode> var
%type <typeNode> num_tipos
%type <typeNode> tipos
%type <typeNode> is_set_expr
%type <typeNode> block_cond
%type <typeNode> simple_complex_block_stmt
%type <typeNode> adds_op
%type <typeNode> mult_ops

%token <sval> ID INT FLOAT ADD_OP MULT_OP STRING

%token <token> MAIN EMPTY
%token <token> TYPE_INT TYPE_FLOAT TYPE_ELEM TYPE_SET   
%token <token> CMD_IF CMD_FOR CMD_FORALL
%token <token> GT_OP LT_OP LTE_OP GTE_OP NEQ_OP EQUAL_OP
%token <token> ADD_FUNC IS_SET_FUNC REMOVE_FUNC EXIST_FUNC IN_OP 
%token <token> OP_OR OP_AND OP_NEG
%token <token> ATRIBUTION CMD_WRITE CMD_WRITELN
%token <token> CMD_READ CMD_RETURN SEMICOLON COMMA OPEN_PAREN CLS_PAREN OP_CUR_BRACKET CLS_CUR_BRACKET

%%

program: 
        list_declaration {
            $$ = buildNode("program");
            $$->childNode = $1;
            raiz = $$;
        }
;

list_declaration: 
        list_declaration main_declaration {
            $1->brotherNode = $2;
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
            $$ = buildNode("var_declaration");
            $$->childNode = $1; 
            $1->brotherNode = $2;  
        }
        /* | tipos var assign arithmetic_expr SEMICOLON {
            $$ = buildNode("var_declaration");
            $$->childNode = $1; 
            $1->brotherNode = $2;  
            $2->brotherNode = $3;
            $3->brotherNode = $4;
        } */
;

func_declaration: 
        tipos var OPEN_PAREN list_args CLS_PAREN blockStmt {
            $$ = buildNode("func_declaration");   
            $$->childNode = $1;
            $1->brotherNode = $2;
            $2->brotherNode = $4;
            $4->brotherNode = $6;
        }
        | tipos MAIN OPEN_PAREN list_args[args] CLS_PAREN blockStmt[block] {
            $$ = buildNode("func_declaration_main");   
            $$->childNode = $tipos;
            $tipos->brotherNode = $args;
            $args->brotherNode = $block;
        }
;

list_args:
        tipos var COMMA list_args {
                $$ = buildNode("list_args");  
                $$->childNode = $1;
                $1->brotherNode = $2;
                $2->brotherNode = $4;
        }
        | tipos var {
                $$ = buildNode("list_args"); 
                $$->childNode = $1;
                $1->brotherNode = $2; 
        }
        | %empty {
                $$ = buildNode("no_args"); 
        } 
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
               $1->brotherNode = $2; 
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
                $$ = buildNode("CMD_WRITE_STR");
        }
        | CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_WRITE_EXPR");
        }
        | CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_WRITELN_STR");
        }
        | CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_WRITELN_EXPR");
        }
        | CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON {
                $$ = buildNode("CMD_READ_VAR");
        }
;

iteration_expr:
        CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt
        {     
             $$ = buildNode("for");
             $$->childNode = $3;
             $3->brotherNode = $5;
             $5->brotherNode = $7;
             $7->brotherNode = $9;  
        
        }
;

condition_expr: 
        CMD_IF OPEN_PAREN expr CLS_PAREN  block_cond {
                $$ = buildNode("if");
                $$->childNode = $3;
                $3->brotherNode = $5;
        }
;

block_cond:
        simple_complex_block_stmt %prec THEN 
        | simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt {
                $$ = buildNode("else");
                $$->childNode = $1;
                $1->brotherNode = $3;
        }
;

simple_complex_block_stmt:
        stmt
        | blockStmt
;

return_stmt:
        CMD_RETURN SEMICOLON {
              $$ = buildNode("return");  
        }
        | CMD_RETURN expr SEMICOLON  {
                $$ = buildNode("return");  
                $$->childNode = $2;
        }
;

set_stmt: 
        CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN simple_complex_block_stmt 
        | CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN simple_complex_block_stmt
        | is_set_expr SEMICOLON
;
expr_stmt:
        expr SEMICOLON
;

expr:
        op_or_expr 
        | func_expr
;

assign:
        var ATRIBUTION expr {
              $$ = buildNode(" = ");
              $$->childNode = $1;
              $1->brotherNode = $3;
        }
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
              $$ = buildNode("or");
              $$->childNode = $1;
              $1->brotherNode = $3;
        }
        | op_and_expr 
        | func_in_expr
;

op_and_expr:
        op_and_expr OP_AND logical_expr {
              $$ = buildNode("and");
              $$->childNode = $1;
              $1->brotherNode = $3;  
        }
        | logical_expr 
;

logical_expr:
       logical_expr logical_ops arithmetic_expr {
             $$ = $2;
             $2->childNode = $1; 
             $1->brotherNode = $3; 
       } 
       | arithmetic_expr
;

arithmetic_expr: 
        arithmetic_expr adds_op mult_expr {
              $$ = $2;
              $2->childNode = $1;
              $1->brotherNode = $3;
        }
        | mult_expr
;

mult_expr:
        mult_expr mult_ops first_term {
              $$ = $2;
              $2->childNode = $1;
              $1->brotherNode = $3;
        }
        | first_term
;

first_term: 
        term
        | OP_NEG term {
              $$ = buildNode(" ! ");
              $$->childNode = $2;
        } 
        | adds_op term {
              $$ = $1;
              $1->brotherNode = $2;
        }
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
                $$ = buildNode("LT_OP");
        }
        |  LTE_OP {
                $$ = buildNode("LTE_OP");
        }  
        |  GT_OP {
                $$ = buildNode("GT_OP");
        } 
        |  GTE_OP {
                $$ = buildNode("GTE_OP");
        }
        |  NEQ_OP {
                $$ = buildNode("NEQ_OP");
        }
        |  EQUAL_OP {
                $$ = buildNode("EQUAL_OP");
        }
;

str_expr:
        STRING {
            $$ = buildNode($1);
        }
;

list_expr:
        expr COMMA list_expr
        | expr
;

var:
      ID {
            $$ = buildNode($1);
       } 
;

adds_op:
      ADD_OP {
            $$ = buildNode($1);  
      }
;

mult_ops:
      MULT_OP {
            $$ = buildNode($1);  
      }
;


num_tipos: 
        FLOAT {
              $$ = buildNode($1);
        }
        | INT {
              $$ = buildNode($1);
        }
        | EMPTY {
              $$ = buildNode("EMPTY");
       }
;

tipos: 
        TYPE_INT {
             $$ = buildNode("TYPE_INT");
        }    
        | TYPE_FLOAT {
              $$ = buildNode("TYPE_FLOAT");
        }
        | TYPE_SET  {
              $$ = buildNode("TYPE_SET");
        } 
        | TYPE_ELEM {
             $$ = buildNode("TYPE_ELEM");
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
    escopo.brotherNode = -1; */
    
    yyparse();


    if(error) return 0;

    /* printTabela(indiceTabela); */
    showTree(raiz, 0);

    clearTree(raiz);

    yylex_destroy();
    return 0;
}

// terminar grámatica
// corrigir bug do if else
// corrigir int a = 2;
// corrigir bug error
// montar tabela de simbolos
// escrever relatório