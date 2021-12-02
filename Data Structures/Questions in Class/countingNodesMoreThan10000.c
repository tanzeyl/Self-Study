#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node * next;
} nodetype;

nodetype * push(nodetype *);
int countMoreThan10000(nodetype *);
void countMoreThan10000V2(nodetype *, int **);
void display(nodetype *);

int main()
{
    int ch, *temp = NULL, a = 0;
    temp = &a;
    nodetype *l = NULL, *r = NULL;
    while(1)
    {
        printf("Chose from the following options:\n1. Push\n2. Count nodes with info > 10,000 using return\n");
        printf("3. Count nodes with info > 10,000 without using return\n4. Display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: r = push(r);
                    if (l == NULL)
                        l = r;
                    break;
            case 2: printf("There are %d nodes with info > 10,000.\n",countMoreThan10000(l)); break;
            case 3: countMoreThan10000V2(l, &temp);
                    printf("There are %d nodes with info > 10,000.\n",a);
                    a = 0;
                    break;
            case 4: display(l); break;
            default: printf("Please enter a valid choice.\n");
        }
        printf("Enter 1 to continue and anything else to quit.\n");
        scanf("%d",&ch);
        if (ch != 1)
            break;
    }
    return 0;
}

nodetype * push(nodetype * r)
{
    nodetype *p = NULL;
    int x;
    p = (nodetype *)malloc(sizeof(nodetype));
    if (p != NULL)
    {
        printf("Enter the number you want to push.\n");
        scanf("%d",&x);
        p->info = x;
        if(r == NULL)
            r = p;
        else
        {
            r->next = p;
            r = p;
        }
        r->next = NULL;
    }
}

int countMoreThan10000(nodetype * l)
{
    int ctr = 0;
    if (l == NULL)
        printf("Nothing to count.\n");
    else
    {
        while(l != NULL)
        {
            if (l->info > 10000)
                ctr++;
            l = l->next;
        }
    }
    return ctr;
}

void countMoreThan10000V2(nodetype *p, int **t)
{
  if (p == NULL)
    printf("There is nothing to count.\n");
  else
  {
    while(p != NULL)
    {
      if (p->info > 10000)
        (**t)++;
      p = p->next;
    }
  }
}

void display(nodetype *p)
{
  if (p == NULL)
    printf("List is empty.\n");
  else
  {
    while(p != NULL)
    {
      printf("%d ",p->info);
      p = p->next;
    }
  }
}
