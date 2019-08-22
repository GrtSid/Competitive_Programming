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
  n_node->left=NULL;
  n_node->right=NULL;
  n_node->data=data;
  return n_node;
}
int sum(node *root,int c,vector<int> &d){
  int a;
  c=c+1;
  if (root==NULL){
  return (0,c);
  }
  if (c>a){
  d.push_back(root->data);}
  else{
    d[c-1]=d[c-1]+root->data;
  }
  a=c;
  return (root->data+sum(root->left,c,d)+sum(root->right,c,d));
}
int evenoddsum(node *root,int c,vector<int> &d){
  int a=c;
  c=c+1;
  if (root==NULL){
  return (0,c);
  }
  if (c<=2 & d.size()<2){
  d.push_back(root->data);
}
  else if(c%2==0){
    d[1]=d[1]+root->data;
  }
  else if(c%2!=0){
    d[0]=d[0]+root->data;
  }
  return (root->data+evenoddsum(root->left,c,d)+evenoddsum(root->right,c,d));
}
int evenOddLevelDifference(node* root)
{
    if (!root)
        return 0;

    // create a queue for
    // level order traversal
    queue<node*> q;
    q.push(root);

    int level = 0;
    int evenSum = 0, oddSum = 0;

    // traverse until the
    // queue is empty
    while (!q.empty())
    {
        int size = q.size();
        level += 1;

        // traverse for
        // complete level
        while(size > 0)
        {
            node* temp = q.front();
            q.pop();
            if(level % 2 == 0)
                evenSum += temp->data;
            else
                oddSum += temp->data;
            // check for left child
            if (temp->left)
            {
                q.push(temp->left);
            }
            // check for right child
            if (temp->right)
            {
                q.push(temp->right);
            }
            size -= 1;
        }
        cout<<q.size()<<endl;
    }

    return (oddSum - evenSum);
}
int main(){
  int c=0;
  vector <int> d;
  node* root = newNode(5);
  root->left = newNode(2);
  root->right = newNode(6);
  root->left->left = newNode(1);
  root->left->right = newNode(4);
  root->left->right->left = newNode(3);
  root->right->right = newNode(8);
  root->right->right->right = newNode(9);
  root->right->right->left = newNode(7);
  evenoddsum(root,c,d);
  cout<<d[0]-d[1]<<endl;
  cout<<evenOddLevelDifference(root);
}
