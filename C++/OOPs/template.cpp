#include <iostream>
using namespace std;

template <class T>
T myMax(T &x, T &y)
{
  int t;
  t = x;
  x = y;
  y = t;
}

int main()
{
  int a = 9, b = 10;
  cout << a << " " << b << endl;
	myMax<int>(a, b);
  cout << a << " " << b << endl;;
  float c = 1.5, d=9.78;
  myMax(c, d);
  cout << c << " " << d << endl;
	return 0;
}
