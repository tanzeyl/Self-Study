#include <iostream>
using namespace std;
int main()
{
  int n, temp, i, ctr = 0, rem, sum = 0, prod = 1;
  cout << "Enter the number.\n";
  cin >> n;
  temp = n;
  while(temp)
  {
    temp = temp / 10;
    ctr++;
  }
  if(ctr == 2)
  {
    temp = n;
    while(temp)
    {
      rem = temp % 10;
      sum = sum + rem;
      prod = prod * rem;
      temp = temp / 10;
    }
    if(sum + prod == n)
      cout << "Special 2-Digit number.\n";
    else
      cout << "Not a special 2-Digit number.\n";
  }
  else
    cout << "This is not a 2-Digit number.\n";
}
