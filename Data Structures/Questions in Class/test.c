#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p = (int *)malloc(5*sizeof(int));
  free(p);
   p = NULL;
  if (p)
    printf("yes");
  else
    printf("no");
}
