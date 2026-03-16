#include <iostream>
using namespace std;

class Rectangle{
double height;
public:
Rectangle():height(1){}
void setHeight(double h){
if(h<=0)throw h;
height=h;
}
double getHeight()const{return height;}
};
int main(){
Rectangle r;
try{
r.setHeight(-5);
}
catch(double){
r.setHeight(1);
}
cout<<r.getHeight();
}
