#include <iostream>
using namespace std;

class Person{
protected:
string name,dept;
public:
Person(string n,string d):name(n),dept(d){}
void display(){
cout<<name<<" "<<dept<<endl;
}
};
int main(){
Person p("Rose", "CS");
p.display();
}
