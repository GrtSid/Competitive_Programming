
#include <iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  float b,p=0,s=0;
  int d;
  cin>>d;
  b=d;
  char *a;
  a=new char[d+1];
  cin>>a;
  for (int i=0;i<d;i++){
      if (a[i]=='P'){
          p=p+1;
          // cout<<p<<endl;
      }
      else if (a[i]=='A' && i>1 && i<d-2){
          if (((a[i-1]=='P') || (a[i-2]=='P')) && ((a[i+1]=='P') || (a[i+2]=='P'))){
              s=s+1;}}}
  // cout<<ceil(0.75*b)<<endl;
  if (p+s>=ceil(0.75*b)){

    if (p >=round(0.75*b)){
      cout<<0<<endl;
    }
    else{
      cout<<ceil((0.75*b )- p)<<endl;
  }}
  else{
      cout<<-1<<endl;
  }
}
return 0;
}
