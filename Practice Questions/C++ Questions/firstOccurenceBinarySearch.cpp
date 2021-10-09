#include <iostream>
using namespace std;

int firstOccurence(int a[], int low, int high, int x);

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
  index = firstOccurence(a, 0, n-1, x);
  if(index == -1)
    cout << x << " is not present in this array.\n";
  else
    cout << x << " is present at index " << index << ".\n";
  return 0;
}

int firstOccurence(int a[], int low, int high, int x)
{
  if (low > high) return -1;
  int mid = (low+high)/2;
  if(x>a[mid])
    return firstOccurence(a, mid+1, high, x);
  else if(x<a[mid])
    return firstOccurence(a, low, mid-1, x);
  else
  {
    if(mid == 0 || a[mid-1] != a[mid])
      return mid;
    else
      return firstOccurence(a, low, mid-1, x);
  }
}
