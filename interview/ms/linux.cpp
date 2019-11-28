#include<bits/stdc++.h>
using namespace std;
void linux_directory(string path)
{
  int n=path.length();
  string s="";
  if(path[0]!='/')
  return;
  else
  s+='/';
  for (int i=1;i<n;i++)
  {
    if (isalpha(path[i]))
    s+=path[i];
    if (path[i]=='.')
    {
      if (path[i+1]=='.')
      {
        int l=s.length();
        if(s[l-1]=='/')
        s=s.substr(0,l-1);
        // s[l-1]='';
        if(isalpha(s[l-2]))
        {
          s=s.substr(0,l-2);
          // s[l-2]='';
        }
      }
    }
    if(path[i]=='/')
    {
      int l=s.length();
      if(s[l-1]!='/')
      s+='/';
    }
  }
  // if(s[s.length()-1]=='/')
  // s=s.substr(0,s.length()-1);
  cout<<s<<endl;
}
int main()
{

    // absolute path which we have to simplify.

    string str="/a/./b/./c/./d/";

    linux_directory(str);

    // cout << res;

    return 0;
}
