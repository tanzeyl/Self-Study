#include <iostream>
using namespace std;

int fact(int n)
{
  int pr = 1;
  while (n>1) { pr *= n--; }
  return pr;
}

int main()
{
  int n, k, res;
  cin >> n >> k;
  res = fact(n-1)/(fact(k-1)*fact(n-k));
  cout << res << endl;
}
