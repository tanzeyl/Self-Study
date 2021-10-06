#include <iostream>
using namespace std;

int getSum(int [], int, int);

int main()
{
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++)
    cin >> a[i];
  for(int i=1; i<n; i++)
    a[i] = a[i-1] + a[i];
  cout << getSum(a, 0, 2) << endl;;
  cout << getSum(a, 6, 7) << endl;;
}

int getSum(int a[], int start, int end)
{
  if (start == 0)
    return a[end];
  else
    return getSum(a, 0, end) - getSum(a, 0, start-1);
}
