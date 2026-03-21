#include<iostream>
using namespace std;

enum Role{GUEST=1,USER=2,ADMIN=4};

struct Access{
unsigned canRead:1;
unsigned canWrite:1;
unsigned canDelete:1;
unsigned role:3;
};

int main(){
Access a={1,1,0,ADMIN};
cout<<a.canRead<<" "<<a.canWrite<<" "<<a.canDelete<<" "<<a.role;
}