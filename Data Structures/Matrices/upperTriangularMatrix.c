#include <stdio.h>

void set(int [], int);
void get(int [], int, int);
void display(int [], int);

int main()
{
  int n, i, j, ch, m;
  printf("Enter the order of the upper triangular matrix.\n");
  scanf("%d",&n);
  m = (n*(n+1))/2;
  int a[m];
  set(a, m);
  while (1)
  {
    printf("Enter the address of the element you want to look for.\n");
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
  printf("Enter the elements row-wise.\n");
  for (i=0; i<n; i++)
    scanf("%d",&a[i]);
}

void get(int a[], int i, int j)
{
  if (i <= j)
    printf("%d\n",a[((j*(j-1))/2)+(i-1)]);
  else
    printf("0 ");
}

void display(int a[], int n)
{
  int i, j;
  for (i=1; i<=n; i++)
  {
    for (j=1; j<=n; j++)
    {
      if (i <= j)
        printf("%d ",a[((i*(i-1))/2)+(j-1)]);
      else
        printf("0 ");
    }
    printf("\n");
  }
}
