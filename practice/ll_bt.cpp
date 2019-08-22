#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *next;
};
class binary_node
{
public:
  int data;
  binary_node *left,*right;
};
void push(node **head_ref,int data)
{
  node *ll_node=new node();
  ll_node->data=data;
  ll_node->next=(*head_ref);
  (*head_ref)=ll_node;
}
binary_node *newbinary(int data)
{
  binary_node *temp= new binary_node();
  temp->data=data;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
void convertlist2binary(node *head,binary_node* &root)
{
  queue<binary_node*>q;
  if (head==NULL)
  {
    root=NULL;
    return;
  }
  root=newbinary(head->data);
  head=head->next;
  q.push(root);
  while (head)
  {
    binary_node *parent=q.front();
    q.pop();
    binary_node *leftchild=NULL, *rightchild=NULL;
    leftchild=newbinary(head->data);
    q.push(leftchild);
    head=head->next;
    if (head)
    {
      rightchild=newbinary(head->data);
      q.push(rightchild);
      head=head->next;
    }
    parent->left=leftchild;
    parent->right=rightchild;
  }
}
void inorderTraversal(binary_node *root)
{
  if (root)
  {
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
  }
}
int main()
{
    // create a linked list shown in above diagram
    node *head = NULL;
    push(&head, 36);  /* Last node of Linked List */
    push(&head, 30);
    push(&head, 25);
    push(&head, 15);
    push(&head, 12);
    push(&head, 10); /* First node of Linked List */

    binary_node *root;
    convertlist2binary(head, root);

    cout << "Inorder Traversal of the constructed Binary Tree is: \n";
    inorderTraversal(root);
    return 0;
}
