#include<stdio.h>
#define MAX 50
int prime(int num)
{
for(int i=2; i<=num/2; i++)
if(num%i==0)
return 1;
return 0;
}
void read(int a[], int n)
{
printf("enter elements: ");
for(int i=0; i<n; i++)
scanf("%d", &a[i]);
 
printf("prime numbers are: ");
for(int i=0; i<n; i++)
if(prime(a[i])==0)
printf("%d\t", a[i]);
}

int main()
{
int a[MAX], n;
printf("Input no. of elements into array:");
scanf("%d", &n);
read(a, n);
return 0;
}
