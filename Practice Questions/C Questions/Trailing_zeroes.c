#include<stdio.h>
int main ()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=5;i<=n;i=i*5)
    {
        count = count + n/i;
    }
    printf("%d",count);
}
