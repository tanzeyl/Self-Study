#include <iostream>
using namespace std;

class Mammal
{
  protected:
    string name, habitat, eats, move, speak;
    int legs, tail;
  public:
    void getMammalData()
    {
      cout << "Enter the name of mammal." << endl;
      getline(cin, name);
      cout << "Enter habitat. (land or water)" << endl;
      getline(cin, habitat);
      cout << "Enter eating habits. (carnivore, herbivore, omnivore)" << endl;
      getline(cin, eats);
      cout << "Enter how this mammal moves" << endl;
      getline(cin, move);
      cout << "Enter the sound made by this mammal." << endl;
      getline(cin, speak);
      cout << "Enter the number of legs." << endl;
      cin >> legs;
      cout << "Enter 1 if the mammal has a tail else enter 0." << endl;
      cin >> tail;
    }

    void showMammal()
    {
      cout << "Name: " << name << endl << "Habitat: " << habitat << endl << "Eating preference: " << eats << endl;
      cout << "Moves : " << move << endl << "Sound made: " << speak << endl << "Number of legs: " << legs << endl;
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
      habitat = "Land"; tail = 1; eats = "Omnivore"; name = "Dog", legs = 4, move = "Runs"; speak = "Barks";
      cout << "Enter the species of the dog." << endl;
      getline(cin, species);
    }

    void showDog()
    {
      cout << "===== Dog Data =====" << endl;
      cout << "Species: " << species << endl << "Habitat: " << habitat << endl << "Eating preference: " << eats << endl;
      cout << "Moves: " << move << endl << "Speaks: " << speak << endl;
      cout << "Number of legs: " << legs << endl;
      cout << "This mammal has a tail." << endl;
    }
};

class Cat: public Mammal
{
  protected:
    string species;
  public:
    void getCatData()
    {
      habitat = "Land"; tail = 1; eats = "Omnivore"; name = "Cat"; legs = 4; move = "Prowls"; speak = "Purr";
      cout << "Enter the species of the cat." << endl;
      getline(cin, species);
    }

    void showCat()
    {
      cout << "===== Cat Data =====" << endl;
      cout << "Species: " << species << endl << "Habitat: " << habitat << endl << "Eating preference: " << eats << endl;
      cout << "Moves: " << move << endl << "Speaks: " << speak << endl;
      cout << "Number of legs: " << legs << endl;
      cout << "This mammal has a tail." << endl;
    }
};

class Horse: public Mammal
{
  public:
    void getHorseData()
    { habitat = "Land"; tail = 1; eats = "Herbivore"; name = "Horse"; legs = 4; move = "Trots"; speak = "Neighs"; }

    void showHorse()
    {
      cout << "===== Horse Data =====" << endl;
      cout << "Habitat: " << habitat << endl << "Eating preference: " << eats << endl;
      cout << "Moves: " << move << endl << "Speaks: " << speak << endl;
      cout << "Number of legs: " << legs << endl;
      cout << "This mammal has a tail." << endl;
    }
};

class GuineaPig: public Mammal
{
  public:
    void getPigData()
    { habitat = "Land"; tail = 0; eats = "Omnivore"; name = "Guinea Pig"; legs = 4; move = "Popcorning"; speak = "Wheeking"; }

    void showPig()
    {
      cout << "===== Guinea Pig Data =====" << endl;
      cout << "Habitat: " << habitat << endl << "Eating preference: " << eats << endl;
      cout << "Moves: " << move << endl << "Speaks: " << speak << endl;
      cout << "Number of legs: " << legs << endl;
      cout << "This mammal does not have a tail." << endl;
    }
};

int main()
{
  Mammal m;
  Dog d;
  Cat c;
  Horse h;
  GuineaPig g;
  m.getMammalData(); m.showMammal();
  fflush(stdin);
  d.getDogData(); d.showDog();
  fflush(stdin);
  c.getCatData(); c.showCat();
  h.getHorseData(); h.showHorse();
  g.getPigData(); g.showPig();
  return 0;
}
