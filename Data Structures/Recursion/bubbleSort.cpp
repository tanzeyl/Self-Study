#include <iostream>
using namespace std;

void bubbleSort(int a[], int n, int last, int first)
{
  if (last < 0) return;
  else if (first == last-1) bubbleSort(a, n-1, last-1, 0);
  if (a[first] > a[first+1]) { int t = a[first]; a[first] = a[first+1]; a[first+1] = t; }
  bubbleSort(a, n, last, first+1);
}

int main()
{
  int a[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  int n = 10, i = 0;
  bubbleSort(a, n, n-1, i);
  for (int i=0; i<n; i++) cout << a[i] << " ";
}
