/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To remove duplicacy.
*/
#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int n;    
    int i, j, k;   
    int *p = &arr;
    printf("Enter size of the array.\n");
    scanf("%d", &n);
    printf("Enter elements in array.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",p+i);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array elements after deleting duplicates:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}