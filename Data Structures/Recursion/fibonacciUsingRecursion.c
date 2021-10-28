#include <stdio.h>

int fib(int);
int mfib(int);

int F[10];

int main()
{
  for(int i=0; i<10; i++)
    F[i] = -1;
  printf("%d\n",fib(5));
  printf("%d\n",mfib(10));
  for(int i=0;i<10;i++)
    printf("%d ",F[i]);
  return 0;
}

int fib(int n)
{
  if (n <= 1)
    return n;
  return fib(n-2) + fib(n-1);
}

int mfib(int n)
{
  if(n <= 1)
  {
    F[n] = n;
    return n;
  }
  else
  {
    if (F[n-2] == -1)
      F[n-2] = mfib(n-2);
    if (F[n-1] == -1)
      F[n-1] = mfib(n-1);
    F[n] = F[n-2] + F[n-1];
    return F[n-2] + F[n-1];
  }
}
