/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print all prime numbers in an array.
*/
#include <stdio.h>
#define MAX 100
int prime_check(int);
int main()
{
    int n,i,j;
    int a[MAX];
    printf("Enter the number of elements in your array.\n");
    scanf("%d",&n);
    printf("Enter the elements.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime_check(a[i]) == 0)
        printf("%d ",a[i]);
    }
    return 0;
}
int prime_check(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        return 1;
        return 0;
    }
}
