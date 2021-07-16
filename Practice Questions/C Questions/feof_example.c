#include <stdio.h>

int main()
{
  FILE *fptr;
  int c;
  fptr = fopen("sample.txt","r");
  if (fptr == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  while(1)
  {
    c = fgetc(fptr);
    if(feof(fptr))
      break;
    printf("%c",c);
  }
  return 0;
}
