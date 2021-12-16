#include <stdio.h>

void insertionSort(int [], int);

int main()
{
  int a[] = {2, 1, 3, 9, 5, 6, 7, 4, 8, 0}, i;
  insertionSort(a, 10);
  for(i=0; i<10; i++)
    printf("%d ",a[i]);
}

void insertionSort(int a[], int n)
{
  int i, j, t;
  for(i=1; i<n; i++)
  {
    t = a[i]; j = i-1;
    while(j >= 0 && t<a[j])
    {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = t;
  }
}
