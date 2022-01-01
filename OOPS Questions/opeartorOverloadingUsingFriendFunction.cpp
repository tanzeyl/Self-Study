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

    void show()
    { cout << r << " + " << i << "i" << endl; }

    friend Complex operator -(Complex);
    friend Complex operator ++(Complex);
    friend Complex operator ++(Complex, int);
    friend Complex operator --(Complex);
    friend Complex operator --(Complex, int);
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

Complex operator -(Complex x)
{
  Complex y;
  y.r = -x.r;
  y.i = -x.i;
  return y;
}

Complex operator ++(Complex x, int a)
{
  Complex y;
  y.r = x.r++;
  y.i = x.i++;
  return y;
}

Complex operator ++(Complex x)
{
  Complex y;
  y.r = ++x.r;
  y.i = ++x.i;
  return y;
}

Complex operator --(Complex x, int a)
{
  Complex y;
  y.r = x.r--;
  y.i = x.i++;
  return y;
}

Complex operator --(Complex x)
{
  Complex y;
  y.r = --x.r;
  y.i = --x.i;
  return y;
}
