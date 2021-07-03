/*
Name: Tanzeel Khan
Section: A
Roll number: 61
Question: To multiply two matrices.
*/
#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,n=0;
    int a[100][100], b[100][100], c[100][100];
    printf("Enter the number rows and columns of first matrix.\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number rows and columns of second matrix.\n");
    scanf("%d%d",&r2,&c2);
    if(c1 != r2)
        printf("Matrices can not be multiplied.\n");
    else
    {
        printf("Enter the first matrix.\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the second matrix.\n");
            for(i=0;i<r2;i++)
            {
                for(j=0;j<c2;j++)
                {
                scanf("%d",&b[i][j]);
                }
            }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    n = n + a[i][k]*b[k][j];
                }
            c[i][j] = n;
            n = 0;
            }
        }
        printf("Multiplied matrix is as follows:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }

}