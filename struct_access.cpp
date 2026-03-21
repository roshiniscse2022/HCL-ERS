#include<iostream>
using namespace std;

struct Employee{
struct Address{
string city;
string state;
int pin;
}addr;
int id;
string name;
double salary;
};

int main(){
Employee e;
cin>>e.id>>e.name>>e.salary;
cin>>e.addr.city>>e.addr.state>>e.addr.pin;
cout<<e.id<<endl;
cout<<e.name<<endl;
cout<<e.salary<<endl;
cout<<e.addr.city<<" "<<e.addr.state<<" "<<e.addr.pin<<endl;
}