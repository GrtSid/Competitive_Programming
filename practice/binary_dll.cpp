#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *left=*right=NULL;
};
node *new_node(int data){
  node *n_node=new node();
  n_node->data=data;
  n_node->left=n_node->right=NULL;
  return n_node;
}
void printtree(node *root,vector<int> arr){
  if (root==NULL){
    return;
  }
  printtree(root->left);
  arr.push_back(root->data);
  cout<<root->data<<" ";
  printtree(root->right);
}
