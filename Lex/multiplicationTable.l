%{
#include <stdio.h>
%}

%%
[0-9]+ {
  int n = atoi(yytext);
  for (int i=1; i<=10; i++)
  {
    printf("%d x %d = %d\n",n,i,n*i);
  }
}
.* { printf("Not a number\n"); }
%%

int yywrap() {}

int main()
{
  printf("Enter a number.\n");
  yylex();
}
