#include<bits/stdc++.h>
using namespace std;
class Graph{
int V;
list<int> *adj;
public:
  Graph(int V);
  void addEdge(int u,int w);
  void BFS(int s);
};
Graph::Graph(int V)
{
  this->V=V;
  adj = new list<int>[V];
}
void Graph::addEdge(int u,int w)
{
  adj[u].push_back(w);
}
void Graph::BFS(int s)
{
  bool *visited= new bool[V];
  memset(visited,false,sizeof(visited));
  list<int>queue;
  list<int>:: iterator i;
  visited[s]=true;
  queue.push_back(s);
  while (!queue.empty())
  {
    s=queue.front();
    cout<<s<<" ";
    queue.pop_front();
      for (i=adj[s].begin();i!=adj[s].end();++i){
        if (!visited[*i]){
          queue.push_back(*i);
          visited[*i]=true;
        }
      // queue.push_back()
    }
  }
}
int main()
{
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  cout << "Following is Breadth First Traversal "
       << "(starting from vertex 2) \n";
  g.BFS(2);

  return 0;
}
