/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print the reverse of each word.
*/
#include <stdio.h>
#include <string.h>
void print_rev_words(char *);
int main ()
{
    int i=0;
    char str[100];
    printf("Enter your string.\n");
    fgets(str, 99, stdin);
    while(str[i] != '\n') i++;
    str[i] = '\0';
    print_rev_words(str);
    return 0;
}
void print_rev_words(char *str)
{
    int i=0,j=0,k=0;
    while(i <= strlen(str))
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            j = i;
            for(j=i;j>k;j--)
            {
                printf("%c",str[j-1]);
            }
            printf(" ");
            k = i;
        }
        i++;
    }
}