%{
  
  
  #include <math.h>
  #include "cgen.h"	
  #include "myanalyzer.tab.h"
  int line_num = 1;
%}


ID      [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
INT  {DIGIT}{DIGIT}*
DECIMAL ("."{INT})|({INT}("."{INT}?)?)
REAL    {DECIMAL}([eE][+-]?{INT})?

STRING \"(([^\"]|\\\")*[^\\])?\"


%%

"#" yylval.str = strdup(yytext); return KW_HASH;


if          yylval.str = strdup(yytext); return KW_IF;
else	    yylval.str = strdup(yytext); return KW_ELSE;
integer	yylval.str = strdup(yytext); return KW_INTEGER;
False	    yylval.str = strdup(yytext); return KW_FALSE;
for	    yylval.str = strdup(yytext); return KW_FOR;
break	    yylval.str = strdup(yytext); return KW_BREAK;
def	    yylval.str = strdup(yytext); return KW_DEF;
endcomp     yylval.str = strdup(yytext); return KW_ENDCOMP;
scalar	    yylval.str = strdup(yytext); return KW_SCALAR;
const	    yylval.str = strdup(yytext); return KW_CONST;
in	    yylval.str = strdup(yytext); return KW_IN;
continue	yylval.str = strdup(yytext); return KW_CONTINUE;
enddef	    yylval.str = strdup(yytext); return KW_ENDDEF;
str	    yylval.str = strdup(yytext); return KW_STR;
endfor	    yylval.str = strdup(yytext); return KW_ENDFOR;
not	    yylval.str = strdup(yytext); return KW_NOT;
main	    yylval.str = strdup(yytext); return KW_MAIN;
boolean	yylval.str = strdup(yytext); return KW_BOOLEAN;
while	    yylval.str = strdup(yytext); return KW_WHILE;
and	    yylval.str = strdup(yytext); return KW_AND;
return	    yylval.str = strdup(yytext); return KW_RETURN;
True	    yylval.str = strdup(yytext); return KW_TRUE;
endif	    yylval.str = strdup(yytext); return KW_ENDIF;
endwhile	yylval.str = strdup(yytext); return KW_ENDWHILE;
or	    yylval.str = strdup(yytext); return KW_OR;
comp	    yylval.str = strdup(yytext); return KW_COMP;
void   yylval.str = strdup(yytext); return KW_VOID;
	    
	    
	    
{ID}        { yylval.str = strdup(yytext); return TK_IDENT; }
{INT}    {yylval.str = strdup(yytext);  return TK_INT; }
{REAL}      { yylval.str = strdup(yytext); return TK_REAL; }
{STRING} {yylval.str = strdup(yytext); return TK_STRING;}




"+"          yylval.str = strdup(yytext); return OP_PLUS;
"-"         yylval.str = strdup(yytext);  return OP_MINUS;
"*"         yylval.str = strdup(yytext);  return OP_MUL;
"/"         yylval.str = strdup(yytext);  return OP_DIV;
"%"         yylval.str = strdup(yytext);  return OP_MOD;
"**"        yylval.str = strdup(yytext);   return OP_POWER ;
"=="        yylval.str = strdup(yytext);   return OP_EQ;
"!="       yylval.str = strdup(yytext);    return OP_INEQ ;
"<"        yylval.str = strdup(yytext);   return OP_LESS;
"<="       yylval.str = strdup(yytext);    return OP_EQLESS ;
">"        yylval.str = strdup(yytext);   return OP_MORE;
">="      yylval.str = strdup(yytext);     return OP_EQMORE;
"="       yylval.str = strdup(yytext);   return OP_ASSIGN;
"+="      yylval.str = strdup(yytext);    return OP_PLUSEQ ;
"-="      yylval.str = strdup(yytext);    return OP_MINUSEQ;
"*="      yylval.str = strdup(yytext);    return OP_MULEQ;
"/="       yylval.str = strdup(yytext);   return OP_DIVEQ;
"%="        yylval.str = strdup(yytext);  return OP_MODEQ;

"&"   yylval.str = strdup(yytext); return OP_POINTER;

"("		yylval.str = strdup(yytext); return OP_PAR_L;
")"		yylval.str = strdup(yytext); return OP_PAR_R;
";"		yylval.str = strdup(yytext); return OP_SEMI;
","		yylval.str = strdup(yytext); return OP_COMA;
"["		yylval.str = strdup(yytext); return OP_BRA_L;
"]"		yylval.str = strdup(yytext); return OP_BRA_R;
"."		yylval.str = strdup(yytext); return OP_DOT;
":"		yylval.str = strdup(yytext); return OP_MEAN;



"--"[^\n]*  printf("//Line %d: line comment: %s\n", line_num, yytext); /* eat line comments */

":="        { return TK_ASSGN ;}

[ \r\t]+		/* eat whitespace */
\n 					 ++line_num;

<<EOF>> 	return EOF;
.           { printf("Line %d Lexical Error: Unrecognized literal %s\n", line_num, yytext); }




