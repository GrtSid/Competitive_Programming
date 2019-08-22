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
  node *head=new node();
  head->data=data;
  head->next=NULL;
  return head;
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
void hashandremove(node *head)
{
  map<node*,int>node_map;
  node *prev=NULL;
  while (head!=NULL)
  {
    if (node_map.find(head)==node_map.end())
    {
      node_map[head]++;
      prev=head;
      head=head->next;
    }
    else
    {
      prev->next=NULL;
      break;
    }
  }
}
int main()
{
  node *head=newnode(5);
  head->next = newnode(50);
    head->next = newnode(20);
    head->next->next = newnode(15);
    head->next->next->next = newnode(4);
    head->next->next->next->next = newnode(10);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

    // printList(head);
    hashandremove(head);

    printf("Linked List after removing loop \n");
    printlist(head);

    return 0;

}
