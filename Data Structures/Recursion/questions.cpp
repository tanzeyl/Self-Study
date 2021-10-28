#include <iostream>
using namespace std;


int f(int n)
{
  int x = 1, k;
  if (n == 1) return x;
  for(k=1;k<n;++k)
    x = x+f(k)*f(n-k);
  return x;
}

int main()
{
  cout << f(5);
}
