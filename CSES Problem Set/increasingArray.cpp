#include <iostream>
using namespace std;

int main()
{
  long long int n, i, ctr = 0, temp;
  cin >> n;
  long long int a[n];
  for(i=0; i<n; i++)
    cin >> a[i];
  for(i=1; i<n; i++)
  {
    if (a[i] < a[i-1])
    {
      ctr = ctr + (a[i-1] - a[i]);
      a[i] = a[i] + (a[i-1] - a[i]);
    }
  }
  cout << ctr;
}
