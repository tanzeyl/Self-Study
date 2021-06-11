/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To compare two strings.
*/
#include <stdio.h>
int strcmp(char *, char *);
int main()
{
    int i;
    char str1[] = "C Programming";
    char str2[50];
    printf("Enter the second string.\n");
    fgets(str2, 49, stdin);
    i = strcmp(str1, str2);
    if(i==1)
        printf("These strigs are the same.\n");
    else
        printf("These strings are different.\n");
    return 0;
}
int strcmp(char *str1, char *str2)
{
    int i = 1;
    while(*str1 != '\0')
    {
        if(*str1 != *str2)
        {
            i = 0;
            break;
        }
        *str1++; str2++;
    }
    return i;
}