#include <iostream>
using namespace std;

class Base
{
  int a;
  protected: int b;
  public:
    int c;

    Base(int x, int y, int z)
    { a = x; b = y; c = z; }

    void sum()
    { cout << a + b + c << endl; }
};

class DerivedOne: public Base
{
  public:
    DerivedOne(int x, int y, int z):Base(x, y, z)
    { a = x; b = y; c = z; }

    void d1Sum()
    { sum(); }
};

class DerivedTwo: protected Base
{
  public:
    DerivedTwo(int x, int y, int z):Base(x, y, z)
    { a = x; b = y; c = z; }

    void d2Sum()
    { sum(); }
};

class DerivedThree: private Base
{
  public:
    DerivedThree(int x, int y, int z):Base(x, y, z)
    { a = x; b = y; c = z; }

    void d3Sum()
    { sum(); }
};

int main()
{
  DerivedOne d1(1,2,3);
  DerivedTwo d2(4,5,6);
  DerivedThree d3(7,8,9);
  d1.d1Sum();
  d2.d2Sum();
  d3.d3Sum();
}
