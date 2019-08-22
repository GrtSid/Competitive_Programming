#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *next;
};
void push(node **head_ref,int data){
  node* new_node=new node();
  new_node->data=data;
  new_node->next=*head_ref;
  (*head_ref)=new_node;
}
void printlist(node *node){
  while(node!=NULL){
    cout<<node->data<<" ";

  node=node->next;
}}
void merge(node **head_ref1, node **head_ref2){
  node *current1=*head_ref1;

  while (current1!=NULL){
    node *current2=*head_ref2;
    while (current2!=NULL){
      if (current1->data==current2->data){
        cout<<current1->data;
      }
      current2=current2->next;
    }
    current1=current1->next;
  }
}
node *k_reverse(node *head,int k)
{
  node *current=head;
  node *prev=NULL;
  node *next=NULL;
  int count=0;
  while ((current!=NULL)&&(count<k)){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    count=count+1;
  }
  if (head!=NULL){
    (head->next)=current;
  }
  count=0;
  while (count<k-1 && current!=NULL){
    prev=current;
    current=current->next;
    // next=current->next;
    count=count+1;
  }
  if (current!=NULL){
    current->next=k_reverse(current->next,k);

  }
  return prev;
}

int main(){
  node* start=NULL;
  node *end=NULL;
  push(&end,15);
  push(&end,17);
  push(&end,20);
  push(&end,45);
  push(&start,10);
  push(&start,20);
  push(&start,30);
  push(&start,40);
  push(&start,50);
  push(&start,60);
  push(&start,70);
  push(&start,80);
  push(&start,90);
  push(&start,100);
  printlist(start);
  cout<<endl;
  // printlist(end);
  // cout<<endl;
  // merge(&start,&end);
  start=k_reverse(start,3);
  printlist(start);


}
