/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To replace letters with symbols.
*/
#include <stdio.h>
void read_array(char *, int);
void replace(char *, int);
void print_array(char *, int);
int main()
{
    int n;
    char a[100];
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    read_array(a,n);
    replace(a,n);
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
void replace(char *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(a+i) >= 'a' && *(a+i) <= 'z')
            *(a+i) = '$';
        else if(*(a+i) >= 'A' && *(a+i) <= 'Z')
            *(a+i) = '*';
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