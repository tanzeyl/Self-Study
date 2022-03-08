#include <iostream>
#include <list>
using namespace std;

bool even(int);

int main()
{
  list <int> l1 {1,2,3,4,5}, l2;
  int i, n, key;
  for (auto it = l1.begin(); it != l1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "Enter the size of the list.\n";
  cin >> n;
  cout << "Enter the elements.\n";
  for (i=0; i<n; i++)
  {
    cin >> key;
    if (key & 1) // Checking if the key is even or odd
      l2.push_back(key);
    else
      l2.push_front(key);
  }
  for (auto it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << l2.front() << " " << l2.back() << endl;
  l1.pop_back();
  l1.pop_front();
  if (l1.empty())
    cout << "List is empty.\n";
  else
  {
    for (auto it = l1.begin(); it != l1.end(); it++)
    cout << *it << " ";
  }
  cout << endl;
  cout << "Before removing:" << endl;
  for (auto it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
  cout << endl;
  l2.remove(3);
  cout << "After removing:" << endl;
  for (auto it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
  // Removing only even elements
  l2.remove_if(even);
  cout << endl;
  cout << "After removing all even numbers:" << endl;
  for (auto it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
  l1.reverse();
  cout << "Reversing L1" << endl;
  for (auto it = l1.begin(); it != l1.end(); it++)
    cout << *it << " ";
}

bool even(int x)
{
  return (x % 2 == 0);
}
