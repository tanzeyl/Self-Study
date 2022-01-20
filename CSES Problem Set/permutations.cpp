#include <iostream>
using namespace std;

int main()
{
    long long int n, i;
    cin >> n;
    if (n == 1)
      cout << 1 << endl;
    if (n == 2 || n == 3)
      cout << "NO SOLUTION" << endl;
    if ( n >= 4 )
    {
        for(i=2; i<=n; i+=2)
          printf ("%d ",i);
        for(i=1; i<=n; i+=2)
          printf ("%d ", i);
    }
}
