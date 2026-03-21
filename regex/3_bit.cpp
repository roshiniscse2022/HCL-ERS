#include<iostream>
using namespace std;

int setBit(int n){
return n|(1<<2);
}

int main(){
cout<<setBit(4);
}