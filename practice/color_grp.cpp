#include<bits/stdc++.h>
using namespace std;
void printsolution(int color[]);
bool issafe(int v,bool graph[V][V], int color[],int c)
{
    for (int i=0;i<V;i++)
    {
      if (graph[v][i] && c == color[i])
      {
        return false;
      }
    return true;
    }
}
