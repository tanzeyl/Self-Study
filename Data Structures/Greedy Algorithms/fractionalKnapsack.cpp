#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) { return (a.second/a.first) > (b.second/b.first); }

int main()
{
  int n, weight, value, profit = 0, capacity;
  vector <pair<int, int>> sack;
  cout << "Enter number of items." << endl;
  cin >> n;
  cout << "Enter weight and value of each item." << endl;
  for (int i=0; i<n; i++)
  {
    cin >> weight >> value;
    sack.push_back(make_pair(weight, value));
  }
  cout << "Enter the weight capacity of your sack." << endl;
  cin >> capacity;
  sort(sack.begin(), sack.end(), comp);
  int i = 0;
  while (capacity != 0)
  {
    if (sack[i].first <= capacity) { capacity -= sack[i].first; profit += sack[i].second; }
    else { profit += capacity * (sack[i].second/sack[i].first); capacity = 0; }
    i++;
  }
  cout << "We can have a profit of: " << profit << ".";
}
