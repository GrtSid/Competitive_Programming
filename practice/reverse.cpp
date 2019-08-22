#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
  node (int data){
    this->data=data;
    this->next=NULL;
  }
};
struct LinkedList{
  node *head=NULL;
  // LinkedList(){
  //   head=NULL;
  // }
  void reverse(){
    node *current=head;
    node *prev=NULL,*next=NULL;
    while(current!=NULL){
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
    }
    head=prev;
  }

void print (){
  struct node *temp=head;
  while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
void push(int data){
  node *temp=new node(data);
  temp->next=head;
  head=temp;

}};
int main(){
  LinkedList ll;
  ll.push(20);
  ll.push(30);
  ll.push(40);
  ll.push(50);
  ll.print();
  ll.reverse();
  cout<<endl;
  ll.print ();
}
