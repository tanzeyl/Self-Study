#include <stdio.h>
#include <unistd.h>

int main()
{
  fork();
  printf("My\n");
  fork();
  printf("Name is\n");
  fork();
  printf("Tanzeel\n");
}
