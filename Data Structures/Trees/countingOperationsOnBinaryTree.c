#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
  int info;
  struct tree *left, *right;
} Tree;

typedef struct node
{
  Tree *address;
  struct node *next;
} Node;

void enqueue(Node **, Node **, Tree *);
Tree * dequeue(Node **);
int isEmpty(Node *);
void createTree(Tree **);
void displayTree(Tree *);
int countNodes(Tree *);
int countDegreeTwo(Tree *);
int sumOfNodes(Tree *);
int height(Tree *);
int countLeafNodes(Tree *);

int main()
{
  Tree *root = NULL;
  createTree(&root);
  displayTree(root);
  printf("\nThe number of nodes in this tree are %d.\n",countNodes(root));
  printf("There are %d nodes with two children.\n",countDegreeTwo(root));
  printf("The sum of all the nodes is %d.\n",sumOfNodes(root));
  printf("The height of this tree is %d.\n",height(root));
  printf("There are %d leaf nodes.\n",countLeafNodes(root));
  return 0;
}

void enqueue(Node **f, Node **r, Tree *t)
{
  Node *p = NULL;
  p = (Node *)malloc(sizeof(Node));
  p->address = t;
  if (*f == NULL)
    *f = *r = p;
  else
  {
    (*r)->next = p;
    *r = p;
  }
  p->next = NULL;
}

Tree * dequeue(Node **f)
{
  Tree *p = NULL;
  p = (*f)->address;
  *f = (*f)->next;
  return p;
}

int isEmpty(Node *q)
{
  if (q == NULL)
    return 1;
  return 0;
}

void createTree(Tree **root)
{
  int x;
  Tree *p = NULL, *t = NULL;
  Node *f = NULL, *r = NULL;
  p = (Tree *)malloc(sizeof(Tree));
  printf("Enter the element at root node.\n");
  scanf("%d",&p->info);
  p->left = p->right = NULL;
  enqueue(&f, &r, p);
  *root = p;
  while (!isEmpty(f))
  {
    p = dequeue(&f);
    printf("Enter the left child for the node containing data = %d.\n",p->info);
    scanf("%d",&x);
    if (x != -1)
    {
      t = (Tree *)malloc(sizeof(Tree));
      t->info = x; t->left = NULL; t->right = NULL;
      p->left = t;
      enqueue(&f, &r, t);
    }
    printf("Enter the right child for the node containing data = %d.\n",p->info);
    scanf("%d",&x);
    if (x != -1)
    {
      t = (Tree *)malloc(sizeof(Tree));
      t->info = x; t->left = NULL; t->right = NULL;
      p->right = t;
      enqueue(&f, &r, t);
    }
  }
}

void displayTree(Tree *r)
{
  if(r)
  {
    printf("%d ",r->info);
    displayTree(r->left);
    displayTree(r->right);
  }
}

int countNodes(Tree *p)
{
  if (p)
    return countNodes(p->left) + countNodes(p->right) + 1;
  return 0;
}

int countDegreeTwo(Tree *p)
{
  if (p)
  {
    if (p->left && p->right)
      return countDegreeTwo(p->left) + countDegreeTwo(p->right) + 1;
    else
      return countDegreeTwo(p->left) + countDegreeTwo(p->right);
  }
  else
    return 0;
}

int sumOfNodes(Tree *p)
{
  if (p)
    return sumOfNodes(p->left) + sumOfNodes(p->right) + p->info;
  else
    return 0;
}

int height(Tree *p)
{
  int x, y;
  if (p)
  {
    x = height(p->left);
    y = height(p->right);
    if (x > y)
      return x+1;
    else
      return y+1;
  }
  return 0;
}

int countLeafNodes(Tree *p)
{
  if (p)
  {
    if (p->left == NULL && p->right == NULL)
      return countLeafNodes(p->left) + countLeafNodes(p->right) + 1;
    else
      return countLeafNodes(p->left) + countLeafNodes(p->right);
  }
  return 0;
}
