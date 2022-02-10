#include <iostream>
#include <cmath>
using namespace std;

void calcArea(int);
void calcArea(int, int);
void calcArea(int, int, int);

int main()
{
  int a, b, c, ch;
  cout << "Calculate the area of:\n1. Square\n2. Rectangle\n3. Triangle\n";
  cin >> ch;
  switch(ch)
  {
    case 1: cout << "Enter the side of square." << endl;
            cin >> a;
            calcArea(a);
            break;
    case 2: cout << "Enter the length and breadth of rectangle." << endl;
            cin >> a >> b;
            calcArea(a, b);
            break;
    case 3: cout << "Enter the sides of the triangle." << endl;
            cin >> a >> b >> c;
            calcArea(a, b, c);
            break;
  }
  return 0;
}

void calcArea(int a)
{ cout << "Area is: " << a*a; }

void calcArea(int a, int b)
{ cout << "Area is: " << a*b; };

void calcArea(int a, int b, int c)
{
  float s;
  s = (a+b+c)/2.0;
  cout << "Area is: " << pow(s*(s-a)*(s-b)*(s-c), 0.5);
}
