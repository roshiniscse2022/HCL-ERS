#include <iostream>
using namespace std;

struct Node{
int d;Node*l,*r;
Node(int x):d(x),l(0),r(0){}
};

Node* insert(Node* r,int x){
if(!r)return new Node(x);
if(x<r->d)r->l=insert(r->l,x);
else r->r=insert(r->r,x);
return r;
}

bool search(Node* r,int x){
if(!r)return false;
if(r->d==x)return true;
return x<r->d?search(r->l,x):search(r->r,x);
}

void inorder(Node* r){
if(!r)return;
inorder(r->l);
cout<<r->d<<" ";
inorder(r->r);
}

int main(){
Node* r=0;
r=insert(r,5);
insert(r,3);insert(r,7);
inorder(r);
cout<<search(r,7);
}
