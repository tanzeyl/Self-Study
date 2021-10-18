#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype * push(nodetype *);
nodetype * splitLL(nodetype *);
void display(nodetype *, nodetype *);

int main()
{
  nodetype *top = NULL, *split = NULL;
  int ch;
  while(1)
  {
    printf("Chose from the following operations:\n1. Push\n2. Split the Linked List\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(top); break;
      case 2: split = splitLL(top); break;
      case 3: display(top, split); break;
      default: printf("Please chose from the given operations.\n");
    }
    printf("\nPress 1 to continue and 0 to exit.\n");
    scanf("%d",&ch);
    if(ch != 1)
      break;
  }
  return 0;
}

nodetype * push(nodetype *top)
{
  nodetype *p = NULL;
  int n;
  p = (nodetype *)malloc(sizeof(nodetype *));
  if (p != NULL)
  {
    printf("Enter the number you want to push.\n");
    scanf("%d",&n);
    p->info = n;
    p->next = top;
    top = p;
  }
  return top;
}

nodetype * splitLL(nodetype *top)
{
  nodetype *t = top, *query = top, *prev = top;
  int n;
  printf("This is the current linked list.\n");
  while(t != NULL)
  {
    printf("%d ",t->info);
    t = t->next;
  }
  printf("\nEnter the value you want to split at.\n");
  scanf("%d",&n);
  while(query->info != n)
  {
    prev = query;
    query = query->next;
  }
  prev->next = NULL;
  return query;
}
 void display(nodetype *top, nodetype *split)
 {
   int ch;
   if (split == NULL)
   {
     while(top != NULL)
     {
       printf("%d ",top->info);
       top = top->next;
     }
   }
   else
   {
     printf("This is the first part of the linked list after splitting.\n");
     while(split != NULL)
     {
       printf("%d ",split->info);
       split = split->next;
     }
     printf("\nThis is the second part of the linked list after splitting.\n");
     while(top != NULL)
     {
       printf("%d ",top->info);
       top = top->next;
     }
   }
 }
