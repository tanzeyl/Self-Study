#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r);
int main ()
{
    int a;
    struct Rectangle r = {10,15};
    a = area(r);
    printf("%d",a);
    return 0;
}
int area(struct Rectangle r)
{
    return (r.length * r.breadth);
}