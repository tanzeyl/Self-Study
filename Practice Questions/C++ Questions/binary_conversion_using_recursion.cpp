#include <iostream>
using namespace std;

void fun(int n);

int main()
{
  fun(32);
}

void fun(int n)
{
  if(n==0)
    return;
  fun(n/2);
  cout << n%2;
}
