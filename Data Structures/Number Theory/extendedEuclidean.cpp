#include <iostream>
using namespace std;

int x, y, gcd;

void extendedEuclidean(int a, int b)
{
  if (b == 0) { x = 1; y = 0; gcd = a; return; }
  extendedEuclidean(b, a%b);
  int cx = y;
  int cy = x - (a/b)*y;
  x = cx; y = cy;
}

int main()
{
  int X, Y;
  cin >> X >> Y;
  extendedEuclidean(X, Y);
  cout << x << " " << y << endl;
}
