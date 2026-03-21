#include<iostream>
using namespace std;

template<class T>
class Box{
T value;
public:
Box(T v):value(v){}
T getValue()const{
return value;
}
void setValue(T v){
value=v;
}
};

template<class T>
class Box<T*>{
T* ptr;
public:
Box(T* p=nullptr):ptr(p){}
T* get()const{
return ptr;
}
void reset(T* p=nullptr){
ptr=p;
}
};

int main(){
Box<int> a(10);
cout<<a.getValue()<<endl;
a.setValue(20);
cout<<a.getValue()<<endl;

int x=50;
int y=80;
Box<int*> p(&x);
cout<<*p.get()<<endl;
p.reset(&y);
cout<<*p.get()<<endl;
p.reset();
if(p.get()==nullptr)cout<<"null"<<endl;
}