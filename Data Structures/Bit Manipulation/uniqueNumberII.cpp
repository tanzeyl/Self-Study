#include <iostream>
using namespace std;

int main()
{
  int n, XOR = 0, temp, pos = 0, mask, a = 0, b = 0;
  cin >> n;
  int nums[n];
  for (int i=0; i<n; i++) { cin >> nums[i]; XOR = XOR^nums[i]; }
  temp = XOR;
  while ((temp&1) == 0)
  {
    pos++;
    temp = temp >> 1;
  }
  mask = 1 << pos;
  for (int i=0; i<n; i++) { if ((nums[i]&mask) == 1) a = a ^ nums[i]; }
  b = XOR ^ a;
  cout << a << " " << b << endl;
}
