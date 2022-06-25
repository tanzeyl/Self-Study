#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair <int, int> a, pair<int, int> b) { return (a.second/a.first) > (b.second/b.first); }

int main()
{
  vector <pair<int, int>> sack;
  int n, weight, value, maxProfit = 0, capacity, i;
  cout << "Enter the number of item." << endl; cin >> n;
  cout << "Enter the weight and value of each item." << endl;
  for (int i=0; i<n; i++)
  { cin >> weight >> value; sack.push_back(make_pair(weight, value)); }
  sort(sack.begin(), sack.end(), comp);
  cout << "Enter the capacity of your sack." << endl; cin >> capacity;
  i = 0;
  while (capacity != 0)
  {
    if (sack[i].first <= capacity)
    { maxProfit += sack[i].second; capacity -= sack[i].first; }
    else
    { maxProfit += capacity * (sack[i].second/sack[i].first); capacity = 0; }
    i++;
    cout << capacity << " " << maxProfit << endl;
  }
  cout << "We can have a maximum profit of " << maxProfit << "." << endl;
}
