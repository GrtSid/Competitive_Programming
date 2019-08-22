#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
void push(struct node** head_ref,int new_data){
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=new_data;
  new_node->next=(*head_ref);
  (*head_ref)=new_node;
}
void insertAfter(struct node* prev_node,int new_data){
  if (prev_node==NULL){
    cout<<"Invalid Input"<<endl;
    return;
  }
  struct node* new_node = (struct node*)malloc(sizeof(node));
  new_node->data=new_data;
  new_node->next=prev_node->next;
  prev_node->next=new_node;
}
void append(struct node** head_ref,int new_data){
  struct node *last= (*head_ref);
  if (head_ref==NULL){
    cout<<"Wrong Input!"<<endl;
  }
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=new_data;
  new_node->next=NULL;
  while (last->next!=NULL){
    last=last->next;
  }
  last->next=new_node;
  return;
}
void printlist(node *node){
  while (node!=NULL){
    cout<<node->data;
    node=node->next;
  }
  return ;
}
int main(){
  node* head=NULL;
  push(&head,2);
  push(&head,5);
  push(&head,1);
  push(&head,0);
  printlist(head);
}
