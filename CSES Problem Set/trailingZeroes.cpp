#include <iostream>
using namespace std;

int main()
{
  unsigned long long int n, i, c = 0;
  cin >> n;
  if (n < 1)
    cout << -1;
  else
  {
    for (i=5; n/i>=1; i *= 5)
      c += n/i;
    cout << c;
  }
}
