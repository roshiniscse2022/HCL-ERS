#include<iostream>
using namespace std;

namespace School{
struct Student{
int id;
string name;
};
}

int main(){
School::Student s={1,"Meena"};
cout<<s.id<<" "<<s.name;
}