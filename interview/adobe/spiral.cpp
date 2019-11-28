#include<bits/stdc++.h>
using namespace std;
void spiral (int m,int n,int i, int j)
{
  int p,k,l,o;
  if (i>=m || j>=n)
  return;
  for (p=i;p<n-i;++p)
  {
    cout<<p<<" ";
  }
  for (k=j;k<n-j;++k)
  {
    cout<<k<<" ";
  }
  for (l=p-1;l>=j;--l)
  {
    cout<<l<<" ";
  }
  for (o=k-1;o>=i;--o)
  {
    cout<<o<<" ";
  }
  spiral(4,4,++i,++j);
  // return;
}
int main()
{
 spiral(4,4,0,0);
}
