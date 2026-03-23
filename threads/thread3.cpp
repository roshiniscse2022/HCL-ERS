#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<chrono>
using namespace std;

mutex m;
condition_variable cv;
bool ready=false;

void waiter(){
unique_lock<mutex> lock(m);
cv.wait(lock,[](){return ready;});
cout<<"Signal received"<<endl;
}

void notifier(){
this_thread::sleep_for(chrono::seconds(2));
{
lock_guard<mutex> lock(m);
ready=true;
}
cv.notify_one();
}

int main(){
thread t1(waiter),t2(notifier);
t1.join();
t2.join();
}