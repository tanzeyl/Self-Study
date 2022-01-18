#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
  char info;
  struct node *next;
} Node;

Node * push(Node *, char);
char pop(Node **);
char * convert(char *);
int isOperand(char);
int precedence(char);

int main()
{
  char *a = NULL, *b = NULL;
  a = (char *)malloc(100 * sizeof(char));
  printf("Enter the expression.\n");
  scanf("%s",a);
  b = convert(a);
  printf("The postfix form is:\n%s",b);
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

char pop(Node **top)
{
  char a;
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
  while(i < strlen(infix))
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
  printf("%d\n",strlen(postfix));
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
