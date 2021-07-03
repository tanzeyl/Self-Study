/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print ASCII values.
*/
#include <stdio.h>
void read_array(char *, int);
void print_ascii(char *, int);
int main()
{
    int n;
    char a[100];
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    read_array(a,n);
    print_ascii(a,n);
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
void print_ascii(char *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}