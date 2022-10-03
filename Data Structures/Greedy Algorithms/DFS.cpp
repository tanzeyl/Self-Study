#include <iostream>
#include <map>
#include <list>
using namespace std;

class Graph {
public:
  map<int, bool> visited;
  map<int, list<int>> adj;

  void addEdge(int v, int w) { adj[v].push_back(w); }

  void DFS(int v)
  {
    visited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
      if (!visited[*i])
        DFS(*i);
  }
};

int main()
{
  Graph g;
  int e, u, v, start;
  cout << "Enter the number of edges." << endl;
  cin >> e;
  cout << "Enter the source and destionations of all the edges." << endl;
  for (int i=0; i<e; i++)
  {
    cin >> u >> v;
    g.addEdge(u, v);
  }
  cout << "Enter the source vertex." << endl;
  cin >> start;
  cout << "Following is Depth First Traversal from " << start << "." << endl;
  g.DFS(2);
  return 0;
}
