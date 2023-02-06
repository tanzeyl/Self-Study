#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void formSubsets(vector <vector<int>> &subsets, int i, int a[])
{
  int lastBit, j=0;
  vector <int> temp;
  while (i > 0)
  {
    lastBit = i&1;
    if (lastBit == 1) temp.push_back(a[j]);
    j++;
    i = i >> 1;
  }
  subsets.push_back(temp);
}

int main()
{
  int n, size, length, product, result = 0;
  vector <vector<int>> subsets;
  cin >> n >> size;
  int a[size];
  length = pow(2, size);
  for (int i=0; i<size; i++) cin >> a[i];
  for (int i=1; i<length; i++) formSubsets(subsets, i, a);
  for (int i=0; i<subsets.size(); i++)
  {
    product = 1;
    for (int j=0; j<subsets[i].size(); j++) product *= subsets[i][j];
    if (subsets[i].size()%2 == 0) result -= (n/product);
    else result += (n/product);
  }
  cout << result << endl;
}
