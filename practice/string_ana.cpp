#include<bits/stdc++.h>
using namespace std;
bool isCountZero(int count[])
{
  for (int i=0;i<256;i++)
  {
    if (count[i]!=0)
    {
      return false;
    }
  }
  return true;
}
int count_ana(string s1,string s2)
{
  int res=0;
  int N=s1.length();
  int n=s2.length();
  // list <int>count= new list<int>[256];
  int count[256];
  memset(count,0,sizeof(count));
  for (int i=0;i<n;i++)
  {

    count[s1[i]-'a']++;
    // cout<<count[s1[i]-'a']<<" ";
    count[s2[i]-'a']--;
  }
  if (isCountZero(count))
  {
    res++;
  }
  for (int i=n;i<N;i++)
  {
    // cout<<s1[i]<<" ";
    count[s1[i]]--;
    // cout<<count[s1[n]]<<" ";
    count[s1[i-n]]++;
    // cout<<count[s1[n]]<<" ";
    if (isCountZero(count))
    {
      res++;
    }
  }
  return res;
}
int main()
{
  string s1="forxxorfxdofr";
  // cout<<s1.length();
  string s2="for";
  cout<<count_ana(s1,s2)<<endl;
}
