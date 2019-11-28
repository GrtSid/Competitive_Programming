#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if (a==0)
  return b;
  return gcd(b%a,a);
}
int gcd(int arr[],int n)
{
  int result=arr[0];
  for (int i=1;i<n;i++)
  {
    if (arr[i]==0)
    continue;
    result=gcd(arr[i],result);
    // cout<<result<<endl;
  }
  return result;
}
int main()
{
  int n;
  cin>>n;
  int arr[n][n];
  int r[n];
  for (int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
  {
    cin>>arr[i][j];
  }
  r[i]=gcd(arr[i],n);
}
for (int i=0;i<n;i++)
{
  // if (r[0]==19998)
  // r[0]=9999;
cout<<r[i]<<" ";
}
// int b[n][n];
// for (int i=0;i<n;i++)
// {
//   for (int j=0;j<n;j++)
//   {
//     b[i][j]=arr[j][i];
//   }
// }
// for (int i=0;i<n;i++)
// {
//   int d=gcd(b[i],n);
//   cout<<r[i]*d<<" ";
// }
}
