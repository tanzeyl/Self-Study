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

int countDivisors(int n)
{
  int i=0, pr=1, p = primes[0], count;
  while (p*p<=n)
  {
    if (n%p==0)
    {
      count = 0;
      while (n%p==0) { count++; n /= p; }
      pr *= count+1;
    }
    i++;
    p = primes[i];
  }
  if (n != 1) pr *= 2;
  return pr;
}

int main()
{
  sieve();
  int n;
  cin >> n;
  cout << countDivisors(n) << endl;
}
