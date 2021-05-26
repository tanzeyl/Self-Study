/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find the sum of odd and even elements in an array using pointers.
*/
#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX];
    int n, i, even_sum = 0, odd_sum = 0;
    int *p = &a;

    printf("Enter the number of elements in your array.\n");
    scanf("%d",&n);

    printf("Enter the elements.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    
    for(i=0;i<n;i++)
    {
        if (*(p+i)%2==0)
            even_sum = even_sum + *(p+i);
        else
            odd_sum = odd_sum + *(p+i);
    }
    printf("The sum of even and odd elements are %d and %d respectively.\n",even_sum,odd_sum);
}