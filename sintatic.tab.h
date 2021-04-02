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
    MAIN = 261,                    /* MAIN  */
    EMPTY = 262,                   /* EMPTY  */
    TYPE_INT = 263,                /* TYPE_INT  */
    TYPE_FLOAT = 264,              /* TYPE_FLOAT  */
    TYPE_ELEM = 265,               /* TYPE_ELEM  */
    TYPE_SET = 266,                /* TYPE_SET  */
    ADD_OP = 267,                  /* ADD_OP  */
    MULT_OP = 268,                 /* MULT_OP  */
    CMD_IF = 269,                  /* CMD_IF  */
    CMD_FOR = 270,                 /* CMD_FOR  */
    CMD_FORALL = 271,              /* CMD_FORALL  */
    GT_OP = 272,                   /* GT_OP  */
    LT_OP = 273,                   /* LT_OP  */
    LTE_OP = 274,                  /* LTE_OP  */
    GTE_OP = 275,                  /* GTE_OP  */
    NEQ_OP = 276,                  /* NEQ_OP  */
    EQUAL_OP = 277,                /* EQUAL_OP  */
    ADD_FUNC = 278,                /* ADD_FUNC  */
    IS_SET_FUNC = 279,             /* IS_SET_FUNC  */
    REMOVE_FUNC = 280,             /* REMOVE_FUNC  */
    EXIST_FUNC = 281,              /* EXIST_FUNC  */
    IN_OP = 282,                   /* IN_OP  */
    OP_OR = 283,                   /* OP_OR  */
    OP_AND = 284,                  /* OP_AND  */
    OP_NEG = 285,                  /* OP_NEG  */
    ATRIBUTION = 286,              /* ATRIBUTION  */
    CMD_WRITE = 287,               /* CMD_WRITE  */
    CMD_WRITELN = 288,             /* CMD_WRITELN  */
    CMD_READ = 289,                /* CMD_READ  */
    CMD_RETURN = 290,              /* CMD_RETURN  */
    INT = 291,                     /* INT  */
    FLOAT = 292,                   /* FLOAT  */
    STRING = 293,                  /* STRING  */
    CHARACTER = 294,               /* CHARACTER  */
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
#line 19 "sintatic/sintatic.y"

  char	*sval;

  struct Tree* no;

#line 115 "sintatic.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATIC_TAB_H_INCLUDED  */
