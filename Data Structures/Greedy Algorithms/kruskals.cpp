#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, pair<int, int>>> kruskals(vector<pair<int, pair<int, int>>>, int v);
int find(int, int []);
void unionByWeight(int, int, int []);

int main()
{
  vector<pair<int, pair<int, int>>> graph, res;
  int v, e, s, d, w, sum = 0;
  cout << "Enter the number of vertices and edges." << endl;
  cin >> v >> e;
  cout << "Enter the source, destination and weight of all the edges." << endl;
  for (int i=0; i<e; i++)
  {
    cin >> s >> d >> w;
    graph.push_back(make_pair(w, make_pair(s, d)));
  }
  res = kruskals(graph, v);
  cout << "Minimum spanning tree: " << endl;
  for (int i=0; i<res.size(); i++)
  {
    cout << res[i].second.first << " " << res[i].second.second << endl;
    sum += res[i].first;
  }
  cout << "Sum of weight: " << sum << endl;
}

vector<pair<int, pair<int, int>>> kruskals(vector<pair<int, pair<int, int>>> graph, int v)
{
  vector<pair<int, pair<int, int>>> res;
  int s, d, w, e = graph.size();
  int parent[v];
  for(int i=0; i<v; i++) parent[i] = -1;
  sort(graph.begin(), graph.end());
  for (int i=0; i<e; i++)
  {
    s = graph[i].second.first;
    d = graph[i].second.second;
    if (find(s, parent) != find(d, parent))
    {
      res.push_back(graph[i]);
      unionByWeight(s, d, parent);
    }
  }
  return res;
}

int find(int u, int parent[])
{
  if (parent[u] < 0) return u;
  return find(parent[u], parent);
}

void unionByWeight(int u, int v, int parent[])
{
  int pu = find(u, parent);
  int pv = find(v, parent);
  if (pu != pv)
  {
    parent[pu] += parent[pv];
    parent[pv] = pu;
  }
  else
  {
    parent[pv] += parent[u];
    parent[pu] = pv;
  }
}
