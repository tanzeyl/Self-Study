#include<stdio.h>
int gcd(int, int);
int main()
{
    int a,b,res,lcm;
    scanf("%d%d",&a,&b);
    res = gcd(a,b);
    lcm = (a*b)/(res);
    printf("%d",lcm);
}
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}