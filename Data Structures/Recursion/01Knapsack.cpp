#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int weights[], int prices[], int capacity, int n)
{
  if (n==0 or capacity==0) return 0;
  int included, excluded;
  included = excluded = INT_MIN;
  if (weights[n-1] <= capacity) { included = prices[n-1] + getMax(weights, prices, capacity-weights[n-1], n-1); }
  excluded = getMax(weights, prices, capacity, n-1);
  return max(included, excluded);
}

int main()
{
  int weights[] = { 1, 2, 3, 5 };
  int prices[] = { 40, 20, 30, 100 };
  int capacity = 6, n = 4;
  int maxProfit = getMax(weights, prices, capacity, n);
  cout << maxProfit << endl;
}
