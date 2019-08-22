#include<bits/stdc++.h>
using namespace std;
int countpalin(string s)
{
  int n=s.length();
  bool p[n][n];
  memset(p,false,sizeof(p));
  int count[n][n];
  memset(count,0,sizeof(count));
  for (int i=0;i<n;i++)
  {
    p[i][i]=true;
  }
  for (int i=0;i<n-1;i++)
  {
    if (s[i]==s[i+1])
    {
      p[i][i+1]=true;
      count[i][i+1]=1;
      cout<<s.substr(i,i)<<endl;
    }
  }
  for (int gap=2;gap<n;gap++)
  {
    for (int i=0;i<n-gap;i++)
    {
      int j=gap+i;
      if (s[i]==s[j] && p[i+1][j-1])
      {
        p[i][j]=true;
        cout<<s.substr(i,j)<<endl;
      }
      if (p[i][j])
      {
        count[i][j]=count[i][j-1]+count[i+1][j]+1-count[i+1][j-1];

      }
      else
      {
        count[i][j]=count[i][j-1]+count[i+1][j]-count[i+1][j-1];
      }
    }
  }
  return count[0][n-1];
}

int main()
{
  string s;
  cin>>s;
  cout<<countpalin(s)<<endl;
}
