#include<bits/stdc++.h>
using namespace std;
string encoding(string s)
{
  int hasheven[26]={0};
  int hashodd[26]={0};
  for (int i=0;i<s.length();i++)
  {
    if (i&1)
    hashodd[s[i]-'a']++;
    else
    hasheven[s[i]-'a']++;
  }
  string encoding="";
  for (int i=0;i<26;i++)
  {
    encoding+=hasheven[i];
    encoding+="-";
    encoding+=hashodd[i];
    encoding+="-";
  }
  return encoding;
}
int password(string arr[],int n)
{
  int count=0;
  set<string>s;
  for (int i=0;i<n;i++)
  {
    if (s.find(encoding(arr[i]))==s.end())
    {
      s.insert(encoding(arr[i]));
      count++;
    }
  }
  return count;
}
int main()
{
    string input[] = {"abcd", "acbd", "adcb", "cdba",
                      "bcda", "badc"};
    int n = sizeof(input)/sizeof(input[0]);

    cout << password(input,n);
    return 0;
}
