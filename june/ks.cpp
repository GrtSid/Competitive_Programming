#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    unsigned long long int n,a;
    long int s=0;
    cin>>n;
    a=n;
    while(a>0){
      s=s+a%10;
      a=a/10;
    }
    // cout<<s<<endl;
    s=10-(s%10);
    s=s%10;
    a=n*10 + s;
    // cout<<"1"<<n<<endl;
    cout<<a<<endl;
  }
  }
