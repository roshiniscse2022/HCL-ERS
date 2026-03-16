#include <iostream>
using namespace std;

class Mobile{
public:
void call(){cout<<"Calling\n";}
};
class SmartMobile:public Mobile{
public:
void internet(){cout<<"Internet\n";}
};
int main(){
SmartMobile* m=new SmartMobile();
m->call();
m->internet();
delete m;
}
