#include <iostream>
#include <windows.h>
using namespace std;

class Tollbooth
{
  unsigned int cars;
  double cash;
  public:
    Tollbooth()
    { cars = 0; cash = 0.0; }

    void payingCar()
    { cars++; cash += 0.5; }

    void nonPayingCar()
    { cars++; }

    void show()
    { cout << "Number of cars passed: " << cars << endl << "Total cash collected: " << cash << endl; }
};

int main()
{
  Tollbooth t;
  int ch;
  int opt;
  while(1)
  {
    cout << "1. Paying Car\n2. Non Paying Car\n";
    cin >> opt;
    if(GetAsyncKeyState(VK_ESCAPE))
    { t.show(); cin.ignore(); break; }
    switch (opt)
    {
      case 1: t.payingCar(); break;
      case 2: t.nonPayingCar(); break;
      default: cout << "Enter a valid response." << endl; break;
    }
  }
}
