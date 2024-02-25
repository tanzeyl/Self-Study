%{
  #include <stdio.h>
%}

%%
hello|Hello|HELLO { printf("Correct.\n"); }
.* { printf("Incorrect.\n"); }
%%

int yywrap() {}

int main()
{
  printf("Enter a word, please.\n");
  yylex();
}
