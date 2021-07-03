/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To print all the palindrome sub-strings.
*/
#include <stdio.h>
#include <string.h>
void print_palin_sub(char *);
int main ()
{
    int i=0;
    char str[100];
    printf("Enter your string.\n");
    fgets(str, 99, stdin);
    while(str[i] != '\n') i++;
    str[i] = '\0';
    print_palin_sub(str);
    return 0;
}
void print_palin_sub(char *str)
{
    int i=0,j=0,k=0,m=0,n;
    while(i <= strlen(str))
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            n=1;
            j = i;
            for(j=i;j>=(j-k)/2;j--)
            {
                if (str[m] != str[j-1])
                {
                    n = 0;
                    break;
                }
                m++;
            }
            if (n == 1)
            {
                for(j=i;j>k;j--)
                {
                    printf("%s",str[j-1]);
                }
                printf("\n");
            }
            k = i;
            m = k+1;
        }
        i++;
    }
}