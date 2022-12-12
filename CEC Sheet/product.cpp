#include <iostream>
using namespace std;

int product(int n, int m)
{
  if (m == 0 || n == 0) return 0;
  if (m == 1) return n;
  return n + product(n, m-1);
}

int main()
{
  int n, m;
  cout << "Enter the numbers." << endl;
  cin >> n >> m;
  cout << product(n, m);
}
