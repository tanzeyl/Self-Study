#include <iostream>
using namespace std;

int pow(int a, int b)
{
  if (b == 0) return 1;
  if (b == 1) return a;
  return a * pow(a, b-1);
}

int fastPow(int a, int b)
{
  if (b == 0) return 1;
  int subProb = fastPow(a, b/2);
  if (b&1) return a*subProb*subProb;
  else return subProb*subProb;
}

int main()
{
  int a = 2, b = 12;
  cout << pow(a, b) << endl;
  cout << fastPow(a, b) << endl;
}
