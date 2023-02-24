#include <iostream>
#include <vector>
using namespace std;

const int N = 1000000;
vector <int> primes;
int p[N] = {};

void sieve()
{
  for (int i=2; i<=N; i++)
  {
    if (p[i] == 0)
    {
      primes.push_back(i);
      for (int j=i; j<=N; j+=i) p[j] = 1;
    }
  }
}

int main()
{
  sieve();
  int m, n, start;
  cin >> m >> n;
  int segment[n-m+1];
  for (int i=0; i<n-m+1; i++) segment[i] = 0;
  for (auto x : primes)
  {
    if (x*x>n) break;
    start = (m/x)*x;
    if (x>=m and x<=n) start = x*2;
    for (int i=start; i<=n; i+=x) segment[i-m] = 1;
  }
  for (int i=0; i<=n; i++)
  { if (segment[i-m]==0 and i!=1) cout << i << " "; }
}
