#include <iostream>
using namespace std;

int print(int);

int main()
{
  int n;
  cout << "Enter n.\n";
  cin >> n;
  print(n);
}

int print(int n)
{
  if (n == 0)
    return 0;
  else
    print(n-1);
    cout << n << " ";
}
