/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find the count of all single and multi digit numbers.
*/
#include <stdio.h>

void print_array(int *, int);

#define MAX 100

int main()
{
    int a[MAX],pos[4],neg[3],zero[3];
    int n, i,j=0,k=0,l=0;
    int *p1 = &a, *p2 = &pos, *p3 = &neg, *p4 = &zero;

    printf("Enter the number of elements in your array.\n");
    scanf("%d",&n);
    
    printf("Enter 4 positive numbers, 3 negative numbers and 3 zeroes (total 10 elements).\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p1+i);
    }

    for(i=0;i<n;i++)
    {
        if(*(p1+i)>0)
        {
            *(p2+j) = *(p1+i);
            j++;
        }
        else if (*(p1+i)<0)
        {
            *(p3+k) = *(p1+i);
            k++;
        }
        else
        {
            *(p4+l) = *(p1+i);
            l++;
        }
    }
    
    printf("Array of positive elements:\n");
    print_array(pos,j);
    printf("\n");
    printf("Array of negative elements:\n");
    print_array(neg,k);
    printf("\n");
    printf("Array of zero elements:\n");
    print_array(zero,l);
}

void print_array(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}