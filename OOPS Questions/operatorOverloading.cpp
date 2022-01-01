#include <iostream>
using namespace std;

class Complex
{
  int r, i;
  public:
    Complex()
    { r = 0; i = 0; }

    Complex(int a, int b)
    { r = a; i = b; }

    Complex operator ++()
    {
      Complex y;
      y.r = ++r;
      y.i = ++i;
      return y;
    }

    Complex operator --()
    {
      Complex y;
      y.r = --r;
      y.i = --i;
      return y;
    }

    Complex operator ++(int a)
    {
      Complex y;
      y.r = r++;
      y.i = i++;
      return y;
    }

    Complex operator --(int a)
    {
      Complex y;
      y.r = r--;
      y.i = i--;
      return y;
    }

    Complex operator -()
    {
      Complex y;
      y.r = -r;
      y.i = -i;
      return y;
    }

    void show()
    { cout << r << " + " << i << "i" << endl; }
};

int main()
{
  Complex a(1,2), b(5,6), c, d, e, f, g;
  c = ++a;
  d = a++;
  e = --b;
  f = b--;
  g = -b;
  c.show(); d.show(); e.show(); f.show(); g.show();
}
