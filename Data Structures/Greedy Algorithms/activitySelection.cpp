#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, s, e, i, count = 0, currentEnd = -1;
  vector <pair<int, int>> activity;
  cout << "Enter the number of activities." << endl;
  cin >> n;
  cout << "Enter the start and end time for all the activities." << endl;
  for (i=0; i<n; i++)
  { cin >> s >> e; activity.push_back(make_pair(e, s)); }
  sort(activity.begin(), activity.end());
  for (i=0; i<n; i++)
  {
    if (activity[i].second > currentEnd)
    {
      count++;
      currentEnd = activity[i].first;
    }
  }
  cout << "Maximum number of activites that can be run is: " << count << endl;
}
