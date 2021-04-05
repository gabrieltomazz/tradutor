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
    MAIN = 266,                    /* MAIN  */
    EMPTY = 267,                   /* EMPTY  */
    TYPE_INT = 268,                /* TYPE_INT  */
    TYPE_FLOAT = 269,              /* TYPE_FLOAT  */
    TYPE_ELEM = 270,               /* TYPE_ELEM  */
    TYPE_SET = 271,                /* TYPE_SET  */
    CMD_IF = 272,                  /* CMD_IF  */
    CMD_FOR = 273,                 /* CMD_FOR  */
    CMD_FORALL = 274,              /* CMD_FORALL  */
    GT_OP = 275,                   /* GT_OP  */
    LT_OP = 276,                   /* LT_OP  */
    LTE_OP = 277,                  /* LTE_OP  */
    GTE_OP = 278,                  /* GTE_OP  */
    NEQ_OP = 279,                  /* NEQ_OP  */
    EQUAL_OP = 280,                /* EQUAL_OP  */
    ADD_FUNC = 281,                /* ADD_FUNC  */
    IS_SET_FUNC = 282,             /* IS_SET_FUNC  */
    REMOVE_FUNC = 283,             /* REMOVE_FUNC  */
    EXIST_FUNC = 284,              /* EXIST_FUNC  */
    IN_OP = 285,                   /* IN_OP  */
    OP_OR = 286,                   /* OP_OR  */
    OP_AND = 287,                  /* OP_AND  */
    OP_NEG = 288,                  /* OP_NEG  */
    ATRIBUTION = 289,              /* ATRIBUTION  */
    CMD_WRITE = 290,               /* CMD_WRITE  */
    CMD_WRITELN = 291,             /* CMD_WRITELN  */
    CMD_READ = 292,                /* CMD_READ  */
    CMD_RETURN = 293,              /* CMD_RETURN  */
    SEMICOLON = 294,               /* SEMICOLON  */
    COMMA = 295,                   /* COMMA  */
    OPEN_PAREN = 296,              /* OPEN_PAREN  */
    CLS_PAREN = 297,               /* CLS_PAREN  */
    OP_CUR_BRACKET = 298,          /* OP_CUR_BRACKET  */
    CLS_CUR_BRACKET = 299          /* CLS_CUR_BRACKET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "sintatic/sintatic.y"

  struct Token {
    int column, line;
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
