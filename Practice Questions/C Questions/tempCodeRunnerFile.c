#include <stdio.h>
#include <string.h>
struct Students {
    char nam
    int rollno;
    int marks;
    char grade;
};
int main ()
{
    int n,i;
    printf("Enter the number of students.\n");
    scanf("%d",&n);
    struct Students arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student.\n");
        fgets(arr[i].name, 39, stdin);
        //fflush(stdin);
        printf("Enter the roll number.\n");
        scanf("%d",&arr[i].rollno);
        printf("Enter the marks.\n");
        scanf("%d",&arr[i].marks);
        printf("Enter the grade.\n");
        scanf("%c",&arr[i].grade);
    }
    for(i=0;i<n;i++)
    {
        printf("Name: %s.\nRoll Number: %d.\nMarks: %d.\nGrade: %c.\n",arr[i].name, arr[i].rollno, arr[i].marks, arr[i].grade);
    }
    return 0;
}