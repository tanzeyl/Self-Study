#include <iostream>
using namespace std;

long long unsigned int fact(long long unsigned int n)
{
  if (n == 1) return n;
  return n * fact(n-1);
}

int main()
{
  long long unsigned int n;
  cout << "Enter the number." << endl;
  cin >> n;
  cout << fact(n);
}
