#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
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

  void bfs(int node, unordered_map <int, bool> &visited, vector <int> &ans)
  {
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty())
    {
      int frontNode = q.front();
      q.pop();
      ans.push_back(frontNode);
      for (auto i : adj[frontNode])
      {
        if (!visited[i])
        { q.push(i); visited[i] = 1; }
      }
    }
  }
};

int main()
{
  int m,n;
  vector <int> ans;
  unordered_map <int, bool> visited;
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
  for (int i=0; i<m; i++)
  {
    if (!visited[i]) g.bfs(0, visited, ans);
  }
  for (auto i : ans) cout << i << " ";
}
