#include <stdio.h>
#include <stdlib.h>
int main ()
{
  FILE *fptr1, *fptr2;
  int n,i=0,num,temp,N;
  fptr1 = fopen("file3.txt", "w");
  if(fptr1 == NULL)
  {
    printf("Error in opening file.\n");
    exit(1);
  }
  printf("How many numbers you wan to enter?\n");
  scanf("%d",&n);
  printf("Enter the numbers.\n");
  while(i<n)
  {
    scanf("%d",&N);
    fprintf(fptr1, "%d\n", N);
    i++;
  }
  fclose(fptr1);
  fptr1 = fopen("file3.txt", "r");
  fptr2 = fopen("file4.txt", "w");
  printf("Enter the number whose multiples you want to find.\n");
  scanf("%d",&num);
  while(1)
  {
    fscanf(fptr1, "%d", &temp);
    if(feof(fptr1))
      break;
    if(temp%num == 0)
      fprintf(fptr2, "%d\n", temp);
  }
  fclose(fptr1);
  fclose(fptr2);
  fptr2 = fopen("file4.txt", "r");
  printf("Contents in second file:\n");
  while(1)
  {
    fscanf(fptr2, "%d", &temp);
    if(feof(fptr2))
      break;
    printf("%d\n",temp);
  }
  fclose(fptr1);
  fclose(fptr2);
  return 0;
}
