#include <iostream>
using namespace std;

class Mammal
{
  protected:
    string name, habitat, eats, move, speak;
    int legs, tail;
  public:
    getMammalData()
    {
      cout << "Enter the name of mammal." << endl;
      getline(cin, name);
      cout << "Enter habitat. (land or water)" << endl;
      getline(cin, habitat);
      cout << "Enter eating habits. (carnivore, herbivore, omnivore)" << endl;
      getline(cin, eats);
      cout << "Enter the number of legs." << endl;
      cin >> legs;
      cout << "Enter 1 if the mammal has a tail else enter 0." << endl;
      cin >> tail;
    }

    void showMammal()
    {
      cout << "Name: " << name << endl << "Habitat: " << habitat << endl << "Eating preference: " << eats << endl;
      cout << "Number of legs: " << legs << endl;
      if (tail)
        cout << "This mammal has a tail." << endl;
      else
        cout << "This mammal does not have a tail." << endl;
    }
};

class Dog: public Mammal
{
  protected:
    string species;
  public:
    void getDogData()
    {
      habitat = "Land"; tail = 1; eats = "Omnivore"; name = "Dog", legs = 4;
      cout << "Enter the species of the dog." << endl;
      getline(cin, species);
    }

    void showDog()
    {
      cout << "Species: " << species << endl << "Habitat: " << habitat << endl << "Eating preference: " << eats << endl;
      cout << "Number of legs: " << legs << endl;
      cout << "This mammal has a tail." << endl;
    }
};

int main()
{
  Mammal m;
  Dog d;
  m.getMammalData(); m.showMammal();
  fflush(stdin);
  d.getDogData(); d.showDog();
  return 0;
}
