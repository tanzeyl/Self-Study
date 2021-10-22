#include <stdio.h>

void fun(int);

int main()
{
  fun(5);
}

void fun(int n)
{
  if (n > 0)
  {
    printf("%d ",n);
    fun(n-1);
    fun(n-1);
  }
}
