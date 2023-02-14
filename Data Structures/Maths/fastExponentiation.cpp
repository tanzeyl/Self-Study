#include <iostream>
using namespace std;

int pow(int a, int b)
{
  int subProb;
  if (b == 0) return 1;
  subProb = pow(a, b/2);
  if (b&1) return a * subProb * subProb;
  else return subProb * subProb;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << pow(a, b) << endl;
}
