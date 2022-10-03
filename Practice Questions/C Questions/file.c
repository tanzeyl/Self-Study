#include <stdio.h>

int main()
{
  FILE *fptr; //Declare a pointer to a file. This is same in all file handling questions.
  int ch;
  fptr = fopen("sample.txt", "r");
  // fopen is used to open any file. It takes two arguments:
  // 1. Path of the file you want to open.
  // 2. Mode in which you want to open.
  // There are three different major types of file modes:
  // a. Read (r): used when we want to read a content from a file.
  // b. Write (w): it is used to write content into a file. If there is something already written
  // in that file, it will be overwritten.
  // c. Append (a): it is also used to write to a file but this does not overwrite instead
  // it adds new content at the end of the file.
  if (fptr == NULL) // The pointer can be NULL if the file we asked to open does not exist.
  {
    printf("File open error.\n");
    return -1;
  }
  while((ch = fgetc(fptr)) != EOF)
    putchar(ch);
  // fgetch is used to get the next character from the file. It is like 'scanf("%c")' but instead
  // of the input coming from the keyboard, it comes from the file we opened.
  fclose(fptr); // fclose is used to close the file. Always do that after finishing your work.
  return 0;
}
