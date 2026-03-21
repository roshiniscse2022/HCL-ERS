#include<iostream>
#include<string>
#include<sstream>
using namespace std;

template<class T>
string myToString(T value){
ostringstream out;
out<<value;
return out.str();
}

template<>
string myToString<string>(string value){
return "\""+value+"\"";
}

int main(){
cout<<myToString(10)<<endl;
cout<<myToString(12.5)<<endl;
cout<<myToString(string("hello"))<<endl;
}