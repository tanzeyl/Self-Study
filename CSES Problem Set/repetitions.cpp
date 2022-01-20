#include<iostream>
using namespace std;

 int main()
 {
  string str;
  cin >> str;
  long long int i, count = 1, max_count = 1;
  for(i=1; i<str.size(); i++)
  {
    if(str[i]!=str[i-1])
    {
      if(max_count<count)
        max_count=count;
      count=1;
    }
    else
      count+=1;
  }
  if(max_count<count)
    cout<<count;
  else
    cout << max_count;
  return 0;
 }
