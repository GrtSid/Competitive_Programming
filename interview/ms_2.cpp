#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node *left=NULL;
  node *right=NULL;
};
node *newNode(int data)
{
  node* n_node=new node();
  n_node->data=data;
  n_node->right=NULL;
  n_node->left=NULL;
  return n_node;
}
void printlist(node *n_node)
{
  if (n_node==NULL)
  {
    return;
  }
  printlist(n_node->left);
  cout<<n_node->data<<" ";
  printlist(n_node->right);
}
bool summ(node *root, int *cur_sum,int sum)
{
  if (root==NULL)
  {
    *cur_sum=0;
    return false;
  }
  int sum_left=0;
  int sum_right=0;
  // summ(root->left,&sum_left,sum);
  *cur_sum=sum_left+sum_right+root->data;
  cout<<sum_left<<" "<<sum_right<<" "<<root->data<<endl;
  cout<<*cur_sum<<endl;
  return ((summ(root->left,&sum_left,sum))|| (summ(root->right,&sum_right,sum)) || ((*cur_sum=sum_left+sum_right+root->data)==sum));
}
bool sum_tree(node *root,int sum)
{
  int cur_sum=0;
  return summ(root,&cur_sum,sum);
}
int main()
{
  node *root=newNode(8);
  root->left    = newNode(5);
    root->right   = newNode(4);
    root->left->left = newNode(9);
    root->left->right = newNode(7);
    root->left->right->left = newNode(1);
    root->left->right->right = newNode(12);
    root->left->right->right->right = newNode(2);
    root->right->right = newNode(11);
    root->right->right->left = newNode(3);
    int sum = 22;

    if (sum_tree(root, sum))
        cout << "Yes"<<endl;
    else
        cout << "No"<<endl;
    return 0;
}
Layer (type)                    Output Shape         Param #     Connected to
==================================================================================================
input_1 (InputLayer)            (None, 30)           0
__________________________________________________________________________________________________
embedding (Embedding)           (None, 30, 256)      12800000    input_1[0][0]
__________________________________________________________________________________________________
activation_1 (Activation)       (None, 30, 256)      0           embedding[0][0]
__________________________________________________________________________________________________
bi_lstm_0 (Bidirectional)       (None, 30, 1024)     3149824     activation_1[0][0]
__________________________________________________________________________________________________
bi_lstm_1 (Bidirectional)       (None, 30, 1024)     6295552     bi_lstm_0[0][0]
__________________________________________________________________________________________________
concatenate_1 (Concatenate)     (None, 30, 2304)     0           bi_lstm_1[0][0]
                                                                 bi_lstm_0[0][0]
                                                                 activation_1[0][0]
__________________________________________________________________________________________________
attlayer (AttentionWeightedAver (None, 2304)         2304        concatenate_1[0][0]
__________________________________________________________________________________________________
softmax (Dense)                 (None, 64)           147520      attlayer[0][0]
==================================================================================================
Total params: 22,395,200
Trainable params: 22,395,200
Non-trainable params: 0
