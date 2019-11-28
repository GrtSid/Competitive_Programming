#include<bits/stdc++.h>
using namespace std;
void year_count(string s,int n)
{
  string temp="";
  set<string>year;
  for (int i=0;i<n;i++)
  {
    if (isdigit(s[i]))
    temp+=s[i];
    if (s[i]=='-')
    temp.clear();
    if(temp.length()==4)
    {
      if(year.find(temp)==year.end())
      {
        year.insert(temp);
      }
      temp.clear();
    }
  }
  cout<<year.size()<<endl;
}
int main()
{
  string str = "UN was established on 24-10-1945."
                 "India got freedom on 15-08-1945.";
  int n=str.length();

    year_count(str,n);

    return 0;
}
