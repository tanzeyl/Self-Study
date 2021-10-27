#include <stdio.h>

int fun(int);

int main()
{
  printf("%d ",fun(95));
}

int fun(int n)
{
  if (n > 100)
    return n-10;
  return fun(fun(n + 11));
}
