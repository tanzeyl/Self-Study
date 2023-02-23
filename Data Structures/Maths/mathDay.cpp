#include <iostream>
using namespace std;

int power(int a, int b)
{
  if (b == 0) return 1;
  int subProb = power(a, b/2);
  if (b&1) return a*subProb*subProb;
  return subProb*subProb;
}

int main()
{
  int a, n, p, res, pwr;
  cin >> a >> n >> p;
  for (int i=0; i<=n; i++)
  {
    pwr = power(a, 1);
    res = pwr%p;
  }
  cout << res << endl;
}
