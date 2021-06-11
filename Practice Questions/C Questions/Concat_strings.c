/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To concatenate two strings.
*/
#include <stdio.h>
#define MAX 100
void strct(char *, char *);
int main()
{
    int i=0,j=0;
    char str1[MAX] = "Tanzeel ";
    char str2[MAX] = "Khan";
    strct(str1, str2);
    printf("Str1 after being concatenated with str2 is: %s",str1);
    return 0;
}
void strct(char *str1, char *str2)
{
    int i=0,j=0;
    while(str1[j] != '\0') j++;
    while(str2[i] != '\0')
    {
        str1[j] = str2[i];
        i++; j++;
    }
    str1[j] = '\0';
}

