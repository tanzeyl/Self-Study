#include <iostream>
using namespace std;

void mergeSort(long long int [], long long int, long long int);
void merge(long long int[], long long int, long long int, long long int);

int main()
{
  long long int n, i;
  cin >> n;
  long long int a[n-1];
  for(i=0; i<n-1; i++)
    cin >> a[i];
  mergeSort(a, 0, n-1);
  if (a[0] != 1)
    cout << 1 << endl;
  else if (a[n-2] != n)
    cout << n << endl;
  else
  {
    for (i=1; i<n-1; i++)
    {
      if (a[i+1] - a[i] != 1)
      {
        cout << i+2 << endl;
        break;
      }
    }
  }
}

void mergeSort(long long int a[], long long int lb, long long int ub)
{
  long long int mid;
  if (lb<ub)
  {
    mid = (lb+ub)/2;
    mergeSort(a, lb, mid);
    mergeSort(a, mid+1, ub);
    merge(a, lb, mid, ub);
  }
}

void merge(long long int a[], long long int lb, long long int mid, long long int ub)
{
  long long int b[ub+1], i = lb, j = mid+1, k = lb;
  while (i<=mid && j<=ub)
  {
    if (a[i] <= a[j])
      b[k++] = a[i++];
    else
      b[k++] = a[j++];
  }
  if (i>mid)
  {
    while (j<=ub)
      b[k++] = a[j++];
  }
  else
  {
    while (i<=mid)
      b[k++] = a[i++];
  }
  for (k=lb; k<=ub; k++)
    a[k] = b[k];
}
