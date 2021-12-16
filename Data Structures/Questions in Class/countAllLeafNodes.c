#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
  struct tree *left, *right;
  int info;
} tree;

void insert(tree **, int);
int countLeafNodes(tree *);

int main()
{
  tree *root = NULL;
  int ch, ctr, n;
  while(1)
  {
    printf("1. Insert\n2. Count Leaf Nodes.\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Enter the value to insert.\n");
              scanf("%d",&n);
              insert(&root, n); break;
      case 2: ctr = countLeafNodes(root);
              printf("%d are the number of nodes.\n",ctr); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("\nEnter 1 to continue and anything else to quit.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

void insert(tree **tp, int num)
{
  tree *p = NULL;
  if (*tp == NULL)
  {
    p = (tree *)malloc(sizeof(tree));
    p->info = num;
    p->left = p->right = NULL;
    *tp = p;
  }
  else
  {
    if (num < (*tp)->info)
      insert(&(*tp)->left, num);
    else
      insert(&(*tp)->right, num);
  }
}

int countLeafNodes(tree *tp)
{
  int ctr = 1;
  if (tp->left == NULL && tp->right == NULL) return ctr;
  else return countLeafNodes(tp->left) + countLeafNodes(tp->right);
}
