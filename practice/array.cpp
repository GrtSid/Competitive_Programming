#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int x)
{
  /* First x in the below expression is
     for the case when x is 0 */
     cout<<(x&&(x-1))<<endl;
  return x && (!(x&(x-1)));
}
int main()
{
  cout<<isPowerOfTwo(5)<<endl;
}
