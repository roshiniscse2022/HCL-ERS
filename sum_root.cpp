#include<iostream>
using namespace std;

struct Node{
int val;
Node*left,*right;
Node(int x){val=x;left=right=NULL;}
};

int go(Node*root,int cur){
if(!root)return 0;
cur=cur*10+root->val;
if(!root->left&&!root->right)return cur;
return go(root->left,cur)+go(root->right,cur);
}

int main(){
Node*root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
cout<<go(root,0);
}