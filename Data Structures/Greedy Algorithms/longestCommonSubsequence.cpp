#include <iostream>
using namespace std;

int LCS(string, string, int, int);

int main()
{
  string a, b;
  cout << "Enter the two strings." << endl;
  cin >> a >> b;
  cout << "Longest common sub-sequence is of length: " << LCS(a, b, a.length(), b.length()) << "." << endl;
}

int LCS(string a, string b, int o, int p)
{
  int i, j;
  int solution[o+1][p+1];
  for (i=0; i<o+1; i++)
  {
    for (j=0; j<p+1; j++)
    {
      if (i == 0 || j == 0) solution[i][j] = 0;
      else if (a[i-1] == b[j-1]) solution[i][j] = solution[i-1][j-1] + 1;
      else solution[i][j] = max(solution[i-1][j], solution[i][j-1]);
    }
  }
  return solution[o][p];
}
