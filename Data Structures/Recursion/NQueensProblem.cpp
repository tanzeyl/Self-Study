#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> sol, int i, int j, int n)
{
  for (int row=0; row<i; row++) { if (sol[row][j] == 1) return false; }
  int x = i, y = j;
  while (x>=0 and y>=0) { if (sol[x][y] == 1) return false; x--; y--; }
  x = i; y = j;
  while (x>=0 and y<n) { if (sol[x][y] == 1) return false; x--; y++; }
  return true;
}

bool findSolution(vector<vector<int>> &sol, int i, int n)
{
  if (i==n)
  {
    for (int i=0; i<n; i++)
    {
      for (int j=0; j<n; j++)
      {
        if (sol[i][j] == 1) cout << "Q ";
        else cout << "_ ";
      }
      cout << endl;
    }
    cout << "----------" << endl;
    // return true;
  }
  for (int j=0; j<n; j++)
  {
    if (isSafe(sol, i, j, n))
    {
      sol[i][j] = 1;
      bool nextPos = findSolution(sol, i+1, n);
      if (nextPos) return true;
      sol[i][j] = 0;
    }
  }
  return false;
}

int main()
{
  int n = 6;
  vector<vector<int>> sol(n , vector<int> (n, 0));
  findSolution(sol, 0, n);
}
