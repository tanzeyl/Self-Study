#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype *push(nodetype *);
nodetype *pop(nodetype *);
void display(nodetype *);

int main()
{
  nodetype *top = NULL;
  int ch, x;
  while(1)
  {
    printf("1. Push\n2. Pop\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(top); break;
      case 2: top = pop(top); break;
      case 3: display(top); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("1 to continue anything else to stop.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
}

nodetype *push(nodetype *top)
{
  nodetype *p;
  int x;
  p = (nodetype *)malloc(sizeof(nodetype));
  if(p != NULL)
  {
    printf("Enter the value.\n");
    scanf("%d",&x);
    p->info = x;
    if(top == NULL)
    {
      top = p;
      top->next = NULL;
    }
    else
    {
      p->next = top;
      top = p;
    }
  }
  return top;
}

nodetype *pop(nodetype *top)
{
  nodetype *temp = top;
  if(top == NULL)
    printf("Nothing to pop.\n");
  else
  {
    printf("Element popped is: %d.\n",top->info);
    top = top->next;
    free(temp);
  }
  return top;
}

void display(nodetype *top)
{
  if(top == NULL)
    printf("Nothing to display.\n");
  else
  {
    while(top != NULL)
    {
      printf("%d \n1",top->info);
      top = top->next;
    }
  }
}
