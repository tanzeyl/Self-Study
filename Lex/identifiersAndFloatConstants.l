%{
  #include <stdio.h>
%}

%%
[a-zA-Z][_*a-z_*A-Z_*0-9_*]* { printf("Identifier.\n"); }
[+-]*[0-9]*[.][0-9]* { printf("Float constant.\n"); }
.* {}
%%

int yywrap() {}

int main()
{
  printf("Enter a string.\n");
  yylex();
}
