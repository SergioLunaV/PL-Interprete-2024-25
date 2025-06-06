/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    SEMICOLON = 258,               /* SEMICOLON  */
    PRINT = 259,                   /* PRINT  */
    READ = 260,                    /* READ  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    THEN = 263,                    /* THEN  */
    ENDIF = 264,                   /* ENDIF  */
    WHILE = 265,                   /* WHILE  */
    LEFTCURLYBRACKET = 266,        /* LEFTCURLYBRACKET  */
    RIGHTCURLYBRACKET = 267,       /* RIGHTCURLYBRACKET  */
    ASSIGNMENT = 268,              /* ASSIGNMENT  */
    COMMA = 269,                   /* COMMA  */
    NUMBER = 270,                  /* NUMBER  */
    BOOL = 271,                    /* BOOL  */
    VARIABLE = 272,                /* VARIABLE  */
    UNDEFINED = 273,               /* UNDEFINED  */
    CONSTANT = 274,                /* CONSTANT  */
    BUILTIN = 275,                 /* BUILTIN  */
    OR = 276,                      /* OR  */
    AND = 277,                     /* AND  */
    GREATER_OR_EQUAL = 278,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 279,           /* LESS_OR_EQUAL  */
    GREATER_THAN = 280,            /* GREATER_THAN  */
    LESS_THAN = 281,               /* LESS_THAN  */
    EQUAL = 282,                   /* EQUAL  */
    NOT_EQUAL = 283,               /* NOT_EQUAL  */
    NOT = 284,                     /* NOT  */
    PLUS = 285,                    /* PLUS  */
    MINUS = 286,                   /* MINUS  */
    MULTIPLICATION = 287,          /* MULTIPLICATION  */
    DIVISION = 288,                /* DIVISION  */
    MODULO = 289,                  /* MODULO  */
    LPAREN = 290,                  /* LPAREN  */
    RPAREN = 291,                  /* RPAREN  */
    UNARY = 292,                   /* UNARY  */
    POWER = 293                    /* POWER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 141 "interpreter.y"

  double number;
  char * string; 				 /* NEW in example 7 */
  bool logic;						 /* NEW in example 15 */
  lp::ExpNode *expNode;  			 /* NEW in example 16 */
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; /* NEW in example 16 */
  lp::Statement *st;				 /* NEW in example 16 */
  lp::AST *prog;					 /* NEW in example 16 */

#line 113 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
