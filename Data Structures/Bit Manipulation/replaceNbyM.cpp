#include <iostream>
using namespace std;

int main()
{
  int n = 15, m = 2, i = 1, j = 3, ones = ~0;
  int a = ones << (j+1);
  int b = (1 << i) - 1;
  int mask = a | b;
  n = n & mask;
  m = m << i;
  int result = n | m;
  cout << result << endl;
}
