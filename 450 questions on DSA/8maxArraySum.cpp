#include <iostream>
using namespace std;

int maxSumArray(int [], int);

int main()
{
  int n, i, sum;
  cout << "Enter the size of your array.\n"; cin >> n;
  cout << "Enter " << n << " elements.\n";
  int a[n];
  for(i=0; i<n; i++) cin >> a[i];
  sum = maxSumArray(a, n);
  cout << "Maximum sub-array sum is: " << sum;
  return 0;
}