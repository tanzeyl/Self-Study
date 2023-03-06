#include <iostream>
using namespace std;

int firstOccur(int *a, int n, int key)
{
  if (n == 0) return -1;
  if (a[0] == key) return 0;
  int i = firstOccur(a+1, n-1, key);
  if (i == -1) return -1;
  return i + 1;
}

int main()
{
  int arr[] = { 5, 4, 6, 3, 7, 2, 8, 1, 9, 10 };
  int n = 10;
  int key = 5;
  cout << firstOccur(arr, n, key) << endl;
}
