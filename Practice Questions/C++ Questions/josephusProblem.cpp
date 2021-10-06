#include <iostream>
using namespace std;

int jos(int, int);

int main()
{
  int n, k;
  cout << "Enter the number of people and the number to kill.\n";
  cin >> n; cin >> k;
  cout << jos(n, k);
}

int jos(int n, int k)
{
  if (n == 1)
    return 0;
  else
    return (jos(n-1, k) + k) % n;
}
