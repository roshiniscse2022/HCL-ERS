#include<iostream>
using namespace std;

namespace MathOps{
int add(int a,int b){return a+b;}
int subtract(int a,int b){return a-b;}
}

int main(){
cout<<MathOps::add(10,5)<<endl;
cout<<MathOps::subtract(10,5)<<endl;
}