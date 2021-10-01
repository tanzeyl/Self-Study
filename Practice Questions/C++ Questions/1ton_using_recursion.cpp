#include <iostream>
using namespace std;

void print_num(int);

int main()
{
  print_num(5);
}

void print_num(int n)
{
  if(n==0)
    return;
  print_num(n-1);
  cout << n << " ";
}
