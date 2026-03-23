#include<iostream>
using namespace std;

struct Node{
int val;
Node*left,*right;
Node(int x){val=x;left=right=NULL;}
};

int height(Node*root){
if(!root)return 0;
int l=height(root->left);
int r=height(root->right);
return 1+(l>r?l:r);
}

int dia=0;

int dfs(Node*root){
if(!root)return 0;
int l=dfs(root->left);
int r=dfs(root->right);
if(l+r>dia)dia=l+r;
return 1+(l>r?l:r);
}

int main(){
Node*root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
root->left->left->left=new Node(6);

cout<<"Height="<<height(root)<<endl;
dfs(root);
cout<<"Diameter="<<dia;
}