#include <iostream>
using namespace std;

void Sort012(int [], int);

int main()
{
  int n, i;
  cout << "Enter the size of your array.\n"; cin >> n;
  int a[n];
  cout << "Enter the elements.\n";
  for(i=0; i<n; i++) cin >> a[i];
  Sort012(a, n);
  cout << "Array after sorting: ";
  for(i=0; i<n; i++) cout << a[i] << " ";
}

void Sort012(int a[], int n)
{
  int j=0, i, temp;
  for(i=0; i<n; i++)
  {
    if(a[i] == 0)
    {
      temp = a[j];
      a[j] = a[i];
      a[i] = temp;
      j++;
    }
  }
  for(i=0; i<n; i++)
  {
    if(a[i] == 1)
    {
      temp = a[j];
      a[j] = a[i];
      a[i] = temp;
      j++;
    }
  }
  for(i=0; i<n; i++)
  {
    if(a[i] == 2)
    {
      temp = a[j];
      a[j] = a[i];
      a[i] = temp;
      j++;
    }
  }
}
