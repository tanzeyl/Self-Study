#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype * enqueue(nodetype *);
nodetype * dequeue(nodetype *, nodetype *);
void display(nodetype *);

int main()
{
  nodetype *front = NULL, *rear = NULL;
  int ch, x;
  while(1)
  {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: rear = enqueue(rear);
              if(front == NULL)
                front = rear;
                break;
      case 2: front = dequeue(front, rear); break;
      case 3: display(front); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("1 to continue anything else to stop.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
}

nodetype * enqueue(nodetype *rear)
{
  nodetype *p = NULL;
  int x;
  p = (nodetype *)malloc(sizeof(nodetype));
  if(p != NULL)
  {
    printf("Enter the value.\n");
    scanf("%d",&x);
    p->info = x;
    if (rear == NULL)
      rear = p;
    else
    {
      rear->next = p;
      rear = p;
    }
    rear->next = NULL;
    return rear;
  }
}

nodetype * dequeue(nodetype *front, nodetype *rear)
{
  nodetype *p;
  if(front == NULL && rear == NULL)
    printf("Nothing to remove.\n");
  else
  {
    printf("Dequeued element is: %d.\n",front->info);
    p = front;
    if (front == rear)
      front = NULL;
    else
      front = front->next;
    free(p);
    return front;
  }
}

void display(nodetype *front)
{
  if(front == NULL)
    printf("Nothing to display.\n");
  else
  {
    while(front != NULL)
    {
      printf("%d ",front->info);
      front = front->next;
    }
  }
}
