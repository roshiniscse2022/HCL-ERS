#include <iostream>
using namespace std;

struct Node{
int data;
Node* next;
Node(int x):data(x),next(this){}
};

int main(){
Node* head=new Node(1);
head->next=new Node(2);
head->next->next=new Node(3);
head->next->next->next=new Node(4);
head->next->next->next->next=head;

Node *slow=head,*fast=head;
while(fast->next!=head&&fast->next->next!=head){
slow=slow->next;
fast=fast->next->next;
}

Node* head2=slow->next;
slow->next=head;
fast->next=head2;

Node* t=head;
do{cout<<t->data<<" ";t=t->next;}while(t!=head);
cout<<endl;
t=head2;
do{cout<<t->data<<" ";t=t->next;}while(t!=head2);
}
