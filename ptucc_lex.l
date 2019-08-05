%{
#include "ptucc_parser.tab.h"  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cgen.h"

int line_num = 1;

/* 
	A primitive macro facility:
	just one macro is allowed to be defined! 
*/
#define MAXMACRO 32
char* mactable[MAXMACRO][2];
int mactable_size = 0;

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

ID 						[a-zA-Z_][0-9a-zA-Z_]*
DIGIT  					[0-9]
DOT 					[\.]
SIGN_OPERATOR			[\+\-]
EXP						[eE]({SIGN_OPERATOR}?)([1-9]{DIGIT}*)

KEYWORD_AND				[aA][nN][dD]
KEYWORD_ARRAY			[aA][rR][rR][aA][yY]
KEYWORD_BOOLEAN			[bB][oO][oO][lL][eE][aA][nN]
KEYWORD_CHAR			[cC][hH][aA][rR]
KEYWORD_BEGIN			[bB][eE][gG][iI][nN]
KEYWORD_DIV				[dD][iI][vV]
KEYWORD_DO				[dD][oO]
KEYWORD_ELSE			[eE][lL][sS][eE]
KEYWORD_FOR				[fF][oO][rR]
KEYWORD_END				[eE][nN][dD]
KEYWORD_FUNCTION		[fF][uU][nN][cC][tT][iI][oO][nN]
KEYWORD_GOTO			[gG][oO][tT][oO]
KEYWORD_IF 				[iI][fF]
KEYWORD_INTEGER			[iI][nN][tT][eE][gG][eE][rR]
KEYWORD_VAR				[vV][aA][rR]
KEYWORD_MOD				[mM][oO][dD]
KEYWORD_NOT 			[nN][oO][tT]
KEYWORD_OF 				[oO][fF]
KEYWORD_OR 				[oO][rR]
KEYWORD_WHILE			[wW][hH][iI][lL][eE]
KEYWORD_PROCEDURE		[pP][rR][oO][cC][eE][dD][uU][rR][eE]
KEYWORD_PROGRAM			[pP][rR][oO][gG][rR][aA][mM]
KEYWORD_REAL			[rR][eE][aA][lL]
KEYWORD_REPEAT			[rR][eE][pP][eE][aA][tT]
KEYWORD_TO 				[tT][oO]
KEYWORD_RESULT			[rR][eE][sS][uU][lL][tT]
KEYWORD_RETURN			[rR][eE][tT][uU][rR][nN]
KEYWORD_THEN			[tT][hH][eE][nN]
KEYWORD_UNTIL			[uU][nN][tT][iI][lL]
KEYWORD_DOWNTO			[dD][oO][wW][nN][tT][oO]

KEYWORD_TRUE			[tT][rR][uU][eE]
KEYWORD_FALSE			[fF][aA][lL][sS][eE]

READSTRING				[Rr][Ee][Aa][Dd][Ss][Tt][Rr][iI][Nn][Gg]
READINTEGER				[Rr][Ee][Aa][Dd][Ii][Nn][Tt][Ee][Gg][Ee][Rr]
READREAL				[Rr][Ee][Aa][Dd][Rr][Ee][Aa][Ll]
WRITESTRING				[Ww][Rr][Ii][Tt][Ee][Ss][Tt][Rr][Ii][Nn][Gg]
WRITEINTEGER			[Ww][Rr][Ii][Tt][Ee][Ii][Nn][Tt][Ee][Gg][Ee][Rr]
WRITEREAL				[Ww][Rr][Ii][Tt][Ee][Rr][Ee][Aa][Ll]



IDENTIFIER				[a-zA-Z]([0-9a-zA-Z_])*
POSITIVEINT				[0]|[1-9][0-9]*

POSITIVEREAL			{POSITIVEINT}{DOT}{DIGIT}+{EXP}?



COMMON_CHARS			[\`\~\!\@\#\$\%\^\&\*\(\)\_\{\}\[\]\:\;\|\?\/\<\>\,\.\-\+\=\ ]
ESCAPE_CHARS			[\\n\\t\\r\\\\\'\\"]

CONSTANT_STRINGS1		[\']({COMMON_CHARS}|{ESCAPE_CHARS}|[A-Za-z])*[\']
CONSTANT_STRINGS2		[\"]({COMMON_CHARS}|{ESCAPE_CHARS}|[A-Za-z])*[\"]
CONSTANT_STRING 		({CONSTANT_STRINGS1}|{CONSTANT_STRINGS2})


%x comment



%%
"(*"					BEGIN(comment); 
 
<comment>[^*\n]*       /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);



\n 							{++line_num;}
{KEYWORD_AND}				{ return TK_AND;}
{KEYWORD_ARRAY}				{ return TK_ARRAY;}
{KEYWORD_BOOLEAN}			{ return TK_BOOLEAN;}
{KEYWORD_CHAR}				{ return TK_CHAR;}
{KEYWORD_BEGIN}				{ return TK_BEGIN;}
{KEYWORD_DIV}				{ return TK_DIV;}
{KEYWORD_DO} 				{ return TK_DO;}
{KEYWORD_ELSE}				{ return TK_ELSE;}
{KEYWORD_FOR}				{ return TK_FOR;}
{KEYWORD_END}				{ return TK_END;}
{KEYWORD_FUNCTION}			{ return TK_FUNCTION;}
{KEYWORD_GOTO}				{ return TK_GOTO;}
{KEYWORD_IF} 				{ return TK_IF;}
{KEYWORD_INTEGER}			{ return TK_INTEGER;}
{KEYWORD_VAR}				{ return TK_VAR;}
{KEYWORD_MOD}				{ return TK_MOD;}
{KEYWORD_NOT} 				{ return TK_NOT;}
{KEYWORD_OF} 				{ return TK_OF;}
{KEYWORD_OR} 				{ return TK_OR;}
{KEYWORD_WHILE}				{ return TK_WHILE;}
{KEYWORD_PROCEDURE}			{ return TK_PROCEDURE;}
{KEYWORD_PROGRAM}			{ return TK_PROGRAM;}
{KEYWORD_REAL}				{ return TK_REAL;}
{KEYWORD_REPEAT}			{ return TK_REPEAT;}
{KEYWORD_TO} 				{return TK_TO;}
{KEYWORD_RESULT}			{return TK_RESULT;}
{KEYWORD_RETURN}			{ return TK_RETURN;}
{KEYWORD_THEN}				{return TK_THEN;}
{KEYWORD_UNTIL}				{ return TK_UNTIL;}
{KEYWORD_DOWNTO}			{ return TK_DOWNTO;}


{KEYWORD_TRUE}				{ return TK_TRUE;}
{KEYWORD_FALSE}				{ return TK_FALSE;}

{READSTRING}				{ return TK_READSTRING;}
{READINTEGER}				{ return TK_READINTEGER;}
{READREAL}					{ return TK_READREAL;}
{WRITESTRING}				{ return TK_WRITESTRING; }
{WRITEINTEGER}				{ return TK_WRITEINTEGER; }
{WRITEREAL}					{ return TK_WRITEREAL; }


{IDENTIFIER}				{ yylval.crepr = strdup(yytext); return TK_IDENTIFIER;}
{POSITIVEINT}				{ yylval.crepr = strdup(yytext); return TK_POSITIVEINT;}

{POSITIVEREAL}				{ yylval.crepr = strdup(yytext); return TK_POSITIVEREAL;}

{CONSTANT_STRING}			{ yylval.crepr = strdup(yytext); return TK_CONSTANT_STRING;}

"+" 		 				{return OP_PLUS;}
"-" 						{ return OP_MINUS;}
"*" 						{ return OP_MULT;}
"/" 						{ return OP_DIV;}


"=" 						{ return OP_EQUAL;}
"<>" 						{ return OP_NOTEQUAL;}
"<" 						{ return OP_LESS;}
">" 						{ return OP_GREATER;}
"<=" 						{ return OP_LESSEQUAL;}
">=" 						{ return OP_GREATEREQUAL;}


"&&"						{ return OP_AND;}

"||" 						{ return OP_OR;}
"!" 						{ return OP_NOT;}

":=" 						{ return ASSIGNMENT;}


";"	    					{ return SEMICOLON;}
"("    						{ return LEFT_PARENTHESIS;}
")"   						{ return RIGHT_PARENTHESIS;}
","	  						{ return TK_COMMA;}
"["							{ return LEFT_BRACKET;}
"]"	 						{ return RIGHT_BRACKET;}
":"	 						{ return COLON;}
"."							{ return DOT;}

[ \r\n\t] 					/* skip whitespace */

		

%%
