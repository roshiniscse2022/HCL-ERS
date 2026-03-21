#include<iostream>
using namespace std;

struct Node{
int val;
Node* left;
Node* right;
Node(int x){val=x;left=right=NULL;}
};

int ans=0;

int dfs(Node* root){
if(!root)return 0;
int l=dfs(root->left);
int r=dfs(root->right);
ans=max(ans,l+r);
return 1+max(l,r);
}

int main(){
Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
dfs(root);
cout<<ans;
}