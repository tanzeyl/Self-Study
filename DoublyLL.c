#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  struct node *prev;
  int info;
  struct node *next;
} nodetype;

void push(nodetype **, nodetype **);
void display(nodetype *, nodetype *);
void revDisplay(nodetype *, nodetype *);
void searchAndDelete(nodetype **, nodetype **);

int main()
{
  nodetype *head = NULL, *tail = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Dipslay\n3. Reverse Display\n4. Search and delete\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(&head, &tail); break;
      case 2: display(head, tail); break;
      case 3: revDisplay(head, tail); break;
      case 4: searchAndDelete(&head, &tail);
    }
    printf("\nEnter 1 to continue anything else to exit.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
}

void push(nodetype **head, nodetype **tail)
{
  int x;
  nodetype *p = NULL;
  p = (nodetype *)malloc(sizeof(nodetype));
  if (p != NULL)
  {
    printf("Enter the value to push.\n");
    scanf("%d",&x);
    p->info = x;
    if (*tail == NULL)
    {
      *head = *tail = p;
      (*tail)->prev = NULL;
    }
    else
    {
      (*tail)->next = p;
      p->prev = *tail;
      *tail = p;
    }
    p->next = NULL;
  }
}

void display(nodetype *head, nodetype *tail)
{
  if (tail == NULL)
    printf("Nothing to display.\n");
  else
  {
    while(head != NULL)
    {
      printf("%d ",head->info);
      head = head->next;
    }
  }
}

void revDisplay(nodetype *head, nodetype *tail)
{
  if (tail == NULL)
    printf("Nothing to display.\n");
  else
  {
    while(tail != NULL)
    {
      printf("%d ",tail->info);
      tail = tail->prev;
    }
  }
}

void searchAndDelete(nodetype **head, nodetype **tail)
{
  int x;
  nodetype *temp = NULL;
  temp = *head;
  printf("Enter the value to delete.\n");
  scanf("%d",&x);
  while(temp->info != x && temp->next != NULL)
    temp = temp->next;
  if(temp->next == NULL)
    printf("Value not found.\n");
  else
  {
    if (temp == *head)
    {
      *head = (*head)->next;
      (*head)->prev = NULL;
    }
    else if (temp == *tail)
    {
      *tail = (*tail)->prev;
      (*tail)->next = NULL;
    }
    else
    {
      (temp->prev)->next = temp->next;
      (temp->next)->prev = temp->prev;
    }
    free(temp);
  }
}
