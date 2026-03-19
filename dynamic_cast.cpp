#include<iostream>
using namespace std;

class Shape{
public:
virtual ~Shape(){
cout<<"Shape destroyed"<<endl;
}
};

class Circle:public Shape{
public:
void draw(){
cout<<"Circle draw"<<endl;
}
~Circle(){
cout<<"Circle destroyed"<<endl;
}
};

int main(){
Shape* s=new Circle();

Circle* c=dynamic_cast<Circle*>(s);
if(c)c->draw();
else cout<<"Cast failed"<<endl;

delete s;
}