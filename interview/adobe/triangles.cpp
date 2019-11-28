#include<bits/stdc++.h>
using namespace std;
int triangle(int arr[],int n)
{
  sort(arr,arr+n);
  int count=0;
  int k;
  for (int i=0;i<n-2;i++)
  {
    k=i+2;
    for (int j=i+1;j<n-1;j++)
    {
      while (k<n && arr[i]+arr[j]>arr[k])
      {
        ++k;
      }
      if (k>j)
      {
        count+=k-j-1;
      }
    }
  }
  return count;
}
int main()
{
  int arr[] = {10, 21, 22, 100, 101, 200, 300};
    int size = sizeof( arr ) / sizeof( arr[0] );

    cout<<"Total number of triangles possible is "<<triangle( arr, size );
}
