#include <iostream>
using namespace std;

int LCS(string, string, int, int);

int main()
{
  string a, b;
  cout << "Enter the two strings." << endl;
  cin >> a >> b;
  cout << "Longest common subsequence is: " << LCS(a, b, a.length(), b.length()) << ".";
}

int LCS(string a, string b, int x, int y)
{
  int i, j;
  int solution[x+1][y+1];
  for (i=0; i<x+1; i++)
  {
    for (j=0; j<y+1; j++)
    {
      if (i==0 || j==0) solution[i][j] = 0;
      else if (a[i-1] == b[j-1]) solution[i][j] = solution[i-1][j-1]+1;
      else solution[i][j] = max(solution[i-1][j], solution[i][j-1]);
    }
  }
  return solution[x][y];
}
