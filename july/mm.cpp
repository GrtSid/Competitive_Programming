#include<bits/stdc++.h>
using namespace std;
int count(int k,int n,vector <int> arr,int z)
{
  int s=k/n;
  // cout<<s<<" ";
  // sum=sum+(s);
  arr.push_back(s);
  k=k-s;
  n=n-1;
  z=z-1;
  if (z==0 || n==0)
  {
    return arr[-1];
  }
  else
  count(k,n,arr,z);
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k,s;
    cin>>n;
    cin>>k;
    int a=(n+1)/2;
    vector<int> arr;
    vector<int> v;
    v.push_back(count(k,n,arr,n));
    cout<<v[1];
    for (int i=0;i<v.size()-1;i++){
    if (a>0)
    s=s+(2*v[i]-v[v.size()-2-i]-v[v.size()-3-i]);
    else{
    cout<<s<<endl;
    break;}
    a=a-1;
  }
  // list<int>::iterator j;
  //   for (auto j = arr.begin(); j != arr.end(); ++j)
  //       cout << *j << " ";
    // cout<<arr[0];
  }
}
