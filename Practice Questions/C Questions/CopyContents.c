//This program copies content of one file to another.

#include <stdio.h>
#include <stdlib.h> //This file contains the function 'exit()' which we are using below.
// exit() function is used to terminate a program.

int main()
{
  FILE *fptr1, *fptr2; // This is already explained. Remember? Try to recall it.
  char ch; //
  fptr1 = fopen("sample1.txt", "r"); //Opened in read mode to read the content from.
  fptr2 = fopen("sample2.txt", "w"); // Opened in write mode to write the content to.
  if (fptr1 == NULL || fptr2 == NULL) // This was also explained.
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("Copying content.\n");
  while ((ch = getc(fptr1)) != EOF) // This means keep reading each character till you reach
  // end of file.
  {
    fputc(ch, fptr2); //fputc is used to put a single character to a file.
  }
  printf("Content successfully copied.")
  fclose(fptr1);
  fclose(fptr2);
  return 0;
}
