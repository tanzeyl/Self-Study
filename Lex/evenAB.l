%{
  #include <stdio.h>
%}

%s A B C DEAD

%%
<INITIAL>a BEGIN A;
<INITIAL>b BEGIN B;
<INITIAL>\n BEGIN INITIAL; { printf("Accepted.\n"); }
<INITIAL>[^ab\n] BEGIN DEAD;

<A>a BEGIN INITIAL;
<A>b BEGIN C;
<A>\n BEGIN INITIAL; { printf("Not Accepted.\n"); }
<A>[^ab\n] BEGIN DEAD;

<B>a BEGIN C;
<B>b BEGIN INITIAL;
<B>\n BEGIN INITIAL; { printf("Not Accepted.\n"); }
<B>[^ab\n] BEGIN DEAD;

<C>a BEGIN B;
<C>b BEGIN A;
<C>\n BEGIN INITIAL; { printf("Not Accepted.\n"); }
<C>[^ab\n] BEGIN DEAD;

<DEAD>\n BEGIN INITIAL; { printf("Not Accepted.\n"); }
<DEAD>[^ab\n] BEGIN DEAD;
%%

int yywrap() {}

int main()
{
  printf("Enter a string over a and b.\n");
  yylex();
}
