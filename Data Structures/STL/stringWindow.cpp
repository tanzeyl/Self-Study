#include <iostream>
#include <map>
using namespace std;

int main()
{
  string s, t;
  getline(cin, s);
  getline(cin, t);
  int l1 = s.size(), l2 = t.size(), l = 0, r = 0;
  int resl = -1, resr = 1e9;
  map <char, int> freq_s, freq_t;
  for (int i=0; i<l2; i++) freq_t[t[i]]++;
  for (int r=0; r<l1; r++)
  {
    freq_s[s[r]]++;
    bool good = true;
    for (auto x : freq_t)
    {
      if (freq_s.count(x.first) == 0 || freq_s[x.first] < x.second)
      { good = false; break; }
    }
    if (!good) continue;
    while (l<l1 && l<=r && (freq_t.count(s[l]) == 0 || freq_s[s[l]] > freq_t[s[l]]))
    {
      freq_s[s[l]]--;
      if (freq_s[s[l]] == 0) freq_s.erase(s[l]);
      l++;
    }
    if (resr-resl+1 > r-l+1)
    { resl = l; resr = r; }
  }
  if (resl == -1) cout << "NO STRING" << endl;
  else for (int i=resl; i<=resr; i++) cout << s[i];
}
