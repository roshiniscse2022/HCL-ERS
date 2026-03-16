#include <iostream>
using namespace std;

struct Song{
string name;Song*next;
Song(string n):name(n),next(this){}
};

int main(){
Song* head=new Song("A");
Song* t=head;
string s[]={"B","C","D","E"};
for(string x:s){
t->next=new Song(x);
t=t->next;
}
t->next=head;

t=head;
for(int i=0;i<10;i++){
cout<<t->name<<" ";
t=t->next;
}
}
