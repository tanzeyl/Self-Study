#include <stdio.h>

void singleFindMissing(int [], int);
void multipleMissing(int [], int);

int main()
{
  int n, i;
  printf("Enter the size.\n");
  scanf("%d",&n);
  int a[n];
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);
  singleFindMissing(a, n);
  multipleMissing(a, n);
  return 0;
}

void singleFindMissing(int a[], int n)
{
  int l = a[0], diff = l, i;
  for(i=0; i<n; i++)
  {
    if (a[i]-i != diff)
    {
      printf("Missing element: %d\n", i+diff);
      break;
    }
  }
}

void multipleMissing(int a[], int n)
{
  int l = a[0], diff = l, i;
  for(i=0; i<n; i++)
  {
    if (a[i]-i != diff)
    {
      while(diff < a[i]-i)
      {
        printf("%d ",i+diff);
        diff++;
      }
    }
  }
}
