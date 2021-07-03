/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To count all single and multi digit numbers in a matrix.
*/

#include <stdio.h>
int main()
{
    int a[100][100];
    int r,c,i,j,s=0,m=0;
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
            if(a[i][j] / 10 == 0)
                s++;
            else
                m++;
        }
    }
    printf("The number of single-digit elements is: %d. \n The number of multi-digit elements is: %d. \n",s,m);
}