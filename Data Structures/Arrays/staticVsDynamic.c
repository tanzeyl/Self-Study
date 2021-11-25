#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[5] = {2,4,6,8,10};
  int i, *p = NULL;
  for(i=0; i<5; i++)
    scanf("%d",&a[i]);
  for(i=0; i<5; i++)
    printf("%d ",a[i]);
  printf("\n");
  p = (int *)malloc(5 * sizeof(int));
  p[0] = 1;
  p[1] = 3;
  p[2] = 5;
  p[3] = 7;
  p[4] = 9;
  for(i=0; i<5; i++)
    printf("%d ",p[i]);
}
