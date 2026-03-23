#include<iostream>
#include<chrono>
using namespace std;

int main(){
volatile long long sum=0;
auto st=chrono::high_resolution_clock::now();

for(long long i=1;i<=200000000;i++){
sum+=(i*3)%7;
sum^=(i+5);
sum+=(i/2);
}

auto en=chrono::high_resolution_clock::now();
auto t=chrono::duration_cast<chrono::milliseconds>(en-st).count();

cout<<"Sum="<<sum<<endl;
cout<<"Time(ms)="<<t<<endl;
}