#include <iostream>
using namespace std;

bool isSubsetSum(int [], int, int);

int main()
{
  int n, sum;
  cout << "Enter number of elements." << endl;
  cin >> n;
  int set[n];
  cout << "Enter the elements." << endl;
  for (int i=0; i<n; i++) cin >> set[i];
  cout << "Enter the target." << endl;
  cin >> sum;
  if (isSubsetSum(set, n, sum))
    cout <<"Found a subset with given sum";
  else
    cout <<"No subset with given sum";
}

bool isSubsetSum(int set[], int n, int sum)
{
  bool solution[n+1][sum+1];
  for (int i=0; i<n+1; i++) solution[i][0] = true;
  for (int i=1; i<sum+1; i++) solution[0][i] = false;
  for (int i=1; i<n+1; i++)
  {
    for (int j=1; j<sum+1; j++)
    {
      if (j<set[i-1]) solution[i][j] = solution[i-1][j];
      else solution[i][j] = solution[i-1][j] || solution[i-1][j-set[i-1]];
    }
  }
  return solution[n][sum];
}
