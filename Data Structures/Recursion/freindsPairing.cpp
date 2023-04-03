#include <iostream>
using namespace std;

int pairs(int n)
{
  if (n==0 or n==1) return 1;
  if (n==2) return 2;
  return pairs(n-1) + (n-1)*pairs(n-2);
}

int main()
{
  int n;
  cin >> n;
  cout << pairs(n) << endl;
}
