#include <iostream>
using namespace std;

class Shape
{
  protected: float x, y;
  public:
    void getData()
    {
      cout << "Enter the two dimensions." << endl;
      cin >> x >> y;
    }

    virtual void displayArea()
    { cout << "This is a virtual function." << endl; }
};

class Triangle: public Shape
{
  public:
    void getData()
    { Shape::getData(); }

    void displayArea()
    { cout << "Area of the triangle is: " << 0.5*x*y << endl; }
};

class Rectangle: public Shape
{
  public:
    void getData()
    { Shape::getData(); }

    void displayArea()
    { cout << "Area of the rectangle is: " << x*y << endl; }
};

int main()
{
  Triangle t;
  Rectangle r;
  t.getData(); r.getData();
  t.displayArea(); r.displayArea();
}
