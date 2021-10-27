#include <stdio.h>

int power(int, int);

int main()
{
  int m = 2, n = 10, res;
  res = power(m, n);
  printf("%d",res);
  return 0;
}

int power(int m, int n)
{
  if(n == 0)
    return 1;
  // return m * power(m, n-1); This takes more time.
  if (n%2 == 0)
    return power(m*m, n/2);
  else
    return m * power(m*m, (n-1)/2);
}
