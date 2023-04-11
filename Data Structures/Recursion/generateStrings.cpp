#include <iostream>
using namespace std;

void generate(string seq, string s, char out [], int i, int j)
{
  if (i == seq.length()) { out[j] = '\0'; cout << out << endl; return; }
  int current = stoi(seq.substr(i, 1));
  if (current != 0)
  {
    out[j] = s[current];
    generate(seq, s, out, i+1, j+1);
    if (i <= seq.length()-2)
    {
      current = stoi(seq.substr(i, 2));
      if (current < 27) { out[j] = s[current]; generate(seq, s, out, i+2, j+1); }
    }
  }
}

int main()
{
  string s = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string seq = "1012";
  char out[1000];
  generate(seq, s, out, 0, 0);
}
