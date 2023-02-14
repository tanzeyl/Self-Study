#include <iostream>
#include <map>
using namespace std;

map <unsigned long long, unsigned long long> m;
int calls;

unsigned long long int catalan(int n)
{
  calls = 0;
  if (m.count(n)) return m[n];
  unsigned long long int result = 0;
  for (int i=0; i<n; i++) { result += catalan(i) * catalan(n-i-1); calls += 2;}
  return m[n] = result;
}

int main()
{
  int n, num;
  m[0] = m[1] = 1;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cin >> num;
    cout << catalan(num) << endl;
    cout << "Calls: " << calls << endl;
  }
  for (auto i : m) cout << i.first << " " << i.second << endl;
}
