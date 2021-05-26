#include <stdio.h>
int main()
{
    int a[4];
    int i,j,count = 0,t = 0;
    printf("Enter the elements.\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        if (t != a[i])
        {
            for (j = 0; j < 4; j++)
            {
                if (a[i] == a[j])
                    count++;
            }
            printf("The element %d occurs %d times.\n",a[i],count);
            count = 0;
            t = a[i];
        }
    return 0;
}
