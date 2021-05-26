#include <stdio.h>
void ratio(int *a, int n);
int main ()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    ratio(a,n);
    return 0;
}
void ratio(int *a, int n)
{
    int p=0,ne=0,z=0,i;
    float pr,nr,zr;
    for(i=0;i<n;i++)
    {
        if(a[i] > 0)
            p++;
        else if (a[i] < 0)
            ne++;
        else
            z++;
    }
    pr = (float)p/n;
    nr = (float)ne/n;
    zr = (float)z/n;
    printf("%0.6f \n",pr);
    printf("%0.6f\n",nr);
    printf("%0.6f\n",zr);
}