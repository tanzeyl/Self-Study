#include <stdio.h>

void mergeSort(int [], int, int);
void merge(int [], int, int, int);

int main()
{
  int a[] = {20, 90, 10, 80, 70, 69, 40, 30, 50}, i;
  mergeSort(a, 0, 9);
  for(i=0; i<9; i++)
    printf("%d ",a[i]);
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

void merge(int a[], int lb, int mid, int ub)
{
  int b[ub+1], i = lb, j = mid+1, k = lb;
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
