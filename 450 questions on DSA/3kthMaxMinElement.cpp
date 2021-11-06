#include <iostream>
using namespace std;

void kthExtremes(int [], int, int);

int main()
{
  int n, i, k;
  cout << "Enter the size of your array.\n"; cin >> n;
  int a[n];
  cout << "Enter the elements.\n";
  for(i=0; i<n; i++) cin >> a[i];
  cout << "Enter the order of the largest and smallest elements you want to find.\n";
  cin >> k;
  kthExtremes(a, k, n);
}

void kthExtremes(int a[], int k, int n)
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
  cout << k << "th largest element is: " << a[n-k] << " and " << k << "th smallest element is: " << a[k-1] << ".";
}
