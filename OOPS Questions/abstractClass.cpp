#include <iostream>
using namespace std;

class CalcArea
{
  protected: float r, h;
  public:
    virtual void getData() = 0;
    virtual void volume() = 0;
};

class Cone: public CalcArea
{
  public:
    void getData()
    {
      cout << "Enter the radius and height of the cone." << endl;
      cin >> r >> h;
    }

    void volume()
    {
      cout << "Volume of cone is: " << (1/3.0)*3.14*r*r*h << endl;
    }
};

class Hemisphere: public CalcArea
{
  public:
    void getData()
    {
      cout << "Enter the radius of the hemisphere." << endl;
      cin >> r;
    }

    void volume()
    {
      cout << "Volume of hemisphere is: " << (2/3.0)*3.14*r*r*r << endl;
    }
};

class Cylinder: public CalcArea
{
  public:
    void getData()
    {
      cout << "Enter the radius and height of the cylinder." << endl;
      cin >> r >> h;
    }

    void volume()
    {
      cout << "Volume of cylinder is: " << 3.14*r*r*h << endl;
    }
};

int main()
{
  Cone co;
  Hemisphere h;
  Cylinder cy;
  co.getData(); co.volume();
  h.getData(); h.volume();
  cy.getData(); cy.volume();
}
