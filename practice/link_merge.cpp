#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *next;
};
node *new_node(int data)
{
  node *n_node=new node();
  n_node->data=data;
  n_node->next=NULL;
  return n_node;
}
node *sorted_merge(node *a,node *b)
{
  if ((a==NULL) && (b==NULL))
  {
    return NULL;
  }
  node *res=NULL;
  while (a!=NULL && b!=NULL)
  {
    if (a->data<=b->data)
    {
      node *temp=a->next;
      a->next=res;
      res=a;
      a=temp;
    }
    else
    {
      node *temp=b->next;
      b->next=res;
      res=b;
      b=temp;
    }
  }
    while (a!=NULL)
    {
      node *temp=a->next;
      a->next=res;
      res=a;
      a=temp;
    }
    while (b!=NULL)
    {
      node *temp=b->next;
      b->next=res;
      res=b;
      b=temp;
    }
    return res;
}
void printlist(node *a)
{
  while (a!=NULL)
  {
    cout<<a->data<<" ";
    a=a->next;
  }
}
int main()
{
  node *res=NULL;
  node *a=new_node(5);
  a->next=new_node(10);
  a->next->next=new_node(15);
  node *b=new_node(2);
  b->next=new_node(3);
  b->next->next=new_node(20);
  res=sorted_merge(a,b);
  printlist(res);
  cout<<endl;
}
