#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype * push(nodetype *);
void revDisplay(nodetype*, nodetype *);

int main()
{
  nodetype *top = NULL, *t = NULL, *f = NULL, *r = NULL, *p = NULL;
  int ch;
  while(1)
  {
    printf("Enter 1 to push and 2 to print the stack in reverse order.\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(top); break;
      case 2: t = top;
              while (1)
              {
                p = (nodetype *)malloc(sizeof(nodetype));
                if (f == NULL && r == NULL)
                  f = r = p;
                p->info = t->info;
                p->next = r;
                r = p;
                if (t->next == NULL)
                  break;
                t = t->next;
              }
              revDisplay(f, r);
              break;
    }
    printf("\nEnter 1 to continue and 0 to exit.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

nodetype * push(nodetype * top)
{
  nodetype *p = NULL;
  int n;
  p = (nodetype *)malloc(sizeof(nodetype));
  if (p != NULL)
  {
    printf("Enter the number you want to push.\n");
    scanf("%d",&n);
    p->info = n;
    p->next = top;
    top = p;
  }
  return top;
}

void revDisplay(nodetype *f, nodetype *r)
{
  if (f == r)
  {
    printf("%d",r->info);
    return;
  }
  printf("%d ",r->info);
  revDisplay(f, r->next);
}
