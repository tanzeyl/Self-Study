#include <iostream>
using namespace std;

class Time
{
  int h, m, s;
  public:
    Time()
    { h = 0; m = 0; s = 0; }

    Time(int a, int b, int c)
    { h = a; m = b; s = c; }

    Time add(Time x)
    {
      Time c;
      c.s = s + x.s;
      if (c.s > 59)
      {
        c.s = c.s - 60;
        m++;
      }
      c.m = m + x.m;
      if (c.m > 59)
      {
        c.m = c.m - 60;
        h++;
      }
      c.h = h + x.h;
      return c;
    }

    void show()
    {
      cout << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
  Time a(10, 40, 50), b(20, 50, 12), c;
  c = a.add(b);
  c.show();
}
