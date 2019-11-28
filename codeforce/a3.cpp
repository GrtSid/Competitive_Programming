#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while (t--)
  {
    long long n,m;
    cin>>n>>m;
    bool flag=false;
    long long int sum=0;
    if (m>n)
    {
      cout<<0<<endl;
      continue;
    }
    long long int first=m%10;
    for (long long int i=m;i<=n;i=i+m)
    {
      int a=(i%10);
      if ((i!=m) && (a==first) && (flag==false))
      {
        i=i-m;
        long long int b=n/i;
        i=i*b;
        flag=true;
        sum=sum*b;
        // cout<<2;
      }
      else
      sum=sum+a;
      // cout<<1;
    }
    cout<<sum<<endl;
  }
}
