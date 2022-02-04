#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} Node;


int palinCheck(Node *, int);
void push(Node **);

int main()
{
    Node *top = NULL;
    int result, n, i;
    for (i=0; i<n; i++)
        push(&top);
    result = palinCheck(top, n);
    if (result)
        printf("Palindrome.\n");
    else
        printf("The linked list is not a palindrome.\n");
    return 0;
}

int palinCheck (Node *p, int count)
{
    int i = 0, j;
    Node *front, *rear;
    while (i != count / 2)
    {
        front = rear = p;
        for (j = 0; j < i; j++)
            front = front->next;
        for (j = 0; j < count - (i + 1); j++)
            rear = rear->next;
        if (front->info != rear->info)
            return 0;
        else
            i++;
    }
    return 1;
}

void push(Node **top)
{
  int x;
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  if(p != NULL)
  {
    scanf("%d",&x);
    p->info = x;
    p->next = *top;
    *top = p;
  }
}
