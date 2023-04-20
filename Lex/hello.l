%{
#include <stdio.h>
%}

%%
hello { printf("Correct.\n"); }
.* { printf("Incorrect.\n"); }
%%

int yywrap() {  }

int main()
{
  printf("Enter a word.");
  yylex();
}
