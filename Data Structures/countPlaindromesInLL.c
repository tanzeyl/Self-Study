#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int info;
  struct node *next;
} nodetype;

nodetype * push(nodetype *);
void countPalins(nodetype *);

int main()
{
  nodetype *top = NULL;
  int ch;
  while(1)
  {
    printf("Chose from the following operations:\n1. Push\n2. Count palindromes\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: top = push(top); break;
      case 2: countPalins(top); break;
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

void countPalins(nodetype *top)
{
  int t, ctr = 0, rem, rev = 0;
  while(top != NULL)
  {
    t = top->info;
    while(t)
    {
      rem = t % 10;
      rev = rev * 10 + rem;
      t = t / 10;
    }
    if (rev == top->info)
      ctr++;
    top = top->next;
    rev = 0;
  }
  printf("There are %d palindromes.\n",ctr);
}
