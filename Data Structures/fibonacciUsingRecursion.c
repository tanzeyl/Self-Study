#include <stdio.h>

int fib(int);

int main()
{
  printf("%d",fib(7));
  return 0;
}

int fib(int n)
{
  if (n <= 1)
    return n;
  return fib(n-2) + fib(n-1);
}
