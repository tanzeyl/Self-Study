#include <stdio.h>
int main()
{
 int arr[10][10];
 int i, j, m, n;
printf("Enter number of Rows :");
scanf("%d",&m);
printf("Enter number of Cols :");
scanf("%d",&n);
printf("\nEnter matrix elements :\n");
for (i = 0; i < m; ++i)
   {
     for (j = 0; j < n; ++j)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
      }
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        int minimum = arr[i][j];
        int z = i;
        int q = j;
        int w = j;
        for (int k = i; k < m; k++)
        {
            for (; w < n; w++)
            {
            if (arr[k][w] < minimum)
            {
                minimum = arr[k][w];
                z = k;
                q = w;
            }
        }
        w = 0;
    }
    int temp = arr[i][j];
    arr[i][j] = arr[z][q];
    arr[z][q] = temp;
    }
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
return 0;
}