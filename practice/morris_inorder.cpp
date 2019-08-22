#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *left=NULL;
  node *right=NULL;
};
node *new_node(int data){
  node *n_node=new node();
  n_node->data=data;
  n_node->left=NULL;
  n_node->right=NULL;
  return n_node;
}
void morris(node *root){
  node *current,*pre;
  if (root==NULL){
    return;
  }
  current=root;
  while (current!=NULL){
    if (current->left==NULL){
      cout<<current->data<<" ";
      current=current->right;    }
    else{
      pre=current->left;
      while (pre->right!=NULL && pre->right!=current){
        pre=pre->right;
      }
      if (pre->right==NULL){
        pre->right=current;
        current=current->left;
      }
      else{
        pre->right=NULL;
        cout<<current->data<<" ";
        current=current->right;
      }
    }
  }
}
int main(){
  node *root=new_node(1);
  root->left = new_node(2);
  root->right = new_node(3);
  root->left->left = new_node(4);
  root->left->right = new_node(5);
  morris(root);
  return 0;
}
