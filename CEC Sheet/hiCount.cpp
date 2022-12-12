#include <iostream>
using namespace std;

int count(string str, int i)
{
  if (i > str.length()) return 0;
  string temp = str.substr(i, 2);
  if (temp == "hi") return 1 + count(str, i+2);
  return count(str, i+2);
}

int main()
{
  string str;
  cout << "Enter the string." << endl;
  cin >> str;
  cout << count(str, 0);
}
