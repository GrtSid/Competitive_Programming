#include<bits/stdc++.h>
using namespace std;
void count(string s)
{
  int n=s.length();
  int count=0,A_count=0,B_count=0;
  if (s[0]=='B')
  {
    count++;
    A_count++;
  }
  for (int i=1;i<n;i++)
  {
    if (s[i]=='A')
    {
      A_count++;
    }
    else
    B_count++;
    if (A_count<B_count)
    {
      A_count++;
      B_count--;
      count++;
    }
  }
  cout<<count<<endl;

}
int main()
{
  string s="BBBB";
  count(s);
}
