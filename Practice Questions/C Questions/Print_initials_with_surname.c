/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print initials with surname.
*/
#include <stdio.h>
#include <string.h>
void init_surname(char *);
int main ()
{
    int i=0;
    char str[100];
    printf("Enter your string.\n");
    fgets(str, 99, stdin);
    while(str[i] != '\n') i++;
    str[i] = '\0';
    init_surname(str);
    return 0;
}
void init_surname(char *str)
{
    int i=0, j, count=0, ctr = 0;;
    char str1[100];
    j = strlen(str) - 1;
    while (str[j] != ' ') j--;
    j++;
    while(str[i] != '\0')
    {
        if (str[i] == ' ')
            count++;
        i++;
    }
    i=0;
    while(str[j] != '\0')
    {
        str1[i] = str[j];
        i++; j++;
    }
    i=0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c ",str[i]);
            ctr++;
        }
        if (ctr == count)
            break;
        i++;
    }
    printf(" %s",str1); 
}
