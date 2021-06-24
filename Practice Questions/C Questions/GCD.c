#include<stdio.h>
int main ()
{
    int a,b,i, small,large,t=1;
    printf("Enter the two numbers.\n");
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a = a-b;
        else
            b = b - a;
    }
    printf("%d",a);
    return 0;
}
