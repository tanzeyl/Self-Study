#include <iostream>
#include <stack>
using namespace std;

void printStack(stack <int>);

int main()
{
  stack <int> st, st2;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st2.push(3);
  st2.push(5);
  st2.push(17);
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  cout << st.size() << endl;
  if (st.empty())
    cout << "Stack is empty." << endl;
  else
    cout << "Stack has elements." << endl;
  cout << "Before swapping:" << endl;
  cout << st.top() << endl;
  cout << st2.top() << endl;
  st.swap(st2);
  cout << "After swapping:" << endl;
  cout << st.top() << endl;
  cout << st2.top() << endl;
  cout << "Stack 1:" << endl;
  printStack(st);
  cout << "Stack 2:" << endl;
  printStack(st2);
}

void printStack(stack <int> s)
{
  while(!(s.empty()))
  {
    cout << s.top() << endl;
    s.pop();
  }
}
