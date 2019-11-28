#include<bits/stdc++.h>
using namespace std;
int mincoins(int arr[],int m, int v)
{
  int table[v+1];
  table[0]=0;
  for (int i=1;i<v+1;i++)
  {
    table[i]=INT_MAX;
  }

  for (int i=1;i<v+1;i++)
  {
    for (int j=0;j<m;j++)
    {
      if (arr[j]<=i)
      {
      int temp=table[i-arr[j]];
      if (temp!=INT_MAX && temp+1<table[i])
      {
        table[i]=temp+1;
      }
    }
    }
  }
  return table[v];
}
int main()
{
  int coins[] =  {9, 6, 5, 1};
    int m = sizeof(coins)/sizeof(coins[0]);
    int V = 11;
    cout << "Minimum coins required is "
         << mincoins(coins, m, V);
    return 0;
}
