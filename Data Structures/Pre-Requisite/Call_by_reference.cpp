#include <iostream>
void swap(int &x, int &y);
int main()
{
    int a=10,b=20;
    swap(a,b);
    printf("%d %d",a,b);
    return 0;
}
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}