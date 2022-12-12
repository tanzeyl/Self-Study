#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main()
{
  key_t key;
  int id;
  char *str, *temp;
  key = ftok("sharedMemory", 'z');
  id = shmget(key, 1024, 0666|IPC_CREAT);
  str = shmat(id, (void *)0, 0);
  temp = str;
  while (1)
  {
    sleep(10);
    str = shmat(id, (void *)0, 0);
    if (temp != str) { printf("The data recieved is: %s.\n",str); temp = str; }
  }
}
