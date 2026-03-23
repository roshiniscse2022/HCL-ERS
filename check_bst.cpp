#include<iostream>
#include<climits>
using namespace std;

struct Node{
int val;
Node*left,*right;
Node(int x){val=x;left=right=NULL;}
};

bool ok(Node*root,long long mn,long long mx){
if(!root)return true;
if(root->val<=mn||root->val>=mx)return false;
return ok(root->left,mn,root->val)&&ok(root->right,root->val,mx);
}

int main(){
Node*root=new Node(4);
root->left=new Node(2);
root->right=new Node(6);
root->left->left=new Node(1);
root->left->right=new Node(3);
root->right->left=new Node(5);
root->right->right=new Node(7);
cout<<(ok(root,LLONG_MIN,LLONG_MAX)?"BST":"Not BST");
}