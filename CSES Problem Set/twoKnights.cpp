#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  long int i, k, num;
  cin >> k;
  for(i=1; i<=k; i++)
  {
    num = (i-1) * (i+4) * (pow(i,2)-3*i+4)/2;
    cout << num << endl;
  }
}
