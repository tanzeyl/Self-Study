#include <iostream>
using namespace std;

int getBit(int n, int i)
{
  int mask = 1 << i;
  int bit = (n&mask)>0 ? 1:0;
  return bit;
}

int setBit(int n, int i)
{
  int mask = 1 << i;
  n = (n|mask);
  return n;
}

int main()
{
  cout << getBit(5, 2) << endl;
  cout << setBit(5, 1) << endl;
}
