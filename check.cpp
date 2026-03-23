#include<iostream>
using namespace std;

bool ok(int n){
return n>0&&(n&(n-1))==0;
}

int main(){
int n=16;
cout<<(ok(n)?"True":"False");
}