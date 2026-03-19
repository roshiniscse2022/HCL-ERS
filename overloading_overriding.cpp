#include<iostream>
#include<cmath>
using namespace std;

class MathOps{
public:
static int power(int a,int b){
int ans=1;
for(int i=0;i<b;i++)ans*=a;
return ans;
}
static double power(double a,double b){
return pow(a,b);
}
};

class Function{
public:
virtual double evaluate(double x){
return x;
}
virtual ~Function(){}
};

class Square:public Function{
public:
double evaluate(double x)override{
return x*x;
}
};

class Cube:public Function{
public:
double evaluate(double x)override{
return x*x*x;
}
};

int main(){
cout<<MathOps::power(2,3)<<endl;
cout<<MathOps::power(2.5,2.0)<<endl;

Function*f1=new Square();
Function*f2=new Cube();

cout<<f1->evaluate(3)<<endl;
cout<<f2->evaluate(3)<<endl;

delete f1;
delete f2;
}