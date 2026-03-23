#include<iostream>
using namespace std;

class Shape{
public:
virtual void draw()=0;
virtual ~Shape(){}
};

class Circle:public Shape{
public:
void draw()override{
cout<<"Drawing Circle"<<endl;
}
};

class Rectangle:public Shape{
public:
void draw()override{
cout<<"Drawing Rectangle"<<endl;
}
};

class ShapeFactory{
public:
static Shape* createShape(int choice){
if(choice==1)return new Circle();
if(choice==2)return new Rectangle();
return nullptr;
}
};

int main(){
int choice;
cin>>choice;
Shape* s=ShapeFactory::createShape(choice);
if(s){
s->draw();
delete s;
}
else{
cout<<"Invalid choice";
}
}