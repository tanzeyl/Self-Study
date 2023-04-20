%{
#include<stdio.h>
%}
%%
[\n\t ' '] {};
. { fprintf(yyout,"%s",yytext); }
%%
int main()
{
  extern FILE *yyin, *yyout;
  yyin=fopen("myfile.txt","r");
  yyout = fopen("output.txt", "w");
  yylex();
}
int yywrap()
{
return 1;
}
