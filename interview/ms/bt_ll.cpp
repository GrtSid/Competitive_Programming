#include<bits/stdc++.h>
using namespace std;
class ll_node
{
public:
  int data;
  ll_node *next;
};
class node
{
public:
  int data;
  node *left,*right,*next;
};
ll_node *newNode(int data)
{
  ll_node *temp=new ll_node();
  temp->data=data;
  temp->next=NULL;
  return temp;
}
node *newnode(int data)
{
  node *temp=new node();
  temp->data=data;
  temp->right=NULL;
  temp->left=NULL;
  temp->next=NULL;
  return temp;
}
void levelorder(node *root)
{
  if (root==NULL)
  return;
  queue<node *>q;
  q.push(root);
  int count=q.size();
  bool flag=false;
  node *prev,*curr;
  while (!q.empty())
  {
    flag=false;
    if (count==0)
    {
      cout<<endl;
      // cout<<q.size()<<" ";
      count=q.size();
      if (count>=2)
      {
        // ll_node *temp_l=;
        flag=true;
      }
    }
    node *temp=q.front();
    if (flag==true)
    {
      prev=NULL;
      curr=q.front();
    }
    else
    {
      if (curr)
      {
      // cout<<curr->data;
    prev=curr;
    curr=q.front();
    cout<<prev->data<<" ";
    prev->next=curr;
    prev=prev->next;
    cout<<prev->data<<endl;
  }
    // cout<<temp->data<<" ";
  }
    q.pop();
    count--;
    if (temp->left)
    q.push(temp->left);
    if (temp->right)
    q.push(temp->right);
  }
}
int main()
{
  node *root=newnode(1);
  root->left=newnode(2);
  root->right=newnode(8);
  root->left->left=newnode(4);
  root->left->right=newnode(5);
  root->right->left=newnode(10);
  root->right->right=newnode(7);
  levelorder(root);
}
