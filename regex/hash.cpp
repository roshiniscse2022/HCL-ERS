#include<iostream>
#include<regex>
using namespace std;

int main(){
string s="Learning #cpp and #regex today";
regex p(R"(#\w+)");
for(sregex_iterator i(s.begin(),s.end(),p),e;i!=e;++i)cout<<i->str()<<endl;
}