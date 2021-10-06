#include <iostream>
using namespace std;

int largest(int [], int);

int main()
{
  int n, i;
  cout << "Enter the size of array.\n";
  cin >> n;
  int a[n];
  for(i=0; i<n; i++)
    cin >> a[i];
  cout << "Largest element is at the index " << largest(a, n) << endl;;
}

int largest(int a[], int n)
{
  int t = 0, i;
  for(i=0; i<n; i++)
  {
    if (a[i] > a[t])
      t = i;
  }
  return t;
}
