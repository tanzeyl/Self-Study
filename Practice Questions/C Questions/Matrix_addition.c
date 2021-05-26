/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To add two matrices.
*/

#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], sum[100][100];
    int r1,c1,r2,c2,i,j;
    printf("Enter the number of rows and columns of first matrix.\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columns of second matrix.\n");
    scanf("%d%d",&r2,&c2);
    printf("Enter the first matrix.\n");
    if(r1 == r2 && c1 == c2)
    {
          for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix.\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Matrix having sum is as follows:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("These matrices cannot be added.\n");
    }
    }