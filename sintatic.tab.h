/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTATIC_TAB_H_INCLUDED
# define YY_YY_SINTATIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    THEN = 258,                    /* THEN  */
    CMD_ELSE = 259,                /* CMD_ELSE  */
    ID = 260,                      /* ID  */
    INT = 261,                     /* INT  */
    FLOAT = 262,                   /* FLOAT  */
    ADD_OP = 263,                  /* ADD_OP  */
    MULT_OP = 264,                 /* MULT_OP  */
    STRING = 265,                  /* STRING  */
    CHARACTER = 266,               /* CHARACTER  */
    MAIN = 267,                    /* MAIN  */
    EMPTY = 268,                   /* EMPTY  */
    TYPE_INT = 269,                /* TYPE_INT  */
    TYPE_FLOAT = 270,              /* TYPE_FLOAT  */
    TYPE_ELEM = 271,               /* TYPE_ELEM  */
    TYPE_SET = 272,                /* TYPE_SET  */
    CMD_IF = 273,                  /* CMD_IF  */
    CMD_FOR = 274,                 /* CMD_FOR  */
    CMD_FORALL = 275,              /* CMD_FORALL  */
    GT_OP = 276,                   /* GT_OP  */
    LT_OP = 277,                   /* LT_OP  */
    LTE_OP = 278,                  /* LTE_OP  */
    GTE_OP = 279,                  /* GTE_OP  */
    NEQ_OP = 280,                  /* NEQ_OP  */
    EQUAL_OP = 281,                /* EQUAL_OP  */
    ADD_FUNC = 282,                /* ADD_FUNC  */
    IS_SET_FUNC = 283,             /* IS_SET_FUNC  */
    REMOVE_FUNC = 284,             /* REMOVE_FUNC  */
    EXIST_FUNC = 285,              /* EXIST_FUNC  */
    IN_OP = 286,                   /* IN_OP  */
    OP_OR = 287,                   /* OP_OR  */
    OP_AND = 288,                  /* OP_AND  */
    OP_NEG = 289,                  /* OP_NEG  */
    ATRIBUTION = 290,              /* ATRIBUTION  */
    CMD_WRITE = 291,               /* CMD_WRITE  */
    CMD_WRITELN = 292,             /* CMD_WRITELN  */
    CMD_READ = 293,                /* CMD_READ  */
    CMD_RETURN = 294,              /* CMD_RETURN  */
    SEMICOLON = 295,               /* SEMICOLON  */
    COMMA = 296,                   /* COMMA  */
    OPEN_PAREN = 297,              /* OPEN_PAREN  */
    CLS_PAREN = 298,               /* CLS_PAREN  */
    OP_CUR_BRACKET = 299,          /* OP_CUR_BRACKET  */
    CLS_CUR_BRACKET = 300          /* CLS_CUR_BRACKET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "sintatic/sintatic.y"

  struct Token {
    char *body;
  } token;
  char	*sval;

  struct TreeNodes* typeNode;

#line 118 "sintatic.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATIC_TAB_H_INCLUDED  */
