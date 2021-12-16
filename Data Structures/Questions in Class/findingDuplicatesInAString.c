#include <stdio.h>

int main()
{
  int i;
  char a[] = "finding";
  int h = 0, x = 0;
  for(i=0; a[i]!='\0';i++)
  {
    x = 1;
    x = x << (a[i]-97);
    if(x&h)
     printf("%c is duplicate.\n",a[i]);
    else
     h = h | x;
  }
}
