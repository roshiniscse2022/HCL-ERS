#include<iostream>
#include<cassert>
using namespace std;

#define BAD_SQR(x) x*x
#define SQR(x) ((x)*(x))

inline int sqrFun(int x){
return x*x;
}

int main(){
int a=2,b=3;
cout<<BAD_SQR(a+b)<<endl;
cout<<SQR(a+b)<<endl;
cout<<sqrFun(a+b)<<endl;

assert(SQR(5)==25);
assert(sqrFun(5)==25);
assert(SQR(a+b)==sqrFun(a+b));

cout<<"All tests passed";
}