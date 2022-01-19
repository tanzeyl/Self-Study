#include <iostream>
#include <string>
using namespace std;

long long long int calcLength(string);
void findLongestRep(string);

int main()
{
  string s;
  cin >> s;
  findLongestRep(s);
}

void findLongestRep(string s)
{
  long long long int i, l=0, maxLength = 0, maxIndex;
  for (i=0; i<s.size();)
  {
    l = calcLength(&s[i]);
    if (l > maxLength)
    {
      maxLength = l;
      maxIndex = i;
    }
    i += l;
  }
  cout << maxLength;
}

long long long int calcLength(string s)
{
  long long long int i = 0;
  while(s[i] == s[i+1])
    i++;
  return i+1;
}
