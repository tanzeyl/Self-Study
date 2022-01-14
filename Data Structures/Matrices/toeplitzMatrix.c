#include <stdio.h>

void set(int [], int);
void get(int [], int, int, int);
void display(int [], int);

int main()
{
  int n, m, i, j, ch;
  printf("Enter the order of the toeplitz matrix.\n");
  scanf("%d",&n);
  m = 2*n-1;
  int a[m];
  set(a, m);
  while(1)
  {
    printf("Enter the address of the element you want to look for.\n");
    scanf("%d%d",&i,&j);
    get(a, i, j, n);
    printf("Do you want to continue?\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  display(a, n);
  return 0;
}

void set(int a[], int m)
{
  int i;
  printf("Enter the elements of the first row and column.\n");
  for (i=0; i<m; i++)
    scanf("%d",&a[i]);
}

void get(int a[], int i, int j, int n)
{
  if (i <= j)
    printf("%d\n",a[j-1]);
  else
    printf("%d\n",a[n+i-j-1]);
}

void display(int a[], int n)
{
  int i, j;
  for (i=0; i<n; i++)
  {
    for (j=0; j<n; j++)
    {
      if (i <= j)
        printf("%d\t",a[j-i]);
      else
        printf("%d\t",a[n+i-j-1]);
    }
    printf("\n");
  }
}
