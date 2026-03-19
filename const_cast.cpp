#include<iostream>
using namespace std;

class Demo{
const int value;
public:
Demo(int v):value(v){}
void setValue(int v)const{
int* p=const_cast<int*>(&value);
*p=v;
}
void show()const{
cout<<value<<endl;
}
};

int main(){
Demo d(10);
d.show();
d.setValue(50);
d.show();
}