#include<iostream>
#include<regex>
using namespace std;

int main(){
string s="https://example.com/page";
regex p(R"(^(https?://)[A-Za-z0-9.-]+\.[A-Za-z]{2,}(/.*)?$)");
cout<<(regex_match(s,p)?"Valid":"Invalid");
}