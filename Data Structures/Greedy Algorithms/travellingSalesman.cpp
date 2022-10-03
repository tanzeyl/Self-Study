#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void TSP(vector<vector<int>>, bool [], int, int, int *);
int findNext(vector<vector<int>>, bool [], int, int , int *);

int main()
{
  int v, start, cost = 0, temp;
  cout << "Enter the number of vertices in graph." << endl;
  cin >> v;
  vector<vector<int>> graph;
  vector <int> row;
  bool visited[v];
  for (int i=0; i<v; i++) visited[i] = false;
  cout << "Enter the adjacency matrix." << endl;
  for (int i=0; i<v; i++)
  {
    for (int j=0; j<v; j++)
    {
      cin >> temp;
      row.push_back(temp);
    }
    graph.push_back(row);
  }
  cout << "Enter the source node." << endl;
  cin >> start;
  TSP(graph, visited, start, v, &cost);
  cout << "The cost is: " << cost << endl;
}

void TSP(vector<vector<int>> graph, bool visited[], int start, int v, int *cost)
{
  int next, temp;
  visited[start] = true;
  cout << start << " -> ";
  next = findNext(graph, visited, start, v, cost);
  if (next == INT_MAX)
  {
    temp = 0;
    *cost += graph[next][temp];
    cout << temp;
    return;
  }
  TSP(graph, visited, next, v, cost);
}

int findNext(vector<vector<int>> graph, bool visited[], int node, int v, int *cost)
{
  int min = INT_MAX, min_index, democost;
  for (int i=0; i<v; i++)
  {
    if(!visited[i] && graph[node][i] != 0 && graph[node][i] < min)
    {
      democost = graph[node][i];
      min = graph[node][i];
      min_index = i;
    }
  }
  *cost += democost;
  return min_index;
}
