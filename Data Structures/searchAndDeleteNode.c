#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype * push(nodetype *);
void delKey(nodetype *, int);
void display(nodetype *);

int main()
{
  nodetype *top = NULL;
  int ch, n;
  while(1)
  {
    printf("Chose from the following operations:\n1. Push\n2. Delete a node\n3. Display the linked list.\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(top); break;
      case 2: printf("Enter the value you want to delete.\n");
              scanf("%d",&n);
              delKey(top, n); break;
      case 3: display(top); break;
      default: printf("Please enter a valid choice.\n");
    }
    printf("\nPress 1 to continue and 0 to exit.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

nodetype * push(nodetype *top)
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

void delKey(nodetype *top, int n)
{
  nodetype *t = top, *prev = NULL;
  if (t != NULL && t->info == n)
  {
    top = t->next;
    free(t);
    return;
  }
  while(t != NULL && t->info != n)
  {
    prev = t;
    t = t->next;
  }
  if (t == NULL)
    return;
  prev->next = t->next;
  free(t);
}

void display(nodetype *top)
{
  while(top != NULL)
  {
    printf("%d ",top->info);
    top = top->next;
  }
}
