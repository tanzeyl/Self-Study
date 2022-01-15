#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} Node;

void push(Node **, Node **);
void display(Node *);

int main()
{
  Node *head = NULL, *tail = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(&head, &tail); break;
      case 2: display(head); break;
      default: printf("Invalid choice.\n");
    }
    printf("\nEnter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

void push(Node **head, Node **tail)
{
  int x;
  Node *p = NULL, *t = NULL, *q = NULL;
  p = (Node *)malloc(sizeof(Node));
  printf("Enter the value to push.\n");
  scanf("%d",&x);
  p->info = x;
  if (*head == NULL)
  {
    *head = *tail = p;
    p->next = NULL;
  }
  else
  {
    t = *head;
    q = t->next;
    if (x < (*head)->info)
    {
      p->next = *head;
      *head = p;
    }
    else if (x > (*tail)->info)
    {
      (*tail)->next = p;
      p->next = NULL;
      *tail = p;
    }
    else
    {
      while(q->info < x)
      {
        t = t->next;
        q = q->next;
      }
      t->next = p;
      p->next = q;
    }
  }
}

void display(Node *head)
{
  while (head != NULL)
  {
    printf("%d ",head->info);
    head = head->next;
  }
}
