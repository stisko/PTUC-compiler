%{

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;

%}

%union
{
	char* crepr;
}




%token TK_AND
%token TK_ARRAY
%token <crepr> TK_BOOLEAN
%token <crepr> TK_CHAR
%token TK_BEGIN
%token TK_DIV
%token TK_DO
%token TK_ELSE
%token TK_FOR
%token TK_END
%token TK_FUNCTION
%token TK_GOTO
%token TK_IF
%token TK_INTEGER
%token TK_VAR
%token TK_MOD
%token TK_NOT
%token TK_OF
%token TK_OR
%token TK_WHILE
%token TK_PROCEDURE
%token TK_PROGRAM
%token TK_REAL
%token TK_REPEAT
%token TK_TO
%token TK_RESULT
%token TK_RETURN
%token TK_THEN
%token TK_UNTIL
%token TK_DOWNTO

%token TK_TRUE
%token TK_FALSE

%token TK_READSTRING
%token TK_READINTEGER
%token TK_READREAL
%token TK_WRITESTRING
%token TK_WRITEINTEGER
%token TK_WRITEREAL

%token <crepr> TK_IDENTIFIER
%token <crepr> TK_POSITIVEINT

%token <crepr> TK_POSITIVEREAL



%token TK_COMMON_CHARS
%token TK_ESCAPE_CHARS

%token <crepr> TK_CONSTANT_STRING
%token OP_PLUS
%token OP_MINUS
%token OP_MULT
%token OP_DIV

%token OP_EQUAL
%token OP_NOTEQUAL
%token OP_LESS
%token OP_GREATER
%token OP_LESSEQUAL
%token OP_GREATEREQUAL

%token OP_AND
%token OP_OR
%token OP_NOT

%token ASSIGNMENT

%token SEMICOLON
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token TK_COMMA
%token LEFT_BRACKET
%token RIGHT_BRACKET
%token COLON
%token DOT

%token TK_EOF

%left OP_PLUS
%left OP_MINUS
%left OP_MULT
%left OP_DIV
%left OP_EQUAL
%left OP_GREATEREQUAL
%left OP_LESSEQUAL
%left OP_GREATER
%left OP_LESS
%left OP_NOTEQUAL
%left OP_OR
%left OP_AND
%left TK_AND
%left TK_DIV
%left TK_MOD
%left TK_OR


%right OP_NOT
%right TK_NOT



%start project
%type <crepr> program_declaration declarations  variable_declaration declares var_declaration array_declaration array_size multi_identifiers data_type 
%type <crepr> main_body commands simple_commands simple_nonsimple_commands simple_command nonsimple_command expressions operators if_command for_command do_while_command while_command
%type <crepr> label goto_label else_tag function function_declaration procedure_declaration parameters single_param return_type test  boolean_value


%%



project: program_declaration declarations main_body DOT
{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", $1);
		printf(" \n %s  \n", $2);
		printf("\n\nint main(){\n %s\nreturn 0;\n}  \n", $3);
	}
};

program_declaration: TK_PROGRAM TK_IDENTIFIER SEMICOLON 		{ $$ = $2; };

declarations: variable_declaration procedure_declaration function_declaration 	{ $$= template("\n%s\n%s\n%s\n",$1,$2,$3); };


variable_declaration: 											{$$="";}			
		| TK_VAR declares 										{$$=template("%s",$2);};


declares: var_declaration
		| declares var_declaration 								{$$=template("%s \n %s",$1,$2);};


var_declaration: multi_identifiers COLON data_type SEMICOLON  	{ $$= template("%s %s;",$3,$1); }
		| multi_identifiers COLON array_declaration SEMICOLON 	{ $$= template("%s %s;",$3,$1);  };

array_declaration: TK_ARRAY TK_OF data_type 					{ $$= template("typeof(%s*)",$3); }
		| TK_ARRAY array_size TK_OF data_type					{ $$=template("typeof(%s%s)",$4,$2); };

array_size: LEFT_BRACKET TK_POSITIVEINT RIGHT_BRACKET			{ $$= template("[%s]",$2); }
		| array_size LEFT_BRACKET TK_POSITIVEINT RIGHT_BRACKET	{ $$= template("%s[%s]",$1,$3); };

multi_identifiers: TK_IDENTIFIER								{ $$= template("%s",$1); }
		| multi_identifiers TK_COMMA TK_IDENTIFIER				{ $$= template("%s,%s",$1,$3); };



main_body: TK_BEGIN commands TK_END 							{ $$=template(" %s ",$2); };


commands: 														{ $$= template(""); }
		| simple_commands 										{ $$= template("%s",$1); };

simple_commands:  simple_command 								{ $$= template("%s",$1); }
		| simple_commands simple_command 						{ $$= template("%s\n %s",$1, $2); };

simple_nonsimple_commands: simple_command 						{ $$= template("%s",$1); }
		|nonsimple_command 										{ $$= template("%s",$1); };

simple_command: expressions SEMICOLON 							{ $$= template("%s;",$1); }
		|TK_IDENTIFIER ASSIGNMENT TK_CONSTANT_STRING SEMICOLON 		{ $$= template("%s= %s;",$1,$3); }		
		|TK_IDENTIFIER ASSIGNMENT expressions SEMICOLON 		{ $$= template("%s= %s;",$1,$3); }
		|TK_IDENTIFIER ASSIGNMENT boolean_value SEMICOLON		{ $$= template("%s= %s;",$1,$3); }
		|TK_IDENTIFIER ASSIGNMENT TK_READSTRING LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON		{ $$ = template("scanf(\"%%s\",&%s);\n",$1); }
		|TK_IDENTIFIER ASSIGNMENT TK_READINTEGER LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON		{ $$ = template("scanf(\"%%d\",&%s);\n",$1); }
		|TK_IDENTIFIER ASSIGNMENT TK_READREAL LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON			{ $$ = template("scanf(\"%%f\",&%s);\n",$1); }
		|TK_RESULT ASSIGNMENT expressions SEMICOLON 			{ $$= template("result= %s;",$3); }
		|TK_WRITESTRING LEFT_PARENTHESIS TK_IDENTIFIER RIGHT_PARENTHESIS SEMICOLON 			{ $$= template("printf(\"%%s\", &%s);\n\n",$3 ); }
		|TK_WRITESTRING LEFT_PARENTHESIS TK_CONSTANT_STRING RIGHT_PARENTHESIS SEMICOLON 			{ $$= template("printf(\"%%s\", %s);\n\n",$3 ); }
		|TK_WRITEINTEGER LEFT_PARENTHESIS TK_IDENTIFIER RIGHT_PARENTHESIS SEMICOLON 				{ $$= template("printf(\"%%d\", %s);\n\n",$3); }
		|TK_WRITEREAL LEFT_PARENTHESIS TK_IDENTIFIER RIGHT_PARENTHESIS SEMICOLON 				{ $$= template("printf(\"%%g\", %s);\n",$3); }
		|if_command 											{ $$= template("%s",$1); }
		|for_command 											{ $$= template("%s",$1); }
		|while_command 											{ $$= template("%s",$1); }
		|do_while_command 										{ $$= template("%s",$1); }
		|label 													{ $$= template("%s",$1); }
		|goto_label 											{ $$= template("%s",$1); }
		|TK_RETURN 												{ $$= template("return result;"); };

data_type: TK_INTEGER											{ $$= template("int"); }
		| TK_BOOLEAN											{ $$= template("int"); }
		|TK_CHAR 												{ $$= template("char"); }
		|TK_REAL 		 										{ $$= template("double"); };

boolean_value: TK_TRUE											{ $$= template("1"); }
		| TK_FALSE												{ $$= template("0"); }


nonsimple_command: TK_BEGIN simple_commands TK_END 				{ $$= template("%s",$2); };

expressions: operators 											{ $$= template("%s",$1); }
		|expressions OP_OR expressions 							{ $$= template("%s || %s",$1, $3); }
		|LEFT_PARENTHESIS data_type RIGHT_PARENTHESIS operators	{ $$= template("(%s) %s",$2,$4); }
		|expressions TK_OR expressions 							{ $$= template("%s || %s",$1, $3); }
		|expressions OP_AND expressions 						{ $$= template("%s && %s",$1, $3); }
		|expressions TK_AND expressions 						{ $$= template("%s && %s",$1, $3); }
		|expressions OP_EQUAL expressions 						{ $$= template("%s == %s",$1, $3); }
		|expressions OP_NOTEQUAL expressions 					{ $$= template("%s != %s",$1, $3); }
		|expressions  OP_LESS expressions 						{ $$= template("%s < %s",$1, $3); }
	 	|expressions  OP_GREATER expressions 					{ $$= template("%s > %s",$1, $3); }
		|expressions  OP_LESSEQUAL expressions 					{ $$= template("%s <= %s",$1, $3); }
	 	|expressions OP_GREATEREQUAL expressions 				{ $$= template("%s >= %s",$1, $3); }
		|OP_PLUS expressions 									{ $$= template("+ %s",$2); }
		|OP_MINUS expressions 									{ $$= template("- %s",$2); }
		|expressions OP_MULT expressions 						{ $$= template("%s * %s",$1,$3); }
		|expressions OP_DIV expressions 						{ $$= template("%s / %s",$1,$3); }
		|expressions TK_DIV expressions 						{ $$= template("%s / %s",$1,$3); }
		|expressions TK_MOD expressions 						{ $$= template("%s %% %s",$1,$3); }
		|expressions OP_PLUS expressions 						{ $$= template("%s + %s",$1,$3); }
		|expressions OP_MINUS expressions 						{ $$= template("%s - %s",$1,$3); }
		|TK_NOT expressions 									{ $$= template("!%s",$2); }
		|OP_NOT expressions 									{ $$= template("!%s",$2); }
		|LEFT_PARENTHESIS expressions RIGHT_PARENTHESIS 		{ $$= template("(%s)",$2); }
		|TK_IDENTIFIER LEFT_PARENTHESIS function RIGHT_PARENTHESIS { $$= template("%s ( %s )",$1,$3); }
		|boolean_value											{ $$= template("%s",$1); }
		
		
	
operators: TK_POSITIVEREAL 										{ $$= template("%s",$1); }
		|TK_POSITIVEINT 										{ $$= template("%s",$1); }
		|TK_IDENTIFIER 											{ $$= template("%s",$1); };

if_command: TK_IF expressions TK_THEN simple_nonsimple_commands else_tag { $$= template("\nif( %s ){\n%s\n}\n%s",$2,$4,$5 ); }

for_command: TK_FOR TK_IDENTIFIER ASSIGNMENT expressions TK_TO expressions TK_DO simple_nonsimple_commands  { $$= template("for( %s=%s; %s<%s; %s++){\n%s\n}", $2,$4,$2,$6,$2,$8); }
		| TK_FOR TK_IDENTIFIER ASSIGNMENT expressions TK_DOWNTO expressions TK_DO simple_nonsimple_commands { $$= template("for( %s=%s; %s<%s; %s--){\n%s\n}", $2,$4,$2,$6,$2,$8); };

while_command: TK_WHILE expressions TK_DO simple_nonsimple_commands { $$= template("while(%s ){\n%s\n}",$2,$4); };

do_while_command: TK_REPEAT simple_nonsimple_commands TK_UNTIL expressions { $$=template("do{\n%s\n}while(%s);",$2,$4); };

label:TK_IDENTIFIER COLON 										{ $$= template("%s:",$1); };

goto_label: TK_GOTO TK_IDENTIFIER SEMICOLON  					{ $$= template("goto %s;",$2); };

else_tag: 														{ $$= ""; }
	| TK_ELSE simple_nonsimple_commands 						{ $$= template("else{\n%s\n}\n"); };


function:														{ $$= ""; }
		|expressions 											{ $$= template("%s",$1); }
		|function TK_COMMA expressions							{ $$= template("%s,%s",$1,$3); };

function_declaration: 											{ $$= ""; }
		|function_declaration TK_FUNCTION TK_IDENTIFIER LEFT_PARENTHESIS parameters RIGHT_PARENTHESIS return_type SEMICOLON variable_declaration TK_BEGIN commands TK_END SEMICOLON {$$= template("%s\n%s %s(%s){\n%s result;\n%s\n%s\n}\n",$1,$7, $3,$5,$7,$9,$11); };



procedure_declaration:											{ $$= ""; }
		|procedure_declaration TK_PROCEDURE TK_IDENTIFIER LEFT_PARENTHESIS parameters RIGHT_PARENTHESIS SEMICOLON test			{ $$= template("%s\n void %s(%s)%s",$1,$3,$5,$8); };

test: variable_declaration	function_declaration	TK_BEGIN commands TK_END  SEMICOLON	{ $$= template("{\n%s\n%s\n%s\n}\n",$1,$2,$4);};

	
parameters: 													{ $$= ""; }
		|single_param											{ $$= template("%s",$1); }
		|parameters SEMICOLON single_param						{ $$= template("%s, %s", $1, $3); };

single_param: multi_identifiers COLON data_type 				{ $$= template("%s %s",$3,$1); }
		|multi_identifiers COLON array_declaration 				{ $$= template("%s %s",$3,$1); };


return_type: 													{ $$= ""; }
		| COLON data_type 										{ $$= template("%s",$2); }
		| COLON array_declaration 								{ $$= template("%s",$2); };

%%


