#include<bits/stdc++.h>
using namespace std;
#define size 26
void freq(string str)
{
  int n=str.length();
  int f[size];
  memset(f,0,sizeof(f));
  for (int i=0;i<n;i++)
  {
    f[str[i]-'a']++;
  }
  for (int i=0;i<n;i++)
  {
    if (f[str[i]-'a']!=0)
    {
      cout<<f[str[i]-'a']<<" "<<str[i]<<endl;
      f[str[i]-'a']=0;
    }
  }
}
int main()
{
  string str="geeksforgeeks";
  freq(str);
  return 0;
}
