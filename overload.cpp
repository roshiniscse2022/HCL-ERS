#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
double x,y;
Point(double a=0,double b=0):x(a),y(b){}
};
double distance(double y1,double y2){
return fabs(y2-y1);
}
double distance(Point a,Point b){
return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
double distance(Point p){
return sqrt(p.x*p.x+p.y*p.y);
}

int main(){
Point p1(3,4),p2(6,8);
cout<<distance(2.0,5.0)<<endl;
cout<<distance(p1,p2)<<endl;
cout<<distance(p1)<<endl;
}
