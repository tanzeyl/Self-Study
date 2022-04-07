#include <iostream>
#include <set>
using namespace std;

int main()
{
  set <int> s;
  s.insert(10);
  s.insert(20);
  s.insert(10);
  s.insert(15);
  s.insert(30);
  s.insert(20);
  s.insert(15);
  s.insert(40);
  s.insert(11);
  s.insert(12);
  s.insert(5);
  for (auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
  cout << endl;
  if (s.find(100) != s.end())
    cout << "Element found." << endl;
  else
    cout << "Element not found." << endl;
  s.erase(10);
  s.erase(s.find(5), s.find(12));
  for (auto it = s.begin(); it != s.end(); it++)
  cout << *it << " ";
  cout << endl;
}
