#include<iostream>
#include<regex>
using namespace std;

int main(){
string mail="john.doe@company.com";
regex mailPat(R"(^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}$)");
cout<<(regex_match(mail,mailPat)?"Valid":"Invalid")<<endl;

string text="Call 9876543210 or 987-654-3210 or (987) 654-3210";
regex phonePat(R"((\(\d{3}\)\s?\d{3}-\d{4})|(\d{3}-\d{3}-\d{4})|(\d{10}))");
for(sregex_iterator i(text.begin(),text.end(),phonePat),e;i!=e;++i)cout<<i->str()<<endl;

string inv="INV-202511-000123";
regex invPat(R"(^INV-(\d{4})(0[1-9]|1[0-2])-(\d{6})$)");
cout<<(regex_match(inv,invPat)?"Invoice ok":"Invoice bad")<<endl;
}