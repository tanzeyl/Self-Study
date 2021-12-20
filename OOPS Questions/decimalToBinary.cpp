#include <iostream>
using namespace std;

class Decimal
{
  int n;
  public:
    Decimal()
    { n = 0; }

    Decimal(int num)
    {
      int i=1, j=n, binary=0;
      n = num;
      for(j=n; j>0; j=j/2)
      {
        binary = binary + (n%2)*i;
        i = i*10;
        n = n/2;
      }
      cout << "Binary number is: " << binary << endl;
    }

    ~Decimal()
    { cout << "Destructor called.\n"; }
};

int main()
{
  Decimal obj(7);
  return 0;
}
