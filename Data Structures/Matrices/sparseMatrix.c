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
void display(Sparse);
int main()
{
  Sparse s;
  create(&s);
  display(s);
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

void display(Sparse s)
{
  int i, j, k = 0;
  for (i=0; i<s.m; i++)
  {
    for (j=0; j<s.n; j++)
    {
      if (i == s.e[k].i && j == s.e[k].j)
        printf("%d ",s.e[k++].x);
      else
        printf("0 ");
    }
    printf("\n");
  }
}
