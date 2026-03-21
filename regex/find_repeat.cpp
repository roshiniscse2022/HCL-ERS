#include<iostream>
#include<regex>
using namespace std;

int main(){
string s="this is is a test";
regex p(R"(\b(\w+)\s+\1\b)",regex_constants::icase);
cout<<(regex_search(s,p)?"Repeated":"No");
}