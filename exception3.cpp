#include<iostream>
using namespace std;

class Demo{
string name;
public:
Demo(string n){name=n;cout<<"Construct "<<name<<endl;}
~Demo(){cout<<"Destroy "<<name<<endl;}
};

int main(){
try{
Demo a("A");
{
Demo b("B");
{
Demo c("C");
throw 1;
}
}
}
catch(int){
cout<<"Exception caught";
}
}