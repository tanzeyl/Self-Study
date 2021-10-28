#include <stdio.h>

int ncr(int, int);

int main()
{
  printf("%d",ncr(4,2));
  return 0;
}

int ncr(int n, int r)
{
  if(r == 0 || n == r)
    return 1;
  return ncr(n-1, r-1) + ncr(n-1, r);
}
