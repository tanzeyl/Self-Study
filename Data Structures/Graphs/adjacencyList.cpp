#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph
{
  public:
  unordered_map<int, vector<int>> adj;

  void addEdge(int u, int v, bool direction)
  {
    adj[u].push_back(v);
    if (direction == 0) adj[v].push_back(u);
  }

  void printGraph()
  {
    for (auto i : adj)
    {
      cout << i.first << " -> ";
      for (auto j : i.second) cout << j << ", ";
      cout << endl;
    }
  }
};

int main()
{
  int m,n;
  cout << "Enter the number of nodes and edges." << endl;
  cin >> n >> m;
  Graph g;
  cout << "Enter the edges." << endl;
  for (int i=0; i<m; i++)
  {
    int u, v;
    cin >> u >> v;
    g.addEdge(u, v, 0);
  }
  g.printGraph();
}
