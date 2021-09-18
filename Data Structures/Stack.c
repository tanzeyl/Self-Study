#include <stdio.h>
#define MAX 10

int push(int [], int);
int pop(int [], int);
void display(int [], int);
void peek(int [], int);

int main()
{
  int stack[MAX], top = -1, ch;
  while (ch != 5)
  {
    printf("Enter the operation you want to do:\n1. Push\n2. Pop\n3. Display\n4. Peek.\n5. Exit.\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(stack, top); break;
      case 2: top = pop(stack, top); break;
      case 3: display(stack, top); break;
      case 4: peek(stack, top); break;
    }
  }
  return 0;
}

int push(int stack[], int top)
{
  int x;
  if (top == MAX-1)
    printf("There is no space to push elements in the stack.\n");
  else
  {
    printf("Enter the number you want to push.\n");
    scanf("%d",&x);
    top++;
    stack[top] = x;
  }
  return top;
}

int pop(int stack[], int top)
{
  int x = 0;
  if (top == -1)
  {
    printf("There is nothing to pop.\n");
    return top;
  }
  else
  {
    x = stack[top];
    printf("The element popped is: %d.\n",x);
    top--;
  }
  return top;
}

void display(int stack[], int top)
{
  if (top == -1)
    printf("There is nothing to display.\n");
  else
  {
    printf("This is the current stack:\n");
    while(top >= 0)
    {
      printf("%d ",stack[top]);
      top--;
    }
    printf("\n");
  }
}

void peek(int stack[], int top)
{
  if (top == -1)
    printf("There is no element to peek.\n");
  else
  {
    printf("Last entered element is: %d\n",stack[top]);
  }
}
