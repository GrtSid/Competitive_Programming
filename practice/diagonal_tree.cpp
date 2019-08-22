#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *right,*left;
};
void diagonalprintutil(node *root,int d,map<int, vector<int>> &diagonalprint)
{
  if (!root)
  return;
  diagonalprint[d].push_back(root->data);
  diagonalprintutil(root->left,d+1,diagonalprint);
  diagonalprintutil(root->right,d,diagonalprint);

}
void diagonalprint(node *root)
{
  map<int,vector<int>> diagonalprint;
  diagonalprintutil(root,0,diagonalprint);
  for (auto it=diagonalprint.begin();it!=diagonalprint.end();++it)
  {
    for (auto itr=it->second.begin();itr!=it->second.end();++itr)
    cout<<*itr<<' ';
  cout<<'n';
  }
}
node *newNode(int data)
{
  node *node=new node();
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return node;
}
int main()
{
  node *root=newNode(8);
  root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
  diagonalprint(root);
  return 0;
}
