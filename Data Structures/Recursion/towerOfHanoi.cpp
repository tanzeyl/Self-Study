#include <iostream>
using namespace std;

void moves(int n, char src, char helper, char dest)
{
  if (n==0) return;
  moves(n-1, src, dest, helper);
  cout << "Move disk " << n << " from " << src << " to " << dest << "." << endl;
  moves(n-1, helper, dest, src);
}

int main()
{
  int n;
  cin >> n;
  moves(n, 'A', 'B', 'C');
}
