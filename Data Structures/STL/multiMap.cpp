#include <iostream>
#include <map>
using namespace std;

int main()
{
  multimap <char, string> m;
  int n;
  cin >> n;
  char c;
  string s;
  for (int i=0; i<n; i++)
  {
    cin >> c >> s;
    m.insert(make_pair(c, s));
  }
  cout << endl;
  for (auto it=m.begin(); it!=m.end(); it++) cout << it->first << " " << it->second << endl;
  cout << endl;
  auto i = m.find('A');
  if (i->second == "Apple") m.erase(i);
  for (auto it=m.begin(); it!=m.end(); it++) cout << it->first << " " << it->second << endl;
  cout << endl;
  m.insert({'C', "Cat"});
  m.insert({'D', "Dog"});
  auto it1 = m.lower_bound('A');
  auto it2 = m.upper_bound('C');
  for (auto it=it1; it!=it2; it++) cout << it->first << " " << it->second << endl;
}
