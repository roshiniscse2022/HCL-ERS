#include<iostream>
using namespace std;

struct Node{
int val;
Node*left,*right;
Node(int x){val=x;left=right=NULL;}
};

void flat(Node*root){
if(!root)return;
flat(root->left);
flat(root->right);
if(root->left){
Node*t=root->left;
while(t->right)t=t->right;
t->right=root->right;
root->right=root->left;
root->left=NULL;
}
}

int main(){
Node*root=new Node(1);
root->left=new Node(2);
root->right=new Node(5);
root->left->left=new Node(3);
root->left->right=new Node(4);
root->right->right=new Node(6);
flat(root);
while(root){cout<<root->val<<" ";root=root->right;}
}