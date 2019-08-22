#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int n,k,count=0,m=1;
  cin>>n>>k;
  while (n--)
  {
    count=count+m;
    m=m+1;
    if ((count-k)==n)
    {
      cout<<n<<endl;
      break;
    }
  }
}
