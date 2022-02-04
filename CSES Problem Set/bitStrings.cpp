#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  unsigned long long int n, m = 1000000007, res = 2, i;
  cin >> n;
  for (i=1; i<n; i++)
    res = (res * 2) % m;
  cout << res << endl;
}
