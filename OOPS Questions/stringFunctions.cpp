#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char s1[]="Tanzeel", s2[]=" Khan";
  strcat(s1, s2);
  cout << s1 << endl;
  strcpy(s1, s2);
  cout << s1 << endl;
  cout << strlen(s1) << endl;
  if (strcmp(s1, s2))
    cout << "Strings are same.\n";
  else
    cout << "They are not same.\n";
}
