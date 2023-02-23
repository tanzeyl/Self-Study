#include <iostream>
#include <list>
using namespace std;

class Graph
{
  private:
  int v;
  list<pair<int, int>> *l;

  public:
  Graph(int v)
  {
    this->v = v;
    l = new list<pair<int, int>> [v];
  }

  void addEdge(int u, int v, int cost)
  {
    l[u].push_back(make_pair(v, cost));
    l[v].push_back(make_pair(u, cost));
  }

  int dfsHelper(int node, bool visited[], int count[], int &answer)
  {
    visited[node] = true;
    count[node] = 1;
    for (auto nbrPair : l[node])
    {
      int nbr = nbrPair.first;
      int weight = nbrPair.second;
      if (!visited[nbr])
      {
        count[node] += dfsHelper(nbr, visited, count, answer);
        int nx = count[nbr];
        int ny = v - nx;
        answer += 2*min(nx, ny)*weight;
      }
    }
    return count[node];
  }

  int dfs()
  {
    bool visited[v] = {false};
    int count[v] = {0};
    int answer = 0;
    dfsHelper(0, visited, count, answer);
    return answer;
  }
};

int main()
{
  Graph g(4);
  g.addEdge(0, 1, 3);
  g.addEdge(1, 2, 2);
  g.addEdge(2, 3, 2);
  cout << g.dfs() << endl;
}
