#include <stdio.h>
int main()
{
    int n,i,j,pd_sum=0,d_sum=0,dd;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
        {
            pd_sum += a[i][i];
            d_sum += a[i][n-1-i];
        }
    }
    if(pd_sum >= d_sum)
        dd = pd_sum - d_sum;
    else
        dd = d_sum - pd_sum;
    printf("%d",dd);
    return 0;
}