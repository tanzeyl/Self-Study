#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number, time;
  struct node *next;
} nodetype;

void create(nodetype **, nodetype **, int);
void startScheduling(nodetype *,nodetype *, int);

int main()
{
  int n, t;
  nodetype *left = NULL, *right = NULL;
  printf("Enter the number of processes you want to schedule.\n");
  scanf("%d",&n);
  printf("Enter the time slot allocated for each process.\n");
  scanf("%d",&t);
  create(&left, &right, n);
  printf("Processor scheduling is starting.\n\n");
  startScheduling(left, right, t);
  return 0;
}

void create(nodetype **left, nodetype **right, int n)
{
  int i, t;
  nodetype *p = NULL;
  for(i=1; i<=n; i++)
  {
    p = (nodetype *)malloc(sizeof(nodetype));
    p->number = i;
    printf("Enter the time for process %d.\n",p->number);
    scanf("%d",&p->time);
    if (*right == NULL)
      *left = *right = p;
    else
      p->next = (*right)->next;
    (*right)->next = p;
    (*right) = p;
  }
}

void startScheduling(nodetype *left, nodetype *right, int t)
{
  int ctr = 0;
  nodetype *p = left, *q = left;;
  while(p != NULL)
  {
    if (q->time > t)
      q->time = q->time - t;
    else if (q->time <= t)
    {
      if (left == right)
      {
        printf("Process %d has been completed after %d nano seconds.\n",p->number, ctr*t);
        free(p); break;
      }
      if (q == left)
      {
        left = left->next;
        right->next = left;
      }
      else if (q == right)
      {
        right = p;
        right->next = left;
      }
      else
        p->next = q->next;
      p = q;
      q = q->next;
      printf("Process %d has been completed after %d nano seconds.\n",p->number, ctr*t);
      free(p);
    }
    ctr++;
    p = q;
    q = q->next;
  }
}
