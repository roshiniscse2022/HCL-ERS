#include<iostream>
#include<stack>
using namespace std;

struct Node{
int val;
Node*left,*right;
Node(int x){val=x;left=right=NULL;}
};

void inorderR(Node*root){
if(!root)return;
inorderR(root->left);
cout<<root->val<<" ";
inorderR(root->right);
}

void preorderR(Node*root){
if(!root)return;
cout<<root->val<<" ";
preorderR(root->left);
preorderR(root->right);
}

void postorderR(Node*root){
if(!root)return;
postorderR(root->left);
postorderR(root->right);
cout<<root->val<<" ";
}

void inorderI(Node*root){
stack<Node*>st;
Node*cur=root;
while(cur||!st.empty()){
while(cur){
st.push(cur);
cur=cur->left;
}
cur=st.top();st.pop();
cout<<cur->val<<" ";
cur=cur->right;
}
cout<<endl;
}

void preorderI(Node*root){
if(!root)return;
stack<Node*>st;
st.push(root);
while(!st.empty()){
Node*cur=st.top();st.pop();
cout<<cur->val<<" ";
if(cur->right)st.push(cur->right);
if(cur->left)st.push(cur->left);
}
cout<<endl;
}

void postorderI(Node*root){
if(!root)return;
stack<Node*>s1,s2;
s1.push(root);
while(!s1.empty()){
Node*cur=s1.top();s1.pop();
s2.push(cur);
if(cur->left)s1.push(cur->left);
if(cur->right)s1.push(cur->right);
}
while(!s2.empty()){
cout<<s2.top()->val<<" ";
s2.pop();
}
cout<<endl;
}

int main(){
Node*root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);

inorderR(root);cout<<endl;
preorderR(root);cout<<endl;
postorderR(root);cout<<endl;

inorderI(root);
preorderI(root);
postorderI(root);
}