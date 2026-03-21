#include<iostream>
using namespace std;

int toggleBit(int n){
return n^(1<<3);
}

int main(){
cout<<toggleBit(8);
}