#include <iostream>
using namespace std;

int merge(int a[], int lb, int mid, int ub)
{
  int b[1000], i=lb, j=mid+1, k=lb, count = 0;
  while (i<=mid and j<=ub)
  {
    if (a[i] <= a[j]) b[k++] = a[i++];
    else { b[k++] = a[j++]; count += mid-i+1; }
  }
  while (j<=ub) b[k++] = a[j++];
  while (i<=mid) b[k++] = a[i++];
  for (k=lb; k<=ub; k++) a[k] = b[k];
  return count;
}

int inversionCount(int a[], int lb, int ub)
{
  int mid;
  if (lb<ub)
  {
    mid = (lb+ub)/2;
    int x = inversionCount(a, lb, mid);
    int y = inversionCount(a, mid+1, ub);
    int z = merge(a, lb, mid, ub);
    return x+y+z;
  }
  else return 0;
}

int main()
{
  int arr[] = { 1, 5, 2, 6, 3, 0 };
  cout << inversionCount(arr, 0, 5) << endl;
}
