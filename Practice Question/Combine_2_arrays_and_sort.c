#include <stdio.h>
int main()
{
    int a[3], b[3], c[6];
    int i,j,x;
    printf("Enter the elements in the first array.\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements in the second array.\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&b[i]);
    }
    for (i = 0; i < 3; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < 3; i++)
    {
        c[3+i] = b[i];
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (c[i] >= c[j])
            {
                x = c[i];
                c[i] = c[j];
                c[j] = x;
            }
        }
    }
    for(i = 0; i < 6; i++)
    {
        printf("%d ",c[i]);
    }
}