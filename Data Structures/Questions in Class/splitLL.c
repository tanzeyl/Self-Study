#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} node;

node * push(node *);
void splitLL(node *, node **, node **);
void display(node *);

int main()
{
  int ch;
  node *f = NULL, *l = NULL, *odd = NULL, *even = NULL;
  while(1)
  {
    printf("1. Push\n2. Split\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: l = push(l);
              if (f == NULL)
                f = l;
              break;
      case 2: splitLL(f, &odd, &even); break;
      case 3: display(f);
              printf("\n");
              display(odd);
              printf("\n");
              display(even);
              break;
    }
    printf("1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

node * push(node *l)
{
  int x;
  node *p = NULL;
  p = (node *)malloc(sizeof(node));
  if (p != NULL)
  {
    printf("Enter the number.\n");
    scanf("%d",&x);
    p->info = x;
    if (l == NULL)
      l = p;
    else
    {
      l->next = p;
      l = p;
    }
  }
  l->next = NULL;
  return l;
}

void splitLL(node *f, node **odd, node **even)
{
  int ctr = 0;
  node *p = NULL, *q = NULL, *r = NULL, *s = NULL;
  if (f == NULL) printf("Nothing to split.\n");
  else
  {
    while(f != NULL)
    {
      ctr++;
      if (ctr%2!=0)
      {
        p = (node *)malloc(sizeof(node));
        p->info = f->info;
        if (*odd == NULL)
        {
          *odd = p; r = p;
        }
        else
        {
          r->next = p;
          r = p;
        }
        r->next = NULL;
      }
      else
      {
        q = (node *)malloc(sizeof(node));
        q->info = f->info;
        if (*even == NULL)
        {
          *even = q; s = q;
        }
        else
        {
          s->next = q;
          s = q;
        }
        s->next = NULL;
      }
      f = f->next;
    }
  }
}

void display(node *p)
{
  if (p == NULL) printf("Nothing to count.\n");
  else
  {
    while(p != NULL)
    {
      printf("%d ",p->info);
      p = p->next;
    }
  }
}
