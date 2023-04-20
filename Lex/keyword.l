%{
#include <stdio.h>
%}

%%
auto { printf("Keyword\n"); }
.* { printf("This is not a keyword"); }
%%

int yywrap() {}

int main()
{
  extern FILE *yyin, *yyout;
  yyin = fopen("input.txt", "r");
  yyout = fopen("output.txt", "w");
  yylex();
}
