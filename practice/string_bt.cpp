#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *left,*right;
};
node *newnode(int data)
{
  node *temp=new node();
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
int findindex(string str,int si,int ei)
{
  if (si>ei)
  return -1;
  stack<char>s;
  for (int i=si;i<=ei;i++)
  {
    if (str[i]=='(')
    s.push(str[i]);
    else if(str[i]==')')
    {
      if (s.top()=='(')
      {
        s.pop();
        if (s.empty())
        return i;
      }
    }
  }
  return -1;
}
node *string_bt(string s,int si,int ei)
{
  if (si>ei)
  return NULL;
  node* root=newnode(s[si]-'0');
  int index=-1;
  if (s[si+1]=='(' && si+1<=ei)
  {
    index=findindex(s,si+1,ei);
  }
  if (index!=-1)
  {
    root->left=string_bt(s,si+2,index-1);
    root->right=string_bt(s,index+2,ei-1);
  }
  return root;
}
void printlist(node *root)
{
  if (root==NULL)
  return;
  cout<<root->data<<" ";  //pre-order
  printlist(root->left);
  printlist(root->right);
}
int main()
{
  string s="4(2(3)(1))(6(5))";
  node *root=string_bt(s,0,s.length()-1);
  printlist(root);
}
