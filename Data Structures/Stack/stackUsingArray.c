#include <stdio.h>
#define max 100

int push(int [], int);
int pop(int [], int);
void peek(int [], int);
int isEmpty(int);
int isFull(int);
void display(int[], int);

int main()
{
  int stack[max], ch, top = -1;
  while(1)
  {
    printf("1. Push\n2. Pop\n3. Peek\n4. Check if the stack is empty of full\n5. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(stack, top); break;
      case 2: top = pop(stack, top); break;
      case 3: peek(stack, top); break;
      case 4: if (isEmpty(top))
                printf("Stack is empty.\n");
              else if (isFull(top))
                printf("Stack is full.\n");
              else
                printf("Stack is partially used.\n");
              break;
      case 5: display(stack, top); break;
      default: printf("Invalid choice.\n");
    }
    printf("\nEnter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

int push(int stack[], int top)
{
  int x;
  if (top == max-1)
    printf("Not enough space.\n");
  else
  {
    top++;
    printf("Enter the number you want to push.\n");
    scanf("%d",&x);
    stack[top] = x;
  }
  return top;
}

int pop(int stack[], int top)
{
  if (top == -1)
    printf("Stack is empty.");
  else
  {
    printf("%d is popped from the stack.\n",stack[top]);
    top--;
  }
  return top;
}

void peek(int stack[], int top)
{
  int x;
  printf("Enter the index of the element from the top you want to see.\n");
  scanf("%d",&x);
  printf("The element is: %d.\n",stack[top-x]);
}

int isEmpty(int top)
{
  if (top == -1)
    return 1;
  return 0;
}

int isFull(int top)
{
  if (top == max-1)
    return 1;
  return 0;
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
  }
}
