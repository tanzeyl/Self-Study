#include <iostream>
using namespace std;

void buildHeap(int [], int);
void heapify(int [], int, int);
int extractMax(int [], int *);
void heapSort(int [], int *);

int main()
{
  int n, cap;
  cout << "Enter the size." << endl;
  cin >> n;
  cap = n;
  int arr[n];
  cout << "Enter the elements." << endl;
  for (int i=0; i<n; i++) cin >> arr[i];
  heapSort(arr, &n);
  n = cap;
  cout << "After sorting:" << endl;
  for (int i=0; i<n; i++) cout << arr[i] << " ";
}

void buildHeap(int arr[], int n)
{ for (int i=n/2; i>=0; i--) heapify(arr, n, i); }

void heapify(int arr[], int n, int i)
{
  int lc = 2*i+1, rc = 2*i+2, maximum = i, t;
  if (lc < n && arr[lc] > arr[maximum]) maximum = lc;
  if (rc < n && arr[rc] > arr[maximum]) maximum = rc;
  if (maximum != i)
  {
    t = arr[i]; arr[i] = arr[maximum]; arr[maximum] = t;
    heapify(arr, n, maximum);
  }
}

int extractMax(int arr[], int *n)
{
  int t, m = *n;;
  t = arr[0]; arr[0] = arr[m-1]; arr[m-1] = t;
  *n = m-1;
  heapify(arr, *n, 0);
  return arr[*n];
}

void heapSort(int arr[], int *n)
{
  int m = *n;
  buildHeap(arr, *n);
  for (int i=0; i<m; i++) extractMax(arr, n);
}
