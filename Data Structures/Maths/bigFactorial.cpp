#include <iostream>
using namespace std;

void multiply(int a[], int &n, int num)
{
  int carry = 0, product;
  for (int i=0; i<n; i++)
  {
    product = a[i]*num + carry;
    a[i] = product%10;
    carry = product/10;
  }
  while (carry)
  {
    a[n++] = carry%10;
    carry = carry/10;
  }
}

int main()
{
  int arr[1000] = {0};
  int number, n=1;
  cin >> number;
  arr[0] = 1;
  for (int i=2; i<=number; i++) multiply(arr, n, i);
  for (int i=n-1; i>=0; i--) cout << arr[i];
}
