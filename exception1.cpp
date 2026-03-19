#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
try{
if(n<0)throw n;
cout<<"Valid number";
}
catch(int){
cout<<"Error: negative number entered";
}
}