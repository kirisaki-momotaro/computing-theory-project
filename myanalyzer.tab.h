/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_STRING = 258,
    TK_IDENT = 259,
    TK_INT = 260,
    TK_REAL = 261,
    TK_ASSGN = 262,
    KW_HASH = 263,
    KW_IF = 264,
    KW_ELSE = 265,
    KW_INTEGER = 266,
    KW_FALSE = 267,
    KW_FOR = 268,
    KW_BREAK = 269,
    KW_DEF = 270,
    KW_ENDCOMP = 271,
    KW_SCALAR = 272,
    KW_CONST = 273,
    KW_IN = 274,
    KW_CONTINUE = 275,
    KW_ENDDEF = 276,
    KW_STR = 277,
    KW_ENDFOR = 278,
    KW_NOT = 279,
    KW_MAIN = 280,
    KW_BOOLEAN = 281,
    KW_WHILE = 282,
    KW_AND = 283,
    KW_RETURN = 284,
    KW_TRUE = 285,
    KW_ENDIF = 286,
    KW_ENDWHILE = 287,
    KW_OR = 288,
    KW_COMP = 289,
    KW_VOID = 290,
    OP_PLUS = 291,
    OP_MINUS = 292,
    OP_MUL = 293,
    OP_DIV = 294,
    OP_MOD = 295,
    OP_POWER = 296,
    OP_EQ = 297,
    OP_INEQ = 298,
    OP_LESS = 299,
    OP_EQLESS = 300,
    OP_MORE = 301,
    OP_EQMORE = 302,
    OP_ASSIGN = 303,
    OP_PLUSEQ = 304,
    OP_MINUSEQ = 305,
    OP_MULEQ = 306,
    OP_DIVEQ = 307,
    OP_MODEQ = 308,
    OP_POINTER = 309,
    OP_PAR_L = 310,
    OP_PAR_R = 311,
    OP_SEMI = 312,
    OP_COMA = 313,
    OP_BRA_L = 314,
    OP_BRA_R = 315,
    OP_DOT = 316,
    OP_MEAN = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "myanalyzer.y"

	char* str;

#line 124 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
