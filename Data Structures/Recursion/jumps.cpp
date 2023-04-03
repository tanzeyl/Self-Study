#include <iostream>
#include <map>
using namespace std;

map <int, int> m;

int ways(int n, int k)
{
  if (n<0) return 0;
  if (n==0) return 1;
  int sum = 0;
  for (int i=1; i<=k; i++) sum += ways(n-i, k);
  return sum;
}

int main()
{
  int n, k;
  cin >> n >> k;
  cout << ways(n, k) << endl;
}
