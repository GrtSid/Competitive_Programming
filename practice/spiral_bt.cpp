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
void spiral(node *root)
{
  stack<node*>s1;
  stack<node*>s2;
  if (root==NULL)
  return;
  s1.push(root);
  while (!s1.empty() || !s2.empty())
  {
    while (!s1.empty())
    {
      node *temp=s1.top();
      s1.pop();
      cout<<temp->data<<" ";
      if (temp->right)
      {
        s1.push(temp->right);
      }
      else if(temp->left)
      {
        s1.push(temp->left);
      }
    }
    while (!s2.empty())
    {
      node *temp=s2.top();
      s2.pop();
      cout<<temp->data<<" ";
      if (temp->left)
      {
        s1.push(temp->left);
      }
      else if(temp->right)
      {
        s1.push(temp->right);
      }
    }
    }
}
int main()
{
  node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(7);
    root->left->right = newnode(6);
    root->right->left = newnode(5);
    // root->right->right = newnode(4);
    cout << "Spiral Order traversal of binary tree is \n";
    spiral(root);

    return 0;
}
