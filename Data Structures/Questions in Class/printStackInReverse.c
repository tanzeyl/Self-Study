#include <stdio.h>
#define MAX 100

int push(int [], int, int);
int pop(int [], int);
void printStack(int [], int);

int main()
{
  int top = -1, ch, stack[MAX], x;
  while(1)
  {
    printf("1. Push\n2. Pop\n3. Print reverse\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Enter the number you want to push.\n");
              scanf("%d",&x);
              top = push(stack, top, x); break;
      case 2: top = pop(stack, top); break;
      case 3: printStack(stack, top); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("Enter 1 to continue and anything else to quit.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
  return 0;
}

int push(int stack[], int top, int x)
{
  top++;
  stack[top] = x;
  return top;
}

int pop(int stack[], int top)
{
  top--;
  return top;
}

void printStack(int stack[], int top)
{
  int x;
  if (top == -1)
    return;
  x = stack[top];
  top = pop(stack, top);
  printStack(stack, top);
  printf("%d ",x);
  top = push(stack, top, x);
}
