#include <iostream>
using namespace std;
int main()
{
  int i, j, k, n, spc;
  cout << "Enter the number of rows.\n";
  cin >> n;
  spc = n + 3;
  for(i=1;i<=n;i++)
  {
    for(j=spc;j>=1;j--)
    {
      cout << " ";
    }
    for(k=1;k<=i;k++)
    {
      cout << i;
    }
    cout << "\n";
    spc--;
  }
}
