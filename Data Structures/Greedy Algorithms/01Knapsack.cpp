#include <iostream>
#include <vector>
using namespace std;

int knapSack(vector<pair<int, int>>, int);

int main()
{
  vector <pair<int, int>> sack;
  int n, weight, value, capacity;
  cout << "Enter the number of items." << endl; cin >> n;
  cout << "Enter the weight and value of each item." << endl;
  for (int i=0; i<n; i++)
  { cin >> weight >> value; sack.push_back(make_pair(weight, value)); }
  cout << "Enter the capacity of your sack." << endl; cin >> capacity;
  cout << "Maximum profit is: " << knapSack(sack, capacity) << "." << endl;
}

int knapSack(vector <pair<int, int>> sack, int capacity)
{
  int solution[sack.size()+1][capacity+1];
  int i, j;
  for (i=0; i<sack.size()+1; i++)
  {
    for (j=0; j<capacity+1; j++)
    {
      if (i==0 || j==0) solution[i][j] = 0;
      else if (sack[i-1].first > j) solution[i][j] = solution[i-1][j];
      else solution[i][j] = max(solution[i-1][j], sack[i-1].second + solution[i-1][j-sack[i-1].first]);
    }
  }
  return solution[sack.size()][capacity];
}
