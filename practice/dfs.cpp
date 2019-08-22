#include<bits/stdc++.h>
using namespace std;
class Graph
{
  int V;
  list <int> *adj;
  void DFSutil (int s,bool visited[]);
public:
  Graph(int V);
  void addEdge(int u,int w);
  void DFS(int s);
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
void Graph::DFSutil(int s,bool visited[])
{
  visited[s]=true;
  cout<<s<<" ";
  list<int>::iterator i;
  for (i=adj[s].begin();i!=adj[s].end();++i)
  {
    cout<<"sid"<<*i<<" ";
    if (!visited[*i])
    {
      DFSutil(*i,visited);
    }
  }
}
void Graph::DFS(int s)
{
  bool *visited=new bool[V];
  memset(visited,false,sizeof(V));
  DFSutil(s,visited);
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

   cout << "Following is Depth First Traversal"
           " (starting from vertex 2) \n";
   g.DFS(2);

   return 0;

}
