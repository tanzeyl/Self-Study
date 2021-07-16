#include <stdio.h>
typedef struct Student
{
  int roll_no;
  char name[50];
} sdata ;
void printdata(sdata);
sdata read_data(sdata *student);
int main()
{
  sdata *sptr, student;
  sptr = &student;
  read_data(sptr);
  printf("Name: %s\n",sptr->name);
    printf("Roll Number: %d\n",sptr->roll_no);
  return 0;
}
void printdata(sdata student)
{
  printf("Name is: %s.\n", student.name);
  printf("Roll number is: %d.\n", student.roll_no);
}
sdata read_data(sdata *student)
{
  printf("Enter the data.\n");
  scanf("%d%s",&(*student).roll_no,(*student).name);
}
