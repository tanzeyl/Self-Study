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
  q.Q = (int *)malloc(q.size+1 * sizeof(int));
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
  if ((q->rear+1)%q->size == q->front)
    printf("Queue is full,\n");
  else
  {
    q->rear = (q->rear + 1) % q->size;
    printf("Enter the value you want to enqueue,\n");
    scanf("%d",&q->Q[q->rear]);
  }
}

void dequeue(Queue *q)
{
  if (q->front == q->rear)
    printf("Queue is empty.\n");
  else
    q->front = (q->front + 1) % q->size;
}

void display(Queue q)
{
  while(q.front != q.rear)
  {
    q.front = (q.front + 1) % q.size;
    printf("%d ",q.Q[q.front]);
  }
  printf("\n");
}
