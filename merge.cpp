#include <iostream>
using namespace std;

struct Node{
int data;
Node* next;
Node(int x):data(x),next(NULL){}
};

Node* merge(Node* a,Node* b){
if(!a)return b;
if(!b)return a;
if(a->data<b->data){
a->next=merge(a->next,b);
return a;
}else{
b->next=merge(a,b->next);
return b;
}
}

int main(){
Node* a=new Node(1);
a->next=new Node(3);
Node* b=new Node(2);
b->next=new Node(4);
Node* c=merge(a,b);
while(c){cout<<c->data<<" ";c=c->next;}
}
