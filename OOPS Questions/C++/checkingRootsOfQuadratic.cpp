#include <iostream>
#include <cmath>
using namespace std;

void checkRoots(int, int, int);

int main()
{
  int a, b, c;
  cout << "Enter the co-efficients x^2 and x and the value of constant." << endl;
  cin >> a >> b >> c;
  checkRoots(a, b, c);
  return 0;
}

void checkRoots(int a, int b, int c)
{
  float d, r1, r2;
  d = pow(b, 2) - 4*a*c;
  if (d < 0)
    cout << "There are no real roots." << endl;
  else
  {
    r1 = (-b + pow(d, 0.5))/(2*a);
    r2 = (-b - pow(d, 0.5))/(2*a);
    cout << "x = " << r1 << " and x = " << r2 << " are the roots of this equation." << endl;
  }
}
