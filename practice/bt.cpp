#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *left,*right;
};
node *newnode(int data)
{
  node *temp=new node();
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
void inorder(node *root,int arr[],int *ptr)
{
  if (root==NULL)
  {
    return;
  }
  inorder(root->left,arr,ptr);
  arr[*ptr]=root->data;
  ++(*ptr);
  inorder(root->right,arr,ptr);
}
void arraytobst(node *root,int arr[],int *ptr)
{
  if (root==NULL)
  {
    return;
  }
  arraytobst(root->left,arr,ptr);
  root->data=arr[*ptr];
  ++(*ptr);
  arraytobst(root->right,arr,ptr);
}
int count(node *root)
{
  if (root==NULL)
  return 0;
  return count(root->left)+count(root->right)+1;
}
void printlist(node *root)
{
  if (root==NULL)
  return;
  printlist(root->left);
  cout<<root->data<<" ";
  printlist(root->right);
}
void bt_bst(node *root)
{
  if (root==NULL)
  {
    return;
  }
  printlist(root);
  cout<<endl;
  int i=0;
  int n=count(root);
  int arr[n];
  inorder(root,arr,&i);
  sort(arr,arr+n);
  i=0;
  arraytobst(root,arr,&i);

  return;
}
int main()
{
  node *root = NULL;

    /* Constructing tree given in the above figure
          10
         /  \
        30   15
       /      \
      20       5   */
    root = newnode(10);
    root->left = newnode(30);
    root->right = newnode(15);
    root->left->left = newnode(20);
    root->right->right = newnode(5);

    // convert Binary Tree to BST
    bt_bst(root);

    printf("Following is Inorder Traversal of the converted BST: \n");
    printlist(root);

    return 0;
}
