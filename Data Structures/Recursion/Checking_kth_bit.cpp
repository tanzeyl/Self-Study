#include <iostream>
using namespace std;
int main()
{
  int n, k;
  cout << "Enter the value of n and k.\n";
  cin >> n; cin >> k;
  if (n & (1 << (k - 1)) != 0)
    cout << "Yes.\n";
  else
    cout << "No.\n";
}
