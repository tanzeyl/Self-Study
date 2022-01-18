#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  char data;
  struct node *next;
} Node;

Node * push(Node *, char);
Node * pop(Node *);

int main()
{
  int i, flag = 0;
  Node *top = NULL;
  char a[100];
  printf("Enter the expression.\n");
  scanf("%s",a);
  for(i=0; i<strlen(a); i++)
  {
    if (a[i] == '(')
      top = push(top, '(');
    else if (a[i] == ')')
    {
      if (top == NULL)
      {
        printf("There is an closing brace without an opening brace.\n");
        flag = 1;
        break;
      }
      else
        top = pop(top);
    }
  }
  if (top == NULL && flag)
    printf("The paranthesis are not balanced.\n");
  else if (top == NULL && !flag)
    printf("The parantrhesis are balanced.\n");
  else
    printf("The paranthesis are unbalanced.\n");
}

Node * push(Node *top, char c)
{
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  p->data = c;
  if (top == NULL)
    p->next = NULL;
  else
    p->next = top;
  top = p;
  return top;
}

Node * pop(Node *top)
{
  Node *p = NULL;
  p = top;
  top = top->next;
  free(p);
  return top;
}
