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

int clearBit(int n, int i)
{
  int mask = ~(1 << i);
  n = n & mask;
  return n;
}

int updateBit(int n, int i, int v)
{
  int mask = ~(1 << i);
  int clearedBit = n&mask;
  n = clearedBit | (v << i);
  return n;
}

int clearLastIBits(int n, int i)
{
  int mask = ~0;
  mask = mask << i;
  n = n & mask;
  return n;
}

int clearRangeOfBits(int n, int i, int j)
{
  int flag = ~0;
  int mask1 = flag << (j+1);
  int mask2 = (1 << i) - 1;
  int mask = mask1 | mask2;
  n = n & mask;
  return n;
}

int main()
{
  cout << getBit(5, 2) << endl;
  cout << setBit(5, 1) << endl;
  cout << clearBit(5, 2) << endl;
  cout << updateBit(7, 1, 0) << endl;
  cout << updateBit(5, 1, 1) << endl;
  cout << clearLastIBits(15, 3) << endl;
  cout << clearRangeOfBits(31, 1, 3) << endl;
}
