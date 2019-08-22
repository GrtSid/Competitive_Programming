#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *left;
  node *right;
};
node *new_node(int data){
  node *n_node=new node();
  n_node->left=NULL;
  n_node->data=data;
  n_node->right=NULL;
  return n_node;
}
void replace_sum(node *root,vector<int>a,int *i){
  if (root==NULL){
    return;
  }
  replace_sum(root->left,a,i);
  root->data=a[*i-1]+a[*i+1];
  ++*i;
  replace_sum(root->right,a,i);
}
void inorder(node *root,vector<int>& a){
  if (root==NULL){
    return;
  }
  inorder(root->left,a);
  a.push_back(root->data);
  cout<<root->data<<" ";
  inorder(root->right,a);
}
void inorder_arr(node *root){
  vector<int>a;
  a.push_back(0);
  inorder(root,a);
  a.push_back(0);
  int i=1;
  replace_sum(root,a,&i);
}
void printtree(node *root){
  if (root==NULL){
    return;
  }
  printtree(root->left);
  cout<<root->data<<" ";
  printtree(root->right);
}
int main(){
  node *start=new_node(10);
  start->left=new_node(20);
  start->right=new_node(30);
  start->left->left=new_node(40);
  start->left->right=new_node(50);
  start->right->left=new_node(60);
  inorder_arr(start);
  cout<<endl;
  printtree(start);

}
