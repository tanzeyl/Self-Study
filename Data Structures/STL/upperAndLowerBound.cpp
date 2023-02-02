#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n = 6;
  int arr[n] = {10, 20, 30, 30, 30, 30, 40, 50};
  bool present =  binary_search(arr, arr+n, 30);
  if (present) cout << "Present" << endl;
  else cout << "Absent" << endl;
  auto lb = lower_bound(arr, arr+n, 30);
  cout << "Lower Bound: " << lb-arr << endl;
  auto ub = upper_bound(arr, arr+n, 30);
  cout << "Upper Bound: " << ub-arr << endl;
  cout << "Frequency: " << ub-lb << endl;
}
