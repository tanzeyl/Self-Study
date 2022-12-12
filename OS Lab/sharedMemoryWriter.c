#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>

int main()
{
  key_t key;
  int id;
  char *str;
  key = ftok("sharedMemory", 'z');
  id = shmget(key, 1024, 0666|IPC_CREAT);
  str = shmat(id, (void *)0, 0);
  while (1)
  {
    printf("Enter the data.\n");
    scanf("%s",str);
    printf("The data read is: %s.\n",str);
  }
}
