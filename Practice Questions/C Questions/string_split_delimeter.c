#include <stdio.h>
void split(char s[], char c);
int main()
{
  int i;
  char s[100], c;
  printf("Enter the string you want to split.\n");
  fgets(s, 100, stdin);
  printf("Enter the delimeter.\n");
  scanf("%c",&c);
  split(s,c);
  return 0;
}
void split(char s[], char c)
{
  int i = 0;
  while(s[i] != '\0')
  {
    if (s[i] == c)
      s[i] = 32;
    i++;
  }
  printf("Resultant string is:\n%s",s);
}
