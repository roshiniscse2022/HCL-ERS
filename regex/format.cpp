#include<iostream>
#include<regex>
using namespace std;

int main(){
string s="1234567890";
regex p(R"((\d{3})(\d{3})(\d{4}))");
cout<<regex_replace(s,p,"($1) $2-$3");
}