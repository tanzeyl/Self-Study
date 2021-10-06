#include <iostream>
using namespace std;

void toh(int, char, char, char);

int main()
{
  int n;
  char A = 'A', B = 'B', C = 'C';
  cout << "Enter the number of discs.\n";
  cin >> n;
  toh(n, A, B, C);
}

void toh(int n, char A, char B, char C)
{
  if(n == 1)
  {
    cout << "Move 1 from " << A << " to " << C << endl;
    return;
  }
  toh(n-1, A, C, B);
  cout << "Move " << n << " from " << A << " to " << C << endl;
  toh(n-1, B, A, C);
}
