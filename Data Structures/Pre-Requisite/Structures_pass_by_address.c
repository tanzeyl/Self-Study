#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int change_length(struct Rectangle *r1, int l);
int main ()
{
    struct Rectangle r = {10,15};
    change_length(&r,20);
    printf("%d",r.length);
}
int change_length(struct Rectangle *r1, int l)
{
    r1 -> length = l;
}