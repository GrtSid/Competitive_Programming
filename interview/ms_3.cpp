#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *left,*right;
};
node *newNode(int data)
{
  node *n_node=new node();
  n_node->data=data;
  n_node->left=NULL;
  n_node->right=NULL;
}
void largestutil(node *root,int k,int &c)
{
  if (root==NULL || c>=k)
  {
    return;
  }
  largestutil(root->right,k,c);
  c++;
  if (c==k)
  {
    cout<<"largest element "<<root->data<<endl;
    return;
  }
  largestutil(root->left,k,c);
}
void kthlargest(node *root,int k)
{
  int c=0;
  largestutil(root,k,c);
}
node *insert(node *root,int key)
{
  
}
