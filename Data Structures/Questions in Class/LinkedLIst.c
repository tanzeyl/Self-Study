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
    if(p != NULL)
    {
      printf("Enter the value.\n");
      scanf("%d",&x);
      p->info = x;
      if(l == NULL && r == NULL)
        l = r = p;
      else
      {
        r->next = p;
        r = p;
      }
      printf("Enter 1 to continue anything else to exit.\n");
      scanf("%d",&ch);
      if (ch != 1)
        break;
    }
  }
  r->next = NULL;
  p = l;
  while(p != NULL)
  {
    printf("%d ",p->info);
    p = p->next;
  }
}
