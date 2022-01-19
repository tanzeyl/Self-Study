#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
  int info;
  struct node *next;
} Node;

Node * push(Node *, char);
int pop(Node **);
char * convert(char *);
int isOperand(char);
int precedence(char);
int evaluate(char *);

int main()
{
  char *a = NULL, *b = NULL;
  int c;
  a = (char *)malloc(100 * sizeof(char));
  printf("Enter the expression.\n");
  scanf("%s",a);
  b = convert(a);
  printf("The postfix form is:\n%s\n",b);
  c = evaluate(b);
  printf("The evaluated value is: %d.\n",c);
}

Node * push(Node *top, char c)
{
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  p->info = c;
  if (top == NULL)
    p->next = NULL;
  else
    p->next = top;
  top = p;
  return top;
}

int pop(Node **top)
{
  int a;
  Node *p = NULL;
  p = *top;
  *top = (*top)->next;
  a = p->info;
  free(p);
  return a;
}

char * convert(char infix[])
{
  int i = 0, j = 0;
  Node *top = NULL;
  char *postfix = NULL;
  postfix = (char *)malloc((strlen(infix)+1) * sizeof(char));
  while(infix[i] != '\0')
  {
    if (isOperand(infix[i]))
      postfix[j++] = infix[i++];
    else
    {
      if (top != NULL && (precedence(infix[i]) > precedence(top->info)))
        top = push(top, infix[i++]);
      else if (top == NULL)
        top = push(top, infix[i++]);
      else
        postfix[j++] = pop(&top);
    }
  }
  while(top != NULL)
  {
    postfix[j++] = top->info;
    top = top->next;
  }
  return postfix;
}

int isOperand(char a)
{
  if (a == '+' || a == '-' || a == '*' || a == '/')
    return 0;
  return 1;
}

int precedence(char a)
{
  if (a == '+' || a == '-')
    return 1;
  else if (a == '*' || a == '/')
    return 2;
  else
    return 0;
}

int evaluate(char postfix[])
{
  int i = 0, x1, x2, r;
  Node *top = NULL;
  while(postfix[i] != '\0')
  {
    if (isOperand(postfix[i]))
      top = push(top, postfix[i++]-'0');
    else
    {
      x1 = (int)pop(&top);
      x2 = (int)pop(&top);
      switch(postfix[i++])
      {
        case '+': r = x1+x2; top = push(top, r); break;
        case '-': r = x2-x1; top = push(top, r); break;
        case '*': r = x1*x2; top = push(top, r); break;
        case '/': r = x1/x2; top = push(top, r); break;
      }
    }
  }
  return pop(&top);
}
