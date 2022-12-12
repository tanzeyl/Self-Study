#include <stdio.h>
#include <unistd.h>

int main()
{
  int n;
  printf("Enter the number of terms in the array.\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements.\n");
  for (int i=0; i<n; i++) scanf("%d",&a[i]);
  pid_t pid;
  pid = fork();
  if (pid == 0)
  {
    int sum = 0;
    for (int i=0; i<n; i++)
    { if (a[i]%2 != 0) sum += a[i]; }
    printf("The sum of odd number calculated by the child is: %d.\n", sum);
  }
  else
  {
    int sum = 0;
    for (int i=0; i<n; i++)
    { if (a[i]%2 == 0) sum += a[i]; }
    printf("The sum of even numbers calculated by the parent is: %d.\n",sum);
  }
}
