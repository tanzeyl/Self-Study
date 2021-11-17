#include <stdio.h>
#define MAX 10

int push(int [], int);
int pop(int [], int);
void display(int [], int);

int main()
{
  int stack[MAX], top = -1, ch, i;
  while(1)
  {
    printf("1. Push\n2. Pop\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(stack, top); break;
      case 2: top = pop(stack, top); break;
      case 3: display(stack, top); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("Enter 1 to continue.\n");
    scanf("%d",&i);
    if(i != 1)
      break;
  }
}

int push(int stack[], int top)
{
  int x;
  if (top == MAX-1)
    printf("Stack is full.\n");
  else
  {
    printf("Enter the element you want to enter.\n");
    scanf("%d",&x);
    top++;
    stack[top] = x;
    return top;
  }
}

int pop(int stack[], int top)
{
  if(top == -1)
    printf("Stack is empty.\n");
  else
  {
    printf("The popped element is: %d.\n",stack[top]);
    top--;
    return top;
  }
}

void display(int stack[], int top)
{
  if (top == -1)
    printf("Nothing to display.\n");
  else
  {
    while(top >= 0)
    {
      printf("%d ",stack[top]);
      top--;
    }
    printf("\n");
  }
}
