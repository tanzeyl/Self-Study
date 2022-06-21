#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, s, e, count = 0, currentEnd = -1;
  vector <pair<int, int>> activity;
  vector <pair<int, int>> :: iterator it;
  cout << "Enter the number of activities." << endl;
  cin >> n;
  cout << "Enter the start and end time of all the activities." << endl;
  for (int i=0; i<n; i++)
  { cin >> s >> e; activity.push_back(make_pair(e, s)); }
  sort(activity.begin(), activity.end());
  while (!activity.empty())
  {
    for (int i=0; i<activity.size(); i++)
    {
      if (activity[i].second > currentEnd)
      { currentEnd = activity[i].first; activity.erase(activity.begin() + i); i--; }
    }
    count++;
    currentEnd = -1;
  }
  cout << "Minimum number of processors required is: " << count << endl;
}
