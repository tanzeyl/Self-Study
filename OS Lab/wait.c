#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
  pid_t pid, cpid;
  pid = fork();
  if (pid == 0)
  { printf("I am a child.\n"); }
  else
  {
    cpid = wait(NULL);
    printf("I am the parent and the process ID of my child is: %d.\n",cpid);
  }
}
