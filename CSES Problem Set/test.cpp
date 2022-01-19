#include <iostream>
#include <cstring>
using namespace std;

void fun1(string);
void fun2(string);

int main()
{
  int i = 0;
  string a = "Tanzeel";
  while(i < a.size()) { cout << a[i] << endl; i++; }
  fun1(a);
  return 0;
}

void fun1(string a)
{
  cout << a[3] << endl;
  fun2(&a[2]);
}

void fun2(string a)
{
  cout << a << endl;
}
