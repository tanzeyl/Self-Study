#include <iostream>
#include <set>
using namespace std;

void permute(string s, int i, int n, set <string> &allAns)
{
  if (i == n) { allAns.insert(s); return; }
  for (int j=i; j<n; j++)
  {
    swap(s[i], s[j]);
    permute(s, i+1, n, allAns);
    swap(s[i], s[j]);
  }
}

int main()
{
  string s;
  cin >> s;
  set <string> allAns;
  permute(s, 0, s.length(), allAns);
  for (auto x : allAns) cout << x << endl;
}
