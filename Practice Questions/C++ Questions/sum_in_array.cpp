#include <iostream>
#define MAX 100
using namespace std;

void arrayFunc(int num[], int size, int sum);

int main()
{
  int num[MAX], size, sum, i;
  cout << "Enter the number of elements you want to enter.\n";
  cin >> size;
  cout << "Enter the elements.\n";
  for(i=0; i<size; i++)
    cin >> num[i];
  cout << "Enter the number you want to check against.\n";
  cin >> sum;
  arrayFunc(num, size, sum);
}

void arrayFunc(int num[], int size, int sum)
{
  cout << "Pairs of elements having sum " << sum << " are:\n";
  int i, j;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(num[i] + num[j] == sum)
        cout << num[i] << " + " << num[j] << " = " << sum << endl;
    }
  }
}
