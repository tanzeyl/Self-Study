#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} Node;

void enqueue(Node **, Node **);
void dequeue(Node **, Node **);
void display(Node *);

int main()
{
  int ch;
  Node *front = NULL, *rear = NULL;
  while(1)
  {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1: enqueue(&front, &rear); break;
      case 2: dequeue(&front, &rear); break;
      case 3: display(front); break;
      default: printf("Invalid choice.\n");
    }
    printf("Enter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

void enqueue(Node **front, Node **rear)
{
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  printf("Enter the value to enqueue.\n");
  scanf("%d",&p->info);
  if (*front == NULL && *rear == NULL)
    *front = *rear = p;
  else
  {
    (*rear)->next = p;
    *rear = p;
  }
  p->next = NULL;
}

void dequeue(Node **front, Node **rear)
{
  Node *p = NULL;
  p = *front;
  if (p == NULL)
    printf("Queue is empty.\n");
  else
    *front = (*front)->next;
  free(p);
  if (*front == NULL)
    *rear = NULL;
}

void display(Node *front)
{
  if (front == NULL)
    printf("Queue is empty.\n");
    else
    {
      while(front != NULL)
      {
        printf("%d ",front->info);
        front = front->next;
      }
      printf("\n");
    }
}
