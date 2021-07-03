/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To check if a string is a palindrome.
*/
#include <stdio.h>
#include <string.h>
int palin_check(char *);
int main()
{
    int res;
    char str[100];
    printf("Enter a string.\n");
    scanf("%s",str);
    res = palin_check(str);
    if(res == 1)
        printf("This string is a palindrome.\n");
    else
        printf("This string is not a palindrome,\n");
    return 0;
}
int palin_check(char *str)
{
    int i=0,j,k=1;
    j = strlen(str) - 1;
    while (i <= strlen(str)/2)
    {
        if (str[i] != str[j])
        {
            k = 0;
            break;
        }
        i++; j--;
    }
    return k;
}