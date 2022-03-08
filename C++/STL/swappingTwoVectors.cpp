#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int i, n;
  cout << "Enter the sizes of two vectors.\n";
  cin >> n;
  vector <int> v1(n), v2(n);
  cout << "Enter values for vector 1.\n";
  for (i=0; i<n; i++)
    cin >> v1[i];
  cout << "Enter values for vector 2.\n";
  for (i=0; i<n; i++)
    cin >> v2[i];
  cout << "V1 before swap:\n";
  for (i=0; i<n; i++)
    cout << v1[i] << " ";
  cout << endl;
  cout << "V2 before swap:\n";
  for (i=0; i<n; i++)
    cout << v2[i] << " ";
  cout << endl;
  v1.swap(v2);
  cout << "V1 after swap:\n";
  for (i=0; i<n; i++)
    cout << v1[i] << " ";
  cout << endl;
  cout << "V2 after swap:\n";
  for (i=0; i<n; i++)
    cout << v2[i] << " ";
  cout << endl;
}
