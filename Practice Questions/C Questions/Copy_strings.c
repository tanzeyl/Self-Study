/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find the length of a string.
*/
#include <stdio.h>
#define MAX 100
void strcopy(char *, char *);
int main()
{
    char str1[MAX], str2[MAX];
    printf("Enter the string you want to copy.\n");
    fgets(str1, MAX-1, stdin);
    strcopy(str1, str2);
    printf("Second string after being copied from first string is:\n%s\n",str2);
    return 0;
}
void strcopy(char *str1, char *str2)
{
    while(*str1 != '\0')
    {
        *str2 = *str1;
        *str1++; *str2++;
    }
    *str2 = '\0';
}

