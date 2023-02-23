#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000000
vector <long long> a, b, c;
long long k;

vector <vector <long long>> multiply (vector <vector <long long>> A, vector <vector <long long>> B)
{
  vector <vector <long long>> C(k+1, vector<long long>(k+1));
  for (int i=1; i<=k; i++)
  {
    for (int j=1; j<=k; j++)
    {
      for (int x=1; x<=k; x++)
      { C[i][j] = (C[i][j] + (A[i][x]*B[x][j])%MOD)%MOD; }
    }
  }
  return C;
}

vector<vector<long long>> pow(vector<vector<long long>> T, long long p)
{
  if (p == 1) return T;
  if (p & 1) return multiply(T, pow(T, p-1));
  vector <vector<long long>> X = pow(T, p/2);
  return multiply(X, X);
}

long long compute (long long n)
{
  if (n == 0) return 0;
  if (n <= k) return b[n-1];

  vector <long long> F1(k+1);
  for (int i=1; i<=k; i++) { F1[i] = b[i-1]; }

  vector <vector<long long>> T(k+1, vector <long long> (k+1));
  for (int i=1; i<=k; i++)
  {
    for (int j=1; j<=k; j++)
    {
      if (i < k)
      {
        if (j == i+1) T[i][j] = 1;
        else T[i][j] = 0;
      }
      else T[i][j] = c[k-j];
    }
  }

  T = pow(T, n-1);

  long long res = 0;
  for (int i=1; i<=k; i++)
  { res = (res + (T[1][i]*F1[i])%MOD)%MOD; }

  return res;
}

int main()
{
  long long n, num;
  cin >> k;
  for (int i=0; i<k; i++) { cin >> num; b.push_back(num); }
  for (int i=0; i<k; i++) { cin >> num; c.push_back(num); }
  cin >> n;
  cout << compute(n) << endl;
}
