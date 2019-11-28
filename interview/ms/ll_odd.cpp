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
node *reverse(node *root)
{
  if (root==NULL)
  return NULL;
  node *prev=NULL;
  node *curr=root;
  node *next;
  // node *nex=curr->next;
  while (curr!=NULL)
  {
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    // nex=curr->next;
  }
  return prev;
}
void printlist(node *root)
{
  if (root==NULL)
  return;
  cout<<root->data<<" ";
  printlist(root->next);
}
void odd_even(node *root)
{
  if (root==NULL)
  return;
  node *odd=root;
  node *even=root->next;
  node *t=root->next;
  // cout<<even->data<<" ";
  while (odd->next->next!=NULL || even->next!=NULL)
  {
    node *temp_1=odd->next->next;
    odd->next=temp_1;
    node *temp_2 =even->next->next;
    even->next=temp_2;
    // cout<<even->data<<" ";
    odd=odd->next;
    even=even->next;
  }
  // cout<<even->data<<" ";
  node *temp_3=reverse(t);
  odd->next=temp_3;
  printlist(root);
}

int main()
{
  // cout<<"hello"<<endl;
  node *root=newnode(1);
  root->next=newnode(2);
  root->next->next=newnode(3);
  root->next->next->next=newnode(4);
  root->next->next->next->next=newnode(5);
  root->next->next->next->next->next=newnode(6);
  // node *temp=reverse(root);
  // printlist(temp);
  odd_even(root);
}
