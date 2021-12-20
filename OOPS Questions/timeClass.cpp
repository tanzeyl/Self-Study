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

    void add(Time x)
    {
      s = s + x.s;
      if (s > 59)
      {
        s = s - 60;
        m++;
      }
      m = m + x.m;
      if (m > 59)
      {
        m = m - 60;
        h++;
      }
      h = h + x.h;
    }

    void show()
    {
      cout << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
  Time a(10, 40, 50), b(20, 50, 12);
  a.add(b);
  a.show();
}
