#include<iostream>
using namespace std;

struct Node{
int val;
Node*next;
Node(int x){val=x;next=NULL;}
};

void print(Node*h){
while(h){cout<<h->val<<" ";h=h->next;}
}

int main(){
Node*h=new Node(1);
h->next=new Node(2);
h->next->next=new Node(3);
h->next->next->next=new Node(4);
h->next->next->next->next=new Node(5);
h->next->next->next->next->next=new Node(6);

Node*odd=h;
Node*even=h->next;
Node*evenHead=NULL;

while(odd&&even){
odd->next=even->next;
odd=odd->next;
even->next=evenHead;
evenHead=even;
if(odd)even=odd->next;
}

Node*t=h;
while(t->next)t=t->next;
t->next=evenHead;

print(h);
}