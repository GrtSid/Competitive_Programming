#include<bits/stdc++.h>
using namespace std;
int main()
{
  int even=0,odd=0;
  int n;
  // bool flag=false;
  cin>>n;
  int a[n];
  for (int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for (int i=0;i<n;i++)
  {
    if (a[i]%2==0)
    even++;
    else
    odd++;

    // flag=true;
  }
  if (even>=odd)
  {
    cout<<odd;
  }
  else
  {
    cout<<even;
  }
  // cout<<min;
}
