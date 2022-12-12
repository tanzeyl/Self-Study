#include <stdio.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  pid = fork();
  if (pid == 0)
  {
    sleep(5);
    printf("I am the child and my process ID is %d.\n",getpid());
    printf("My parent's process ID is %d.\n",getppid());
  }
  else
  {
    printf("I am the parent and my process ID is %d.\n",getpid());
    printf("MY child's process ID is %d.\n",pid);
  }
}
