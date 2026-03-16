#include <iostream>
using namespace std;

struct Comp{
int c;Comp*prev,*next;
Comp(int x):c(x),prev(0),next(0){}
};

int main(){
Comp* h=new Comp(10);
Comp* t=h;
t->next=new Comp(20);t->next->prev=t;t=t->next;
t->next=new Comp(30);t->next->prev=t;t=t->next;
t->next=new Comp(40);t->next->prev=t;

for(Comp*p=h;p;p=p->next)cout<<p->c<<" ";
cout<<endl;
for(;t;t=t->prev)cout<<t->c<<" ";
}
