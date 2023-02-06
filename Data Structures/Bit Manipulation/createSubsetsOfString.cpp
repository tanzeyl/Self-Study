#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void filterChars(vector <string> &subsets, int i, string s)
{
  string temp = "";
  int lastBit, j=0;
  while (i > 0)
  {
    lastBit = i&1;
    if (lastBit == 1) temp += s[j];
    j++;
    i = i >> 1;
  }
  subsets.push_back(temp);
}

int main()
{
  string s;
  vector <string> subsets;
  int length;
  cin >> s;
  length = pow(2, s.length());
  for (int i=0; i<length; i++)
  { filterChars(subsets, i, s); }
  for (auto word : subsets) cout << "\'" << word << "\'" << ",";
  cout << endl << subsets.size() << endl;
}
