#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  pid_t pid;
  char str1[100], str2[100];
  int io[2], readBytes, writeBytes;
  pipe(io);
  pid = fork();
  if (pid == 0)
  {
    printf("Enter a string.\n");
    scanf("%s",str1);
    writeBytes = write(io[1], str1, strlen(str1));
    printf("Child read %d bytes.\n",writeBytes);
    exit(0);
  }
  else
  {
    readBytes = read(io[0], str2, sizeof(str2));
    str2[readBytes] = '\0';
    printf("The string read is: '%s'.\n",str2);
    printf("It is of %d bytes.\n",readBytes);
  }
}
