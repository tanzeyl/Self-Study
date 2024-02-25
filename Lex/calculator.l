%{
  #include <stdio.h>
  int op = 0, i;
  float a, b;
%}

%%
[0-9]+|([0-9]*"."[0-9]+) { digi(); }
"+" { op = 1; }
"-" { op = 2; }
"*" { op = 3; }
"/" { op = 4; }
\n { printf("The answer is: %f.\n", a); }
%%

digi()
{
  if (op == 0) a = atof(yytext);
  else
  {
    b = atof(yytext);
    switch (op)
    {
      case 1: a = a+b; break;
      case 2: a = a-b; break;
      case 3: a = a*b; break;
      case 4: a = a/b; break;
    }
  }
}

int main()
{
  printf("Enter an expression.\n");
  yylex();
}

int yywrap() {}
