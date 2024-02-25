%{
  #include<stdio.h>
%}

%%
[\t" "]+ { fprintf(yyout, " "); }
.|\n { fprintf(yyout, "%s", yytext); }
%%

int yywrap() {}

int main()
{
  extern FILE *yyin, *yyout;
  yyin=fopen("input.txt","r");
  yyout = fopen("output.txt", "w");
  yylex();
}
