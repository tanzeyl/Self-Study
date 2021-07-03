/*
Name: Tanzeel Khan
Section: A
Roll Number: 61
Question: To check if a customer is elogible for loan.
*/
#include <stdio.h>
#include <string.h>
struct Customers
{
    int c_id;
    char c_name[30];
    int loan;
    int balance;
};
int main ()
{
    int i,n; 
    struct Customers arr[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the Customer Name.\n");
        fflush(stdin);
        fgets(arr[i].c_name, 29, stdin);
        fflush(stdin);
        printf("Enter Customer ID.\n");
        fflush(stdin);
        scanf("%d",&arr[i].c_id);
        fflush(stdin);
        printf("Enter the loan amount.\n");
        fflush(stdin);
        scanf("%d",&arr[i].loan);
        fflush(stdin);
        printf("Enter the balance amount.\n");
        fflush(stdin);
        scanf("%d",&arr[i].balance);
        fflush(stdin);
    }
    printf("Enter the Customer ID.\n");
    fflush(stdin);
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<5;i++)
    {
        if(n == arr[i].c_id)
        {
            if(arr[i].loan <= 200000 && arr[i].balance >= 100000)
                printf("Eligible for loan.\n");
            else
                printf("Not eligible.\n");
        }
        else
            printf("Customer ID not available.\n");
    }
  return 0;
}