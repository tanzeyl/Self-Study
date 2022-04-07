#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue <int, vector<int>, greater<int>> q, q2;
  q.push(10);
  q.push(2);
  q.push(18);
  q.push(30);
  q.push(20);
  q.push(40);
  q2.push(6);
  q2.push(7);
  q2.push(8);
  q2.push(9);
  cout << q.top() << endl;
  q.pop();
  cout << q.top() << endl;
  cout << q.size() << endl;
  if (q.empty())
    cout << "PQ is empty." << endl;
  else
    cout << "PQ is not empty." << endl;
  cout << "Before swapping:" << endl;
  cout << q.top() << endl;
  cout << q2.top() << endl;
  q.swap(q2);
  cout << "After swapping:" << endl;
  cout << q.top() << endl;
  cout << q2.top() << endl;
}
