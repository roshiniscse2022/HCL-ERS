#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

void run(){
for(int i=1;i<=5;i++){
cout<<"Step "<<i<<endl;
this_thread::sleep_for(chrono::milliseconds(500));
this_thread::yield();
}
}

int main(){
thread t(run);
t.join();
}