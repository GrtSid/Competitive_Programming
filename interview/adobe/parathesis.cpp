#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
  int n=s.length();
  int left=0;
  for (int i=0;i<n;i++)
  {
    if (s[i]==')')
    left--;
    else if (s[i]=='(')
    left++;
    if (left<0)
    {
      return false;
    }
  }
  if (left==0)
  {
    return true;
  }
  else
  return false;
}
int main()
{
  string s="())(";
  cout<<check(s)<<endl;
}
