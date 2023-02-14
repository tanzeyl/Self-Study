#include <iostream>
#include <map>
using namespace std;

map <long long, long long> table;
long long M = 1000000007;

long long fib(long long n)
{
  if (table.count(n)) return table[n];
  long k = n/2;
  if (n&1) return table[n] = (fib(k)*fib(k+1) + fib(k)*fib(k-1)) % M;
  else return table[n] = (fib(k)*fib(k) + fib(k-1)*fib(k-1)) % M;
}

int main()
{
  long long n, num;
  cin >> n;
  table[0] = table[1] = 1;
  for (int i=0; i<n; i++)
  {
    cin >> num;
    if (num == 0) cout << "0" << endl;
    else cout << fib(num-1) << endl;
  }
}
