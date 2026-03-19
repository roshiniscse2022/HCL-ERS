#include<iostream>
#include<stdexcept>
using namespace std;

int toInt(string s){
if(s.empty())throw invalid_argument("Invalid input");
int i=0,num=0;
if(s[0]=='-')i=1;
for(;i<s.size();i++){
if(s[i]<'0'||s[i]>'9')throw invalid_argument("Non numeric string");
num=num*10+(s[i]-'0');
}
if(s[0]=='-')num=-num;
return num;
}

int main(){
try{
cout<<toInt("123a");
}
catch(invalid_argument&e){
cout<<e.what();
}
}