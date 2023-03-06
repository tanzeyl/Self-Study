#include <iostream>
using namespace std;

int lastOccur(int *a, int n, int key)
{
  if (n == 0) return -1;
  int i = lastOccur(a+1, n-1, key);
  if (i == -1)
  {
    if (a[0] ==  key) return 0;
    return -1;
  }
  return i+1;
}

int main()
{
  int arr[] = { 5, 4, 6, 3, 7, 2, 8, 1, 9, 10, 7, 7, 7 };
  int n = 13;
  int key = 7;
  cout << lastOccur(arr, n, key) << endl;
}
