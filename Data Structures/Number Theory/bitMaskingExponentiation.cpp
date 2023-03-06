#include <iostream>
using namespace std;

int power(int a, int b)
{
  int res = 1, pr = a, lastBit;
  while (b)
  {
    lastBit = b&1;
    b = b >> 1;
    if (lastBit == 1) res *= pr;
    pr *= pr;
  }
  return res;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << power(a, b) << endl;
}
