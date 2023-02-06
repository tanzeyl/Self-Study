#include <iostream>
using namespace std;

int main()
{
  int a, b, lastBit, answer = 1;
  cin >> a >> b;
  while (b > 0)
  {
    lastBit = b&1;
    if (lastBit) answer = answer*a;
    a = a*a;
    b = b >> 1;
  }
  cout << answer << endl;
}
