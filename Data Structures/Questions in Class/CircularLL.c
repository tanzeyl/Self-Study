#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype * push(nodetype *);
void countNodes(nodetype *, nodetype *);

int main()
{
  nodetype *first = NULL, *last = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Count nodes\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: last = push(last);
              if (first == NULL)
                first = last;
              break;
      case 2: countNodes(first, last); break;
      default: printf("Please enter a valid choice.\n");
    }
    printf("\nEnter 1 to continue and anything else to exit.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
  return 0;
}

nodetype * push(nodetype *last)
{
  nodetype *p = NULL;
  int x;
  p = (nodetype *)malloc(sizeof(nodetype));
  if (p != NULL)
  {
    printf("Enter the value.\n");
    scanf("%d",&x);
    p->info = x;
    if(last == NULL)
      last = p;
    else
    {
      p->next = last->next;
    }
    last->next = p;
    return p;
  }
}

void countNodes(nodetype *first, nodetype *last)
{
  int ctr = 0;
  while(first != last)
  {
    ctr++;
    first = first->next;
  }
  ctr++;
  printf("There are %d nodes in this circular linked list.\n",ctr);
}
