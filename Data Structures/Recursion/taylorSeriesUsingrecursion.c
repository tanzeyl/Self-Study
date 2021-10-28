#include <stdio.h>

double e(int, int);

int main()
{
  printf("%lf",e(3, 10));
  return 0;
}

double e(int x, int n)
{
  static double p = 1, f = 1;
  double r;
  if (n == 0)
    return 1;
  r = e(x, n-1);
  p = p*x;
  f = f*n;
  return r + p/f;

}
