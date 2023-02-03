#include <iostream>
using namespace std;

int main()
{
  int n, num, ans = 0;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cin >> num;
    ans = ans ^ num;
  }
  cout << ans;
}
