#include<iostream>
#include<cstdint>
using namespace std;

int main(){
uintptr_t addr=1000;
int* p=reinterpret_cast<int*>(addr);
cout<<p<<endl;
}