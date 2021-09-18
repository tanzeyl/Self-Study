#include <iostream>
#include <math.h>
using namespace std;
int prime_check(int);
int main()
{
  int n1, n2, i;
  cout << "Enter the first number.\n";
  cin >> n1;
  cout << "Enter the second number.\n";
  cin >> n2;
  if(prime_check(n1) && prime_check(n2))
  {
    if(abs(n2 - n1) == 2)
      cout << "Yes, they are twin prime numbers.\n";
    else
      cout << "No, they are not twin prime numbers.\n";
  }
  else
  {
    cout << "No, they are not twin prime numbers.\n";
  }
}
int prime_check(int n)
{
  int i, prime = 1;
  for(i=2;i<=n/2;i++)
  {
    if(n % i != 0)
      return prime;
  }
  return prime - 1;
}
