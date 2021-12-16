#include <stdio.h>

void selectionSort(int [], int);

int main()
{
  int a[] = {2, 1, 3, 9, 5, 6, 7, 4, 8, 0}, i;
  selectionSort(a, 10);
  for(i=0; i<10; i++)
    printf("%d ",a[i]);
}

void selectionSort(int a[], int n)
{
  int i, j, t, min;
  for(i=0; i<n-1; i++)
  {
    min = i;
    for(j=i+1; j<n; j++)
    {
      if (a[j] < a[min])
        min = j;
    }
    if (min != i)
    {
      t = a[min];
      a[min] = a[i];
      a[i] = t;
    }
  }
}
