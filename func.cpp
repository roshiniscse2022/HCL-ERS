#include<iostream>
using namespace std;

#define LOG() cout<<"FILE:"<<__FILE__<<" LINE:"<<__LINE__<<" FUNC:"<<__func__<<endl

void test1(){
LOG();
}

void test2(){
LOG();
}

int main(){
LOG();
test1();
test2();
}