/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print initials.
*/
#include <stdio.h>
void initials(char *);
int main ()
{
    char str[100];
    printf("Enter your string.\n");
    fgets(str, 99, stdin);
    initials(str);
    return 0;
}
void initials(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            printf("%c ",*str);
        *str++;
    }
}