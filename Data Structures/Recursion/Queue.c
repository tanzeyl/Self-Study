#include <stdio.h>
#define MAX 5

int enqueue(int [], int, int);
int dequeue(int [], int, int);
void display(int [], int, int);

int main()
{
  int queue[MAX], front = -1, rear = -1, ch, i;
  while(1)
  {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: rear = enqueue(queue, front, rear);
              if(front == -1)
                front++;
              break;
      case 2: front = dequeue(queue, front, rear);
              if (front == -1)
                rear = -1;
              break;
      case 3: display(queue, front, rear); break;
      default: printf("Enter a valid choice.\n"); break;
    }
    printf("Enter 1 to continue.\n");
    scanf("%d",&i);
    if (i != 1)
      break;
  }
}

int enqueue(int queue[], int front, int rear)
{
  if ((rear+1)%MAX == front)
    printf("Queue is full.\n");
  else
  {
    int x;
    printf("Enter the number you want to insert.\n");
    scanf("%d",&x);
    rear = (rear+1)%MAX;
    queue[rear] = x;
  }
  return rear;
}

int dequeue(int queue[], int front, int rear)
{
  if(front == -1)
    printf("Queue is empty.\n");
  if (front == rear)
  {
    printf("Popped element is: %d.\n",queue[front]);
    front = -1;
  }
  else
  {
    printf("Popped element is: %d.\n",queue[front]);
    front = (front+1)%MAX;
  }
  return front;
}

void display(int queue[], int front, int rear)
{
  if(front == -1)
    printf("Queue is empty.\n");
  else
  {
    while(front != rear)
    {
      printf("%d ",queue[front]);
      front = (front+1)%MAX;
    }
    printf("%d\n",queue[front]);
  }
}
