%{
#include <stdio.h>
%}

%%
[a-z,A-Z,0-9,.]+@[a-zA-Z0-9]+.com { printf("Valid\n"); }
.* { printf("Not valid\n"); }
%%

int yywrap() {}

int main()
{
  printf("Enter an email.\n");
  yylex();
  return 0;
}
