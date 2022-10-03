#include <stdio.h>

int main()
{
  FILE *fptr;
  int c;
  fptr = fopen("sample1.txt","r");
  if (fptr == NULL)
  {
    printf("Error in opening file.\n");
  }
  while(1)
  {
    c = fgetc(fptr);
    if(feof(fptr)) //feof is used to check if the file pointer is currently pointing to the
    // end of the while. It returns true if it does else it returns false.
      break;
    printf("%c",c);
  }
  return 0;
}
