#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
  int io, writeBytes;
  char str[100];
  mknod("myfifo.txt", S_IFIFO|0666, 0);
  printf("Write some data here:\n");
  io = open("myfifo.txt", O_WRONLY);
  while (scanf("%s",str))
  {
    writeBytes = write(io, str, strlen(str));
    write(io, "\n", strlen("\n"));
    printf("The reader process wrote %d bytes: %s.\n",writeBytes, str);
  }
}
