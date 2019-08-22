#include<bits/stdc++.h>
using namespace std;
int maxones(int a)
{
  int count=0;
  while (a!=0)
  {
    a=a&(a>>1);
    count=count+1;
  }
  return count;
}
int main()
{
  cout<<maxones(11)<<endl;
}
