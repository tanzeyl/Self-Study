#include<stdio.h>
#include <stdlib.h>
int main ()
{
  FILE *fptr;
  int n, num, temp, i, ctr = 0;
  int N;
  fptr = fopen("file.txt", "w");
  if(fptr == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("How many numbers you want to enter?\n");
  scanf("%d",&n);
  printf("Enter the numbers.\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&N);
    fprintf(fptr, "%d\n", N);
  }
  fclose(fptr);
  fptr = fopen("file.txt", "r");
  printf("Numbers having digits greater than five are: \n");
  while(1)
  {
    fscanf(fptr, "%d", &num);
    temp = num;
    for(i=0;i<5;i++)
    {
      while(temp != 0)
      {
        temp = temp/10;
        ctr++;
      }
      if(ctr==5)
      {
        if(feof(fptr))
          break;
        printf("%d\n",num);
      }
      ctr = 0;
    }
  }
  fclose(fptr);
  return 0;
}
