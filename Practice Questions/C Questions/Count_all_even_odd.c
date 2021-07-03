/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To count all even and odd numbers in a matrix.
*/

#include <stdio.h>
int main()
{
    int a[100][100];
    int r,c,i,j,e=0,o=0;
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
            if(a[i][j] % 2 == 0)
                e++;
            else
                o++;
        }
    }
    printf("The number of odd elements is: %d. \n The Number of even elements is: %d. \n",o,e);
}