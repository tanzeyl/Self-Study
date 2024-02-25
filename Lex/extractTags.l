%{
  #include <stdio.h>
%}

%%
\<[^>]*\/*\> { fprintf(yyout, "%s\n", yytext); }
.|\n {}
%%

int yywrap() {}

int main()
{
  extern FILE *yyin, *yyout;
	yyin = fopen("input.txt", "r");
	yyout = fopen("output.txt", "w");
	yylex();
}
