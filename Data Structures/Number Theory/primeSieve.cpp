#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector <bool> primes(n+1, false);
  primes[2] = true;

  for (int i=3; i<=n; i+=2) { primes[i] = true; }
  for (int i=3; i<=n; i+=2)
  {
    if (primes[i])
    { for (int j=i*i; j<=n; j+=i) { primes[j] = false; } }
  }

  for (int i=0; i<=n; i++)
  { if (primes[i]) cout << i << " "; }
}
