#include<bits/stdc++.h>
using namespace std;
// double a(vector<int>v)
// {
//   vector<int>::iterator i;
//   int n=v.size();
//   int arr[n];
//   int count=0;
//   int j=0;
//   memset(arr,1,sizeof(arr[0]));
//   for (i=v.begin();i<v.end();i++)
//   {
//     if (count==j)
//     arr[i]=arr[i]*(*i);
//   }
// }
int f(int *a,int b)
{
  b=b-1;
  if (b==0)
  return 1;
  *a=*a+1;
  cout<<a<<" "<<*a<<endl;
  int d=f(a,b);
  cout<<d<<" ";
  return (d*(*a));
}
int main()
{
  int a=3;
  int b=3;
  cout<< f(&a,b);
}
