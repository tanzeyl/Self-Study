#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) { return a.first > b.first; }

int main()
{
  int n, maxEndTime = 0, maxProfit = 0, profit, deadline, count = 0, j;
  vector <pair<int, int>> jobs;
  cout << "Enter the number of jobs." << endl;
  cin >> n;
  cout << "Enter the profit and deadline of each job." << endl;
  for (int i=0; i<n; i++)
  {
    cin >> profit >> deadline;
    jobs.push_back(make_pair(profit, deadline));
  }
  sort(jobs.begin(), jobs.end(), comp);
  for (int i=0; i<n; i++)
  { if (jobs[i].second > maxEndTime) maxEndTime = jobs[i].second; }
  int fill[maxEndTime];
  for (int i=0; i<maxEndTime; i++) fill[i] = -1;
  for (int i=0; i<n; i++)
  {
    j = jobs[i].second-1;
    while(j>=0 && fill[j] != -1) j--;
    if (j>=0 && fill[j]==-1)
    {
      fill[j] = i;
      count++;
      maxProfit += jobs[i].first;
    }
  }
  cout << "Jobs: " << count << " Maximum profit: " << maxProfit << endl;
}
