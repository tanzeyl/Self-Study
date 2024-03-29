#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
  pid_t pid;
  pid = fork();
  if (pid == 0)
  {
    printf("I am child and my process ID is %d.\n",getpid());
    printf("My parent's process ID is %d.\n",getppid());
  }
  else
  {
    wait(NULL);
    sleep(3);
    printf("I am the parent and my process ID is %d.\n",getpid());
    printf("My child's process ID is %d.\n",pid);
  }
}
