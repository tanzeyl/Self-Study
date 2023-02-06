#include <iostream>
using namespace std;

int countBW(int n)
{
  int ans = 0;
  while (n>0)
  {
    ans += (n & 1);
    n = n >> 1;
  }
  return ans;
}

int countBitsFast(int n)
{
  int ans = 0;
  while (n > 0)
  {
    n = n & (n-1);
    ans++;
  }
  return ans;
}

int main()
{
  int n = 13;
  cout << "Through Bitwise Operators: " << countBW(n) << endl;
  cout << "Through Fast Method: " << countBitsFast(n) << endl;
  cout << "Through Built-In Method: " << __builtin_popcount(n) << endl;
}
