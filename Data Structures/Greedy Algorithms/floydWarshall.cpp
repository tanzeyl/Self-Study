#include <iostream>
using namespace std;

int main()
{
  int v, e;
  cout << "Enter the vertices and edges." << endl;
  cin >> v >> e;
  int dist[v][v];
  cout << "Enter the weights." << endl;
  for (int i=0; i<v; i++)
  {
    for (int j=0; j<v; j++)
      cin >> dist[i][j];
  }
  for (int i=0; i<v; i++)
  {
    for (int j=0; j<v; j++)
    {
      for (int k=0; k<v; k++)
      {
        if (dist[i][j] > dist[i][k] + dist[k][j])
        { dist[i][j] = dist[i][k] + dist[k][j]; }
      }
    }
  }
  cout << "Minimum weights by pair are as follows: " << endl;
  for (int i=0; i<v; i++)
  {
    for (int j=0; j<v; j++)
      cout << dist[i][j] << " ";
    cout << endl;
  }
}
