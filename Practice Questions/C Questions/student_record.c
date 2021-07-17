#include <stdio.h>

typedef struct Student
{
  int roll_no;
  char name[50];
  char section;
  int marks[5];
  int perc;
} sdata;

int perc_calculator(int a[]);
void sort(int a[], int n);

int main()
{
  int n, i, j, k;
  printf("Enter the number of students.\n");
  scanf("%d",&n);
  sdata student[n];
  int perc[n];
  for(i=0;i<n;i++)
  {
    printf("Enter the name of student %d.\n",i+1);
    scanf("%s",student[i].name);
    printf("Enter the roll number of student %d.\n",i+1);
    scanf("%d",&student[i].roll_no);
    printf("Enter the section of student %d.\n",i+1);
    scanf(" %c",&student[i].section);
    for(j=0;j<5;j++)
    {
      printf("Enter the marks in subject %d of student %d.\n",j+1,i+1);
      scanf("%d",&student[i].marks[j]);
    }
  }
  for(i=0;i<n;i++)
    perc[i] = perc_calculator(student[i].marks);

  for(i=0;i<n;i++)
    student[i].perc = perc[i];

  sort(perc, n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if (perc[i] == student[j].perc)
      {
        printf("Name: %s\nRoll Number: %d\nSection: %c\n",student[j].name,student[j].roll_no,student[j].section);
        for(k=0;k<5;k++)
          printf("Marks in %d subject: %d.\n",k+1,student[j].marks[k]);
      }
    }
  }

  return 0;
}

int perc_calculator(int a[])
{
  int sum = 0, i;
  for(i=0;i<5;i++)
    sum = sum + a[i];
  return sum/5;
}

void sort(int a[], int n)
{
  int temp,i,j;
  for(i=0;i<n;i++)
  {
    for (j=i+1;j<n;j++)
    {
      if (a[i]>a[j])
      {
        temp =  a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
