#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

int main()
{
  nodetype *r = NULL, *l = NULL, *p = NULL;
  int ch, x;
  while(1)
  {
    p = (nodetype *)malloc(sizeof(nodetype));
    if (p != NULL)
    {
      printf("Enter the value.\n");
      scanf("%d",&x);
      p->info = x;
      if (l == NULL && r == NULL)
        l = r = p;
      else
      {
        l->next = p;
        l = p;
      }
    }
    printf("Enter 1 to continue.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  l->next = NULL;
  p = r;
  while(p != NULL)
  {
    printf("%d ",p->info);
    p = p->next;
  }
}
