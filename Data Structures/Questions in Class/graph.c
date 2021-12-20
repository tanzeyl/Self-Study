#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  struct node *link;
  char ch;
} node;

void create(node *[], int);
void display(node *[], int);

int main()
{
  node *p[10];
  int i, n;
  printf("Enter the number of nodes you want.\n");
  scanf("%d",&n);
  for (i=0; i<10; i++)
    *(p+i) = NULL;
  create(p, n);
  display(p, n);
  return 0;
}

void create(node *p[], int n)
{
  int i;
  node *q = NULL, *r = NULL;
  char c;
  if (n <= 10)
  {
    for (i=0; i<n; i++)
    {
      r = (node *)malloc(sizeof(node));
      r->link = NULL;
      *(p+i) = r;
      printf("Enter the character at node %d.\n",i+1);
      scanf(" %c",&c);
      (*(p+i))->ch = c;
      printf("Is this node connected to other nodes? (Y or N): ");
      scanf(" %c",&c);
      if (c == 'Y')
      {
        while(1)
        {
          q = (node *)malloc(sizeof(node));
          printf("Enter the character.\n");
          scanf(" %c",&c);
          q->ch = c;
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

void display(node *p[], int n)
{
  int i = 0;
  node *t = NULL;
  if (*p == NULL)
    printf("Nothing to display.\n");
  else
  {
    while (*(p+i) != NULL && i<n)
    {
      if ((*(p+i))->link != NULL)
      {
        t = (*(p+i))->link;
        printf("\n%c is connected to the following nodes:\n",(*(p+i))->ch);
        while (t != NULL)
        {
          printf("%c ",t->ch);
          t = t->link;
        }
      }
      else
        printf("\n%c is not connected to any nodes.\n",(*(p+i))->ch);
      i++;
    }
  }
}
