#include <iostream>
using namespace std;

struct Order{
int id;
int qty;
};
struct Customer{
string name;
Order o;
};
int main(){
Customer c={"Ravi",{101,5}};
cout<<c.name<<" "<<c.o.id<<" "<<c.o.qty;
}
