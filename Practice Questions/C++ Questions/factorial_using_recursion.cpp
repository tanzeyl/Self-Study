#include <iostream>
using namespace std;

int fact(int n);

int main()
{
  cout << fact(0);
}

int fact(int n)
{
  if(n == 1 || n == 0)
    return n;
  return n * fact(n-1);
}
