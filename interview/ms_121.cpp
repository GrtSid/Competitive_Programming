#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *right;
  node *left;
  node *parent;
};
node *minvalue(node *root);
node *inordersucc(node *root,node *n)
{
  if (n->right!=NULL)
  {
   return minvalue(n->right);
  }
  node *p=n->parent;
  while (p!=NULL && n==p->right)
  {
    n=p;
    p=n->parent;
  }
  return p;
}
node *minvalue(node *root)
{
  while (root->left!=NULL)
  {
    root=root->left;
  }
  return root;
}
node *newnode(int data)
{
  node *n_node=new node();
  n_node->data=data;
  n_node->left=NULL;
  n_node->right=NULL;
  n_node->parent=NULL;
  return n_node;
}
node *insert(node *root,int data)
{
  if (root==NULL)
  {
    return newnode(data);
  }
  else
  {
    node *temp;
    if (data<=root->data)
    {
      temp=insert(root->left,data);
      root->left=temp;
      temp->parent=root;
    }
    else
    {
      temp=insert(root->right,data);
      root->right=temp;
      temp->parent=root;
    }
  }
  return root;
}
int main()
{
  node* root = NULL, *temp, *succ, *min;

  //creating the tree given in the above diagram
  root = insert(root, 20);
  root = insert(root, 8);
  root = insert(root, 22);
  root = insert(root, 4);
  root = insert(root, 12);
  root = insert(root, 10);
  root = insert(root, 14);
  temp = root->left->right->right;

  succ =  inordersucc(root,temp);
  if(succ !=  NULL)
    printf("\n Inorder Successor of %d is %d ", temp->data, succ->data);
  else
    printf("\n Inorder Successor doesn't exit");

  return 0;
}
