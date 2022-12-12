#include <stdio.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  pid = fork();
  if (pid == 0)
  {
    sleep(1);
    printf("I am child and my process ID is %d.\n",getpid());
    printf("My parent's process ID is %d.\n", getppid());
  }
  else
  {
    printf("I am parent and my process ID is %d.\n",getpid());
    printf("My child's process ID is %d.\n",pid);
  }
  printf("Process ID of the terminating process is %d.\n",getpid());
}
