#include<iostream>
#include<regex>
using namespace std;

int main(){
string s="192.168.1.1";
regex p(R"(^(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)(\.(25[0-5]|2[0-4]\d|1\d\d|[1-9]?\d)){3}$)");
cout<<(regex_match(s,p)?"Valid":"Invalid");
}