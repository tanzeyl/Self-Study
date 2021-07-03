/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To replace small vowels with capital vowels and capital consonants with small consonants.
*/
#include <stdio.h>
#define MAX 100
void read_array(char *, int);
void replace(char *, int);
void print_array(char *, int);
int main()
{
    int n;
    char a[MAX];
    printf("Enter the number of elemenst.\n");
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
        if(*(a+i) == 'a' || *(a+i) == 'e' || *(a+i) == 'i' || *(a+i) == 'o' || *(a+i) == 'u')
            *(a+i) = *(a+i) - 32;
        else if ((*(a+i)>='B' && *(a+i)<='D') || (*(a+i)>='F' && *(a+i)<='H') || (*(a+i)>='J' && *(a+i)<='N') || (*(a+i)>='P' && *(a+i)<='T') || (*(a+i)>='V' && *(a+i)<='Z'))
            *(a+i) = *(a+i) + 32;
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
