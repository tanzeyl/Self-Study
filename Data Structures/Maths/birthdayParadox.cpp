#include <iostream>
using namespace std;

int main()
{
  int n = 1;
  float num = 364, perc = 1, p;
  cin >> p;
  if (p == 1.0) cout << "366" << endl;
  else
  {
    while (perc > 1 - p)
    {
      perc = perc * num/365;
      num--; n++;
    }
    cout << n << endl;
  }
}
