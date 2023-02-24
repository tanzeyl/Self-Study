#include <iostream>
#include <vector>
using namespace std;

int solve(int n)
{
  int answer = 0;
  int pr[n+1] = {};
  vector<int> primes;
  for (int i=2; i<=n; i++)
  {
    if (!pr[i])
    {
      primes.push_back(i);
      for (int j=i; j<=n; j+=i)
      { pr[j]++; }
    }
  }
  for (int i=2; i<=n; i++)
  { if (pr[i] == 2) answer++; }

  return answer;
}

int main()
{
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
