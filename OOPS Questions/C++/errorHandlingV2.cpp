#include <iostream>
using namespace std;

class Range
{
  int n1, n2;
  public:
    Range(int a, int b) { n1 = a; n2 = b; }

    int getValue( )
    {
      int v;
      cout << "Enter value [ " << n1 << ", " << n2 << " ]" << endl;
      cin >> v;
      if (v >= n1 && v <= n2)
        return v;
      else
        throw("Value out of range.\n");
    }
};

int main()
{
  Range x(1,10);
  int flag = 1, c = 0;
  while (flag)
  {
    try
    {
      c = x.getValue();
      if (c == 0)
        flag = 1;
      else
        flag = 0;
    }
    catch (const char *p)
    {
      cout << p << endl;
    }
  }
}
