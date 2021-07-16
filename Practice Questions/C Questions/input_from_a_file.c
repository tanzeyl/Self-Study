#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  FILE *fptr;
  int ch;
  char name[50];
  fptr = fopen("sample.txt", "r");
  if (fptr == NULL)
  {
    printf("Error creating file.\n");
    exit(1);
  }
  do
  {
      fscanf(fptr, "%s", name);
      printf("%s\n",name);
  }while(strlen(name) > 1);
  fclose(fptr);
  return 0;
}
