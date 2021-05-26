/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: Transpose a matrix.
*/

#include <stdio.h>
int main()
{
    int a[100][100],b[100][100];
    int r,c,i,j;
    printf("Enter the number of rows and columns respectively.\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements.\n");
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
            if(i == j)
                b[i][j] = a[i][j];
            else
                b[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix is as follows:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}