#include<bits/stdc++.h>
using namespace std;
#define V 9
int mindistance(int dist[],bool sptset[])
{
  int min=INT_MAX, min_index;
  for (int v=0;v<V;v++)
  {
    if(!sptset[v] && dist[v]<=min)
    {
      min=dist[v];
      min_index=v;
    }
  }
  return min_index;
}
int printsolution(int dist[])
{
  printf("Vertex   Distance from Source\n");
   for (int i = 0; i < V; i++)
      printf("%d tt %d\n", i, dist[i]);
}
void dijkshtra(int graph[V][V],int src)
{
  bool sptset[V];
  int dist[V];
  for (int i=0;i<V;i++)
  {
    sptset[i]=false;
    dist[i]=INT_MAX;
  }
  dist[src]=0;
  for (int count=0;count<V;count++)
  {
    int u=mindistance(dist,sptset);
    sptset[u]=true;
    for(int v=0;v<V;v++){
    if (!sptset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
    {
      dist[v]=dist[u]+graph[u][v];
      if (u==4)
      cout<<v<<" ";
    }}
  }
  printsolution(dist);
}
int main()
{
   /* Let us create the example graph discussed above */
   int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };

    dijkshtra(graph, 0);

    return 0;
}
