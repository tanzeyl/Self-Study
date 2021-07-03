/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To find sub-strings.
*/
#include <stdio.h>
#include <string.h>
void sub_finder(char *, char *);
int main()
{
    int i = 0;
    char str1[100], str2[20];
    printf("Ente your string.\n");
    fgets(str1, 99, stdin);
    while(str1[i] != '\n') i++;
    str1[i] = '\0';
    printf("Enter your substring.\n");
    fgets(str2, 19, stdin);
    i=0;
    while(str2[i] != '\n') i++;
    str2[i] = '\0';
    sub_finder(str1,str2);
    return 0;
}
void sub_finder(char *str1, char *str2)
{
    int i=0,j=0,k=0,m=0,ctr=0;
    while(str1[i] != '\0') i++;
    while(str2[j] != '\0') j++;
    for(k=0;k<i;k++)
    {
        for(m=0;m<j;m++)
        {
            if(str1[k]==str2[m])
                ctr++;
        }
    }
    printf("%d",ctr/j);
}