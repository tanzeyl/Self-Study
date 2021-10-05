#include <iostream>
using namespace std;

int sum_of_digits(int);

int main()
{
  int res, n=1;
  res = sum_of_digits(0);
  cout << res;
}

int sum_of_digits(int n)
{
  if(n==0)
    return 0;
  else
    return sum_of_digits(n/10) + n%10;
}
