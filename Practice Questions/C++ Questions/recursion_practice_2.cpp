#include <iostream>
using namespace std;

int fun(int n)
{
  if(n==1)
    return 0;
  return 1 + fun(n/2);
}

int main()
{
  cout << fun(1024);
}
