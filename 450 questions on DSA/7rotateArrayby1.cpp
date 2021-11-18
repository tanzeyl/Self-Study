#include <iostream>
using namespace std;

void rotateArray(int [], int);
void printArray(int [], int);

int main()
{
  int n, i;
  cout << "Enter the size of your array.\n"; cin >> n;
  cout << "Enter " << n << " elements.\n";
  int a[n];
  for(i=0; i<n; i++) cin >> a[i];
  cout << "Array after rotation by 1 is: ";
  rotateArray(a, n);
  printArray(a, n);
}

void printArray(int a[], int n)
{
  for(int i=0; i<n; i++) cout << a[i] << " ";
}

void rotateArray(int a[], int n)
{
  int t1, t2, i;
  t1 = a[0];
  a[0] = a[n-1];
  for(i=1; i<n; i++)
  {
    t2 = a[i];
    a[i] = t1;
    t1 = t2;
  }
}
