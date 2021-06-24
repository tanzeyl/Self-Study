#include<stdio.h>
int gcd(int, int);
int main()
{
    int a,b,res;
    scanf("%d%d",&a,&b);
    res = gcd(a,b);
    printf("%d",res);
}
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}