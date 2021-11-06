#include <stdio.h>

void TOH(int, int, int, int);

int main()
{
  TOH(16,1,2,3);
}

void TOH(int n, int a, int b, int c)
{
  if (n > 0)
  {
    static int i = 1;
    TOH(n-1,a,c,b);
    printf("%d. Move a disk from %d to %d.\n",i,a,c);
    i++;
    TOH(n-1,b,a,c);
  }
}
