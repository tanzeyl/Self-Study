#include <iostream>
using namespace std;

int fun(int n);

int main()
{
  int n;
  n = fun(511);
  cout << n;
  return 0;
}

int fun(int n)
{
  if(n==1)
    return 0;
  else
    return 1 + fun(n/2);
}
