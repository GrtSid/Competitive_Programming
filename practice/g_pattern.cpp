#include<bits/stdc++.h>
using namespace std;
int value(string s1,string s2)
{
  int n=s1.length();
  int m=s2.length();
  int res=0;
  int count=0;
  for (int i=0;i<m;++i)
  {
    for (int j=0;j<n;++j)
    {

      if (s1[j]==s2[i])
      {
        count=count+1;
        i=i+1;
        if (j==n-1)
        {
          res=res+1;
          j=-1;
        }
        continue;
      }
    }
  }
  return (res+1);
}
int main()
{
  string s1,s2;
  s1="abcd";
  s2="cdabcdab";
  cout<<value(s1,s2)<<endl;
}
