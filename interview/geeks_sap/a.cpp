#include<bits/stdc++.h>
using namespace std;
int st(string s,string x)
{
  int n=s.length();
  int m=x.length();
  // cout<<m;
  int j=0;
  int temp=-1;
  for (int i=0,j=0;i<n;i++)
  {
    if (s[i]==x[j])
    {
    if (j==0)
      {
        temp=i;
      }
      j++;
    }
    else if(x[j]=='*')
    {
      j++;
      if (j==0)
      {
        temp=i;
      }
  }
    else
    {
      if (j==m)
      {
        return temp;
      }
      j=0;
    }
  }
  return -1;
}
int main()
{
  string s="abcdef";
  string x="c*e";
  cout<<st(s,x)<<endl;
}
