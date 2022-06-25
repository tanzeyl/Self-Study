#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector <pair<int, int>> activity;
  int n, start, end, currentEnd = -1, count = 0;
  cout << "Enter the number of activities." << endl;
  cin >> n;
  cout << "Enter the start and end time of each activity." << endl;
  for (int i=0; i<n; i++)
  { cin >> start >> end; activity.push_back(make_pair(end, start)); }
  sort(activity.begin(), activity.end());
  while (!activity.empty())
  {
    for (int i=0; i<activity.size(); i++)
    {
      if (activity[i].second > currentEnd)
      {
        currentEnd = activity[i].first;
        activity.erase(activity.begin() + i);
        i--;
      }
    }
    count++;
    currentEnd = -1;
  }
  cout << "Number of processors required are: " << count << "." << endl;
}
