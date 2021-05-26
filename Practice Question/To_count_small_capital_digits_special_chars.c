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
    int n, i, sc = 0, cc = 0, dc = 0, scc = 0;
    char a[MAX];
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    printf("Enter the elements.\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",a+i);
    } 
    for(i=0;i<n;i++)
    {
        if(a[i] >= 97 && a[i] <= 122)
            sc++;
        else if(a[i] >= 65 && a[i] <= 90)
            cc++;
        else if(a[i] >= 48 && a[i] <= 57)
            dc++;
        else if(a[i] >= 33 && a[i] <= 47)
            scc++;
    }
    printf("Small characters: %d.\n", sc);
    printf("Capital characters: %d.\n", cc);
    printf("Digits: %d.\n", dc);
    printf("Special characters: %d.\n", scc);
    return 0;
}
