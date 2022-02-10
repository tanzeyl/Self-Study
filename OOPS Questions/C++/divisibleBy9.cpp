#include <iostream>
using namespace std;

class Number
{
  int start, end;
  public:
    Number()
    { start = 0; end = 0; }

    Number(int a, int b)
    { start = a; end = b; }

    friend void printNumbers(Number);
};

int main()
{
  Number n(100, 200);
  printNumbers(n);
  return 0;
}

void printNumbers(Number n)
{
  int i, sum = 0;
  for (i=n.start; i<=n.end; i++)
  {
    if (i%9 == 0)
    {
      cout << i << " % " << 9 << " = " << 0 << endl;
      sum = sum + i;
    }
  }
  cout << "Sum of all these numbers is: " << sum;
}
