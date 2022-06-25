#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, start, end, currentEnd = -1, count = 0;
  vector <pair<int, int>> activity;
  cout << "Enter the number of activities." << endl;
  cin >> n;
  cout << "Enter the start and end time of all the activities." << endl;
  for (int i=0; i<n; i++)
  { cin >> start >> end; activity.push_back(make_pair(end, start)); }
  sort (activity.begin(), activity.end());
  for (int i=0; i<n; i++)
  {
    if (activity[i].second > currentEnd)
    {
      count++;
      currentEnd = activity[i].first;
    }
  }
  cout << "Number of executable activities are: " << count << "." << endl;
}
