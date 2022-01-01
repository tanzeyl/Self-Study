#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  struct node *link;
  int info, weight;
} node;

void create(node *[], int);
void kruskal(node *[], int);

int main()
{
  node *p[10];
  int i, n, e;
  node *t = NULL;
  for (i=0; i<10; i++)
    *(p+i) = NULL;
  printf("Enter the number of nodes you want.\n");
  scanf("%d",&n);
  printf("Enter the number of edges.\n");
  scanf("%d",&e);
  int edges[e][3];
  create(p, n);
  for(i=0; i<n; i++)
    printf("%d ",p[i]->weight);
  for (i=0; i<n; i++)
  {
    t = (*(p+i))->link;
    while (t != NULL)
    {
      edges[i][0] = (*(p+i))->info;
      edges[i][1] = t->info;
      edges[i][2] = t->weight;
      t = t->link;
    }
  }
  for (i=0; i<e; i++)
  {
    for (int j=0; j<3; j++)
      printf("%d ",edges[i][j]);
    printf("\n");
  }
  //kruskal(p, n);
  return 0;
}

void create(node *p[], int n)
{
  int i, x;
  node *q = NULL, *r = NULL;
  char c;
  if (n <= 10)
  {
    for (i=0; i<n; i++)
    {
      r = (node *)malloc(sizeof(node));
      r->link = NULL;
      r->weight = 0;
      *(p+i) = r;
      printf("Enter the value at node %d.\n",i+1);
      scanf("%d",&x);
      (*(p+i))->info = x;
      printf("Is this node connected to other nodes? (Y or N): ");
      scanf(" %c",&c);
      if (c == 'Y')
      {
        while(1)
        {
          q = (node *)malloc(sizeof(node));
          printf("Enter the number.\n");
          scanf("%d",&x);
          q->info = x;
          printf("Enter the weight.\n");
          scanf("%d",&x);
          q->weight = x;
          if ((*(p+i))->link == NULL)
            q->link = NULL;
          else
            q->link = (*(p+i))->link;
          (*(p+i))->link = q;
          printf("Do you want to add more links to this node? (Y or N): ");
          scanf(" %c",&c);
          if (c != 'Y')
            break;
        }
      }
      else
        (*(p+i))->link = NULL;
    }
  }
  else
    printf("Not enough space.\n");
}
