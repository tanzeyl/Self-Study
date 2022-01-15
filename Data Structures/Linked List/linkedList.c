#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} Node;

void push(Node **, Node **);
void display(Node *);
void reverseDisplay(Node *);
void findMax(Node *);
void insert(Node **, Node **);
void delete(Node **, Node **);
void removeDuplicates(Node **, Node **);
void reverse(Node **, Node **);

int main()
{
  Node *head = NULL, *tail = NULL;
  int ch;
  while(1)
  {
    printf("1. Push\n2. Display\n3. Reverse display\n4. Find maximum element\n5. Insert\n6. Delete\n7. Remove duplicates\n8. Reverse the list\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(&head, &tail); break;
      case 2: display(head); break;
      case 3: reverseDisplay(head); break;
      case 4: findMax(head); break;
      case 5: insert(&head, &tail); break;
      case 6: delete(&head,&tail); break;
      case 7: removeDuplicates(&head,&tail); break;
      case 8: reverse(&head, &tail); break;
      default: printf("Invalid choice.\n");
    }
    printf("\nEnter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

void push(Node **head, Node **tail)
{
  int n;
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  if (p != NULL)
  {
    printf("Enter the value to push.\n");
    scanf("%d",&n);
    p->info = n;
    if (*tail == NULL)
      *head = *tail = p;
    else
    {
      (*tail)->next = p;
      *tail = p;
    }
    p->next = NULL;
  }
}

void display(Node *head)
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

void reverseDisplay(Node *head)
{
  if (head == NULL)
    return;
  reverseDisplay(head->next);
  printf("%d ",head->info);
}

void findMax(Node *head)
{
  if (head == NULL)
    printf("List is empty.\n");
  else
  {
    int m = head->info;
    head = head->next;
    while(head != NULL)
    {
      if (head->info > m)
        m = head->info;
      head = head->next;
    }
    printf("Maximum element is: %d.\n",m);
  }
}

void insert(Node **head, Node **tail)
{
  int x, pos, i = 1;
  Node *p = NULL, *t = NULL, *q = NULL;
  if (*head != NULL)
  {
    p = *head;
    q = p->next;
    printf("Enter the number and it's position.\n");
    scanf("%d%d",&x,&pos);
    t = (Node *)malloc(sizeof(Node));
    t->info = x;
    if (pos == 1)
    {
      t->next = (*head);
      (*head) = t;
    }
    else
    {
      while (i < pos - 1)
      {
        p = p->next;
        q = q->next;
        i++;
      }
      t = (Node *)malloc(sizeof(Node));
      t->info = x;
      p->next = t;
      t->next = q;
    }
  }
}

void delete(Node **head, Node **tail)
{
  Node *p = NULL, *q = NULL;
  p = *head;
  int x;
  printf("Enter the number you want to delete.\n");
  scanf("%d",&x);
  if (x == (*head)->info)
    *head = (*head)->next;
  else
  {
    q = p;
    p = p->next;
    while(x != p->info && p->next != NULL)
    {
      p = p->next;
      q = q->next;
    }
    if (p->info == x && p->next != NULL)
      q->next = p->next;
    else
      {
        q->next = NULL;
        *tail = q;
      }
  }
  free(p);
}

void removeDuplicates(Node **head, Node **tail)
{
  Node *p = NULL, *q = NULL;
  if (*head == NULL)
    printf("List is empty.\n");
  else
  {
    q = *head;
    p = q->next;
    while(p->next != NULL)
    {
      if (p->info != q->info)
      {
        p = p->next;
        q = q->next;
      }
      else
      {
        q->next = p->next;
        free(p);
        p = q->next;
      }
    }
    if (p->info == q->info)
    {
      q->next = NULL;
      *tail = q;
      free(p);
    }
  }
}

void reverse(Node **head, Node **tail)
{
  Node *p = NULL, *q = NULL, *r = NULL;
  p = *head;
  while(p != NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  p = *head;
  *head = *tail;
  *tail = p;
}
