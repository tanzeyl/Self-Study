#include <iostream>
using namespace std;

void readArray(int [], int);
void printArray(int [], int);
void sortArray(int [], int);
void findUnion(int [], int [], int, int);
void findIntersection(int [], int [], int, int);

int main()
{
  int n, m;
  cout << "Enter the sizes of your two arrays.\n";
  cin >> n >> m;
  int a[n], b[m];
  cout << "Enter the elements of first array.\n";
  readArray(a, n);
  cout << "Enter the elements of second array.\n";
  readArray(b, m);
  sortArray(a, n); sortArray(b, m);
  findUnion(a, b, n, m);
  findIntersection(a, b, n, m);
  return 0;
}

void readArray(int a[], int n)
{
  for(int i=0; i<n; i++) cin >> a[i];
}

void printArray(int a[], int n)
{
  for(int i=0; i<n; i++) cout << a[i] << " ";
}

void sortArray(int a[], int n)
{
  int min, i, j, temp;
  for (i=0; i<n-1; i++)
  {
    min = i;
    for (j=i+1; j<n; j++)
      if (a[j] < a[min])
        min = j;
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }
}

void findUnion(int a[], int b[], int n, int m)
{
  int c[n+m], i, ctr=0, j;
  if(n > m)
  {
    for(i=0; i<n; i++)
      c[i] = a[i];
    if(a[n-1] < b[0])
    {
      for(i=0; i<m;i++)
        c[n+i] = b[i];
      cout << "Union of these arrays is: ";
      sortArray(c, n+m);
      printArray(c, n+m);
    }
    else if(a[n-1] == b[0])
    {
      for(i=0; i<m; i++)
        c[n+i] = b[i+1];
      cout << "Union of these arrays is: ";
      sortArray(c, n+m-1);
      printArray(c, n+m-1);
    }
    else
    {
      for(i=0; i<m; i++)
      {
        for(j=0; j<n; j++)
          if(b[i] == a[j])
            ctr++;
        for(j=0; j<m-ctr; j++)
          c[n+j] = b[j+ctr];
        cout << "Union of these arrays is: ";
        sortArray(c, n+m-ctr);
        printArray(c, n+m-ctr);
      }
    }
  }
  else
  {
    for(i=0; i<m; i++)
      c[i] = b[i];
    if(b[m-1] < a[0])
    {
      for(i=0; i<n;i++)
        c[m+i] = a[i];
      cout << "Union of these arrays is: ";
      sortArray(c, n+m);
      printArray(c, n+m);
    }
    else if(b[m-1] == a[0])
    {
      for(i=0; i<n-1; i++)
        c[m+i] = a[i+1];
      cout << "Union of these arrays is: ";
      sortArray(c, n+m-1);
      printArray(c, n+m-1);
    }
    else if(b[m-1] > a[0])
    {
      for(i=0; i<n; i++)
      {
        for(j=0; j<m; j++)
        {
          if(a[i] == b[j])
            ctr++;
        }
      }
      for(j=0; j<n-ctr; j++)
          c[m+j] = a[n-ctr-j-1];
      cout << "Union of these arrays is: ";
      sortArray(c, n+m-ctr);
      printArray(c, n+m-ctr);
    }
  }
}

void findIntersection(int a[], int b[], int n, int m)
{
  int i, j;
  cout << "\nIntersection of these arrays is: ";
  for(i=0; i<n; i++)
  {
    for(j=0; j<m; j++)
    {
      if(a[i] == b[j])
        cout << a[i] << " ";
    }
  }
}
