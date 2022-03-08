#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <int> vr;
  int i, key, n;
  cout << "Size of the vector " << vr.size() << endl;
  vr.push_back(100);
  cout << "Size of the vector " << vr.size() << endl;
  cout << vr[0] << endl;
  cin >> n;
  for (i=0; i<n; i++)
  {
    cin >> key;
    vr.push_back(key);
  }
  for (i=0; i<n; i++)
    cout << vr.at(i) << " ";
  cout << endl;
  cout << vr.front() << " " << vr.back() << endl;
  cout << vr.max_size() << endl;
  cout << vr.capacity() << endl;
}
