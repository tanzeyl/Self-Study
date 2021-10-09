#include <iostream>
using namespace std;

int lastOccurence(int a[], int low, int high, int x, int n);

int main()
{
  int n, x, index, i;
  cout << "Enter the number of elements in your array.\n";
  cin >> n;
  int a[n];
  cout << "Enter the elements.\n";
  for(i=0;i<n;i++)
    cin >> a[i];
  cout << "Enter the number you want to look for.\n";
  cin >> x;
  index = lastOccurence(a, 0, n-1, x, n);
  if(index == -1)
    cout << x << " is not present in this array.\n";
  else
    cout << x << " is present at index " << index << ".\n";
  return 0;
}

int lastOccurence(int a[], int low, int high, int x, int n)
{
  if (low > high) return -1;
  int mid = (low+high)/2;
  if (x > a[mid])
    lastOccurence(a, mid+1, high, x, n);
  if (x < a[mid])
    lastOccurence(a, low, mid-1, x, n);
  else
  {
    if(mid == n-1 || a[mid+1] != a[mid])
      return mid;
    else
      return lastOccurence(a, low, mid-1, x, 0);
  }
}
