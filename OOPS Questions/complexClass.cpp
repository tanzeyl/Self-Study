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

    Complex operator +(Complex x)
    {
      Complex y;
      y.r = r + x.r;
      y.i = r + x.i;
      return y;
    }

    Complex operator -(Complex x)
    {
      Complex y;
      y.r = r - x.r;
      y.i = r - x.i;
      return y;
    }

    bool operator ==(Complex x)
    {
      if (r == x.r && i == x.i)
        return true;
      else
        return false;
    }

    void show()
    { cout << r << " + " << i << "i" << endl; }
};

int main()
{
  Complex a(9,8), b(7,6), c, d, e(9, 8);
  c = a + b;
  d = a - b;
  c.show(); d.show();
  if (a == e)
    cout << "A and E are equal." << endl;
}
