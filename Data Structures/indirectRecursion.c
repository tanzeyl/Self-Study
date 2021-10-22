#include <stdio.h>

void funA(int);
void funB(int);

int main()
{
  funA(20);
}

void funA(int n)
{
  if (n > 0)
  {
    printf("%d ",n);
    funB(n-1);
  }
}

void funB(int n)
{
  if (n > 1)
  {
    printf("%d ",n);
    funA(n/2);
  }
}
