/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find the sum of all elements in a matrix.
*/

#include <stdio.h>
int main()
{
    int a[100][100];
    int r,c,i,j,sum=0;
    printf("Enter the number of rows and columns respectively.\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements.");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("Sum of all elements is: %d.\n",sum);
}