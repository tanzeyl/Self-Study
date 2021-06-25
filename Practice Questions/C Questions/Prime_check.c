#include <stdio.h>
bool isprime(int n);
int main()
{
    int n;
    bool res;
    scanf("%d",&n);
    isprime(n);
    return 0;
}
bool isprime(int n)
{
    if(n==1)
    {
        printf("False");
        return 0;
    }
    if(n==2 || n==3)
    {
        printf("True");
        return 0;
    }
    if(n%2==0 || n%3==0)
    {
        printf("False");
        return 0;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0)
        {
            printf("False");
            return 0;
        }
        printf("True");
        return 0;
    }
}
