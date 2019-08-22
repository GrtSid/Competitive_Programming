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
  node *n_node=new node();
  n_node->data=data;
  n_node->next=NULL;
  return n_node;
}
node *mergetwo(node *a,node *b)
{
  node *result;
  while (a!=NULL && b!=NULL)
  {
    if (a->data>=b->data)
    {
      node *temp;
      temp=newnode(a->data);
      temp->next=result;
    }
    else
    {
      node *temp;
      temp=newnode(b->data);
      temp->next=result;
    }
    if (a==NULL)
    {
      while (b!=NULL)
      {node *temp=newnode(b->data);
        temp->next=result;}
    }
    if (b==NULL)
    {
      while (a!=NULL)
      {node *temp=newnode(a->data);
        temp->next=result;
    }
  }
}
  return result;
}
void printlist(node *root)
{
  while (root!=NULL)
  {
    cout<<root->data<<" ";
    root=root->next;
  }

}
int main()
{
   node* res = NULL;

    /* Let us create two sorted linked lists to test
       the above functions. Created lists shall be
         a: 5->10->15
         b: 2->3->20  */
    node *a = newnode(5);
    a->next = newnode(10);
    a->next->next = newnode(15);

    node *b = newnode(2);
    b->next = newnode(3);
    b->next->next = newnode(20);

    cout << "List A before merge: \n";
    // printlist(b);

    cout << "\nList B before merge: \n";
    // printlist(b);

    /* merge 2 increasing order LLs in descresing order */
    res = mergetwo(a, b);

    cout << "\nMerged Linked List is: \n";
    printlist(res);

    return 0;
}
