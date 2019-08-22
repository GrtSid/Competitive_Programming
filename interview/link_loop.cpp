#include<bits/stdc++.h>
using namespace std;
class node{
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
void printlist(node *head)
{
  while (head!=NULL)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}
void detectandremoveloop(node *head)
{
  if (head==NULL || head->next==NULL)
    return;
  node *slow=head;
  node *fast=head;
  slow=slow->next;
  fast=fast->next->next;
  while (fast && fast->next)
  {
    if (slow==fast)
      break;
    slow=slow->next;
    fast=fast->next->next;
  }
  if (slow==fast)
  {
    slow=head;
    while (slow->next!=fast->next)
    {
      slow=slow->next;
      fast=fast->next;
    }
    fast->next=NULL;
  }
}
int main()
{
  node *head=newnode(5);
  head->next=newnode(50);
  head->next->next=newnode(20);
  head->next->next->next=newnode(15);
  head->next->next->next = newnode(4);
    head->next->next->next->next = newnode(10);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

    detectandremoveloop(head);

    printf("Linked List after removing loop \n");
    printlist(head);

    return 0;
}
