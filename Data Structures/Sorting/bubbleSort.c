#include <stdio.h>

void bubbleSort(int [], int);
void optimizedBubbleSort(int [], int);

int main()
{
  int a[] = {2, 1, 3, 9, 5, 6, 7, 4, 8, 0}, i;
  int b[] = {20, 90, 10, 80, 70, 60, 40, 30, 50};
  bubbleSort(a, 10);
  optimizedBubbleSort(b, 9);
  for(i=0; i<10; i++)
    printf("%d ",a[i]);
  printf("\n");
  for(i=0; i<9; i++)
    printf("%d ",b[i]);
}

void bubbleSort(int a[], int n)
{
  int i, j, t;
  for(i=0; i<n-1; i++)
  {
    for(j=0; j<n-1-i; j++)
    {
      if (a[j] > a[j+1])
      {
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
    for (i=0; i<n; i++)
      printf("%d ",a[i]);
  }
}

void optimizedBubbleSort(int a[], int n)
{
  int i, j, t, flag;
  for(i=0; i<n-1; i++)
  {
    flag = 0;
    for(j=0; j<n-1-i; j++)
    {
      if (a[j] > a[j+1])
      {
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
        flag = 1;
      }
    }
    if (flag == 0)
      break;
  }
}
