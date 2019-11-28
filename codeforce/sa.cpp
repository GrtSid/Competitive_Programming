#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char c[n];
  map<char,int>m;
  for (int i=0;i<n;i++)
  {
      cin>>c[i];
      m[c[i]]++;
  }
  int one=min(min(m['o'],m['n']),m['e']);
  while (one--)
  {
    cout<<1<<" ";
    m['o']--;
    m['n']--;
    m['e']--;
  }
  int zero=min(min(min(m['z'],m['e']),m['r']),m['o']);
  while (zero--)
{
  cout<<0<<" ";
}
cout<<endl;
}
