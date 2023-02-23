#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
  for (int i=2; i<=n/2; i++)
  { if (n%i == 0) return false; }
  return true;
}

int sumDigits(int n)
{
  int sum = 0;
  while (n) { sum += n%10; n /= 10; }
  return sum;
}

int main()
{
  int n, sum1 = 0, sum2 = 0, temp, tempSum;
  vector <int> primes;
  cin >> n;
  primes.reserve(n);
  temp = n;

  while (temp)
  { sum1 += temp%10; temp /= 10; }

  for (int i=2; i<=sqrt(n); i++)
  { if (isPrime(i)) primes.push_back(i); }

  for (int i=0; i<primes.size(); i++)
  {
    if (n%primes[i] == 0)
    {
      while (n%primes[i] == 0 && n>0)
      {
        sum2 += sumDigits(primes[i]);
        n /= primes[i];
      }
    }
  }
  cout << sum1 << " " << sum2 << endl;
}
