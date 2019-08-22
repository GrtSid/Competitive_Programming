#include<bits/stdc++.h>
using namespace std;
int maxavg(int arr[],int n,int k)
{
  int max=0;
  if (k>n)
  {
    return -1;
  }
  for (int i=0;i<k;i++)
  {
    max=max+arr[i];
  }
  int sum=max;
  for (int i=k;i<n;i++)
  {
    sum=sum+arr[i]-arr[i-k];
    if (sum>max)
    {
      max=sum;
    }
  }
  return max;
}
int main()
{
    int arr[] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The maximum average subarray of "
         "length "<< k << " begins at index "
         << maxavg(arr, n, k);
    return 0;
}
