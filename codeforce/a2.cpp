#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int min=a[n-1];
    int count=0;
    for (int i=n-2;i>=0;i--)
    {
      if(a[i]<=min)
      {
        min=a[i];
      }
      else
      {
        count++;
      }
    }
    cout<<count<<endl;
  }
}
