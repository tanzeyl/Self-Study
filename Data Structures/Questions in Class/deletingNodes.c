#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
  struct tree *left, *right;
  int info;
} tree;

void insert(tree **, int);
void delete(tree **, int);
tree * minValue(tree *);
tree *inOrderSuccessor(tree *, tree *);
void display(tree *);

int main()
{
  tree *root = NULL;
  int ch, ctr, n;
  while(1)
  {
    printf("1. Insert\n2. Delete.\n3. Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Enter the value to insert.\n");
              scanf("%d",&n);
              insert(&root, n); break;
      case 2: printf("Enter the number you want to delete.\n");
              scanf("%d",&n);
              delete(&root, n); break;
      case 3: display(root); break;
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

void delete(tree **root, int key)
{
  tree *prev = NULL, *p = NULL, *q = NULL;
  q = *root;
  prev = q;
  while(q->info != key && (q->left != NULL || q->right != NULL))
  {
    prev = q;
    if (key < q->info)
      q = q->left;
    else
      q = q->right;
  }

  if (q->left == NULL && q->right == NULL)
  {
    if (prev->info > q->info)
      prev->left = NULL;
    else
      prev->right = NULL;
    free(q);
  }

  else if (q->left == NULL || q->right == NULL)
  {
    if (prev->info > q->info)
    {
      if (q->left == NULL)
        prev->left = q->right;
      else
        prev->left = q->left;
    }
    else
    {
      if (q->left == NULL)
        prev->right = q->right;
      else
        prev->right= q->left;
    }
  }
  else
  {
    p = inOrderSuccessor(q, q);
    q->info = p->info;
    free(p);

  }
}

tree * minValue(tree *node)
{
	tree *current = node;
	while (current->left != NULL)
	{current = current->left;}
	return current;
}

tree *inOrderSuccessor(tree *root, tree *n)
{
	if (n->right != NULL)
		return minValue(n->right);
	tree *succ = NULL;
	while (root != NULL)
	{
		if (n->info < root->info)
		{
			succ = root;
			root = root->left;
		}
		else if (n->info > root->info)
			root = root->right;
		else
			break;
	}
	return succ;
}

void display(tree *root)
{
  if (root == NULL) return;
  display(root->left);
  printf("%d ",root->info);
  display(root->right);
}
