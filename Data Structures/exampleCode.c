#include <stdio.h>

struct Rectangle
{
  int length, breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
  r->length = l;
  r->breadth = b;
}

void area(struct Rectangle r)
{
  printf("%d\n",r.length*r.breadth);
}

void changeLength(struct Rectangle *r, int l)
{
  r->length = l;
}

int main()
{
  struct Rectangle r;
  initialize(&r, 20, 40);
  area(r);
  changeLength(&r, 30);
  area(r);
}
