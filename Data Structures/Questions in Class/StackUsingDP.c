#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

void push(nodetype **);
void pop(nodetype **);
void display(nodetype *);

int main()
{
  nodetype *top = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Pop\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(&top); break;
      case 2: pop(&top); break;
      case 3: display(top); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("1 to continue anything else to stop.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
}

void push(nodetype **top)
{
  int x;
  nodetype *p = NULL;
  p = (nodetype *)malloc(sizeof(nodetype));
  if(p != NULL)
  {
    printf("Enter the value.\n");
    scanf("%d",&x);
    p->info = x;
    p->next = *top;
    *top = p;
  }
}

void pop(nodetype **top)
{
  if (top == NULL)
    printf("Nothing to pop.\n");
  else
  {
    nodetype *temp = *top;
    printf("Value popped is: %d.\n",(*top)->info);
    *top = (*top)->next;
    free(temp);
  }
}

void display(nodetype *top)
{
  if (top == NULL)
    printf("Nothing to display.\n");
  else
  {
    while(top != NULL)
    {
      printf("%d ",top->info);
      top = top->next;
    }
  }
}
