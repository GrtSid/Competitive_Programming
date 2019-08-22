#include<bits/stdc++.h>
using namespace std;
int countp(int arr[],int sum,int n)
{
  map<int,int>m;
  for(int i=0;i<n;i++)
  {
    m[arr[i]]++;
  }
  int twcount=0;
  for (int i=0;i<n;i++)
  {
    twcount+=m[sum-arr[i]];
    if (sum-arr[i]==arr[i])
    {
      twcount--;
    }
  }
  return twcount/2;
}
int main()
{
  int arr[] = {1, 5, 7, -1, 5} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << countp(arr, sum, n)<<endl;
    return 0;
}
