#include<bits/stdc++.h>
using namespace std;
class Graph{
  int V;
  list<int> *adj;
  void countpathutil(int, int, bool [], int &);
public:
  Graph(int V);
  // void printg(list <int> *adj);
  void addEdge(int u, int v);
  int countPaths(int s, int d);
};
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;    }
}
Graph:: Graph(int V){
  this->V=V;
  adj = new list<int>[V];
}
// void Graph::printg( list<int> *adj){
//   list<int>::iterator i;
//   for (i=adj[u].begin();i!=adj[u].end();++i){
//     cout<<*i<<endl;
//   }
// }
void Graph::addEdge(int u, int v){
  adj[u].push_back(v);
}
int Graph::countPaths(int s, int d)
{
  bool *visited = new bool[V];
  // cout<<*adj<<endl;
  memset(visited, false, sizeof(visited));
  int pathcount=0;
  countpathutil(s,d,visited,pathcount);
  // cout<<*visited<<endl;
  return pathcount;
}

void Graph::countpathutil(int u,int d,bool visited [],int &pathcount)
{
  visited[u]=true;
  if (u==d)
  pathcount++;
  else
  {
    list<int>::iterator i;
    for (i=adj[u].begin();i!=adj[u].end();++i)
    {
        if (!visited[*i]){
          cout<<*i<<endl;
          countpathutil(*i,d,visited,pathcount);
        }
    }
  }
  visited[u]=false;
}
int main(){
  Graph g(4);
  vector<int> adj [4];
  g.addEdge(0,1);
  g.addEdge(0,2);
  g.addEdge(0,3);
  g.addEdge(2,0);
  g.addEdge(2,1);
  g.addEdge(1,3);
  int s=0, d=3;
  cout<<g.countPaths(s,d)<<endl;
  cout<<printGraph(adj,4)<<endl;
  return 0;
}
