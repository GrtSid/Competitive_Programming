#include<bits/stdc++.h>
using namespace std;
long long int power(long long int y){


  if (y==0){
    return 1;
  }
  long long int temp=power(y/2);
  if (y%2==0){
    return ((temp%1000000007)*(temp%1000000007))%1000000007;
  }
  else{
    return (2*(temp%1000000007)*(temp%1000000007))%1000000007;
  }
}
int main(){
  int t;
  scanf ("%d",&t);
  while (t--){
    long long int k,a;
    scanf("%lld",&k);
    a=(5*(power(k)%1000000007))%1000000007;

    cout<<a<<endl;

  }
}
