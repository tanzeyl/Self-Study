// This program also copies ferom one file to another. But here, we first write the content
// to the file which we want to copy from.
// Let's say we want to first write content to file1 and then copy that content from file1
// to file2.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
  FILE *fptr1, *fptr2; // You know it by now, right?
  char string[80]; // This array will be used to store data from the keyboard which we want to
  // write to our file1.
  int j = 0, i = 0;
  fptr1 = fopen("file1.txt", "w"); // You know this too, hopefully. LOl.
  if (fptr1 == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("Enter your string.\n");
  while (*string != '\n')
  {
    fgets(string, 80, stdin);
    // fgets will read a string from the specified input stream [stdin (Standard Input) in this case.]
    // It takes three parameters:
    // 1. character array (string): the array in which we want to save our input.
    // 2. length of input (80): length of characters it will read. If we have specified 80 characters,
    // it will read only 79, one will be left for end of line character.
    // 3. input stream: it can be stdin or a pointer to a file.
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
