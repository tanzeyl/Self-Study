/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To count the number of vowels.
*/
#include <stdio.h>
#define MAX 100
int main()
{
    int n, i, ctr = 0;
    char a[MAX];
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    printf("Enter the elements.\n");
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
            ctr++;
    }
    printf("The number of vowels in this array are: %d.\n",ctr);
    return 0;
}
