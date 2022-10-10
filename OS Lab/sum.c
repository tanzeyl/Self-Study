#include <stdio.h>
#include <unistd.h>

int main()
{
  int n, i, sum = 0, status;
  pid_t pid;
  printf("Enter the number of elements in the array.\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements in the array.\n");
  for (i=0; i<n; i++)
  { scanf("%d",&a[i]); }
  pid = fork();
  if (pid == 0)
  {
    for (i=0; i<n; i++)
    {
      if (a[i]%2 == 0) { sum += a[i]; }
    }
    printf("The sum of even numbers is: %d.\n",sum);
  }
  else
  {
    for (i=0; i<n; i++)
    {
      if (a[i]%2 != 0) { sum += a[i]; }
    }
    printf("The sum of odd numbers is: %d.\n",sum);
  }
}
