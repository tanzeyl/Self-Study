#include <iostream>
using namespace std;
#define MAX 100

void sortArray(int A[], int p, int B[], int q);
void readArray(int A[], int n);

int main()
{
  int A[MAX], B[MAX], p, q, i;
  cout << "Enter the number of elements in array A and B.\n";
  cin >> p; cin >> q;
  readArray(A, p);
  readArray(B, q);
  //sortArray(A, p, B, q);
  return 0;
}

void readArray(int A[], int n)
{
  int i;
  for(i=0;i<n;i++)
    cin >> A[i];
}

// void sortArray(int A[], int p, int B[], int q)
// {
//   int C[MAX], i, small =  A[0];
//   for(i=0;i<p;i++)
//   {

//   }
// }
