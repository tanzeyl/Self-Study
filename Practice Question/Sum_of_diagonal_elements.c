/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print the sum of diagonal elements.
*/

#include <stdio.h>
int main()
{
    int a[100][100];
    int r,c,i,j,s=0;
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
                s = s + a[i][j];
        }
    }
    printf("The sum of diagonal elements is: %d.\n",s);
}