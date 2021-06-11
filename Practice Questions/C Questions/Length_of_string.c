/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find the length of a string.
*/
#include <stdio.h>
#define MAX 100
int strlen(char []);
int main()
{
    char string[MAX];
    char *ptr = NULL;
    printf("Enter the string whose length you want to find.\n");
    fgets(string, MAX-1, stdin);
    printf("Lengtyh of string is: %d.\n",strlen(string));
    return 0;
}
int strlen(char *string)
{
    int i=0;
    while(string[i] != '\0') i++;
    i--;
    return i;
}

