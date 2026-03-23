#include<iostream>
using namespace std;

void rev(string&s,int l,int r){
if(l>=r)return;
swap(s[l],s[r]);
rev(s,l+1,r-1);
}

int main(){
string s="hello";
rev(s,0,s.size()-1);
cout<<s;
}