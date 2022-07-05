#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void topologicalSort(vector<int> [], int);
void topologicalSortUtils(vector<int> [], stack<int> &, bool [], int);

int main()
{
  int v, e, s, d;
  cout << "Enter the number of edges and vertices." << endl;
  cin >> e >> v;
  vector <int> graph[v];
  cout << "Enter the source and destinations of the graphs." << endl;
  for (int i=0; i<e; i++)
  { cin >> s >> d; graph[s].push_back(d); }
  topologicalSort(graph, v);
}

void topologicalSort(vector<int> graph[], int v)
{
  bool visited[v];
  stack <int> st;
  for (int i=0; i<v; i++) visited[i] = false;
  for (int i=0; i<v; i++)
  { if (!visited[i]) topologicalSortUtils(graph, st, visited, i); }
  while (!st.empty())
  { cout << st.top() << " "; st.pop(); }
}

void topologicalSortUtils(vector<int> graph[], stack<int> &st, bool visited[], int i)
{
  visited[i] = true;
  int n = graph[i].size();
  for (int j=0; j<n; j++)
  {
    if (!visited[graph[i][j]])
      topologicalSortUtils(graph, st, visited, graph[i][j]);
  }
  st.push(i);
}
