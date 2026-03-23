#include<iostream>
using namespace std;

struct Node{
int val;
Node*left,*right;
Node(int x){val=x;left=right=NULL;}
};

void solve(Node*root,int&k,int&ans){
if(!root||k==0)return;
solve(root->left,k,ans);
k--;
if(k==0){
ans=root->val;
return;
}
solve(root->right,k,ans);
}

int main(){
Node*root=new Node(5);
root->left=new Node(3);
root->right=new Node(7);
root->left->left=new Node(2);
root->left->right=new Node(4);
root->right->left=new Node(6);
root->right->right=new Node(8);

int k=3,ans=-1;
solve(root,k,ans);
cout<<ans;
}