#include <stdio.h>
#include <stdlib.h>

int * fun(int n);

int main()
{
  int n, *a;
  printf("Enter the number of elements you want to add.\n");
  scanf("%d",&n);
  a = fun(n);
  printf("Enter the elements.\n");
  for(int i = 0; i < n; i++)
    scanf("%d",a+i);
  for(int i = 0; i < n; i++)
    printf("%d ",*(a+i));
}

int * fun(int n)
{
  int *p = NULL;
  p = (int *)malloc(n*sizeof(int));
  return p;
}
