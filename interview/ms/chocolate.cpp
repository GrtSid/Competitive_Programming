#include<bits/stdc++.h>
using namespace std;
void chocolate(int n,int k)
{
    if ((n*(n+1)/2)>=k)
    {
      for (int i=1;i<=n;i++)
      {
        cout<<i<<" ";
      }
    }
    else
    {
      k=k-(n*(n+1)/2);
      // cout<<k<<" ";
      int a=k/(n*(3*n+1)/2);
      // a++;
      // cout<<a<<" ";
      // cout<<k<<" ";
      k=k-a*(n*(3*n+1)/2);
      // cout<<k<<" ";
      for (int i=1;i<=n;i++)
      {
        int cho=0;
        // cout<<k;
        if (k>=(a+1)*(n+i))
        {
        cho=i+(a)*(n+i)+(a+1)*(n+i);
        k=k-(a+1)*(n+i);
        // cout<<"k:"<<" "<<k<<" ";
        }
        else{
        cho=i+(a)*(n+i)+k;
        k=0;
        }
        cout<<cho<<" ";
      }
    }
}
int main()
{
  chocolate(5,35);
  cout<<endl;
}
