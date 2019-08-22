#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *left=NULL;
  node *right=NULL;
};
node *newNode(int data){
  node* n_node=new node();
  n_node->data=data;
  n_node->left=NULL;
  n_node->right=NULL;
  return n_node;
}
void printlist(node *root){
  if (root==NULL){
    return;
  }
  printlist(root->left);
  cout<<root->data<<" ";
  printlist(root->right);
}
node *findlca(node *root, int a,int b){
  if (root==NULL){
    return NULL;
}
if (root->data==a || root->data==b){
  return root;
}
node* le=findlca(root->left,a,b);
node *ri=findlca(root->right,a,b);
if (le && ri){
  return root;
}
return (le!=NULL)?le:ri;
}
int main(){
  node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->left = newNode(10);
    root->right->left->right = newNode(11);
    root->right->left->right->right = newNode(12);
    root->right->right->left = newNode(8);
    root->right->right->right = newNode(9);
    cout << "nLCA(4, 6) = " << findlca(root, 12, 10)->data<<endl;
    cout << "nLCA(3, 4) = " << findlca(root, 3, 4)->data<<endl;
    cout << "nLCA(2, 4) = " << findlca(root, 2, 4)->data<<endl;
    return 0;
}
