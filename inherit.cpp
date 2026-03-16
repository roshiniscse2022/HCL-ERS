#include <iostream>
using namespace std;

class Teacher{
public:
virtual void work(){cout<<"Teaching\n";}
};
class Researcher{
public:
virtual void work(){cout<<"Researching\n";}
};
class Professor:public Teacher,public Researcher{
public:
void work(){cout<<"Teaching and Research\n";}
};
int main(){
Professor p;
p.work();
}
