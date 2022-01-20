#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
  int size, front, rear, *Q;
} Queue;

void enqueue(Queue *);
void dequeue(Queue *);
void display(Queue);

int main()
{
  Queue q;
  int ch;
  q.front = -1;
  q.rear = -1;
  q.Q = (int *)malloc(q.size * sizeof(int));
  printf("Enter the number of elements you want in your queue.\n");
  scanf("%d",&q.size);
  while(1)
  {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1: enqueue(&q); break;
      case 2: dequeue(&q); break;
      case 3: display(q); break;
      default: printf("Invalid choice.\n");
    }
    printf("Enter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

void enqueue(Queue *q)
{
  if (q->rear > q->size-1)
    printf("Not enough memory.\n");
  else
  {
    printf("Enter the value to enqueue.\n");
    scanf("%d",&q->Q[q->rear++]);
  }
}

void dequeue(Queue *q)
{
  if (q->front == q->rear)
    printf("Queue is empty.\n");
  else
    q->front++;
  if (q->front == q->rear)
    q->front = q->rear = -1;
}

void display(Queue q)
{
  int i;
  printf("Size: %d\nFront: %d\nRear: %d\n",q.size,q.front,q.rear);
  for (i=q.front; i<q.rear; i++)
    printf("%d ",q.Q[i]);
  printf("\n");
}
