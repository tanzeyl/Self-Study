#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) { return (a.second/a.first) > (b.second/b.first); }

int main()
{
  int n, weight, value, capacity, profit = 0, count = 0;
  vector <pair<int, int>> sack;
  cout << "Enter the number of items in the sack." << endl;
  cin >> n;
  int ratio[n];
  cout << "Enter the weight and value of each item." << endl;
  for (int i=0; i<n; i++)
  { cin >> weight >> value; sack.push_back(make_pair(weight, value)); }
  sort(sack.begin(), sack.end(), compare);
  cout << "Enter the capacity of your sack." << endl;
  cin >> capacity;
  for (int i=0; i<n; i++)
  { ratio[i] = sack[i].second/sack[i].first; }
  for (int i=0; i<n; i++)
  {
    if (sack[i].first <= capacity)
    { profit += sack[i].second; count++; capacity -= sack[i].first;}
    else
    { profit += capacity * ratio[i]; capacity = 0;}
    if (capacity == 0) break;
  }
  cout << "Maximum profit is: " << profit << endl;
}
