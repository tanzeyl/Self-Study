#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
  struct Tree *left, *right;
  int info;
} Tree;

void insert(Tree **, int);
int countLeafNodes(Tree *);
Tree *search(Tree *, int);
void delete(Tree **, int);
Tree * minValue(Tree *);
Tree *inOrderSuccessor(Tree *, Tree *);
void display(Tree *);

int main()
{
  Tree *root = NULL, *p = NULL;
  int ch, ctr, n;
  while(1)
  {
    printf("1. Insert\n2. Count Leaf Nodes.\n3. Search\n4. Delete\n5. Display (Inorder)\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Enter the value to insert.\n");
              scanf("%d",&n);
              insert(&root, n); break;
      case 2: ctr = countLeafNodes(root);
              printf("%d are the number of nodes.\n",ctr); break;
      case 3: printf("Enter the element you want to search.\n");
              scanf("%d",&n);
              p = search(root, n);
              if (p)
                printf("%d is present in the Tree.\n",n);
              else
                printf("%d is not present in the Tree.\n",n);
              break;
      case 4: printf("Enter the element to delete.\n");
              scanf("%d",&n);
              delete(&root, n);
              break;
      case 5: display(root); break;
      default: printf("Enter a valid choice.\n");
    }
    printf("\nEnter 1 to continue and anything else to quit.\n");
    scanf("%d",&ch);
    if (ch != 1)
      break;
  }
  return 0;
}

void insert(Tree **tp, int num)
{
  Tree *p = NULL;
  if (*tp == NULL)
  {
    p = (Tree *)malloc(sizeof(Tree));
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

int countLeafNodes(Tree *tp)
{
  int ctr = 1;
  if (tp->left == NULL && tp->right == NULL) return ctr;
  else return countLeafNodes(tp->left) + countLeafNodes(tp->right);
}

Tree * search(Tree *p, int n)
{
  if (p == NULL)
    return NULL;
  if (n == p->info)
    return p;
  else if (n < p->info)
    return search(p->left, n);
  else
    return search(p->right, n);
}

void delete(Tree **root, int key)
{
  Tree *prev = NULL, *p = NULL, *q = NULL;
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
    if (p->left == NULL && p->right == NULL)
    {
      q->info = p->info;
      if (q->right == p)
        q->right = NULL;
      free(p);
    }
    else
      delete(root, p->info);
  }
}

Tree * minValue(Tree *node)
{
	Tree *current = node;
	while (current->left != NULL)
	{current = current->left;}
	return current;
}

Tree *inOrderSuccessor(Tree *root, Tree *n)
{
	if (n->right != NULL)
		return minValue(n->right);
	Tree *succ = NULL;
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
void display(Tree *p)
{
  if (p == NULL) return;
  display(p->left);
  printf("%d ",p->info);
  display(p->right);
}
