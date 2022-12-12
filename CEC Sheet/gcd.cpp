#include <iostream>
using namespace std;

int gcd(int n, int m)
{
  if (m > n) return gcd(m, n);
  if (m == 0) return n;
  return gcd(m, n%m);
}

int main()
{
  int n, m;
  cout << "Enter the numbers." << endl;
  cin >> n >> m;
  cout << gcd(n, m);
}
