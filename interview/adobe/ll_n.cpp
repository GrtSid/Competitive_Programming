#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *next;
};
node *newnode(int data)
{
  node *temp=new node();
  temp->data=data;
  temp->next=NULL;
  return temp;
}
void link(node *root,int n)
{
  if (root==NULL)
  return;
  node *first=root;
  node *ref=root;
  for (int i=0;i<n;i++)
  {
    first=first->next;
  }
  while (first->next!=NULL)
  {
    ref=ref->next;
    first=first->next;
  }
  cout<<ref->next->data;
}
int main()
{
  node *root=newnode(1);
  root->next=newnode(2);
  root->next->next=newnode(3);
  root->next->next->next=newnode(4);
  root->next->next->next->next=newnode(5);
  root->next->next->next->next->next=newnode(6);
  root->next->next->next->next->next->next=newnode(7);
  root->next->next->next->next->next->next->next=newnode(8);
  root->next->next->next->next->next->next->next->next=newnode(9);
  root->next->next->next->next->next->next->next->next->next=newnode(10);
  root->next->next->next->next->next->next->next->next->next->next=newnode(11);
  link(root,2);
  return 0;
}
