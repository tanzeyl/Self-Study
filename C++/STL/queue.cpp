#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue <int>);

int main()
{
  queue <int> q, q2;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q2.push(6);
  q2.push(7);
  q2.push(8);
  q2.push(9);
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  cout << q.size() << endl;
    if (q.empty())
    cout << "Queue is empty." << endl;
  else
    cout << "Queue has elements." << endl;
  cout << "Before swapping:" << endl;
  cout << "Q = " << endl;
  printQueue(q);
  cout << "Q2 = " << endl;
  printQueue(q2);
  q.swap(q2);
  cout << "After swapping:" << endl;
  cout << "Q = " << endl;
  printQueue(q);
  cout << "Q2 = " << endl;
  printQueue(q2);
}

void printQueue(queue <int> q)
{
  while(!q.empty())
  {
    cout << q.front() << endl;
    q.pop();
  }
}
