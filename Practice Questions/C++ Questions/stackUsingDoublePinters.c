#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

void push(nodetype **, int);
void pop(nodetype **);
void display(nodetype *);

int main()
{
  nodetype *top = NULL;
  int num, option;
  while(1)
  {
    printf("Perform the following operations:\n1. Push\n2. Pop\n3. Display\n");
    scanf("%d",&option);
    if(option == 1)
    {
      printf("enter the number you want to push.\n");
      scanf("%d",&num);
      push(&top, num);
    }
    else if (option == 2)
    {
      if (top == NULL)
        printf("Stack is empty.\n");
      else
        pop(&top);
    }
    else if (option == 3)
      display(top);
    else
      printf("Please enter a valid option.\n");
    printf("Enter 1 to continue and 0 to exit.\n");
    scanf("%d",&option);
    if(option == 0)
      break;
  }
}

void push(nodetype **top, int n)
{
  nodetype *p = NULL;
  p = (nodetype *)malloc(sizeof(nodetype));
  if (p != NULL)
  {
    p->info = n;
    p->next = *top;
    *top = p;
  }
}

void pop(nodetype **top)
{
  nodetype **temp = NULL;
  temp = top;
  printf("Element popped is: %d.\n", (*top)->info);
  *top = (*top)->next;
  free(temp);
}

void display(nodetype *top)
{
  while (top != NULL)
  {
    printf("%d ",top->info);
    top = top->next;
  }
}
