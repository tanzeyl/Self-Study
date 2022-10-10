#include <stdio.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  pid = fork();
  if (pid == 0)
  { sleep(1); printf("I am a child. My process ID is: %d and my parent's process ID is: %d.\n",getpid(), getppid()); }
  else { printf("I am the parent. My process ID is: %d and my child's process ID is: %d.\n",getpid(), pid); }
  printf("Terminating process ID is: %d.\n",getpid());
}
