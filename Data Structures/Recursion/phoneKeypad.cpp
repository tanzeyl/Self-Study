#include <iostream>
#include <map>
using namespace std;

void generate(char seq[], char out[], map<char, string> mappings, int i, int j)
{
  if (seq[i] == '\0') { out[j] = '\0'; cout << out << endl; return; }
  string current = mappings[seq[i]];
  for (int k=0; k<current.length(); k++) { out[j] = current[k]; generate(seq, out, mappings, i+1, j+1); }
}

int main()
{
  map <char, string> mappings;
  mappings['2'] = "abc"; mappings['3'] = "def"; mappings['4'] = "ghi"; mappings['5'] = "jkl"; mappings['6'] = "mno";
  mappings['7'] = "pqrs"; mappings['8'] = "tuv"; mappings['9'] = "wxyz";
  char seq[] = "5426";
  char out[1000];
  generate(seq, out, mappings, 0, 0);
}
