#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int cnt=0;
mutex m;

void work(){
for(int i=0;i<100000;i++){
m.lock();
cnt++;
m.unlock();
}
}

int main(){
thread t1(work),t2(work);
t1.join();
t2.join();
cout<<cnt<<endl;
}