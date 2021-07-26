#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fptr;
  char buffer[80];
  fptr = fopen("sample", "w");

  if (fptr = NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("Enter your string.\n");
  do
  {
    fgets(buffer, 80, stdin);
    fputs(buffer, fptr);
  } while (*buffer != '\n');

  fclose(fptr);
  return 0;
}
