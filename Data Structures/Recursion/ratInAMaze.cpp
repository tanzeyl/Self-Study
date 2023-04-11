#include <iostream>
using namespace std;

bool ratInMaze(char maze[10][10], int sol[10][10], int i, int j, int m, int n)
{
  if (i==m and j==n)
  {
    sol[m][n] = 1;
    cout << "Path:" << endl;
    for (int k=0; k<m; k++)
    {
      for (int l=0; l<n; l++) cout << sol[k][l] << " ";
      cout << endl;
    }
    return true;
  }
  if (i>m or j>n or maze[i][j] == 'X') return false;
  sol[i][j] = 1;
  bool right = ratInMaze(maze, sol, i, j+1, m, n);
  bool down = ratInMaze(maze, sol, i+1, j, m, n);
  sol[i][j] = 0;
  if (right or down) return true;
  return false;
}

int main()
{
  char maze[10][10] = { "0000", "00X0", "000X", "0X00", "0X00", "0X00", "0X00", "0X00", "0X00", "0X00" };
  int sol[10][10] = {0};
  int m = 10, n = 4;
  bool ans = ratInMaze(maze, sol, 0, 0, m-1, n-1);
  if (ans == false) cout << "Path does not exist!" << endl;
}
