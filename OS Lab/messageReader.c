#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/types.h>

struct buffer
{
  long msgType;
  char message[100];
} messages;

int main()
{
  key_t key;
  int id, c, n, i=1;
  key = ftok("messages.txt", 'b');
  id = msgget(key, 0666|IPC_CREAT);
  printf("Enter the number of messages you want to read.\n");
  scanf("%d",&n);
  while (i <= n)
  {
    msgrcv(id, &messages, sizeof(messages.message), i, 0);
    printf("Message recieved is: %s.\n",messages.message);
    i++;
  }
  msgctl(id, IPC_RMID, NULL);
}
