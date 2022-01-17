#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} Node;

Node * push(Node *);
Node * pop(Node *);
void peek(Node *);
void display(Node *);

int main()
{
  Node *top = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Pop\n3. Peek\n4. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(top); break;
      case 2: top = pop(top); break;
      case 3: peek(top); break;
      case 4: display(top); break;
      default: printf("Invalid choice.\n");
    }
    printf("\nEnter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

Node * push(Node *top)
{
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  printf("Enter the number you want to push.\n");
  scanf("%d",&p->info);
  if (top == NULL)
    p->next = NULL;
  else
    p->next = top;
  top = p;
  return top;
}

Node * pop(Node *top)
{
  if (top == NULL)
    printf("Stack is empty.\n");
  else
  {
    Node *p = NULL;
    p = top;
    printf("Element popped is: %d.\n",p->info);
    top = top->next;
    free(p);
  }
  return top;
}

void peek(Node *top)
{
  int a, b = 1;
  printf("Enter the index from the top, of the element you want to peek at.\n");
  scanf("%d",&a);
  while(b != a)
  {
    top = top->next;
    b++;
  }
  printf("The requested element is: %d.\n",top->info);
}

void display(Node *top)
{
  if (top == NULL)
    printf("Nothing to display.\n");
  else
  {
    while (top != NULL)
    {
      printf("%d ",top->info);
      top = top->next;
    }
  }
}
