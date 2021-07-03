/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To change uppercase characters to lowercase.
*/
#include <stdio.h>
void case_convert(char *);
int main()
{
    char str[100];
    printf("Enter your string.\n");
    fgets(str, 99, stdin);
    case_convert(str);
    printf("String after converting the case is:\n%s",str);
    return 0;
}
void case_convert(char *str)
{
    while(*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            *str = *str + 32;
        *str++;
    }
}