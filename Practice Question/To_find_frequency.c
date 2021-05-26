/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find the frequency of each element.
*/
#include <stdio.h>
void read_array(char *, int);
void freq(char *, int);
int main()
{
    int n;
    char a[100];
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    read_array(a,n);
    freq(a,n);
    return 0;
}
void read_array(char *a, int n)
{
    int i;
    printf("Enter the elements.\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
}
void freq(char *a, int n)
{
    int i,t,j,count = 0;
    for (i=0;i<n;i++)
    {
        if (t!=a[i])
        {
            for (j=0;j<n;j++)
            {
                if (a[i]==a[j])
                    count++;
            }
            printf("The element %c occurs %d times.\n",a[i],count);
            count = 0;
            t = a[i];
        }
    }
}