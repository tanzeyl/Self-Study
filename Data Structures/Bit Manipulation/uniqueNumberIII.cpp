#include <iostream>
using namespace std;

int main()
{
  int n, num, j, lastBit, rem, temp, pow;
  int count[64] = {0};
  long long int result = 0;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cin >> num;
    j = 0;
    while (num > 0)
    {
      lastBit = (num & 1);
      count[j++] += lastBit;
      num = num >> 1;
    }
  }
  int i=0; j=63;
  while (i<j)
  {
    temp = count[i];
    count[i++] = count[j];
    count[j--] = temp;
  }
  pow = 1;
  for (int i=63; i>=0; i--)
  {
    count[i] = count[i]%3;
    result = count[i]*pow + result;
    pow *= 2;
  }
  cout << result << endl;
}
