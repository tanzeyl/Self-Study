#include <stdio.h>

int main()
{
  FILE *fptr;
  int ch;
  fptr = fopen("sample.txt", "r");
  if (fptr == NULL)
  {
    printf("File open error.\n");
    return -1;
  }
  while((ch = fgetc(fptr)) != EOF)
    putchar(ch);
  fclose(fptr);
  return 0;
}
