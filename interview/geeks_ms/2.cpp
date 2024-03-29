#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *left,*right;
};
node *newNode(int data)
{
  node *temp=new node();
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
void levelorder(node *root)
{
  if (root==NULL)
  return;
  queue<node *>q;
  q.push(root);
  while (q.empty()==false)
  {
    int count=q.size();
    while (count>0)
    {
    node *temp=q.front();
    cout<<temp->data<<" ";
    q.pop();
    if (temp->right!=NULL)
    q.push(temp->right);
    if (temp->left!=NULL)
    q.push(temp->left);
    count--;
  }
  cout<<endl;
  }
}
int main()
{
  node *root = newNode(1);
      root->left = newNode(2);
      root->right = newNode(3);
      root->left->left = newNode(4);
      root->left->right = newNode(5);
      root->right->right = newNode(6);

      levelorder(root);
      return 0;
}
