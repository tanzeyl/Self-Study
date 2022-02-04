#include <stdio.h>

void countSort(int [], int);

int main()
{
  int n, i;
  printf("Enter the size of the array.\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elements.\n",n);
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);
  countSort(a, n);
  printf("The sorted array is:\n");
  for(i=0; i<n; i++)
    printf("%d ",a[i]);
}

void countSort(int a[], int n)
{
  int i, j, max;
  max = a[0];
  for(i=1; i<n; i++)
  {
    if (a[i] > max)
      max = a[i];
  }
  int b[max+1];
  for(i=0; i<max+1; i++)
    b[i] = 0;
  for (i=0; i<n; i++)
    b[a[i]]++;
  i = 0; j = 0;
  while (i <= max)
  {
    if (b[i])
    {
      a[j++] = i;
      b[i]--;
    }
    else
      i++;
  }
}
