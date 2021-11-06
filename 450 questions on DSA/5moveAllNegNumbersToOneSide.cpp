#include <iostream>
using namespace std;

void negSort(int [], int);

int main()
{
  int n, i;
  cout << "Enter the size of your array.\n"; cin >> n;
  int a[n];
  cout << "Enter the elements.\n";
  for(i=0; i<n; i++) cin >> a[i];
  negSort(a, n);
  cout << "Array after moving all negative numbers to one side: ";
  for(i=0; i<n; i++) cout << a[i] << " ";
}

void negSort(int a[], int n)
{
  int j=0, temp, i;
  for(i=0; i<n; i++)
  {
    if(a[i] < 0)
    {
      temp = a[j];
      a[j] = a[i];
      a[i] = temp;
      j++;
    }
  }
}
