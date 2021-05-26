/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find the sum and number of odd elements at even places.
*/
#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX];
    int n,i,sum=0,ctr=0;
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
        if (*(p+i)%2!=0 && (i+1)%2==0)
        {
            sum = sum = *(p+i);
            ctr++;
        }
    }
    printf("The sum and number of odd elements at even places is %d and %d.\n",sum,ctr);
    return 0;
}
