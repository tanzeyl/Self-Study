#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue <int> q;
  q.push(10);
  q.push(2);
  q.push(18);
  q.push(30);
  q.push(20);
  q.push(40);
  cout << q.top() << endl;
  q.pop();
  cout << q.top() << endl;
}
