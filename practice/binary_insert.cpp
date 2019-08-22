#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int key;
  node *left,*right;
};
node *new_node(int key){
  node *temp=new node();
  temp->key=key;
  temp->left=temp->right=NULL;
  return temp;
}
void inorder(node *a){
  if (a==NULL){
    return;
  }
  // cout<<a->key<<" ";
  inorder(a->left);
  cout<<a->key<<" ";
  inorder(a->right);
  // cout<<a->key<<" ";
}
void insert(node *temp,int data){
  queue<node*>t;
  t.push(temp);
  while (!t.empty()){
    // cout<<endl;
    node *temp=t.front();
    t.pop();
    if (temp->left==NULL){
      temp->left=new_node(data);
      break;
    }
    else{
      t.push(temp->left);
    }
    if (temp->right==NULL){
      temp->right=new_node(data);
      break;
    }
    else{
      t.push(temp->right);
    }
    }
}
int main(){
  node *start=new_node(10);
  start->left=new_node(20);
  start->right=new_node(30);
  start->left->left=new_node(40);
  start->left->right=new_node(50);
  inorder(start);
  insert(start,70);
  inorder(start);
}
