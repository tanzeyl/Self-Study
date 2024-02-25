%{
  #include <stdio.h>
%}

%%
int|float|auto { fprintf(yyout, "%s is a keyword.\n", yytext); }
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
