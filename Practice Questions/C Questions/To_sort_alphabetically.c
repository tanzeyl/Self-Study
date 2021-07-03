/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To sort alphabetically.
*/
#include <stdio.h>
void read_array(char *, int);
void sort(char *, int);
void print_array(char *, int);
int main()
{
    int n;
    char a[100];
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    read_array(a,n);
    sort(a,n);
    print_array(a,n);
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
void sort(char *a, int n)
{
    int i,j;
    char t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
void print_array(char *a, int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            printf("%c ",a[i]);
        }   
}