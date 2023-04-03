#include <iostream>
using namespace std;

void generate(int n, char brackets[], int open, int close, int i)
{
  if (i==2*n) { brackets[i] = '\0'; cout << brackets << endl; return; }
  if (open < n) { brackets[i] = '('; generate(n, brackets, open+1, close, i+1); }
  if (close < open) { brackets[i] = ')'; generate(n, brackets, open, close+1, i+1); }
}

int main()
{
  int n;
  cin >> n;
  char brackets[1000];
  generate(n, brackets, 0, 0, 0);
}
