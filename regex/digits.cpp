#include<iostream>
#include<regex>
using namespace std;

int main(){
string s="123456";
regex p(R"(^\d+$)");
cout<<(regex_match(s,p)?"Valid":"Invalid");
}