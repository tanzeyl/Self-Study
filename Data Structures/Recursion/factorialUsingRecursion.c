#include <stdio.h>

int fact(int);

int main()
{
  int n = 6, res;
  res = fact(n);
  printf("%d",res);
  return 0;
}

int fact(int n)
{
  if(n == 1)
    return 1;
  return n * fact(n-1);
}
