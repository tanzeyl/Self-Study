#include <stdio.h>

struct Rectangle
{
  int length, breadth;
  char x;
};

int main()
{
  struct Rectangle r;
  printf("%lu",sizeof(r));
}
