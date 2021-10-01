#include <iostream>
using namespace std;

int sum(int);

int main()
{
  cout << sum(499);
}

int sum(int n)
{
  if(n==1)
    return 1;
  return n + sum(n-1);
}
