#include <iostream>
#include <string.h>
using namespace std;

int is_palindrome(string &str, int, int);

int main()
{
  string str = "malayalam";
  if(is_palindrome(str,0,8))
    cout << "Yes";
  else
    cout << "No";
}

int is_palindrome(string &str, int start, int end)
{
  if(start >= end)
    return true;
  return (str[start] == str[end]) && is_palindrome(str, start+1, end-1);
}
