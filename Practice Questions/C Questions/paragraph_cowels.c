#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
  FILE *fptr1, *fptr2;
  char str[200];
  int i;
  fptr1 = fopen("paragraph1.txt", "w");
  if(fptr1 == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("Enter the string you want to process.\n");
  fgets(str, 200, stdin);
  fputs(str, fptr1);
  fclose(fptr1);
  fptr1 = fopen("paragraph1.txt", "r");
  fptr2 = fopen("paragraph2.txt", "w");
  while(1)
  {
    fscanf(fptr1, "%s", str);
    if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' ||
      str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U')
      {
        for(i=0;i<strlen(str);i++)
          str[i] = str[i] -32;
      }
    if(feof(fptr1))
      break;
    fprintf(fptr2, "%s ", str);
  }
  fclose(fptr1);
  fclose(fptr2);
  return 0;
}
