#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  struct node *prev;
  int info;
  struct node *next;
} Node;

void push(Node **, Node **);
void display(Node *, Node *);
void reverse(Node **, Node **);

int main()
{
  Node *head = NULL, *tail = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Display\n3. Reverse\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(&head, &tail); break;
      case 2: display(head, tail); break;
      case 3: reverse(&head, &tail); break;
      default: printf("Invalid choice.\n");
    }
    printf("\nEnter 1 to continue anything else to exit.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

void push(Node **head, Node **tail)
{
  int x;
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  if (p != NULL)
  {
    printf("Enter the value to push.\n");
    scanf("%d",&x);
    p->info = x;
    if (*tail == NULL)
    {
      *head = *tail = p;
      (*tail)->prev = NULL;
    }
    else
    {
      (*tail)->next = p;
      p->prev = *tail;
      *tail = p;
    }
    p->next = NULL;
  }
}

void display(Node *head, Node *tail)
{
  if (tail == NULL)
    printf("Nothing to display.\n");
  else
  {
    while(head != NULL)
    {
      printf("%d ",head->info);
      head = head->next;
    }
  }
}

void reverse(Node **head, Node **tail)
{
  Node *p = NULL, *t = NULL;
  p = *head;
  while(p != NULL)
  {
    t = p->next;
    p->next = p->prev;
    p->prev = t;
    p = p->next;
  }
  // t = *head;
  // *head = *tail;
  // *tail = t;
}
