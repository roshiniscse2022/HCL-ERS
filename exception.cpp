#include <iostream>
#include <fstream>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
try{
ifstream f("no.txt");
if(!f)throw "File Error";
if(b==0)throw b;
cout<<"Result:"<<a/b;
}
catch(const char* msg){
cout<<msg;
}
catch(int){
cout<<"Division by zero";
}
}
