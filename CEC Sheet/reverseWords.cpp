#include <iostream>
using namespace std;

void reverse(string s1, int i, string &s2)
{
  if (i > s1.length()) return s2;
  if (s1[i] != ' ') { s2 = s1[i]; reverse(s1, i+1, s2); }
  else
  {
    s2 = ' ' + s2;
  }
}

int main()
{
  string str, result = "";
  cout << "Enter the string." << endl;
  cin >> str;
  reverse(str, 0, result);
  cout << result;
}
