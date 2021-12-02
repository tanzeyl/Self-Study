#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  struct node *prev;
  int info;
  struct node *next;
} nodetype;

void push(nodetype **, nodetype **);
void searchAndUpdate(nodetype **, nodetype **);
void display(nodetype *);

int main()
{
  nodetype *head = NULL, *tail = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Search and update\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(&head, &tail); break;
      case 2: searchAndUpdate(&head, &tail); break;
      case 3: display(head); break;
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

void searchAndUpdate(nodetype **head, nodetype **tail)
{
  int key;
  nodetype *temp = NULL;
  temp = *head;
  printf("Enter the value to look for.\n");
  scanf("%d",&key);
  while(temp->info != key && temp->next != NULL)
    temp = temp->next;
  if(temp->info == key && temp->next != NULL)
  {
    *tail = temp;
    temp = temp->next;
    while(temp->next != NULL)
    {
      temp = temp->next;
      free(temp->prev);
    }
    free(temp);
  }
  else if (temp->info == key && temp->next == NULL)
  {
    if(temp->prev == NULL)
      printf("Can not delete the only node.\n");
    else
      printf("No nodes ahead to delete.\n");
  }
  else
    printf("Value not found.\n");
  (*tail)->next = NULL;
}

void display(nodetype *head)
{
  if (head == NULL)
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
