#include<iostream>
#include<type_traits>
using namespace std;

template<class T>
struct Vector2{
static_assert(!is_same<T,string>::value,"Vector2<string> not allowed");
T x,y;
Vector2(T a=0,T b=0){x=a;y=b;}
Vector2 operator+(const Vector2& o)const{
return Vector2(x+o.x,y+o.y);
}
Vector2 operator-(const Vector2& o)const{
return Vector2(x-o.x,y-o.y);
}
Vector2 operator*(T k)const{
return Vector2(x*k,y*k);
}
void print()const{
cout<<"("<<x<<","<<y<<")"<<endl;
}
};

int main(){
Vector2<int> a(1,2),b(3,4);
(a+b).print();
(a-b).print();
(a*2).print();

Vector2<float> c(1.5f,2.5f),d(0.5f,1.0f);
(c+d).print();

Vector2<double> e(2.2,3.3),f(1.1,1.1);
(e-f).print();
}