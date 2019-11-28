#include<bits/stdc++.h>
using namespace std;
void max_subarray(int arr[],int n)
{
  // int n=(sizeof(arr))/(sizeof(arr[0]));
  int j=0,max=0;
  set<int>s;
  for (int i=0;i<n;i++)
  {
    while (j<n && s.find(arr[j])==s.end())
    {
      s.insert(arr[j]);
      j++;
      if (s.size()>max)
      max=s.size();
    }
    s.erase(arr[i]);
  }
  cout<<max<<endl;
}
int main()
{
  int arr[] = {1, 2,1,1,5,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  max_subarray(arr,n);
  return 0;
}
