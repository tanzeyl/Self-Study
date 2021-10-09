#include <iostream>
using namespace std;

int binary_search(int [], int, int);

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
  index = binary_search(a, n, x);
  if (index == -1)
    cout << x << " is not present in the array.\n";
  else
    cout << x << " is present at index " << index << "." << endl;
  return 0;
}

int binary_search(int a[], int n, int x)
{
  int low = 0, high = n-1;
  while (low <= high)
  {
    int mid = (low+high)/2;
    if(x==a[mid])
      return mid;
    else if (x > a[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}
