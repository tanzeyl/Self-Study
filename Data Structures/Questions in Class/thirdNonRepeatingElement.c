#include <stdio.h>

void thirdNonRepeating(int [], int);

int main()
{
  int n, i;
  printf("Enter the number of elements you want to insert.\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements.\n");
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);
  thirdNonRepeating(a, n);
  return 0;
}

void thirdNonRepeating(int a[], int n)
{
  int i, j, ctr = 0, flag = 1;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      if(i==j)
        continue;
      if (a[i] == a[j])
      {
        flag = 0;
        break;
      }
    }
    if (flag)
      ctr++;
    if (ctr == 3)
    {
      printf("Third non repeating element is: %d.",a[i]);
      break;
    }
    flag = 1;
  }
}
