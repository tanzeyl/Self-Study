#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, num, sum = 0, answer=0, temp;
  vector <int> pre(1000, 0);
  pre[0] = 1;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cin >> num;
    sum += num;
    sum %= n;
    sum = (sum+n)%n;
    pre[sum]++;
  }
  for (int i=0; i<n; i++)
  { temp = pre[i]; answer += temp*(temp-1)/2; }
  cout << answer << endl;
}
