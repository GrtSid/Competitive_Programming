#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,a;
  cin>>n>>k;
  int c[k]={};
  int m=(n+1)/2;
  while (n--)
  {
    cin>>a;
    c[a-1]=c[a-1]+1;
  }

  int count=0;
  int j = sizeof(c)/sizeof(c[0]);
  sort(c, c+j, greater<int>());
  for (int i=0;i<k;i++)
  {
    // cout<<c[i];
    if ((c[i]/2)>0)
    {m=m-(c[i]/2);
    count=count+((c[i]/2)*2);
  }
    if ((c[i]%2!=0) && (m!=0))
    {
      m=m-1;
      count=count+1;
    }
    // cout<<m;
    if (m==0)
    {
      break;
    }
  }
  cout<<count<<endl;
}
