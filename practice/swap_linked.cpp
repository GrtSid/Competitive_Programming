#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *next;
};
void swap(node **head_ref,int a,int b){
  if (a==b){
    return;
  }
  node *current_x=*head_ref,*prev_x=NULL;
  node *temp;
  while (current_x!=NULL){
    if ((current_x->data==a) || (current_x->data==b)){
      temp=prev_x->next;
      break;
    }
    prev_x->next=current_x;
    current_x=current_x->next;
  }
  node *current_y=*head_ref,*prev_y=NULL;
  node *temp_y;
  while (current_y!=NULL){
    if ((current_y->data==a)||(current_y->data==b)){

      temp_y=prev_y->next;
      break;
    }
    prev_y->next=current_y;
    current_y=current_y->next;
  }
  node *current=*head_ref,*prev=NULL;
  while (current!=NULL) {
    if (current->data==a){
      prev->next==temp_y;
      temp_y->next=current->next;
    }
    if (current->data==b){
      prev->next=temp;
      temp->next=current->next;
    }
    prev->next=current;
    current=current->next;
  }
}
void push (node **head_ref,int data){
  node* new_node=new node();
  new_node->data=data;
  new_node->next=(*head_ref);
  (*head_ref)=new_node;
}
void printlist(node *node){
  // node *current-head_ref;
  while(node!=NULL){
    cout<<node->data<<" ";
    node=node->next;
  }
}
int main(){
  node *start=NULL;
  push(&start,10);
  push(&start,20);
  push(&start,30);
  push(&start,40);
  push(&start,50);
  printlist(start);
  swap(&start,20,40);
  printlist(start);
}
