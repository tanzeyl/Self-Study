#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} Node;

void push(Node **, Node **);
void merge(Node **, Node **, Node **);
void display(Node *);

int main()
{
  Node *h1 = NULL, *t1 = NULL, *h2 = NULL, *t2 = NULL, *merged = NULL;
  int n1, i;
  printf("Enter the number of elements in first list.\n");
  scanf("%d",&n1);
  for (i=0; i<n1; i++)
    push(&h1, &t1);
  printf("Enter the number of elements in second list.\n");
  scanf("%d",&n1);
  for (i=0; i<n1; i++)
    push(&h2, &t2);
  merge(&h1, &h2, &merged);
  display(merged);
  return 0;
}

void push(Node **head, Node **tail)
{
  int x;
  Node *p = NULL, *t = NULL, *q = NULL;
  p = (Node *)malloc(sizeof(Node));
  printf("Enter the value to push.\n");
  scanf("%d",&x);
  p->info = x;
  if (*head == NULL)
  {
    *head = *tail = p;
    p->next = NULL;
  }
  else
  {
    t = *head;
    q = t->next;
    if (x < (*head)->info)
    {
      p->next = *head;
      *head = p;
    }
    else if (x > (*tail)->info)
    {
      (*tail)->next = p;
      p->next = NULL;
      *tail = p;
    }
    else
    {
      while(q->info < x)
      {
        t = t->next;
        q = q->next;
      }
      t->next = p;
      p->next = q;
    }
  }
}

void display(Node *head)
{
  while (head != NULL)
  {
    printf("%d ",head->info);
    head = head->next;
  }
}

void merge(Node **h1, Node **h2, Node **merge)
{
  Node *p = NULL, *q = NULL, *t = NULL, *r = NULL, *s = NULL;
  p = *h1; q = *h2;
  t = (Node *)malloc(sizeof(Node));
  r = *merge = t;
  if (p->info < q->info)
  {
    t->info = p->info;
    p = p->next;
  }
  else if (p->info > q->info)
  {
    t->info = q->info;
    q = q->next;
  }
  else
  {
    t->info = p->info;
    p = p->next;
    q = q->next;
  }
  while(p != NULL && q != NULL)
  {
    s = (Node *)malloc(sizeof(Node));
    r->next = s;
    r = s;
    if (p->info < q->info)
      {
      r->info = p->info;
      p = p->next;
    }
    else if (p->info > q->info)
    {
      r->info = q->info;
      q = q->next;
    }
    else
    {
      r->info = p->info;
      p = p->next;
      q = q->next;
    }
  }
  while(p != NULL)
  {
    s = (Node *)malloc(sizeof(Node));
    r->next = s;
    r = s;
    r->info = p->info;
    p = p->next;
  }
  while(q != NULL)
  {
    s = (Node *)malloc(sizeof(Node));
    r->next = s;
    r = s;
    r->info = q->info;
    q = q->next;
  }
  r->next = NULL;
}
