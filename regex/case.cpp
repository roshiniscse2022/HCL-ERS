#include<iostream>
using namespace std;

int main(){
string s="hello";
for(char& c:s){
if(c>='a'&&c<='z')c=c&'_';
}
cout<<s;
}