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
  temp->right=NULL;
  temp->left=NULL;
  return temp;
}
void printleave(node *root)
{
  if (root==NULL)
  return;
  printleave(root->left);
  if ((!root->left) && (!root->right))
  {
    cout<<root->data<<" ";
  }
  printleave(root->right);
}
void printleft(node *root)
{
  if (root==NULL)
  return;
  if (root->left)
  {cout<<root->data<<" ";
  printleft(root->left);
}
else if (root->right)
{
  cout<<root->data<<" ";
  printleft(root->right);
}
}
void printright(node *root)
{
  if (root==NULL)
  {
    return;
  }
  if (root->right)
  {
    printright(root->right);
    cout<<root->data<<" ";
  }
  else if(root->left)
  {
    printright(root->left);
    cout<<root->data<<" ";
  }
}
void printBoundary(node *root)
{
  if (root==NULL)
  return;
  cout<<root->data<<" ";
  printleft(root->left);
  printleave(root->left);
  printleave(root->right);
  printright(root->right);
}

int main()
{
   node* root = newnode(20);
    root->left = newnode(8);
    root->left->left = newnode(4);
    root->left->right = newnode(12);
    root->left->right->left = newnode(10);
    root->left->right->right = newnode(14);
    root->right = newnode(22);
    root->right->right = newnode(25);

    printBoundary(root);

    return 0;
}
