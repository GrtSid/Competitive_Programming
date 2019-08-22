#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *next;
};
void push (node **head_ref,int data){
  node* new_node=new node();
  new_node->data=data;
  new_node->next=*head_ref;
  (*head_ref)=new_node;
}
void printlist(node *current){
  // node *current=head;
    while (current!=NULL){
    cout<<current->data<<" ";
    // count=count+1;
    current=current->next;
  }
}
void split(node* head_ref,node **a,node **b);
node* sorted_merge(node* a,node* b);
void merge_sort(node** head_ref){
  node* source=(*head_ref);
  node* a;
  node* b;
  if ((source==NULL) || ((source)->next==NULL)){
    return;
  }
  split(source,&a,&b);
  merge_sort(&a);
  merge_sort(&b);
  (*head_ref)=sorted_merge(a,b);
}
void split(node* source, node** a,node** b) {
  node* fast=source->next;
  node* slow=source;
  while (fast!=NULL){
    fast=fast->next;
    if (fast!=NULL){
      slow=slow->next;
      fast=fast->next;
    }
  }
  (*a)=source;
  (*b)=slow->next;
  slow->next=NULL;
}
node* sorted_merge(node* a,node* b){
  node* result=NULL;
  if (a==NULL){
    return b;
  }
  else if(b==NULL){
    return a;
  }
  if (a->data<=b->data){
    result=a;
    result->next=sorted_merge(a->next,b);}
  else{
    result=b;
    result->next=sorted_merge(a,b->next);
  }
  return result;


}
int main(){
  node* start=NULL;
  push(&start,10);
  push(&start,20);
  push(&start,30);
  push(&start,40);
  push(&start,50);
  push(&start,60);
  printlist(start);
  cout<<endl;
  merge_sort(&start);
  printlist(start);

}
