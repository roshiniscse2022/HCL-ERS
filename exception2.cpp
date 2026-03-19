#include<iostream>
using namespace std;

class MyException{};

int main(){
double salary;
cin>>salary;
try{
if(salary<0)throw MyException();
cout<<"Salary accepted";
}
catch(MyException){
cout<<"Error: negative salary";
}
}