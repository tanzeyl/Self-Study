#include <iostream>
using namespace std;

class Rectangle
{
  private:
    int length, breadth;
  public:
    Rectangle(){length = 1; breadth = 1;}
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength(){return length;}
    void setLength(int l){length = l;}
};

int main()
{
  Rectangle r(10,5);
  cout << r.area() << endl;
  cout << r.perimeter() << endl;
  r.setLength(30);
  cout << r.getLength();
  return 0;
}

Rectangle::Rectangle(int l, int b)
{
  length = l;
  breadth= b;
}

int Rectangle::area()
{
  return length * breadth;
}

int Rectangle::perimeter()
{
  return 2*(length+breadth);
}
