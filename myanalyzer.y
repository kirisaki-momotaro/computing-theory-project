%{
	#include <stdio.h>
  #include "cgen.h"
  #include <string.h>
	#include "thetalib.h"
	extern int yylex(void);


	char  comp_function_under[10000000];	
	
	char * comp_to_append=NULL;
%}

%union {
	char* str;
}
%token <str> TK_STRING 
%token <str> TK_IDENT 
%token <str> TK_INT 
%token <str> TK_REAL 
%token <str> TK_ASSGN   
  
%token KW_HASH    
  
%token KW_IF  
%token KW_ELSE 
%token KW_INTEGER 
%token KW_FALSE 
%token KW_FOR 
%token KW_BREAK 
%token KW_DEF 
%token KW_ENDCOMP 
%token KW_SCALAR 
%token KW_CONST 
%token KW_IN 
%token KW_CONTINUE 
%token KW_ENDDEF 
%token KW_STR 
%token KW_ENDFOR 
%token KW_NOT 
%token KW_MAIN 
%token KW_BOOLEAN 
%token KW_WHILE 
%token KW_AND 
%token KW_RETURN 
%token KW_TRUE 
%token KW_ENDIF 
%token KW_ENDWHILE 
%token KW_OR 
%token KW_COMP 
%token  <str>  KW_VOID  

  
%token <str> OP_PLUS 
%token <str> OP_MINUS 
%token <str> OP_MUL 
%token <str> OP_DIV 
%token <str> OP_MOD 
%token <str> OP_POWER  
%token <str> OP_EQ 
%token <str> OP_INEQ  
%token <str> OP_LESS 
%token <str> OP_EQLESS 
%token <str> OP_MORE 
%token <str> OP_EQMORE 
%token <str> OP_ASSIGN
%token <str> OP_PLUSEQ 
%token <str> OP_MINUSEQ 
%token <str> OP_MULEQ 
%token <str> OP_DIVEQ 
%token <str> OP_MODEQ 
%token <str> OP_POINTER
%token <str> OP_PAR_L 
%token <str> OP_PAR_R 
%token <str> OP_SEMI 
%token <str> OP_COMA 
%token <str> OP_BRA_L 
%token <str> OP_BRA_R 
%token <str> OP_DOT 
%token <str> OP_MEAN 





%start input

%type <str>  expr

%type <str> global_declarations
%type <str> program
%type <str> main
%type <str> final_program
%type <str> func_declaration
%type <str> func_parameters

%type <str> function_code
%type <str> local_declarations
%type <str> main_program




%type <str> conditions
%type <str> while_loop
%type <str> for_loop


%type <str> var_declarations



%type <str> legal_array_index

%type <str> types
%type <str> data_types


%type <str> comp_function_code
%type <str> comp_local_declarations
%type <str> comp_func_declaration



%type <str> operators
%type <str> comp_code
%type <str> comp_types_of_declarations

%type <str> variable_types

%type <str> compiler
%type <str> comp_initialise_local_declarations
%type <str> comp_var_declarations
%type <str> comp_initialise_types_of_declarations
%%


input: 
	
	compiler  
	{
		if (yyerror_count == 0) {
			
			printf("%s\n", $1);	
		}
	}
	
	;
compiler:
	final_program{ $$ = template("#include <stdio.h> \n #include \"cgen.h\"\n #include <string.h> \n	#include \"thetalib.h\"\n  %s", $1 );}	


final_program:	
	program main main_program KW_ENDDEF OP_SEMI program { $$ = template("%s%s\n{\n%s}\n%s", $1,$2 ,$3,$6);}
	|program main main_program KW_ENDDEF OP_SEMI  { $$ = template("%s%s\n{\n%s}\n", $1,$2 ,$3);}
	|main main_program KW_ENDDEF OP_SEMI program { $$ = template("%%s\n{\n%s}\n%s", $1,$2 ,$5);}
	|main main_program KW_ENDDEF OP_SEMI{ $$ = template("%s\n{\n%s}\n", $1 ,$2);}

;
main:
	KW_DEF KW_MAIN OP_PAR_L OP_PAR_R OP_MEAN{ $$ = template("int main(int argc, char *argv[])");}

;




program:
	global_declarations{ $$ = template("%s", $1 );}	
	|program global_declarations { $$ = template("%s%s", $1,$2 );}		
;

global_declarations:		
	
	var_declarations{ $$ = template("%s", $1);}	
	
	
	|func_declaration function_code KW_RETURN OP_SEMI KW_ENDDEF OP_SEMI{ $$ = template("%s\n\n%s\n return;\n}\n", $1 ,$2);}
	|func_declaration function_code KW_RETURN expr OP_SEMI KW_ENDDEF OP_SEMI{ $$ = template("%s\n{\n%s\n return %s;\n}\n", $1 ,$2,$4);}
	|func_declaration  KW_RETURN expr OP_SEMI KW_ENDDEF OP_SEMI{ $$ = template("%s\n{\n return %s;\n}\n", $1 ,$3);}
	|func_declaration function_code KW_ENDDEF OP_SEMI{ $$ = template("%s\n{\n%s\n return;\n}\n", $1 ,$2);}


	|KW_COMP TK_IDENT OP_MEAN comp_code KW_ENDCOMP OP_SEMI{$$ = template("#undef SELF \n \n #define SELF struct %s *self \n  typedef struct %s\n {%s\n}%s;\n \n %s \n", $2,$2,$4,$2,comp_function_under);memset(comp_function_under,0,10000000);}
;


func_declaration:
	KW_DEF TK_IDENT OP_PAR_L func_parameters OP_PAR_R OP_MINUS OP_MORE types OP_MEAN { $$ = template("%s %s(%s)",$8,$2,$4);}	
	|KW_DEF TK_IDENT OP_PAR_L func_parameters OP_PAR_R OP_MINUS OP_MORE KW_VOID OP_MEAN{ $$ = template("%s %s(%s)",$8,$2,$4);}	
	|KW_DEF TK_IDENT OP_PAR_L func_parameters OP_PAR_R OP_MEAN{ $$ = template("void %s(%s)",$2,$4);}
	|KW_DEF TK_IDENT OP_PAR_L  OP_PAR_R OP_MINUS OP_MORE types OP_MEAN { $$ = template("%s %s()",$7,$2);}	
	|KW_DEF TK_IDENT OP_PAR_L  OP_PAR_R OP_MEAN{ $$ = template("void %s()",$2);}

;
func_parameters:	
	
	|TK_IDENT OP_MEAN types {$$ = template("%s %s", $3,$1);}
	|func_parameters OP_COMA TK_IDENT OP_MEAN  types   {$$ = template("%s,%s %s",$1,$5 ,$3);}		

	|TK_IDENT OP_BRA_L  OP_BRA_R OP_MEAN  types   {$$ = template("%s %s[]",$5, $1);}
	|func_parameters OP_COMA TK_IDENT OP_BRA_L  OP_BRA_R OP_MEAN  types   {$$ = template("%s,%s %s[]", $1,$7,$3);}
	
;	
function_code:
	|local_declarations { $$ = template("%s\n", $1 );}	
	|function_code local_declarations { $$ = template("%s%s", $1,$2);}
;

main_program:	
	local_declarations{ $$ = template("%s", $1 );}	
	|main_program local_declarations { $$ = template("%s %s", $1,$2 );}		
	
;

local_declarations:
	var_declarations{ $$ = template("%s", $1);}	
	|expr OP_SEMI{$$ = template("%s;\n", $1);}
	
	

	|conditions KW_ENDIF OP_SEMI{ $$ = template("%s", $1);}
	|while_loop KW_ENDWHILE OP_SEMI{ $$ = template("%s", $1);}
	|for_loop KW_ENDFOR OP_SEMI{ $$ = template("%s", $1);}
	|KW_BREAK OP_SEMI{ $$ = template("break;\n");}
	|KW_CONTINUE OP_SEMI{ $$ = template("continue;\n");}
;
var_declarations:
	variable_types OP_ASSIGN expr OP_SEMI{$$ = template("%s = %s;\n",$1, $3);}
	|variable_types OP_BRA_L legal_array_index OP_BRA_R  OP_ASSIGN expr OP_SEMI{$$ = template("%s [%s]= %s;\n",$1,$3 ,$6);}
	|variable_types OP_BRA_L legal_array_index OP_BRA_R  OP_ASSIGN variable_types OP_BRA_L legal_array_index OP_BRA_R OP_SEMI{$$ = template("%s [%s]= %s[%s];\n",$1,$3 ,$6,$8);}
	|variable_types OP_ASSIGN variable_types OP_BRA_L legal_array_index OP_BRA_R OP_SEMI{$$ = template("%s = %s[%s];\n",$1,$3 ,$5);}
	|variable_types OP_BRA_L legal_array_index OP_BRA_R  OP_MEAN types OP_SEMI{$$ = template("%s %s[%s];\n",$6,$1 ,$3);}

	
    |comp_types_of_declarations OP_MEAN  types  OP_SEMI {$$ = template("%s %s;\n",$3, $1);}
	
	|KW_CONST comp_types_of_declarations OP_ASSIGN data_types OP_MEAN types OP_SEMI {$$ = template("const %s %s = %s;\n",$6, $2,$4);}
	|KW_CONST comp_types_of_declarations OP_ASSIGN operators data_types OP_MEAN types OP_SEMI {$$ = template("const %s %s = %s%s;\n",$7, $2,$4,$5);}
		
	
;





conditions:
	KW_IF OP_PAR_L expr OP_PAR_R OP_MEAN main_program { $$ = template("if(%s){\n %s \n }\n", $3 ,$6);}	
	|KW_IF OP_PAR_L expr OP_PAR_R OP_MEAN comp_function_code { $$ = template("if(%s){\n %s \n }\n", $3 ,$6);}	
	|conditions KW_ELSE OP_MEAN main_program  { $$ = template("%s\n else{\n %s \n }\n",$1, $4);}	
;
while_loop:
	KW_WHILE OP_PAR_L expr OP_PAR_R OP_MEAN main_program { $$ = template("while(%s){\n %s \n }\n", $3 ,$6);}
	|KW_WHILE OP_PAR_L expr OP_PAR_R OP_MEAN comp_function_code { $$ = template("while(%s){\n %s \n }\n", $3 ,$6);}
;
for_loop:
	KW_FOR TK_IDENT KW_IN OP_BRA_L expr OP_MEAN expr  OP_BRA_R OP_MEAN main_program { $$ = template("for(%s=%s;%s<%s;%s+=1){\n %s \n }\n", $2,$5,$2,$7,$2 ,$10);}
	
	|KW_FOR TK_IDENT KW_IN OP_BRA_L expr OP_MEAN expr  OP_BRA_R OP_MEAN comp_function_code { $$ = template("for(%s=%s;%s<%s;%s+=1){\n %s \n }\n", $2,$5,$2,$7,$2 ,$10);}
	|KW_FOR TK_IDENT KW_IN OP_BRA_L expr OP_MEAN expr OP_MEAN expr  OP_BRA_R OP_MEAN main_program { $$ = template("for(%s=%s;%s<%s;%s+=%s){\n %s \n }\n", $2,$5,$2,$7,$2,$9 ,$12);}
;


variable_types:
TK_IDENT {$$ = template("%s",$1);}
|KW_HASH TK_IDENT{$$ = template("self->%s",$2);}


comp_types_of_declarations:
	variable_types  {$$ = template("%s",$1);}
	
	|comp_types_of_declarations OP_COMA variable_types {$$ = template("%s ,%s",$1, $3);}
	
	|comp_types_of_declarations OP_COMA variable_types OP_BRA_L legal_array_index OP_BRA_R {$$ = template("%s ,%s %s",$1,$3, $5);}

;	


	

expr:

	
	|TK_STRING
	|TK_INT
	| TK_REAL	
	


	|KW_TRUE{ $$ = template("1");}
	|KW_FALSE{ $$ = template("0");}
	

	
	

	|variable_types OP_PAR_L  OP_PAR_R{$$ = template("%s()", $1);}
	|variable_types OP_PAR_L expr OP_PAR_R{$$ = template("%s(%s)", $1,$3);}

	

	|operators expr  {$$ = template("%s%s",$1,$2 );}
	
	

	|variable_types   {$$ = template("%s", $1);}

	
	|variable_types OP_BRA_L legal_array_index OP_BRA_R { $$ = template("%s[%s]",$1, $3);}
	|variable_types OP_BRA_L KW_HASH legal_array_index OP_BRA_R {$$ = template("%s [%s]",$1,$4);}
	|variable_types OP_BRA_L variable_types OP_BRA_R { $$ = template("%s[%s]",$1, $3);}

	

	

	
	|OP_POINTER expr{ $$ = template("%s%s",$1, $2);}
	
	
	|expr OP_COMA expr{ $$ = template("%s,%s", $1, $3);}	
	|expr OP_DOT expr{ $$ = template("%s.%s",$1,$3);}
	//|expr OP_MEAN expr { $$ = template("%s:%s", $1, $3); }
	| expr OP_PLUS expr { $$ = template("%s + %s", $1, $3); }
	| expr OP_MINUS expr { $$ = template("%s - %s", $1, $3); }
	| expr OP_MUL expr { $$ = template("%s * %s", $1, $3); }
	| expr OP_DIV expr { $$ = template("%s / %s", $1, $3); }
	| expr OP_MOD expr {$$ = template("%s %% %s", $1,$3);}
	| expr OP_EQ expr {$$ = template("%s == %s", $1,$3);}
	| expr OP_INEQ expr {$$ = template("%s != %s", $1,$3);}
	| expr OP_LESS expr {$$ = template("%s < %s", $1,$3);}
	| expr OP_EQLESS  expr {$$ = template("%s <= %s", $1,$3);}
	| expr OP_MORE expr {$$ = template("%s > %s", $1,$3);}
	| expr OP_EQMORE expr {$$ = template("%s >= %s", $1,$3);}
	| expr OP_ASSIGN expr {$$ = template("%s = %s", $1,$3);}
	
	| expr KW_AND expr {$$ = template("%s && %s", $1,$3);}
	| expr KW_OR expr {$$ = template("%s || %s", $1,$3);}
	| expr KW_NOT expr {$$ = template("%s ! %s", $1,$3);}
	| expr OP_PLUSEQ expr {$$ = template("%s += %s", $1,$3);}
	| expr OP_MINUSEQ expr {$$ = template("%s -= %s", $1,$3);}
	| expr OP_MULEQ expr {$$ = template("%s *= %s", $1,$3);}
	| expr OP_DIVEQ expr {$$ = template("%s //= %s", $1,$3);}
	| expr OP_MODEQ expr {$$ = template("%s %= %s", $1,$3);}
	| OP_PAR_L expr OP_PAR_R {$$ = template("(%s)" ,$2);}
	| OP_BRA_L expr OP_BRA_L {$$ = template("[%s]",$2);}
	|OP_SEMI{$$ = template(";");}
	

	
;




legal_array_index:
	TK_INT{ $$ = template("%s", $1 );}	
	|TK_IDENT{ $$ = template("%s", $1 );}	
	//|KW_HASH TK_IDENT{ $$ = template("self->%s", $2 );}
;
	

data_types:
	TK_INT{ $$ = template("%s", $1 );}	
	|TK_STRING{ $$ = template("%s", $1 );}
	|TK_REAL{ $$ = template("%s", $1 );}
	
;	
types:
	KW_STR  { $$ = template("char*");}	
	|KW_INTEGER { $$ = template("int");}
	|KW_SCALAR { $$ = template("double");}
	|KW_BOOLEAN{ $$ = template("int");}
	|TK_IDENT{ $$ = template("%s",$1);}
;


operators:
	OP_PLUS 
	|OP_MINUS 
	|OP_MUL 
	|OP_DIV 
	|OP_MOD 
	|OP_POWER  
	|OP_EQ 
	|OP_INEQ  
	|OP_LESS 
	|OP_EQLESS 
	|OP_MORE 
	|OP_EQMORE 
	|OP_ASSIGN
	|OP_PLUSEQ 
	|OP_MINUSEQ 
	|OP_MULEQ 
	|OP_DIVEQ 
	|OP_MODEQ 

;


comp_code:
	comp_local_declarations{$$ = template("%s",$1);}
	|comp_code comp_local_declarations{$$ = template("%s %s",$1,$2);}
;

comp_local_declarations:	
	
	|comp_initialise_local_declarations	{ $$ = template("%s",$1 );}	
   

	

	|comp_func_declaration comp_function_code KW_RETURN OP_SEMI KW_ENDDEF OP_SEMI{ $$ = template("%s",$1 );comp_to_append=template("\n\n%s\n return;\n}\n",$2);strcat(comp_function_under,comp_to_append);}
	|comp_func_declaration comp_function_code KW_RETURN expr OP_SEMI KW_ENDDEF OP_SEMI{ $$ = template("%s",$1 );comp_to_append= template("\n{\n%s\n return %s;\n}\n",$2,$4);strcat(comp_function_under,comp_to_append);}
	|comp_func_declaration  KW_RETURN expr OP_SEMI KW_ENDDEF OP_SEMI{ $$ = template("%s",$1 );comp_to_append= template("\n{\n return %s;\n}\n",$3);strcat(comp_function_under,comp_to_append);}
	|comp_func_declaration comp_function_code KW_ENDDEF OP_SEMI{ $$ = template("%s",$1 );comp_to_append= template("\n{\n%s\n return;\n}\n" ,$2);strcat(comp_function_under,comp_to_append);}

	
	
	
;

comp_initialise_local_declarations:
	comp_var_declarations{ $$ = template("%s", $1);}	

	
	

	
;
comp_var_declarations:
	KW_HASH TK_IDENT OP_ASSIGN expr OP_SEMI{$$ = template("%s = %s;\n",$2, $4);}
	|KW_HASH TK_IDENT OP_BRA_L legal_array_index OP_BRA_R  OP_ASSIGN expr OP_SEMI{$$ = template("%s [%s]= %s;\n",$2,$4 ,$7);}
	|KW_HASH TK_IDENT OP_BRA_L legal_array_index OP_BRA_R  OP_ASSIGN KW_HASH TK_IDENT OP_BRA_L legal_array_index OP_BRA_R OP_SEMI{$$ = template("%s [%s]= %s[%s];\n",$2,$4 ,$8,$10);}
	|KW_HASH TK_IDENT OP_ASSIGN TK_IDENT OP_BRA_L legal_array_index OP_BRA_R OP_SEMI{$$ = template("%s = %s[%s];\n",$2,$4 ,$6);}
	|KW_HASH TK_IDENT OP_BRA_L legal_array_index OP_BRA_R  OP_MEAN types OP_SEMI{$$ = template("%s %s[%s];\n",$7,$2 ,$4);}

	
    |comp_initialise_types_of_declarations OP_MEAN  types  OP_SEMI {$$ = template("%s %s;\n",$3, $1);}
	
	|KW_CONST comp_initialise_types_of_declarations OP_ASSIGN data_types OP_MEAN types OP_SEMI {$$ = template("const %s %s = %s;\n",$6, $2,$4);}
	|KW_CONST comp_initialise_types_of_declarations OP_ASSIGN operators data_types OP_MEAN types OP_SEMI {$$ = template("const %s %s = %s%s;\n",$7, $2,$4,$5);}
		
	
;
comp_initialise_types_of_declarations:
	KW_HASH TK_IDENT  {$$ = template("%s",$2);}
	
	|comp_initialise_types_of_declarations OP_COMA KW_HASH TK_IDENT {$$ = template("%s ,%s",$1, $4);}
	
	|comp_initialise_types_of_declarations OP_COMA KW_HASH TK_IDENT OP_BRA_L legal_array_index OP_BRA_R {$$ = template("%s ,%s %s",$1,$4, $6);}

;	




comp_function_code:
	|local_declarations{ $$ = template("%s",$1 );}	
	|comp_function_code local_declarations { $$ = template("%s%s", $1,$2);}
;






	


comp_func_declaration:
	KW_DEF TK_IDENT OP_PAR_L func_parameters OP_PAR_R OP_MINUS OP_MORE types OP_MEAN{ $$ = template("%s (*%s)(SELF, %s);\n",$8,$2,$4);comp_to_append=template("%s %s(SELF, %s)",$2,$8,$4);strcat(comp_function_under,comp_to_append);}	
	|KW_DEF TK_IDENT OP_PAR_L func_parameters OP_PAR_R OP_MEAN{ $$ = template("void (*%s)(SELF, %s);\n",$2,$4);comp_to_append= template("void %s(SELF, %s)",$2,$4);strcat(comp_function_under,comp_to_append);}
	
	|KW_DEF TK_IDENT OP_PAR_L  OP_PAR_R OP_MINUS OP_MORE types OP_MEAN{ $$ = template("%s (*%s)(SELF);\n",$7,$2);comp_to_append=template("%s %s(SELF)",$7,$2);strcat(comp_function_under,comp_to_append);}	
	|KW_DEF TK_IDENT OP_PAR_L  OP_PAR_R OP_MEAN{ $$ = template("void (*%s)(SELF);\n",$2);comp_to_append= template("void %s(SELF)",$2);strcat(comp_function_under,comp_to_append);}
	


;


%%
int main ()
{
   if ( yyparse() == 0 )
		printf("//Accepted!\n");
	else
		printf("Rejected!\n");
}