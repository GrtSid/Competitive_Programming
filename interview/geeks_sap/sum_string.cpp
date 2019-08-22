#include<bits/stdc++.h>
using namespace std;
int sum_string(string str)
{
  int sum=0;
  string temp="";
  int n=str.length();
  for (int i=0;i<n;i++)
  {
    // if (str[i]=='\0')
    // {
    //   sum=sum+atoi(temp.c_str());
    // }
    if (isdigit(str[i]))
    {
      temp=temp+str[i];
    }
    else
    {
      sum=sum+atoi(temp.c_str());
      temp="";
    }
    }
    return sum+atoi(temp.c_str());
}
int main()
{
  string str = "12abc20yz68";

    cout << sum_string(str)<<endl;

    return 0;

}
