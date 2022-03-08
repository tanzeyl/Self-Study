#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <int> v(5);
  int i;
  for (i=0; i<5; i++)
    cin >> v[i];
  cout << "Vector as it is:\n";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "Vector in reverse:\n";
  for (auto it = v.rbegin(); it != v.rend(); it++)
    cout << *it << " ";
}
