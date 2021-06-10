#include <stdio.h>
#include <stdlib.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main ()
{
    struct Rectangle r = {15,10};
    struct Rectangle *p=&r;
    (*p).length = 20;
    p -> breadth = 200;
    printf("%d %d\n",(*p).length, p-> breadth);

    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    (*p1).length = 15;
    (*p1).breadth = 100;
    printf("%d %d",(*p1).breadth, (*p1).length);
}