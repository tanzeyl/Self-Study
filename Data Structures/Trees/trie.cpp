#include <iostream>
using namespace std;

struct Node
{
  Node *links[26];
  bool flag = false;
  int endsWith = 0, prefixCount = 0;
  bool containsLetter(char ch) { return links[ch - 'a'] != NULL; }
  void put(char ch, Node *node) { links[ch - 'a'] = node; }
  Node * get(char ch) { return links[ch - 'a']; }
  void setEnd() { flag = true; endsWith++; }
  void updatePrefix() { prefixCount++; }
};

class Trie
{
  private: Node *root;
  public:
    Trie()
    { root = new Node(); }

    void insert(string word)
    {
      Node *node = root;
      for (int i=0; i<word.length(); i++)
      {
        if (!node->containsLetter(word[i])) { node->put(word[i], new Node()); }
        node->updatePrefix();
        node = node->get(word[i]);
      }
      node->setEnd();
    }

    bool search(string word)
    {
      Node *node = root;
      for (int i=0; i<word.length(); i++)
      {
        if (!node->containsLetter(word[i])) return false;
        node = node->get(word[i]);
      }
      return node->flag;
    }

    bool startsWith(string word)
    {
      Node *node = root;
      for (int i=0; i<word.length(); i++)
      {
        if (!node->containsLetter(word[i])) return false;
        node = node->get(word[i]);
      }
      return true;
    }
};

int main()
{
  Trie t1;
  t1.insert("tanzeel");
  t1.insert("Khan");
  t1.insert("hello");
  t1.insert("help");
  if (t1.search("tanzeel")) cout << "Yes" << endl;
  if (t1.search("Good")) cout << "Yes" << endl;
  if (t1.startsWith("tan")) cout << "Yes" << endl;
  if (t1.startsWith("why")) cout << "Yes" << endl;
}
