#include<bits/stdc++.h>
using namespace std;
int triplet (int arr[],int n,int sum)
{
  int ans=0;
  sort(arr,arr+n);
  for (int i=0;i<n-2;i++)
  {
    int j=i+1;
    int k=n-1;
    while (j<k)
    {
      if (arr[i]+arr[j]+arr[k]>=sum)
      {
        k--;
      }
      else
      {
        ans=ans+(k-j);
        j=j+1;
      }
    }
  }
  return ans;
}
int main()
{
  int arr[] = {5, 1, 3, 4, 7};
    int n = sizeof arr / sizeof arr[0];
    int sum = 12;
    cout << triplet(arr, n, sum) << endl;
    return 0;
}
