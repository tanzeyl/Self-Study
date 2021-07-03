/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print the count of all odd elements in principal diagonal.
*/

#include <stdio.h>
int main()
{
    int a[100][100];
    int r,c,i,j,ctr=0;
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
            if(j == i)
            {
                if(a[i][j] % 2 != 0)
                    ctr++;
            }
        }
    }
    printf("The count of all odd elements in the principal diagonal is: %d.\n",ctr);
}