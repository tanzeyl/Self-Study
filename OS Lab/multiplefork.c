#include <stdio.h>
#include <unistd.h>

int main()
{
  fork();
  printf("My\n");
  fork();
  printf("name\n");
}
