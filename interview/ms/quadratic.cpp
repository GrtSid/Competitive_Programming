#include<bits/stdc++.h>
using namespace std;
void roots(int a,int b,int c)
{
  if (b*b>=4*a*c)
  {
    int x1=-1*b+sqrt(b*b-4*a*c);
    x1=x1/(2*a);
    int x2=-1*b-sqrt(b*b-4*a*c);
    x2=x2/(2*a);
    if(x1==x2)
    cout<<"real and same root"<<endl;
    cout<<x1<<" "<<x2<<endl;
  }
  else
  {
    cout<<"imaginary root"<<endl;
    int x1=-1*b+sqrt(-1*(b*b-4*a*c));
    x1=x1/(2*a);
    int x2=-1*b-sqrt(-1*(b*b-4*a*c));
    x2=x2/(2*a);
    cout<<x1<<" "<<x2<<"i"<<endl;
  }
}
int main()
{
  roots(2,3,5);
}
