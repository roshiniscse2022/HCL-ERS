#include<iostream>
using namespace std;

int toInt(string s){
int i=0,n=s.size(),sign=1;
long long num=0;
while(i<n&&s[i]==' ')i++;
if(i<n&&(s[i]=='-'||s[i]=='+')){
if(s[i]=='-')sign=-1;
i++;
}
while(i<n&&s[i]>='0'&&s[i]<='9'){
num=num*10+(s[i]-'0');
if(sign*num>2147483647)return 2147483647;
if(sign*num<-2147483648LL)return -2147483648LL;
i++;
}
return (int)(sign*num);
}

int main(){
string s="   -1234abc";
cout<<toInt(s);
}