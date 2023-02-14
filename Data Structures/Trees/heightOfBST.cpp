#include <iostream>
using namespace std;

typedef struct node
{
  int value;
  struct node *left, *right;
} node;

class BST
{
  private: node *root;
  public:

  BST (node *root) { this->root = root; }

  void create (int arr[], int n)
  {
    root->value = arr[0];
    for (int i=1; i<n; i++) { insert(&root, arr[i]); }
  }

  void insert(node **tempRoot, int num)
  {
    if (*tempRoot == NULL)
    {
      node *temp = new node();
      temp->value = num;
      *tempRoot = temp;
    }
    else if (num < (*tempRoot)->value) insert(&(*tempRoot)->left, num);
    else insert(&(*tempRoot)->right, num);
  }

  void preorder(node *root)
  {
    if (root == NULL) return;
    preorder(root->left);
    cout << root->value << " ";
    preorder(root->right);
  }

  int height(node *root)
  {
    if (root == NULL) return -1;
    return 1 + max(height(root->left), height(root->right));
  }

  int depth(node *root, node *cur)
  {
    if (root == NULL || cur == NULL) return -1;
    if (root == cur) return 0;
    int left = depth(root->left, cur);
    int right = depth(root->right, cur);
    if (left == right) return -1;
    return 1 + max(left, right);
  }
};

int main()
{
  int n = 10;
  int arr[] = { 5, 4, 6, 3, 7, 2, 8, 1, 9, 10 };
  node *root = new node();
  BST b(root);
  b.create(arr, n);
  b.preorder(root);
  cout << endl;
  cout << b.height(root) << endl;
  node *t = root;
  while (t->value != 3) t = t->left;
  cout << b.depth(root, t) << endl;
}
