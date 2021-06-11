/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To count the number of words in a sentence.
*/
#include <stdio.h>
int num_of_words(char *);
int main ()
{
    int res;
    char str[100];
    printf("Enter your string.\n");
    fgets(str, 99, stdin);
    res = num_of_words(str);
    printf("The number of words in the entered string is: %d.\n",res);
    return 0;
}
int num_of_words(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
            count++;
        *str++;
    }
    return count + 1;
}