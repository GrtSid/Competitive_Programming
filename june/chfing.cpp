#include<bits/stdc++.h>
using namespace std;
// long long int val(long long int v){
//   int s=0;
//   if (v==0){
//     return 0;
//   }
//   else{
//   s=s+val(v-1);
//   // cout<<s<<endl;
//   return (s+v);}
//   return s;
// }
long long int val(long long int v){
  if (v!=0){
    return v+val(v-1);
  }
  else{
    return v;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n,k,b,a;
    cin>>n>>k;
    a= k-1+(2*k - (k+n-1));
    if (a==0){
      cout<<a<<endl;
    }
    else{
      a=a-1;
      b=val(a -k +1);
      // b=(a-k+1)*(a-k+2)/2;
      // cout<<(a-k+1)<<" "<<b<<endl;
      a=b+ k-1;
      cout<<(a)%1000000007<<endl;
    }

  }
}
