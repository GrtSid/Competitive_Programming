#include<bits/stdc++.h>
using namespace std;
void min_cost(int length[],int cost[],int n)
{
  // int c=0;
  int max=INT_MIN,min=INT_MAX;
  // int n=sizeof(length)/sizeof(length[0]);
  for (int i=0;i<n;i++)
  {
    if(length[i]>max)
    max=length[i];
    if(length[i]<min)
    min=length[i];
  }
  // cout<<min<<" "<<max;
  int min_cost=INT_MAX;
int one=(max-min)/3;
int two=2*(max-min)/3;
  while(one!=two)
  {
  int c2=0,c=0;
  for(int i=0;i<n;i++)
  {
    c+=abs(length[i]-one)*cost[i];
    // if (c<min_cost)
    // min_cost=c;
    c2+=abs(length[i]-two)*cost[i];
  }
  if (c2>c)
  {
    max=two-1;
    min_cost=c;
  }
  else
  {
    min=one+1;
    min_cost=c2;
  }
  one=(max-min)/3;
  two=2*(max-min)/3;
}
// cout<<c<<" "<<c2<<endl;
}
int main()
{
  int length[]={1,2,3,4};
  int cost[]={1,1,1,1};
  int n=sizeof(length)/sizeof(length[0]);
  min_cost(length,cost,n);

}
