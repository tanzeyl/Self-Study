#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare (pair<int, int> a, pair<int, int> b) { return a.first > b.first; }

int main()
{
  vector <pair<int, int>> job;
  int n, profit, deadline, maxEndTime = 0, count = 0, maxProfit = 0;
  cout << "Enter the number of jobs." << endl; cin >> n;
  cout << "Enter the profit and deadline of each job." << endl;
  for (int i=0; i<n; i++)
  {
    cin >> profit >> deadline;
    job.push_back(make_pair(profit, deadline));
  }
  sort(job.begin(), job.end(), compare);
  for (int i=0; i<n; i++)
  { if (job[i].second > maxEndTime) maxEndTime = job[i].second; }
  int fill[maxEndTime];
  for (int i=0; i<maxEndTime; i++) { fill[i] = -1; }
  for (int i=0; i<n; i++)
  {
    int j = job[i].second -1;
    while (j>=0 && fill[j] != -1) { j--; }
    if (j>=0 && fill[j] == -1)
    {
      fill[j] = i;
      count++;
      maxProfit += job[i].first;
    }
  }
  cout << "We can do " << count << " jobs with a maximum profit of " << maxProfit << endl;
}
