/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To swap vowels.
*/
#include <stdio.h>
void read_array(char *, int);
void print_array(char *, int);
void swap(char *, int);
int main()
{
    int n;
    char a[100];
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    read_array(a,n);
    swap(a,n);   
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
void swap(char *a, int n)
{
    int i;
    char t;
    for(i=0;i<n/2;i++)
    {
        if((*(a+i)=='a' || *(a+i)=='A' || *(a+i)=='e' || *(a+i)=='E' || *(a+i)=='i' || *(a+i)=='I' || *(a+i)=='o' || *(a+i)=='O' || *(a+i)=='u' || *(a+i)=='U') && (*(a+(n-1-i))=='a'
         || *(a+(n-1-i))=='A' || *(a+(n-1-i))=='e' || *(a+(n-1-i))=='E' || *(a+(n-1-i))=='i' || *(a+(n-1-i))=='I' || *(a+(n-1-i))=='o' || *(a+(n-1-i))=='O' || *(a+(n-1-i))=='u' || *(a+(n-1-i))=='U'))
         {
             t = a[i];
             a[i] = a[n-1-i];
             a[n-1-i] = t;
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
