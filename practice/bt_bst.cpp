#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  int *next;
};
node *newNode(int data)
{
  node *n_node=new node();
  n_node->data=data;
  n_node->next=NULL;
  return n_node;
}
void printlist(node *root)
{
  while (root!=NULL)
  {
    cout<<root->data<<" ";
    root=root->next;
  }
}
int countnode(node *root)
{
  if (root==NULL)
  return;
  return countnode(root->left)+countnode(root->right)+1;
}
void inorderTraversal(node *root,int a[],int *i)
{
  if (root==NULL)
  return;
  inorderTraversal(root->left,a,i);
  a[*i]=root->data;
  *i++;
  inorderTraversal(root->right,a,i);
}
void inordertotree( node *root,int *arr,int *i)
{
  if (root==NULL)
  return;
  inordertotree(arr,root->left,i);
  root->data=arr[*i];
  (*i)++;
  inordertotree(arr,root->right,i);
}
void binarytobst(node *root)
{
  if (root==NULL)
  return;
  int n=countnode(root);
  int *arr=new int[n];
  int i=0;
  inorderTraversal(root,arr,&i);
  sort(arr)
}
