#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int io, readBytes;
  char str[100];
  mknod("myfifo.txt", S_IFIFO|0666, 0);
  io = open("myfifo.txt", O_RDONLY);
  do
  {
    readBytes = read(io, str, sizeof(str));
    if (readBytes != 0)
    {
      str[readBytes] = '\0';
      printf("The reader process read %d bytes: %s.\n",readBytes, str);
    }
  } while (1);
}
