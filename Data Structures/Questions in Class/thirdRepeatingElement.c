#include <stdio.h>

void thirdRepeating(int [], int);

int main()
{
  int n, i;
  printf("Enter the number of elements you want to insert.\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements.\n");
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);
  thirdRepeating(a, n);
  return 0;
}

void thirdRepeating(int a[], int n)
{
  int i, j, ctr = 0;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      if (i==j)
        continue;
      if (a[j] == -1)
        continue;
      if (a[i] == a[j])
      {
        ctr++;
        a[j] = -1;
        break;
      }
    }
    if (ctr == 3)
    {
      printf("The third repeating element in the array is: %d.",a[i]);
      break;
    }
  }
}
