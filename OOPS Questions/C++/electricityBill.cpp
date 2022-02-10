#include <iostream>
using namespace std;
#include <string>

void printBill(string, int);

int main()
{
  int units[5], i;
  string name[5];
  for (i=0; i<5; i++)
  {
    cout << "Enter the name of the user." << endl;
    cin >> name[i];
    cout << "Enter the number of units." << endl;
    cin >> units[i];
  }
  for (i=0; i< 5; i++)
    printBill(name[i], units[i]);
  return 0;
}

void printBill(string name, int units)
{
  int cost;
  if (units <= 100)
    cost = units * 0.6;
  else if (units > 100 && units <= 300)
    cost = 60 + (units-100) * 0.8;
  else
    cost = units * 0.9;
  if (cost > 300)
    cost += 50;
  cost += cost * 0.15;
  cout << name << " has a bill of " << cost << "Rupees." << endl;
}
