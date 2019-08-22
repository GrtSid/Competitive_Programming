#include<bits/stdc++.h>
using namespace std;
int count(int k,int n,int sum,int z)
{
  int s=k/n;
  sum=sum+(s);

  k=k-s;
  n=n-1;
  z=z-1;
  if (z==0 || n==0)
  {
    return (s);
  }
  else
  count(k,n,sum,z);
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n;
    cin>>k;
    int a=(n+1)/2;
    k=k-a;
    int s,sum=0;
    s=count(k,n-a,0,n);
    if (a%2==0)
    sum=2*(abs(k-a+1));
    else
    sum=2*abs(k-a)-(s-1);
    cout<<sum<<endl;

  }
}
