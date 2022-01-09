#include <stdio.h>

void set(int [], int);
void get(int [], int, int);
void display(int [], int n);

int main()
{
  int n, i, j, ch;
  printf("Enter the order of the diagonal matrix.\n");
  scanf("%d",&n);
  int a[n];
  set(a, n);
  while (1)
  {
    printf("Enter the address of the element you want to check.\n");
    scanf("%d%d",&i,&j);
    get(a, i, j);
    printf("Do you want to continue?\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  display(a, n);
}

void set(int a[], int n)
{
  int i;
  printf("Enter the diagonal elements.\n");
  for (i=0; i<n; i++)
    scanf("%d",&a[i]);
}

void get(int a[], int i, int j)
{
  if (i == j)
    printf("%d\n",a[i]);
  else
    printf("0\n");
}

void display(int a[], int n)
{
  int i, j;
  for (i=0; i<n; i++)
  {
    for (j=0; j<n; j++)
    {
      if (i == j)
        printf("%d ",a[i]);
      else
        printf("0 ");
    }
    printf("\n");
  }
}
