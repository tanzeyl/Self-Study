#include <stdio.h>

int sum(int);

int main()
{
  int n = 100, res;
  res = sum(n);
  printf("%d",res);
  return 0;
}

int sum(int n)
{
  if(n == 1)
    return 1;
  return n + sum(n-1);
}
