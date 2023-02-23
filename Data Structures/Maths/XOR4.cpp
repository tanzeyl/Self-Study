#include <iostream>
using namespace std;

int main()
{
  int n;
  bool flag = false;
  cin >> n;
  int a[n];
  for (int i=0; i<n; i++)
  { cin >> a[i]; }
  if (n>=70) cout << "YES" << endl;
  else
  {
    for (int i=0; i<n-3; i++)
    {
      for (int j=i+1; j<n-2; j++)
      {
        for (int k=j+1; k<n-1; k++)
        {
          for (int l=k+1; l<n; l++)
          { if (a[i]^a[j]^a[k]^a[l] == 0) { flag = true; break; } }
          if (flag) break;
        }
        if (flag) break;
      }
      if (flag) break;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
