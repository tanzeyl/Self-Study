#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

void enqueue(nodetype **, nodetype **);
void dequeue(nodetype **);
void display(nodetype *);

int main()
{
  nodetype *front = NULL, *rear = NULL;
  int ch;
  while(1)
  {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: enqueue(&front, &rear); break;
      case 2: dequeue(&front); break;
      case 3: display(front); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("1 to continue anything else to stop.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
}

void enqueue(nodetype **front, nodetype **rear)
{
  nodetype *p = NULL;
  int x;
  p = (nodetype *)malloc(sizeof(nodetype));
  if(p != NULL)
  {
    printf("Enter the value.\n");
    scanf("%d",&x);
    p->info = x;
    if(*rear == NULL)
      *rear = *front = p;
    else
    {
      (*rear)->next = p;
      *rear = p;
    }
    (*rear)->next = NULL;
  }
}

void dequeue(nodetype **front)
{
  if (*front == NULL)
    printf("Nothing to pop.\n");
  else
  {
    nodetype *temp = *front;
    printf("Value deuqeued is: %d.\n",(*front)->info);
    *front = (*front)->next;
    free(temp);
  }
}

void display(nodetype *front)
{
  if (front == NULL)
    printf("Nothing to display.\n");
  else
  {
    while (front != NULL)
    {
      printf("%d ",front->info);
      front = front->next;
    }
  }
}
