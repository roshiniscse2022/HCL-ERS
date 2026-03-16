#include <iostream>
#include <queue>
using namespace std;

int main(){
queue<int> q;
int bt[]={5,4,2};
int tq=2;
for(int i=0;i<3;i++)q.push(i);

while(!q.empty()){
int i=q.front();q.pop();
if(bt[i]>tq){
bt[i]-=tq;
q.push(i);
}else{
cout<<"Process "<<i<<" completed\n";
}}}
