#include <iostream>
#include <map>
using namespace std;

map <int, string> m;

void spell(int n)
{
  if (n==0) return;
  spell(n/10);
  cout << m[n%10] << " ";
}

int main()
{
  m[0]="Zero"; m[1]="One"; m[2]="Two"; m[3]="Three";
  m[4]="Four"; m[5]="Five"; m[6]="Six"; m[7]="Seven";
  m[8]="Eight"; m[9]="Nine";
  int n;
  cin >> n;
  spell(n);
}
