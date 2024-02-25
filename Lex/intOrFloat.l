%{
  #include <stdio.h>
%}

%%
[0-9]* { printf("Integer.\n"); }
[0-9]*[.][0-9]* { printf("Float.\n"); }
%%

int yywrap() {}

int main()
{
  printf("Enter a number.\n");
  yylex();
}
