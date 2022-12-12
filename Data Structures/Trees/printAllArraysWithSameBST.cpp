#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
  int value;
  Node *left = NULL;
  Node *right = NULL;
};

class BST
{
  private: Node *root;
  public:

  BST(Node *root) { this->root = root; }

  void createTree(int array[], int n)
  {
    root->value = array[0];
    for (int i=1; i<n; i++)
    { insert(&root, array[i]); }
  }

  void insert(Node **tempRoot, int num)
  {
    if (*tempRoot == NULL)
    {
      Node *temp = new Node();
      temp->value = num;
      *tempRoot = temp;
    }
    else if (num < (*tempRoot)->value) insert(&(*tempRoot)->left, num);
    else if (num > (*tempRoot)->value) insert(&(*tempRoot)->right, num);
  }

  vector<vector<int>> createArrays(Node *tempRoot)
  {
    if (tempRoot == NULL) return {{}};
    if (tempRoot->left == NULL && tempRoot->right == NULL)
    {
      vector <int> temp;
      temp.push_back(tempRoot->value);
      return { temp };
    }
    vector<vector<int>> results, left, right;
    left = createArrays(tempRoot->left);
    right = createArrays(tempRoot->right);
    int size = left[0].size() + right[0].size() + 1;
    vector<bool> flags(left[0].size(), 0);
    for (int i=0; i<right[0].size(); i++) flags.push_back(1);
    for (int i=0; i<left.size(); i++)
    {
      for (int j=0; j<right.size(); j++)
      do
      {
        vector<int> temp(size);
        temp[0] = tempRoot->value;
        int l = 0, r = 0;
        for (int k=0; k<flags.size(); k++)
        { temp[k+1] = (flags[k]) ? right[j][r++] : left[i][l++]; }
        results.push_back(temp);
      } while(next_permutation(flags.begin(), flags.end()));
    }
    return results;
  }

  void morrisTraversalInOrder(Node *tempRoot)
  {
    if (tempRoot == NULL) return;
    Node *current, *predecessor;
    current = tempRoot;
    while (current != NULL)
    {
      if (current->left == NULL) { cout << current->value << " "; current = current->right; }
      else
      {
        predecessor = current->left;
        while(predecessor->right != NULL && predecessor->right != current) { predecessor = predecessor->right; }
        if (predecessor->right == NULL)
        {
          predecessor->right = current;
          current = current->left;
        }
        else
        {
          cout << current->value << " ";
          predecessor->right = NULL;
          current = current->right;
        }
      }
    }
  }

  void morrisTraversalPreOrder(Node *root)
  {
    if (root == NULL) return;
    Node *current = root, *predecessor = NULL;
    while (current != NULL)
    {
      if (current->left == NULL) { cout << current->value << " "; current = current->right; }
      else
      {
        predecessor = current->left;
        while(predecessor->right != NULL && predecessor->right != current) { predecessor = predecessor->right; }
        if (predecessor->right == NULL)
        {
          cout << current->value << " ";
          predecessor->right = current;
          current = current->left;
        }
        else
        {
          predecessor->right = NULL;
          current = current->right;
        }
      }
    }
  }

  void morrisTraversalPostOrder(Node *root)
  {
    if (root == NULL) return;
    vector <int> nodes;
    Node *current = root, *predecessor = NULL;
    while(current != NULL)
    {
      if (current->right == NULL) { nodes.push_back(current->value); current = current->left; }
      else
      {
        predecessor = current->right;
        while(predecessor->left != NULL && predecessor->left != current) { predecessor = predecessor->left; }
        if (predecessor->left == NULL)
        {
          nodes.push_back(current->value);
          predecessor->left = current;
          current = current->right;
        }
        else
        {
          predecessor->left = NULL;
          current = current->left;
        }
      }
    }
    reverse(nodes.begin(), nodes.end());
    for (auto node : nodes) cout << node << " ";
    cout << endl;
  }
};

int main()
{
  int n;
  cout << "Enter the number of elements in your array." << endl;
  cin >> n;
  int array[n];
  cout << "Enter all the elements." << endl;
  for (int i=0; i<n; i++) cin >> array[i];
  Node *root = new Node();
  BST b(root);
  b.createTree(array, n);
  vector<vector<int>> arrays = b.createArrays(root);
  cout << "Following are the possible arrays:" << endl;
  for (auto array : arrays)
  {
    cout << "[ ";
    for (auto element : array) cout << element << ", ";
    cout << "] ";
    cout << endl;
  }
  b.morrisTraversalInOrder(root);
  cout << endl;
  b.morrisTraversalPreOrder(root);
  cout << endl;
  b.morrisTraversalPostOrder(root);
}
