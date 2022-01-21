#include <iostream>
using namespace std;

int main()
{
  long long int t, a, b, res;
  cin >> t;
  while(t--)
  {
    cin >> a >> b;
    if (a < b)
    {
      if (b%2 != 0)
        res = (b*b)-a+1;
      else
        res = ((b-1)*(b-1))+a;
    }
    else
    {
      if (a%2 != 0)
        res = ((a-1)*(a-1))+b;
      else
        res = (a*a)-b+1;
    }
    cout << res << endl;
  }
}
