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
    if (p[i]==0)
    {
      primes.push_back(i);
      for (int j=i; j<=N; j+=i) p[j] = 1;
    }
  }
}

vector <int> factor (int n)
{
  vector <int> factors;
  int i = 0, p = primes[0];
  while (p*p <= n)
  {
    if (n%p == 0)
    {
      factors.push_back(p);
      while (n%p==0) n /= p;
    }
    i++;
    p = primes[i];
  }
  if (n != 1) factors.push_back(n);
  return factors;
}

int main()
{
  sieve();
  int n;
  cin >> n;
  vector <int> factors = factor(n);
  cout << "{ ";
  for (auto x : factors) cout << x << ", ";
  cout << "}" << endl;
}
