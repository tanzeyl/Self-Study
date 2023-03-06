#include <iostream>
using namespace std;

int x, y, GCD;

int gcd(int a, int b)
{
  if (b==0) return a;
  return gcd(b, a%b);
}

void extendedEuclidean(int a, int b)
{
  if (b==0) { x = 1; y = 0; GCD = a; return; }
  extendedEuclidean(b, a%b);
  int cx = y;
  int cy = x-(a/b)*y;
  x = cx; y = cy;
}

int moduloInverse(int a, int m)
{
  extendedEuclidean(a, m);
  return (x+m)&m;
}

int main()
{
  int a, m;
  cin >> a >> m;
  cout << moduloInverse(a, m) << endl;
}
