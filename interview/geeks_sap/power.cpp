#include<bits/stdc++.h>
using namespace std;
int *power_two(int arr[],int n)
{

  for (int i=0;i<n;i++)
  {
    int x=arr[i];
    if (!(x&(x&(x-1))))
    {
      arr[i]=1;
    }
    else
    {
      arr[i]=0;
    }
  }
  return arr;
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  int *a=power_two(arr,n);
  // int n=sizeof(arr)/sizeof(arr[0]);
  for (int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
