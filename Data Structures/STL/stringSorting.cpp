#include <iostream>
#include <algorithm>
using namespace std;

bool comp(string a, string b) { if (a.length() == b.length()) return a<b; return a.length()<b.length(); }

int main()
{
  int n = 3;
  string s1[n];
  for (int i=0; i<n; i++) getline(cin, s1[i]);
  cout << endl;
  sort(s1, s1+n);
  for (int i=0; i<n; i++) cout << s1[i] << endl;
  cout << endl;
  sort(s1, s1+n, comp);
  for (int i=0; i<n; i++) cout << s1[i] << endl;
}
