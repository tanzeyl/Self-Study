#include <iostream>
#include <list>
using namespace std;

int main()
{
  int i, n1, n2;
  list <int> l1 {1, 2, 3, 4, 5}, l2 {5, 4, 3, 2};
  cout << "L1 before swap:\n";
  for (auto it = l1.begin(); it != l1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "L2 before swap:\n";
  for (auto it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
  cout << endl;
  l1.swap(l2);
  cout << "L1 after swap:\n";
  for (auto it = l1.begin(); it != l1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "L2 after swap:\n";
  for (auto it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
  cout << endl;
}
