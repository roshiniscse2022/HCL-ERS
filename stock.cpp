#include<iostream>
#include<vector>
using namespace std;

class Observer{
public:
virtual void update(int price)=0;
virtual ~Observer(){}
};

class MobileApp:public Observer{
string name;
public:
MobileApp(string n):name(n){}
void update(int price)override{
cout<<name<<" got price "<<price<<endl;
}
};

class Stock{
int price;
vector<Observer*> obs;
public:
void addObserver(Observer* o){
obs.push_back(o);
}
void setPrice(int p){
price=p;
for(auto x:obs)x->update(price);
}
};

int main(){
Stock s;
MobileApp a("App1"),b("App2"),c("App3");
s.addObserver(&a);
s.addObserver(&b);
s.addObserver(&c);
s.setPrice(100);
s.setPrice(120);
}