#include <stdio.h>

typedef struct Rectangle
{
  int length;
  int breadth;
}rect;
void read_data(rect *var);
int main()
{
  rect *ptr, rec;
  ptr = &rec;
  read_data(ptr);
  printf("Length is %d",ptr->length);
  printf("Breadth is %d",ptr->breadth);
  return 0;
}
void read_data(rect *var)
{
  printf("Enter the length.\n");
  scanf("%d",&(var)->length);
  printf("Enter the breadth.\n");
  scanf("%d",&(var)->breadth);
}
