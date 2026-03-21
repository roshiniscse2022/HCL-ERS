#include<iostream>
using namespace std;

struct Flags{
unsigned isAdmin:1;
unsigned isActive:1;
unsigned isVerified:1;
};

int main(){
Flags f={1,0,1};
cout<<f.isAdmin<<" "<<f.isActive<<" "<<f.isVerified;
}