%{
  #include <stdio.h>
  int lc = 0, sc = 0, ch = 0, tc = 0, wc=0;
%}

%%
[\n] { lc++; ch += yyleng; }
[ \t] { sc++; ch += yyleng; }
[^\t] { tc++; ch += yyleng; }
[^\t\n ]+ { wc++; ch += yyleng; }
%%

int yywrap() {}

int main()
{
  printf("Enter the sentence.\n");
  yylex();
  printf("Lines: %d.\nSpaces: %d.\nTabs: %d.\nWords: %d\nCharcaters: %d.\n",lc,sc,tc,wc, ch);
}
