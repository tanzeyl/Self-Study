#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
  char s[100] = "My name is Tanzeel Khan";
  auto ptr = strtok(s, " ");
  cout << ptr << endl;
  while (ptr != NULL)
  {
    ptr = strtok(NULL, " ");
    cout << ptr << endl;
  }
}
