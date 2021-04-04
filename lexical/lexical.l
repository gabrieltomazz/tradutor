%option nounput noinput noyywrap
%{
  #include <math.h>
  #include <string.h>
  #include "sintatic.tab.h"
//   int yyerror(char *errormsg);
//   int yyparse();

  int line = 1;
  int column = 0;
%}

INT [0-9]+ 
FLOAT [0-9]+|[0-9]+\.[0-9]+
MAIN main
EMPTY empty
ADD_OP "+"|"-" 
MULT_OP "*"|"/"
OP_OR  "||" 
OP_AND &&
OP_NEG !
STRING \"[^\"]*\"|'[^']*'
/* CHARACTER ['].[']|[']\\n[']|[']\\r[']|[']\\t['] */
ADD_FUNC add
IS_SET_FUNC is_set
REMOVE_FUNC remove
EXIST_FUNC exists
IN_OP in
ID [A-Za-z_][A-Za-z_0-9]*
TYPE_INT int
TYPE_FLOAT float
TYPE_ELEM elem
TYPE_SET set
ATRIBUTION = 
CMD_IF if 
CMD_ELSE else
CMD_FOR for
CMD_FORALL forall
CMD_WRITE write 
CMD_WRITELN writeln
CMD_READ read
CMD_RETURN return
GT_OP  ">"
LT_OP  "<"          
GTE_OP ">=" 
LTE_OP "<=" 
NEQ_OP "!=" 
EQUAL_OP "=="
SEMICOLON ";"
COMMA ","
OPEN_PAREN "("
CLS_PAREN ")"
OP_CUR_BRACKET "{"
CLS_CUR_BRACKET "}"
%%

"//".*\n            {line++;column=0;}
\n		              {line++;column=0;}
{MAIN}              {column += yyleng; return (MAIN);}
{EMPTY}             {column += yyleng; return (EMPTY);}
{TYPE_INT}          {column += yyleng; return (TYPE_INT);}
{TYPE_FLOAT}        {column += yyleng; return (TYPE_FLOAT);}
{TYPE_ELEM}         {column += yyleng; return (TYPE_ELEM);}
{TYPE_SET}          {column += yyleng; return (TYPE_SET);}
{GT_OP}             {column += yyleng; return (GT_OP);}
{LT_OP}             {column += yyleng; return (LT_OP);}
{GTE_OP}            {column += yyleng; return (GTE_OP);}
{LTE_OP}            {column += yyleng; return (LTE_OP);}
{NEQ_OP}            {column += yyleng; return (NEQ_OP);}
{EQUAL_OP}          {column += yyleng; return (EQUAL_OP);}
{ADD_OP}            {column += yyleng; 
                      yylval.sval = malloc(strlen(yytext));
                      strncpy(yylval.sval, yytext, strlen(yytext));
                      return(ADD_OP); 
                    }     
{MULT_OP}           {column += yyleng; 
                      yylval.sval = malloc(strlen(yytext));
                      strncpy(yylval.sval, yytext, strlen(yytext));
                      return(MULT_OP); 
                    }
{OP_OR}             {column += yyleng; return (OP_OR);}
{OP_AND}            {column += yyleng; return (OP_AND);}
{OP_NEG}            {column += yyleng; return (OP_NEG);}
{ADD_FUNC}          {column += yyleng; return (ADD_FUNC);}
{IS_SET_FUNC}       {column += yyleng; return (IS_SET_FUNC);}
{REMOVE_FUNC}       {column += yyleng; return (REMOVE_FUNC);}
{EXIST_FUNC}        {column += yyleng; return (EXIST_FUNC);}
{IN_OP}             {column += yyleng; return (IN_OP);}
{ATRIBUTION}        {column += yyleng; return (ATRIBUTION);}
{CMD_IF}            {column += yyleng; return (CMD_IF) ;}
{CMD_ELSE}          {column += yyleng; return (CMD_ELSE) ;}
{CMD_FOR}		        {column += yyleng; return (CMD_FOR) ;}
{CMD_FORALL}		    {column += yyleng; return (CMD_FORALL) ;}
{CMD_WRITE}	        {column += yyleng; return (CMD_WRITE) ;}
{CMD_WRITELN}		    {column += yyleng; return (CMD_WRITELN) ;}
{CMD_READ}		      {column += yyleng; return (CMD_READ) ;}
{CMD_RETURN}		    {column += yyleng; return (CMD_RETURN) ;}
{ID}                {column += yyleng; 
                      yylval.sval = malloc(strlen(yytext));
                      strncpy(yylval.sval, yytext, strlen(yytext));
                      return(ID); 
                    }
{INT}               {column += yyleng; 
                      yylval.sval = malloc(strlen(yytext));
                      strncpy(yylval.sval, yytext, strlen(yytext));
                      return(INT); 
                    }
{FLOAT}             {column += yyleng; yylval.sval = malloc(strlen(yytext));
                      strncpy(yylval.sval, yytext, strlen(yytext));
                      return(FLOAT); 
                    }
{STRING}			      {column += yyleng; yylval.sval = malloc(strlen(yytext));
                      strncpy(yylval.sval, yytext, strlen(yytext));
                      return(STRING); 
                    }
{SEMICOLON}         {column += yyleng; return (SEMICOLON) ;}
{COMMA}             {column += yyleng; return (COMMA) ;}
{OPEN_PAREN}        {column += yyleng; return (OPEN_PAREN) ;}
{CLS_PAREN}         {column += yyleng; return (CLS_PAREN) ;}
{OP_CUR_BRACKET}    {column += yyleng; return (OP_CUR_BRACKET) ;}
{CLS_CUR_BRACKET}   {column += yyleng; return (CLS_CUR_BRACKET) ;}

[ \t\r]+            {column += yyleng;}
.	                {printf("l:%d col:%d INVALID TOKEN: %s\n", line, column, yytext); column += yyleng;}

%%
/* int main()
{ */
     /* yyin = fopen(argv[1], "r"); */
     /* yyparse(); */
     /* fclose(yyin); */
     /* yylex_destroy();
     return 1; */
/* } */

/* int yywrap(void)
{
     return 0;
} */