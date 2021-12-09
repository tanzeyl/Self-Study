#include <stdio.h>

void readArray(int [], int);
void printArray(int [], int);
void sortArray(int [], int, int);
void Intersection(int [], int, int [], int);
void Union(int [], int, int [], int);
void Difference(int [], int, int [], int);

int main()
{
  int m, n, ch;
  printf("Enter the sizes of two arrays.\n");
  scanf("%d%d",&m,&n);
  int a[m], b[n];
  printf("Enter the elements of first array.\n");
  readArray(a, m);
  printf("Enter the elements of second array.\n");
  readArray(b, n);
  sortArray(a, 0, m-1);
  sortArray(b, 0, n-1);
  printf("1. Intersection\n2. Union\n3. Difference\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: Union(a, m, b, n); break;
    // case 2: Intersection(a, m, b, n); break;
    // case 3: Difference(a, m, b, n); break;
    default: printf("Enter a valid choice.\n");
  }
  return 0;
}

void readArray(int a[], int n)
{
  int i;
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);
}

void printArray(int a[], int n)
{
  int i;
  for(i=0; i<n; i++)
    printf("%d ",a[i]);
  printf("\n");
}

void sortArray(int a[], int lb, int ub)
{
  int i = lb, j = ub, t, key = a[lb];
  if (lb >= ub) return;
  while(i < j)
  {
    while (key >= a[i] && i < j)
      i++;
    while (key < a[j])
      j--;
    if (i < j)
    {
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }
  a[lb] = a[j];
  a[j] = key;
  sortArray(a, lb, j-1);
  sortArray(a, j+1, ub);
}

void Union(int a[], int m, int b[], int n)
{
  int c[m+n], i = 0, j = 0, k = 0;
  while(i < m && j < n)
  {
    if (a[i] < b[j])
      c[k++] = a[i++];
    else if (b[j] < a[i])
      c[k++] = a[i++];
    else
    {
      c[k++] = a[i++];
      j++;
    }
  }
  for(; i<m; i++)
    c[k++] = a[i];
  for(; j<n; j++)
    c[k++] = b[j];
  printArray(c, m+n);
}
