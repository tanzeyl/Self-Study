#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue <int> pq1; //max heap
  priority_queue <int, vector<int>, greater<int>> pq2;
  int n, num;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cin >> num;
    pq1.push(num);
    pq2.push(num);
  }
  while (!pq1.empty())
  {
    cout << pq1.top() << " ";
    pq1.pop();
  }
  cout << endl;
  while (!pq2.empty())
  {
    cout << pq2.top() << " ";
    pq2.pop();
  }
}
