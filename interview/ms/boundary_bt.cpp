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
  temp->right=NULL;
  temp->left=NULL;
  return temp;
}
void boundary(node *root)
{
  if (root==NULL)
  return;
  if (root->left)
  {
    cout<<root->data<<" ";
    boundary(root->left);
  }
  else if(root->right)
  {
    // if (!root->left)
    cout<<root->data<<" ";
    boundary(root->right);
  }
  if (!root->left && !root->right)
  {
    cout<<root->data<<" ";
    return;
  }
  // if (root->left)
  // boundary(root->left);
  // if (root->right)
  // boundary(root->right);
  // if (!root->left && root->right)
  // cout<<root->data<<" ";
  // cout<<root->data<<" "<<"hello"<<" ";
}
int main()
{
  node *root=newnode(1);
  root->left=newnode(2);
  root->right=newnode(3);
  root->left->left=newnode(4);
  root->left->left->right=newnode(9);
  root->left->left->right->right=newnode(11);
  root->left->right=newnode(5);
  root->left->right->right=newnode(10);
  root->right->left=newnode(6);
  root->right->right=newnode(7);
  root->right->right->right=newnode(8);
  boundary(root);
}
