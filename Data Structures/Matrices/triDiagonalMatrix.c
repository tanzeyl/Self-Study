#include <stdio.h>

void set(int [], int);
void get(int [], int, int, int);
void display(int [], int);

int main()
{
  int n, m, i, j, ch;
  printf("Enter the order of the matrix.\n");
  scanf("%d",&n);
  m = 3*n-2;
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
  printf("Enter the elements of the lower, main and upper diagonal respectively.\n");
  for (i=0; i<m; i++)
    scanf("%d",&a[i]);
}

void get(int a[], int i, int j, int n)
{
  if (i-j == 1)
    printf("%d\n",a[i-1]);
  else if (i-j == 0)
    printf("%d\n",a[n+i-2]);
  else if (i-j == -1)
    printf("%d\n",a[2*n+i-2]);
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
      if (i-j == 1)
        printf("%d\t",a[i-1]);
      else if (i-j == 0)
        printf("%d\t",a[n+i-2]);
      else if (i-j == -1)
        printf("%d\t",a[2*n+i-2]);
      else
        printf("0\t");
    }
    printf("\n");
  }
}
