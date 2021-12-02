#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node * next;
} nodetype;

nodetype * push(nodetype *);
nodetype * searchAndDelete(nodetype *, nodetype *);
void display(nodetype *);

int main()
{
    int ch;
    nodetype *l = NULL, *r = NULL;
    while(1)
    {
        printf("Chose from the following options:\n1. Push\n2. Search and delete all nodes to the right.\n3. Display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: r = push(r);
                    if (l == NULL)
                        l = r;
                    break;
            case 2: r = searchAndDelete(l,r); break;
            case 3: display(l); break;
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
    return r;
}

nodetype * searchAndDelete(nodetype *l, nodetype *r)
{
    nodetype *t = NULL, *p = NULL;
    p = l;
    int key;
    printf("Enter the number you want to look for.\n");
    scanf("%d",&key);
    while(l->info != key && l->next != NULL)
    {
        p = l;
        l = l->next;
    }
    if(l->info == key && l->next != NULL)
    {
        t = l->next;
        if (p == l)
            p = p->next;
        else
            p = (p->next)->next;
        while(t != NULL)
        {
            t = t->next;
            free(p);
            p = t;
        }
        l->next = NULL;
        return l;
    }
    else if (l->info == key && l->next == NULL)
    {
        printf("No nodes ahead to delete.\n");
        return l;
    }
    else if(l->info != key && l->next == NULL)
    {
        printf("%d is not in the list.\n", key);
        return r;
    }
}

void display(nodetype *t)
{
    if(t == NULL)
        printf("Nothing to display.\n");
    else
    {
        while(t != NULL)
        {
            printf("%d ",t->info);
            t = t->next;
        }
        printf("\n");
    }
}
