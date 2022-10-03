#include <iostream>
#include <limits.h>
using namespace std;

int MCM(int [], int);

int main()
{
  int n;
  cout << "Enter the number of matrices you want to multiply." << endl;
  cin >> n;
  int p[n+1];
  cout << "Enter the dimension array." << endl;
  for (int i=0; i<=n; i++) cin >> p[i];
  cout << "We can multiply these matrices with a minimum number of " << MCM(p, n+1) << " operations.";
}

int MCM(int p[], int n)
{
  int solution[n][n];
  int i, j, k, l, m;
  for (i=1; i<n; i++) solution[i][i] = 0;
  for (l=2; l<n; l++)
  {
    for (i=1; i<n-l+1; i++)
    {
      j = i+l-1;
      solution[i][j] = INT_MAX;
      for (k=i; k<=j-1; k++)
      {
        m = solution[i][k] + solution[k+1][j] + p[i-1]*p[j]*p[k];
        if (m < solution[i][j]) solution[i][j] = m;
      }
    }
  }
  return solution[1][n-1];
}
