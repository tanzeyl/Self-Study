#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int i, n;
  cout << "Enter the size.\n";
  cin >> n;
  vector <int> vr(n);
  for (i=0; i<n; i++)
    cin >> vr[i];
  for (i=0; i<n; i++)
    cout << vr[i] << " ";
  cout << endl;
  cout << vr.capacity() << endl;
  vr.clear();
  if (vr.empty())
    cout << "Vector is empty." << endl;
}
