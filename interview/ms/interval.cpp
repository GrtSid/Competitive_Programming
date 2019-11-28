#include<bits/stdc++.h>
using namespace std;
void count(int l[],int r[],int n)
{
  sort(l,l+n);
  sort(r,r+n);
  int count=1;
  for (int i=0;i<n-1;i++)
  {
    if (r[i]<l[i+1])
    {
      count++;
    }
    else
    continue;
  }
  cout<<count<<endl;
}
int main()
{
  int l[]={1,2,6,9};
  int r[]={5,5,8,15};
  int n=sizeof(l)/sizeof(l[0]);
  count(l,r,n);
}
