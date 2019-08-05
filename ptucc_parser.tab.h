/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
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
    TK_AND = 258,
    TK_ARRAY = 259,
    TK_BOOLEAN = 260,
    TK_CHAR = 261,
    TK_BEGIN = 262,
    TK_DIV = 263,
    TK_DO = 264,
    TK_ELSE = 265,
    TK_FOR = 266,
    TK_END = 267,
    TK_FUNCTION = 268,
    TK_GOTO = 269,
    TK_IF = 270,
    TK_INTEGER = 271,
    TK_VAR = 272,
    TK_MOD = 273,
    TK_NOT = 274,
    TK_OF = 275,
    TK_OR = 276,
    TK_WHILE = 277,
    TK_PROCEDURE = 278,
    TK_PROGRAM = 279,
    TK_REAL = 280,
    TK_REPEAT = 281,
    TK_TO = 282,
    TK_RESULT = 283,
    TK_RETURN = 284,
    TK_THEN = 285,
    TK_UNTIL = 286,
    TK_DOWNTO = 287,
    TK_TRUE = 288,
    TK_FALSE = 289,
    TK_READSTRING = 290,
    TK_READINTEGER = 291,
    TK_READREAL = 292,
    TK_WRITESTRING = 293,
    TK_WRITEINTEGER = 294,
    TK_WRITEREAL = 295,
    TK_IDENTIFIER = 296,
    TK_POSITIVEINT = 297,
    TK_POSITIVEREAL = 298,
    TK_COMMON_CHARS = 299,
    TK_ESCAPE_CHARS = 300,
    TK_CONSTANT_STRING = 301,
    OP_PLUS = 302,
    OP_MINUS = 303,
    OP_MULT = 304,
    OP_DIV = 305,
    OP_EQUAL = 306,
    OP_NOTEQUAL = 307,
    OP_LESS = 308,
    OP_GREATER = 309,
    OP_LESSEQUAL = 310,
    OP_GREATEREQUAL = 311,
    OP_AND = 312,
    OP_OR = 313,
    OP_NOT = 314,
    ASSIGNMENT = 315,
    SEMICOLON = 316,
    LEFT_PARENTHESIS = 317,
    RIGHT_PARENTHESIS = 318,
    TK_COMMA = 319,
    LEFT_BRACKET = 320,
    RIGHT_BRACKET = 321,
    COLON = 322,
    DOT = 323,
    TK_EOF = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "ptucc_parser.y" /* yacc.c:1909  */

	char* crepr;

#line 128 "ptucc_parser.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */
