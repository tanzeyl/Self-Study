#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
  FILE *fptr;
  char buffer[80];
  char s[80];
  char fname[20] = "file.txt";
  fptr = fopen(fname, "w");

  if (fptr == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("Enter your string.\n");
  while (*buffer != '\n')
  {
    fgets(buffer, 80, stdin);
    fputs(buffer, fptr);
  }

  fclose(fptr);
  fptr = fopen(fname, "r");
  if (fptr == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  while(1)
  {
     fgets(s, 80, fptr);
    if(feof(fptr))
      break;
    for(int i=0;i<strlen(s);i++)
    {
      if(*(s+i) == '#')
        printf("%s\n",s);
    }
  }
}
