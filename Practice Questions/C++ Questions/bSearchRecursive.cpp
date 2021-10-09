#include <iostream>
using namespace std;

int bSearch(int a[], int x, int low, int high);

int main()
{
  int n, x, i, index;
  cout << "Enter the number of elements in your array.\n";
  cin >> n;
  int a[n];
  cout << "Enter the elements.\n";
  for(i=0;i<n;i++)
    cin >> a[i];
  cout << "Enter the element you want to look for.\n";
  cin >> x;
  index = bSearch(a, x, 0, n-1);
  if(index == -1)
    cout << x << " is not present in this array.\n";
  else
    cout << x << " is present at index " << index << ".\n";
  return 0;
}

int bSearch(int a[], int x, int low, int high)
{
  int mid = (low+high)/2;
  if (low > high)
    return -1;
  if (x == a[mid])
    return mid;
  else if (x > a[mid])
    return bSearch(a, x, mid+1, high);
  else if (x < a[mid])
    return bSearch(a, x, low, mid-1);
}
