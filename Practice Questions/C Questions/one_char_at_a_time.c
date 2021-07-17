#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fptr;
  char str[] = "Hello, my name is Tanzeel Khan.";
  fptr = fopen("sample.txt", "w");

  if (fptr == NULL)
  {
    printf("Error opening file.\n");
    exit(1);
  }

  for(int i=0;str[i]!='\0';i++)
    fputc(str[i], fptr);
  fclose(fptr);

  return 0;
}
