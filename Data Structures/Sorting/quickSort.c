#include <stdio.h>

void quickSort(int [], int, int);

int main()
{
  int a[] = {6, 3, 8, 7, 10, 9}, i;
  quickSort(a, 0, 9);
  for(i=0; i<5; i++)
    printf("%d ",a[i]);
}

void quickSort(int a[], int lb, int ub)
{
  int i = lb, j = ub, t, key = a[lb];
  if (lb>=ub) return;
  while (i<j)
  {
    while (key >= a[i] && i<j) i++;
    while (key < a[j]) j--;
    if (i<j)
    {
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }
  a[lb] = a[j];
  a[j] = key;
  quickSort(a, lb, j-1);
  quickSort(a, j+1, ub);
}
