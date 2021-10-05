#include <iostream>
#include <algorithm>
using namespace std;

int pieces(int, int, int, int);

int main()
{
  int n = 25, a=10, b=5, c=6;
  cout << pieces(n, a, b, c);
}

int peices(int n, int a, int b, int c)
{
  if (n == 0) return 0;
  if (n < 0) return -1;
  int res = std::max(pieces(n-a, a, b, c), pieces(n-b, a, b, c), pieces(n-c, a, b, c));
  if (res == -1)
    return -1;
  return res+1;
}
