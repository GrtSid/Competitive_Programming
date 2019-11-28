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
void merge(node *t1,node *t2)
{
  int c1=0,c2=0,d=0;
  bool flag=true;
  while (t1->next!=NULL)
  {
    c1++;
    t1=t1->next;
  }
  while (t2->next!=NULL)
  {
    c2++;
    t2=t2->next;
  }
  if (c1>c2)
  {
    d=c1-c2;
  }
  else
  {
    d=c2-c1;
    flag=false;
  }
  if (flag==false)
  {
    while (d--)
    {
      t2=t2->next;
    }
  }
}
