#include <stdio.h>
#include <stdlib.h>

typedef struct Element
{ int i, j, x; } Element;

typedef struct Sparse
{
  int m, n, num;
  Element *e;
} Sparse;

void create(Sparse *);
void display(Sparse *);
Sparse * add(Sparse *, Sparse *);

int main()
{
  Sparse s1, s2, *sum = NULL;
  int ch;
  create(&s1);
  create(&s2);
  while(1)
  {
    printf("1. Display\n2. Add and display\n");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1: display(&s1); display(&s2); break;
      case 2: sum = add(&s1, &s2);
              display(sum); break;
      default: printf("Invalid choice.\n");
    }
    printf("Enter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

void create(Sparse *s)
{
  int i;
  printf("Enter the number of rows and columns of the sparse matrix.\n");
  scanf("%d%d",&s->m,&s->n);
  printf("Enter the number of non-zero elements.\n");
  scanf("%d",&s->num);
  s->e = (Element *)malloc(sizeof(Element)*s->num);
  printf("Enter all row, column and the non-zero elements.\n");
  for (i=0; i<s->num; i++)
    scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
}

void display(Sparse *s)
{
  int i, j, k = 0;
  for (i=0; i<s->m; i++)
  {
    for (j=0; j<s->n; j++)
    {
      if (i == s->e[k].i && j == s->e[k].j)
        printf("%d ",s->e[k++].x);
      else
        printf("0 ");
    }
    printf("\n");
  }
}

Sparse * add(Sparse *s1, Sparse *s2)
{
  int i = 0, j = 0, k = 0;
  Sparse *sum = NULL;
  sum = (Sparse *)malloc(sizeof(Sparse));
  if (s1->m != s2->m && s1->n != s2->n)
  {
    printf("These matrices can not be added.\n");
    return sum;
  }
  sum->m = s2->m; sum->n = s1->n;
  sum->e = (Element *)malloc((s1->num+s2->num)*sizeof(Element));
  while (i < s1->num && j < s2->num)
  {
    if (s1->e[i].i < s2->e[j].i)
      sum->e[k++] = s1->e[i++];
    else if (s1->e[i].i > s2->e[j].i)
      sum->e[k++] = s2->e[j++];
    else
    {
      if (s1->e[i].j < s2->e[j].j)
        sum->e[k++] = s1->e[i++];
      else if (s1->e[i].j > s2->e[j].j)
        sum->e[k++] = s2->e[j++];
      else
      {
        sum->e[k] = s1->e[i];
        sum->e[k++].x = s1->e[i++].x + s2->e[j++].x;
      }
    }
  }
  for(; i<s1->num; i++)
    sum->e[k++] = s1->e[i];
  for(; j<s2->num; j++)
    sum->e[k++] = s2->e[j];
  sum->num = k;
  return sum;
}
