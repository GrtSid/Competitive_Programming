#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *right,*left;
};
node *newnode(int data)
{
  node *temp=new node();
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
void max_leaves(node *root)
{
  if (root==NULL)
  return;
  if (root->left || root->right)
  {
    if (root->left)
    max_leaves(root->left);
    if (root->right)
    max_leaves(root->right);
  }
  if (!root->left && !root->right)
  {
    cout<<root->data<<" ";
  }
}
int main()
{
  node *root=newnode(1);
  root->left=newnode(2);
  root->right=newnode(3);
  root->left->left=newnode(4);
  root->left->right=newnode(5);
  root->right->left=newnode(6);
  root->right->right=newnode(7);
  root->right->right->right=newnode(8);
  max_leaves(root);
}
