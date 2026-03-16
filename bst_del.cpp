#include <iostream>
using namespace std;

struct Node{
int d;Node*l,*r;
Node(int x):d(x),l(0),r(0){}
};

Node* minNode(Node* r){
while(r->l)r=r->l;
return r;
}

Node* del(Node* r,int x){
if(!r)return r;
if(x<r->d)r->l=del(r->l,x);
else if(x>r->d)r->r=del(r->r,x);
else{
if(!r->l){Node*t=r->r;delete r;return t;}
if(!r->r){Node*t=r->l;delete r;return t;}
Node*t=minNode(r->r);
r->d=t->d;
r->r=del(r->r,t->d);
}
return r;
}

void inorder(Node* r){
if(!r)return;
inorder(r->l);cout<<r->d<<" ";inorder(r->r);
}

int main(){
Node* r=new Node(5);
r->l=new Node(3);r->r=new Node(7);
r=del(r,5);
inorder(r);
}
