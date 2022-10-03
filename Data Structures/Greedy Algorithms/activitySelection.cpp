#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, s, e, currentEnd = -1, count = 0;
  vector <pair<int, int>> act;
  cout << "Enter the number of activities." << endl;
  cin >> n;
  cout << "Enter the start and end time for all the activities." << endl;
  for (int i=0; i<n; i++)
  {
    cin >> s >> e;
    act.push_back(make_pair(e, s));
  }
  sort(act.begin(), act.end());
  for (int i=0; i<n; i++)
  {
    if (act[i].second > currentEnd)
    {
      count++;
      currentEnd = act[i].first;
    }
  }
  cout << "Number of activities: " << count << ".";
}
