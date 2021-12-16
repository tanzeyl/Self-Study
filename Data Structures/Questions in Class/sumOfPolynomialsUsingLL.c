#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int coeff, power;
  struct node * next;
} node;

void create(node **, node **, int);
node * sumPoly(node *, node *);
void polyDisplay(node *);

int main()
{
  int n1, n2;
  node *l1 = NULL, *r1 = NULL, *l2 = NULL, *r2 = NULL, *p = NULL;
  printf("Enter the number of terms in first polynomial.\n");
  scanf("%d",&n1);
  printf("Enter the number of terms in second polynomial.\n");
  scanf("%d",&n2);
  printf("Enter information for first polynomial.\n");
  create(&l1, &r1, n1);
  printf("Enter information for second polynomial.\n");
  create(&l2, &r2, n2);
  p = sumPoly(l1, l2);
  polyDisplay(p);
}

void create(node **l, node **r, int n)
{
  int i;
  node *p = NULL;
  for(i=n; i>0; i--)
  {
    p = (node *)malloc(sizeof(node));
    printf("Enter the coefficient for power %d.\n",i-1);
    scanf("%d",&p->coeff);
    p->power = i-1;
    if (*l == NULL)
      *l = *r = p;
    else
    {
      (*r)->next = p;
      *r = p;
    }
  }
  (*r)->next = NULL;
}

node * sumPoly(node *l1, node *l2)
{
  node *t1 = l1, *t2 = l2,*p1 = l1, *p2 = l2, *final = NULL;
  if (t1->power > t2->power)
  {
    l1 = l1->next;
    t1->next = l2;
    p1 = l1;
    p2 = l2;
    final = t1;
  }
  else if (t2->power > t1->power)
  {
    l2 = l2->next;
    t2->next = l1;
    p2 = l1;
    p1 = l2;
    final = t2;
  }
  else
    final = p2;
  while(p1 != NULL)
  {
    p2->coeff = p2->coeff + p1->coeff;
    p1 = p1->next;
    p2 = p2->next;
  }
  return final;
}

void polyDisplay(node *p)
{
  while(p != NULL)
  {
    printf("%dx^%d ",p->coeff, p->power);
    p = p->next;
  }
}
