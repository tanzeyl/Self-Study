#include <iostream>
using namespace std;

int fibo(int);

int main()
{
  cout << fibo(4);
}

int fibo(int n)
{
  if(n <= 1)
    return n;
  return fibo(n-1) + fibo(n-2);
}
