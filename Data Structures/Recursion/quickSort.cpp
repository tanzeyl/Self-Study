#include <iostream>
using namespace std;

void quickSort(int a[], int lb, int ub)
{
  int i=lb, j=ub, t, key=a[lb];
  if (lb>=ub) return;
  while (i<j)
  {
    while (key>=a[i] and i<j) i++;
    while (key<a[j]) j--;
    if (i<j) { t = a[i]; a[i]=a[j]; a[j]=t; }
  }
  a[lb] = a[j];
  a[j] = key;
  quickSort(a, lb, j-1);
  quickSort(a, j+1, ub);
}

int main()
{
  int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
  quickSort(arr, 0, 10);
  for (auto x : arr) cout << x << ", ";
}
