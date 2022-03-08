#include <iostream>
#include <list>
using namespace std;

int main()
{
  int i, n1, n2, key;
  cout << "Enter the sizes of two lists.\n";
  cin >> n1 >> n2;
  list <int> l1, l2;
  cout << "Enter elements in list 1.\n";
  for (i=0; i<n1; i++)
  {
    cin >> key;
    l1.push_back(key);
  }
  cout << "Enter elements in list 2.\n";
  for (i=0; i<n2; i++)
  {
    cin >> key;
    l2.push_back(key);
  }
  l1.merge(l2);
  cout << "After merging:\n";
  cout << "L1 = ";
  for (auto it = l1.begin(); it != l1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "L2 = ";
  for (auto it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
}
