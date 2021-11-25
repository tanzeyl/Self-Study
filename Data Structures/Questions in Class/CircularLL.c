#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

void push(nodetype *);

int main()
{
  nodetype *last = NULL;
  push(last);
  return 0;
}

void push(nodetype *last)
{
  nodetype *p = NULL;
  int x;
  printf("Enter the value.\n");
  scanf("%d",&x);
  p->info = x;
  if(last == NULL)
  {
    last = p;
    last->next = p;
  }
  else
  {
    p->next = last->next;
    last->next = p;
  }
}
