#include <iostream>
using namespace std;

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divi(int a,int b){return b? a/b:0;}
int main(){
int a,b,ch;
int (*op[4])(int,int)={add,sub,mul,divi};
cout<<"Enter a b:";cin>>a>>b;
cout<<"0:+ 1:- 2:* 3:/ ";cin>>ch;
cout<<"Result:"<<op[ch](a,b);
}
