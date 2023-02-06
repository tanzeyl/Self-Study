#include <iostream>
using namespace std;

int binary(int n)
{
  int lastBit, ans = 0, p = 1;
  while (n > 0)
  {
    lastBit = n&1;
    ans += p * lastBit;
    p *= 10;
    n = n >> 1;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << binary(n) << endl;
}
