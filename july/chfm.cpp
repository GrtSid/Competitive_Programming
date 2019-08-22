#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    bool flag=false;
    cin>>n;
    int arr[n];
    long double sum=0;
    for (int i=0;i<n;i++)
    {
      cin>>arr[i];
      sum=sum+arr[i];
    }
    long double m=double(sum/n);
    for (int i=0;i<n;i++)
    {
      if (arr[i]==m)
      {
        cout<<i+1<<endl;
        flag=true;
        break;
      }
    }
    if (flag==false)
    {
      cout<<"Impossible"<<endl;
    }

  }
}
