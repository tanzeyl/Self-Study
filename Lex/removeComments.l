%{
  #include <stdio.h>
%}


%%
\/\/(.*) {}
\/\*(.*\n)*.*\*\/ {}
%%

int yywrap() {}

int main()
{
  extern FILE *yyin, *yyout;
  yyin = fopen("input.txt", "r");
  yyout = fopen("output.txt", "w");
  yylex();
}
