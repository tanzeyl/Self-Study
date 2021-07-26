#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
  FILE *fptr1, *fptr2;
  char string[80];
  int j = 0, i = 0;
  fptr1 = fopen("file1.txt", "w");
  if (fptr1 == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("Enter your string.\n");
  while (*string != '\n')
  {
    fgets(string, 80, stdin);
    fputs(string, fptr1);
  }
  fclose(fptr1);
  fptr1 = fopen("file1.txt", "r");
  fptr2 = fopen("file2.txt", "w");
  while(1)
  {
    fgets(string, 80, fptr1);
    if(feof(fptr1))
      break;
    for(i = 0; i< strlen(string); i++)
    {
      if (string[i] != ' ')
          fputc(*(string+i), fptr2);
	  }
  }
  fclose(fptr1);
  fclose(fptr2);
  return 0;
}
