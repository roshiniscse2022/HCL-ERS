#include<iostream>
#include<regex>
using namespace std;

int main(){
string s="ApPlE";
regex p("apple",regex_constants::icase);
cout<<(regex_match(s,p)?"Match":"No");
}