#include <iostream>
using namespace std;

template <class t>
class Arithmatic
{
  private:
    t a, b;

  public:
    Arithmatic(t a, t b);
    t add();
    t sub();
};

template <class t>
Arithmatic<t>::Arithmatic(t a, t b)
{
  this->a = a;
  this->b = b;
}

template <class t>
t Arithmatic<t>::add()
{
  t c;
  c = a+b;
  return c;
}

template <class t>
t Arithmatic<t>::sub()
{
  t c;
  c = a-b;
  return c;
}

int main()
{
  Arithmatic<int> ar(10, 5);
  cout << ar.add() << endl;
  cout << ar.sub() << endl;
  Arithmatic<float> a(1.5, 3.0);
  cout << a.add() << endl;
  cout << a.sub() << endl;
}
