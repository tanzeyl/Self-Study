#include <iostream>
using namespace std;

void merge(int a[], int lb, int mid, int ub)
{
  int b[ub+1], i=lb, j=mid+1, k=lb;
  while (i<=mid and j<=ub)
  {
    if (a[i] < a[j]) b[k++] = a[i++];
    else b[k++] = a[j++];
  }
  while (j<=ub) b[k++] = a[j++];
  while (i<=mid) b[k++] = a[i++];
  for (k=lb; k<=ub; k++) a[k] = b[k];
}

void mergeSort(int a[], int lb, int ub)
{
  int mid;
  if (lb<ub)
  {
    mid = (lb+ub)/2;
    mergeSort(a, lb, mid);
    mergeSort(a, mid+1, ub);
    merge(a, lb, mid, ub);
  }
}

int main()
{
  int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  mergeSort(arr, 0, 9);
  for (auto x : arr) cout << x << " ";
}
