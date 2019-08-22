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
  temp->right=NULL;
  temp->left=NULL;
  return temp;
}
bool range(node *root,int low,int high)
{
  return (root->data>=low && root->data<=high);
}
bool countutil(node *root,int low,int high, int *count)
{
  if (root==NULL)
  return true;
  bool l=countutil(root->left,low,high,count);
  bool r=countutil(root->right,low,high,count);
  if (l && r && range(root,low,high))
  {++*count;
  return true;}
  return false;
}
int count(node *root,int low,int high)
{
  int count=0;
  countutil(root,low,high,&count);
  return count;
}
int main()
{
  node* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(50);
    root->left->left = newNode(1);
    root->right->left = newNode(40);
    root->right->right = newNode(100);
    /* Let us constructed BST shown in above example
          10
        /    \
      5       50
     /       /  \
    1       40   100   */
    int l = 1;
    int h = 45;
    cout << "Count of subtrees in [" << l << ", "
         << h << "] is " << count(root, l, h);
    return 0;
}
