#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int minKey(int [], bool []);
void printMST(int [], vector<pair<int, pair<int, int>>>, int);
void primMST(vector<pair<int, pair<int, int>>> [], int);

int main()
{
  int v, e, s, d, w;
  vector<pair<int, pair<int, int>>> graph;
  cout << "Enter vertices and edges." << endl;
  cin >> v >> e;
  cout << "Enter the source, destination and weight," << endl;
  for (int i=0; i<e; i++)
  {
    cin >> s >> d >> w;
    graph.push_back(nake_pair(w, make_pair(s, d)));
  }
  primMST(graph, v);
}

int minKey(int key[], bool mstSet[])
{
  int min = INT_MAX, min_index;
  for (int i=0; i<v; i++)
    if (mstSet[i] == false && key[i] < min) min_index = i;
  return min_index;
}
void printMST(int parent[], vector<pair<int, pair(int, int>>> graph, int v)
{
  cout<<"Edge \tWeight\n";
  for (int i = 1; i < V; i++)
    cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";
}

void primMST(vector<pair<int, pair(int, int>>> graph, int V)
{
  int parent[V];
  int key[V];
  bool mstSet[V];
  for (int i = 0; i < V; i++)
    { key[i] = INT_MAX; mstSet[i] = false; }
  key[0] = 0;
  parent[0] = -1;
  for (int count = 0; count < V - 1; count++)
  {
    int u = minKey(key, mstSet);
    mstSet[u] = true;
    for (int v = 0; v < V; v++)
      if (mstSet[v] == false && graph[u].first < key[v])
        parent[v] = u, key[v] = graph[u].first;
  }
  printMST(parent, graph, V);
}
