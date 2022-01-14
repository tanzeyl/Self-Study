#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct term
{ int coef, power; } Term;

typedef struct polynomial
{
  int n;
  Term *t;
} Polynomial;

void create(Polynomial *);
void evaluate(Polynomial, int);
void display(Polynomial);
Polynomial * add(Polynomial *, Polynomial *);

int main()
{
  int x, ch;
  Polynomial p1, p2, *sum = NULL;
  create(&p1);
  while(1)
  {
    printf("1. Evaluate\n2. Display\n3. Add\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Enter the value of x.\n");
              scanf("%d",&x);
              evaluate(p1, x);
              break;
      case 2: display(p1); break;
      case 3: printf("Enter the second polynomial.\n");
              create(&p2);
              sum = add(&p1, &p2);
              display(*sum);
              break;
      default: printf("Invalid choice.\n");
    }
    printf("Enter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

void create(Polynomial *p)
{
  int i;
  printf("Enter the number of terms in the polynomial.\n");
  scanf("%d",&p->n);
  p->t = (Term *)malloc(p->n * sizeof(Term));
  for (i=0; i<p->n; i++)
  {
    printf("Enter the coefficient and power for term %d.\n",i+1);
    scanf("%d%d",&p->t[i].coef,&p->t[i].power);
  }
}

void evaluate(Polynomial p, int x)
{
  int value = 0, i;
  for (i=0; i<p.n; i++)
    value = value + pow(x, p.t[i].power)*p.t[i].coef;
  printf("Value of this polynomial at x = %d is: %d.\n",x,value);
}

void display(Polynomial p)
{
  int i;
  for (i=0; i<p.n; i++)
  {
    if (p.t[i].power == 0)
      printf("%d",p.t[i].coef);
    else if (p.t[i].coef == 1)
      printf("x^%d",p.t[i].power);
    else if (p.t[i].power == 1)
      printf("%dx+",p.t[i].coef);
    else
      printf("%dx^%d+",p.t[i].coef,p.t[i].power);
  }
  printf("\n");
}

Polynomial * add(Polynomial *p1, Polynomial *p2)
{
  int i = 0, j = 0, k = 0;
  Polynomial *sum = NULL;
  sum = (Polynomial *)malloc(sizeof(Polynomial));
  sum->t = (Term *)malloc((p1->n+p2->n) * sizeof(Term));
  while (i <= p1->n && j <= p2->n)
  {
    if (p1->t[i].power > p2->t[j].power)
      sum->t[k++] = p1->t[i++];
    else if (p1->t[i].power < p2->t[j].power)
      sum->t[k++] = p2->t[j++];
    else
    {
      sum->t[k] = p1->t[i];
      sum->t[k++].coef = p1->t[i++].coef + p2->t[j++].coef;
    }
  }
  for(; i<p1->n; i++)
    sum->t[k++] = p1->t[i];
  for(; j<p2->n; j++)
    sum->t[k++] = p2->t[j];
    sum->n = k-1;
  return sum;
}
