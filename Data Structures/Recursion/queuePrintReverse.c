#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype * insert(nodetype *, nodetype *);
void revDisplay(nodetype *);

int main()
{
  nodetype *f = NULL, *r = NULL, *top = NULL, *p = NULL, *t = NULL;
  int ch;
  while(1)
  {
    printf("Enter 1 to insert a number to queue and 2 to print the queue in reverse order.\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: r = insert(r, f);
              if (f == NULL)
                t = f = r;
              break;
      case 2: while(1)
              {
                p = (nodetype *)malloc(sizeof(nodetype));
                p->info = t->info;
                p->next = top;
                top = p;
                if (t == r)
                  break;
                t = t->next;
              }
              revDisplay(top);
    }
    printf("Enter 1 to continue and 0 to exit.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

nodetype * insert(nodetype *r, nodetype *f)
{
  nodetype *p = NULL;
  int n;
  p = (nodetype *)malloc(sizeof(nodetype));
  if (p != NULL)
  {
    printf("\nEnter the number you want to insert.\n");
    scanf("%d",&n);
    p->info = n;
    if (r == NULL)
      r = p;
    else
    {
      r->next = p;
      r = p;
    }
    r->next = NULL;
    return r;
  }
}

void revDisplay(nodetype *top)
{
  printf("%d ",top->info);
  revDisplay(top->next);
  if (top->next == NULL)
    return;
}
