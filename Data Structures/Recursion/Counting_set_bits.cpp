#include<iostream>
using namespace std;
int main()
{
  int n, i, ctr = 0;
  cout << "Enter n.\n";
  cin >> n;
  while (n > 0)
  {
    n = n & (n-1);
    ctr++;
  }
  cout << ctr;
}
